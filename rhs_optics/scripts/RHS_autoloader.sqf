/*
	rhs_fnc_autoloader
	autoloader handling
*/
params["_loadType","_v","_mags","_mode"];

private _m =getNumber (configFile >> "CfgMagazines" >> _v currentMagazineTurret [0] >> "rhs_magazineIndex");

if(_mode isEqualTo 0)then{
	private _muzzle = currentMuzzle (gunner _v);
	waitUntil {_v setWeaponReloadingTime [gunner _v, _muzzle,1];(inputAction "ReloadMagazine" == 1)};
	playSound ["RHS_ButtonPress",true];
	_loadType=rhs_loadType;
};

// Play autoloader sound if player is inside
if((call rhs_fnc_findPlayer) in _v)then{
	setCustomSoundController [_v,"CustomSoundController1",1];
	// Restart sound controller
	_v spawn {sleep 1;setCustomSoundController [_this,"CustomSoundController1",0]};
};
private _loadIndex = 0;

switch(_loadType)do
{
	//u - rocket
	case 3: {_loadIndex = 4};
	//K - heat
	case 2: {_loadIndex = 2};
	//AP
	case 1: {_loadIndex = 1};
	//he frag
	case 0: {_loadIndex = 3};
	case default {};
};

if(_m isEqualTo _loadIndex)exitWith{};

_v loadMagazine [[0],_mags select 0,_mags select _loadIndex];