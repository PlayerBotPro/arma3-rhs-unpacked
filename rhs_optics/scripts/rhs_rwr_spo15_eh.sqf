// Bitflag checking added by HarryD 04/27/2017

params["_v","_a","_f"];

if(driver _v != (call rhs_fnc_findPlayer))exitWith{};

// detect only missiles
if(getText (configFile >> "cfgAmmo" >> _a >> "simulation" ) != "shotMissile")exitWith{};
if(getText (configFile >> "cfgAmmo" >> _a >> "airLock" ) isEqualTo 0)exitWith{};

// detect only radar ones
private _ls = getNumber (configFile >> "cfgAmmo" >> _a >> "weaponLockSystem" );
if (!([_ls, 8] call BIS_fnc_bitflagsCheck)) exitWith{};

private _h = [];

_d = _v getRelDir _f;
if( (_d>0 AND _d < 5) or (_d>355 AND _d <360) )then{_h pushback "12";};
if( (_d>5 AND _d < 20)  )then{_h pushback "12";};
if( (_d>20 AND _d < 40)  )then{_h pushback "3";};
if( (_d>40 AND _d < 75)  )then{_h pushback "3";};
if( (_d>75 AND _d < 110)  )then{_h pushback "3";};
if( (_d>110 AND _d < 180)  )then{_h pushback "6";};
if( (_d>180 AND _d < 260)  )then{_h pushback "6";};
if( (_d>260 AND _d < 290)  )then{_h pushback "9";};
if( (_d>290 AND _d < 310)  )then{_h pushback "9";};
if( (_d>310 AND _d < 340)  )then{_h pushback "12";};
if( (_d>340 AND _d < 355)  )then{_h pushback "12";};

if((getPosATL _v select 2) > (getPosATL _f select 2))then{_h pushback "L";}else{_h pushback "H";};

playsound [format["rhs_Missile%1OClock%2",_h select 0, _h select 1],true];
//playsound ["rhs_rwr_beep_alarm",true];

_v setVariable ["rhs_rwr_incomingMissile",true];
_v animateSource ["rwr_lights_lock",0,true];
_v animateSource ["rwr_lights_lock",1];

private _missile = nearestObject [_f, _a];
if (isNull _missile) exitWith {};
private _missileArray = (_v getVariable ["rhs_rwr_detectedMissiles",[]]);
_missileArray pushback _missile;
_v setVariable ["rhs_rwr_detectedMissiles",_missileArray];

[_missile,_v] spawn {
	params["_missile","_v"];
	waitUntil {!alive _missile};
	private _missileArray = (_v getVariable ["rhs_rwr_detectedMissiles",[]]);
	_missileArray = _missileArray - [_missile];
	_v setVariable ["rhs_rwr_detectedMissiles",_missileArray];
};