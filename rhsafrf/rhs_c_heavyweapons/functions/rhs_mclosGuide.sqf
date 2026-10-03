/*
	SACLOS guidiance

	a: reyhard
*/
params["_u","_w","_m","","_a","","_p","_g"];

// exit if unit is local to headless client or dedicated server
if(!hasInterface)exitWith{};

//exit if not a player
if( (call rhs_fnc_findPlayer) != _g )exitWith{};

private _v = vehicle (call rhs_fnc_findPlayer);

//read gun beg & end mem points for backup vector creation
private _cfgV = configFile >> "cfgVehicles" >> typeOf _v >> "Turrets" >> "MainTurret";
private _gBeg = getText (_cfgV >> "gunBeg");
private _gEnd = getText (_cfgV >> "gunEnd");

//read ammo params
private _cfgA = configFile >> "cfgAmmo" >> _a;
private _maxRange = getNumber (_cfgA >> "maxcontrolrange");
private _maxSpeed = getNumber (_cfgA >> "maxSpeed");

//vector from gunner arms, useful while shot is taken from non optic
private _p1 = AGLToASL (_V modelToWorldVisual (_v selectionPosition _gEnd));
private _p2 = AGLToASL (_V modelToWorldVisual (_v selectionPosition _gBeg));
private _pv = (_p1 vectorAdd ((_p1 vectorFromTo _p2) vectorMultiply (5000 min _maxRange) ));
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

private _helper = "Logic" createVehicleLocal [0,0,0];
private _pfh = "rhs_pfh_atgm_" + str _p;

private _turretDamage = _v getHitPointDamage "HitTurret";
private _damageEnabled = isDamageAllowed _v;

if(!_damageEnabled)then{_v allowDamage true;};
_v setHitPointDamage ["hitTurret",1];
if(!_damageEnabled)then{_v allowDamage false;};

[_pfh, "onEachFrame", {
	params["_t","_p","_v","_u","_helper","_target_pos","_maxRange","_maxSpeed","_pfh","_timeout","_turretDamage","_damageEnabled"];

	if (time > _t) then {

		if((!alive _p) OR (_p distance _v > _maxRange) )exitWith{
			[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
			deleteVehicle _helper;
			[_v,_turretDamage,_damageEnabled] spawn {
				params["_v","_turretDamage","_damageEnabled"];
				sleep 0.5;
				if(!_damageEnabled)then{_v allowDamage true;};
				_v setHitPointDamage ["hitTurret",_turretDamage];
				if(!_damageEnabled)then{_v allowDamage false;};
			};
		};
		_this set [0, time+0.02];

		//missile vector
		private _vecOld = vectorDir _p;
		private _vecUpOld = vectorUp _p;
		private _vec = _vecOld;
		private _vecUp = _vecUpOld;

		private _adj=0.007;
		private _stability = 0.011;


		//The missile uses a small gyroscope to orient itself relative to the ground. Let's give it ~0.7 second to stabilize it's flight path
		//After that time real MCLOS kicks in
		if(time > _timeout)then{
			// stability of missile is afected by wind strenght
			_stability = 0.005*(0.55 max (windStr*5));

			// upon pressing shift it's possible to move turret again
			if(inputAction "gunElevSlow" >0)then{
				if(_v getHitPointDamage "HitTurret" isEqualTo 1)then{
					if(!_damageEnabled)then{_v allowDamage true;};
					_v setHitPointDamage ["hitTurret",_turretDamage];
					if(!_damageEnabled)then{_v allowDamage false;};
				};
			}else{
				// MCLOS operations
				// get current missile direction
				private _direction = (_p call BIS_fnc_getPitchBank);
				private _yaw = getdir _p;
				private _pitch = _direction select 0;
				private _roll = _direction select 1;

				// input detection. input values are reduced by 95%
				if(inputAction "aimLeft" > 0)then{	_yaw = _yaw - (inputAction "aimLeft"*0.03)};
				if(inputAction "aimRight" > 0)then{	_yaw = _yaw + (inputAction "aimRight"*0.03)};
				if(inputAction "aimUp" > 0)then{	_pitch = _pitch + (inputAction "aimUp"*0.03)};
				if(inputAction "aimDown" > 0)then{	_pitch = _pitch -  (inputAction "aimDown"*0.03)};

				_vecOld =[ sin _yaw * cos _pitch,cos _yaw * cos _pitch,sin _pitch];
				_vecUpOld = [ [ sin _roll,-sin _pitch,cos _roll * cos _pitch],-_yaw] call BIS_fnc_rotateVector2D;

				_vec = _vecOld vectorAdd [
						random [-_stability,0,_stability],
						random [-_stability,0,_stability],
						random [-_stability,0,_stability]
					];
				_vecUp= _vecUpOld vectorAdd [
						random [-_stability,0,_stability],
						random [-_stability,0,_stability],
						random [-_stability,0,_stability]
					];


				if(_v getHitPointDamage "HitTurret" != 1)then
				{
					if(!_damageEnabled)then{_v allowDamage true;};
					_v setHitPointDamage ["hitTurret",1];
					if(!_damageEnabled)then{_v allowDamage false;};
				};
			};
		}else{

			private _m_pos = getPosASLVisual _p;

			//detailed target acquisition while in optics mode
			if(cameraView isEqualTo "GUNNER")then{
				private _p1 = AGLToASL positionCameraToWorld [0,0,0];
				private _p2 = AGLToASL (screenToWorld [0.5,0.57]);
				//private _p2 = AGLToASL positionCameraToWorld [0,0,(_p1 distance (screenToWorld [0.5,0.5]))+5];
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
				_this set [5,_target_pos];
			};
			_helper setPosASL _target_pos;
			//required vector to target
			_vec = _m_pos vectorFromTo _target_pos;
			_vecUp = _vec vectorCrossProduct [-(_vec select 1), (_vec select 0), 0];

			//difference between new & old vectors
			//from that we calculate maximum & minimum values that can be applied to correct missile path
			//_adj param can be somehow treated as a cfgAmmo Maneuverability param
			_vec = _vec vectorDiff _vecOld;
			_vecUp = _vecUp vectorDiff _vecUpOld;

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
		};


		//changing missile vector
		_p setVectorDirAndUp [_vec,_vecUp];
		_p setVelocity (_vec vectorMultiply ((vectorMagnitude (velocity _p)) min _maxSpeed));

	};

}, [time,_p,_v,_u,_helper,_target_pos,_maxRange, _maxSpeed,_pfh,time+0.8,_turretDamage,_damageEnabled]] call BIS_fnc_addStackedEventHandler;