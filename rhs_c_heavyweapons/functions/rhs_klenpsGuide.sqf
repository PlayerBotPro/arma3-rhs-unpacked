/*
	SACLOS guidiance for Klen-PS systems

	a: reyhard
*/
params["_u","_w","_m","","_a","","_p","_g"];

// exit for non local units
if(!local _g)exitWith{};

private _v = vehicle _g;

//read ammo params
private _cfgA		= configFile >> "cfgAmmo" >> _a;
private _maxRange	= getNumber (_cfgA >> "maxcontrolrange");
private _maxSpeed	= getNumber (_cfgA >> "maxSpeed");
private _lockCone	= getNumber (_cfgA >> "missileLockCone");
private _thrustTime	= getNumber (_cfgA >> "thrustTime") + time;

private _pfh = "rhs_pfh_atgm_" + str _p;

[_pfh, "onEachFrame", {
	params["_t","_p","_v","_u","_maxRange","_maxSpeed","_lockCone","_thrustTime","_pfh"];

	if ((time - _t) >= 0.02) then {
		if((!alive _p) )exitWith{
			[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		};
		_this set [0, time];

		// missile position
		private _m_pos = getPosASLVisual _p;

		// do nothing if there is no laser target
		if(isNull (laserTarget _v))exitWith{};

		// do nothing if angle to target is greater than 90 degrees. tracking might be resumed though
		//if(abs((_p getRelDir (laserTarget _v))-180)<_lockCone )exitWith{};

		//normalized vector between missile & target
		//missile vector
		private _vecOld = vectorDir _p;
		private _vecUpOld = vectorUp _p;

		//required vector to target
		private _vec = _m_pos vectorFromTo (getPosASLVisual (laserTarget _v));
		private _vecUp = _vec vectorCrossProduct [-(_vec select 1), (_vec select 0), 0];

		//difference between new & old vectors
		//from that we calculate maximum & minimum values that can be applied to correct missile path
		//_adj param can be somehow treated as a cfgAmmo Maneuverability param
		_vec = _vec vectorDiff _vecOld;
		_vecUp = _vecUp vectorDiff _vecUpOld;
		private _adj = 0.01;
		private _stability = 0.042;
		if(time > _thrustTime)then{_stability = 0.014};

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
		_p setVelocity (_vec vectorMultiply ((vectorMagnitude (velocity _p)) min _maxSpeed));

	};

}, [time,_p,_v,_u,_maxRange,_maxSpeed,_lockCone,_thrustTime,_pfh]] call BIS_fnc_addStackedEventHandler;