/*
	rhs_fnc_LOALGuide
	LOAL guidiance

	a: reyhard
*/
params["_u","_w","_m","","_a","","_p","_g"];

// exit if unit is local to headless client or dedicated server
if(!hasInterface)exitWith{};

// Run locally to gunner
if(!local _g)exitWith{};

// Turn on laser if gunner is AI
if( !(_g call rhs_fnc_isPlayer) )then
{
	if(!isLaserOn _u)then
	{
		_g forceWeaponFire ["rhs_weap_laserDesignator_AI","rhs_weap_laserDesignator_AI"];
		_u selectWeapon _w;
	};
};

if(_m isEqualTo "rhs_weap_AGM114K_Launcher")exitWith{};

private _v = vehicle (call rhs_fnc_findPlayer);

//read gun beg & end mem points for backup vector creation
private _cfgV = configFile >> "cfgVehicles" >> typeOf _v >> "Turrets" >> "MainTurret";
private _gBeg = getText (_cfgV >> "gunBeg");
private _gEnd = getText (_cfgV >> "gunEnd");


private _p1 = AGLToASL (_V modelToWorldVisual (_v selectionPosition _gEnd));
private _p2 = AGLToASL (_V modelToWorldVisual (_v selectionPosition _gBeg));

private _LOAL_height = 50;
switch (_m) do
{
	case "LOAL_LO":
	{
		_LOAL_height = 300;
	};
	case "LOAL_HI":
	{
		_LOAL_height = 1000;
	};
};


private _pfh = "rhs_pfh_LOAL_" + str _p;
//read ammo params
private _cfgA = configFile >> "cfgAmmo" >> _a;
private _maxSpeed = getNumber (_cfgA >> "maxSpeed");
private _LOAL_distance = getNumber (_cfgA >> "LoalDistance" >> "lockSeekDistanceFromParent");

private _target_pos = (_p1 vectorAdd ((_p1 vectorFromTo _p2) vectorMultiply (_LOAL_distance +100))) vectorAdd [0,0,_LOAL_height];

[_pfh, "onEachFrame", {
	params["_t","_p","_v","_u","_target_pos","_LOAL_distance","_maxSpeed","_pfh"];

		private _distance = _p distance _v;
		if((!alive _p) OR (_distance > _LOAL_distance*1.5) )exitWith{
			[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		};
		if((_distance > _LOAL_distance) && (_distance < _LOAL_distance*1.5))exitWith
		{
			private _dir = velocity _p;
			_p setVectorDirAndUp [_dir,_dir vectorCrossProduct [-(_dir select 1), _dir select 0, 0]];
		};
		_this set [0, time];
		private _m_pos = getPosASLVisual _p;

		//normalized vector between missile & target
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
		private _adj = linearConversion [0,200,_p distance _v,0.007,0.7,true];
		private _stability = 0.0;

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
		_p setVelocity (_vec vectorMultiply ((vectorMagnitude (velocity _p)*(1.01)) min _maxSpeed));


}, [time,_p,_v,_u,_target_pos,_LOAL_distance, _maxSpeed,_pfh]] call BIS_fnc_addStackedEventHandler;