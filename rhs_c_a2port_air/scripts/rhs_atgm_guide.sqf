/*
	Missile guidiance

	a: reyhard
*/


params["_u","_w","","","_a","","_p","_g"];

// exit if unit is local to headless client or dedicated server
if(!hasInterface)exitWith{};

//exit if not a player
if( (call rhs_fnc_findPlayer) != _g )exitWith{};

if(_w isEqualTo "rhs_weap_Vikhr_Launcher")then{

	private _v = vehicle _u;

	//vector from gunner arms, useful while shot is taken from non optic
	private _p1 = AGLToASL (_V modelToWorldVisual (_v selectionPosition "pilotview"));
	private _p2 = AGLToASL (_V modelToWorldVisual (_v selectionPosition "pilotview_dir"));
	private _pv = (_p1 vectorAdd ((_p1 vectorFromTo _p2) vectorMultiply 5000));
	private _ins = lineIntersectsSurfaces [
					_p1,
					_pv,
					_u,
					objNull,
					true,
					1
				];
	private _target_pos = (_ins select 0) select 0;

	if(_ins isEqualTo [])then{
		_target_pos = _pv;
	};
	//if()

	_helper = "LaserTargetE" createVehicleLocal [0,0,0];
	_time = time;

	disableSerialization;
	//UI initialization
	private _c = uiNamespace getVariable "RHS_Samshin_Ctrl";
	private _td = _c displayCtrl 9; 		//time to target

	private _pfh = "rhs_pfh_atgm_" + str _p;

	[_pfh, "onEachFrame", {
		params["_t","_p","_v","_u","_helper","_td","_target_pos","_pfh"];

		if ((time - _t) >= 0.02) then {
			if(!alive _p)exitWith{
				[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
				deleteVehicle _helper;
				_td ctrlSetText "";
			};
			_this set [0, time];
			private _m_pos = getPosASLVisual _p;

			//detailed target acquisition while in optics mode
			if(cameraView isEqualTo "GUNNER")then{
				private _p1 = AGLToASL positionCameraToWorld [0,0,0];
				private _p2 = AGLToASL positionCameraToWorld [0,0,(_p1 distance (screenToWorld [0.5,0.5]))+5];
				private _ins = lineIntersectsSurfaces [
					_p1,
					_p2,
					_u,
					objNull,
					true,
					1
				];
				_target_pos = (_ins select 0) select 0;
				//in case there is no intersection (i.e. while looking into sky) we take camera pos extended to infinity or aimpos of  (probably) air vehicle
				if(_ins isEqualTo [])then{
					if(isnull cursorObject)then{
						_target_pos = _p2;
					}else{
						_target_pos = (aimPos cursorObject);
					};
				};
				_this set [6,_target_pos];
			};

			private _dist = _p distance _target_pos;
			private _timeToTarget=ceil(_dist/550);

			//hintSilent format[speed: %1, \ndistance: %2 \ntime to target: %3 \ntime elapsed: %4,speed _p,_dist,_timeToTarget,time-_time];
			_td ctrlSetText format["%1с",_timeToTarget];

			// do nothing if angle to target is greater than 120 degrees. tracking might be resumed though
			if(abs((_p getRelDir _target_pos)-180)<60 )exitWith{};

			//normalized vector between mmissile & target
			//missile vector
			private _vecOld = vectorDir _p;
			private _vecUpOld = vectorUp _p;

			//required vector to target
			private _vec = _m_pos vectorFromTo _target_pos;
			private _vecUp = _vec vectorCrossProduct [-(_vec select 1), (_vec select 0), 0];

			//difference between new & old vectors
			//from that we calculate maximum & minimum values that can be applied to correct missile path
			//_adj param can be somehow treated as a cfgAmmo Maneuverability param
			_vec = _vec vectorDiff _vecOld;
			_vecUp = _vecUp vectorDiff _vecUpOld;
			private _adj=0.005;
			private _stability = 0.021;

			_vec = _vecOld vectorAdd [
					-_adj max (_adj min (_vec select 0))+random [-_stability,0,_stability],
					-_adj max (_adj min (_vec select 1))+random [-_stability,0,_stability],
					-_adj max (_adj min (_vec select 2))+random [-_stability,0,_stability]
				];
			_vecUp= _vecUpOld vectorAdd [
					-_adj max (_adj min (_vecUp select 0))+random [-_stability,0,_stability],
					-_adj max (_adj min (_vecUp select 1))+random [-_stability,0,_stability],
					-_adj max (_adj min (_vecUp select 2))+random [-_stability,0,_stability]
				];
			//changing missile vector
			_p setVectorDirAndUp [_vec,_vecUp];
			_p setVelocity (_vec vectorMultiply (vectorMagnitude (velocity _p)));

			_helper setPosASL _target_pos;
		};

	}, [time,_p,_v,_u,_helper,_td,_target_pos, _pfh]] call BIS_fnc_addStackedEventHandler;

};