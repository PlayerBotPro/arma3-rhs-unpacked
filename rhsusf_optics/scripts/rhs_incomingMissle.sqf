
params["_unit","_ammo","_whoFired"];
private _dirPlayer = getDir _unit;
private _dirEnemy = getDir _whoFired;
private _altPlayer = getPosAsl _unit select 2;
private _altEnemy = getPosAsl _whoFired select 2;

private _ls = getNumber (configFile >> "cfgAmmo" >> _ammo >> "weaponLockSystem" );
private _hasUV = getNumber (configFile >> "cfgVehicles" >> typeof _unit >> "incommingMisslieDetectionSystem");
if (!([_ls, 8] call BIS_fnc_bitflagsCheck) && !([_hasUV, 16] call BIS_fnc_bitflagsCheck)) exitWith{};
	
if(_altPlayer - _altEnemy < 0)then
{
	if((_dirPlayer - _dirEnemy > -45 &&_dirPlayer - _dirEnemy < 45) || (_dirPlayer - _dirEnemy > 315 || _dirPlayer - _dirEnemy < -315))then
	{
		playSound ["Missile6OClockH", true];
		if (_debug) then {hint "DEBUG: Rocket 6 oClock"};
	};
	if((_dirPlayer - _dirEnemy > -315 &&_dirPlayer - _dirEnemy < -225) || (_dirPlayer - _dirEnemy > 45 &&_dirPlayer - _dirEnemy < 135))then
	{
		playSound ["Missile3OClockH", true];
		if (_debug) then {hint "DEBUG: Rocket 3 oClock"};
	};
	if((_dirPlayer - _dirEnemy > -225 &&_dirPlayer - _dirEnemy < -135) || (_dirPlayer - _dirEnemy > 135 &&_dirPlayer - _dirEnemy < 225))then
	{
		playSound ["Missile12OClockH", true];
		if (_debug) then {hint "DEBUG: Rocket 12 oClock"};
	};
	if((_dirPlayer - _dirEnemy > -135 &&_dirPlayer - _dirEnemy < -45) || (_dirPlayer - _dirEnemy > 225 &&_dirPlayer - _dirEnemy < 335))then
	{
		playSound ["Missile9OClockH", true];
		if (_debug) then {hint "DEBUG: Rocket 9 oClock"};
	};

}
else
{
	if(_altPlayer - _altEnemy > 0)then
	{
		if((_dirPlayer - _dirEnemy > -45 &&_dirPlayer - _dirEnemy < 45) || (_dirPlayer - _dirEnemy > 315 || _dirPlayer - _dirEnemy < -315))then
		{
			playSound ["Missile6OClockL", true];
			if (_debug) then {hint "DEBUG: Rocket 6 oClock"};
		};
		if((_dirPlayer - _dirEnemy > -315 &&_dirPlayer - _dirEnemy < -225) || (_dirPlayer - _dirEnemy > 45 &&_dirPlayer - _dirEnemy < 135))then
		{
			playSound ["Missile3OClockL", true];
			if (_debug) then {hint "DEBUG: Rocket 3 oClock"};
		};
		if((_dirPlayer - _dirEnemy > -225 &&_dirPlayer - _dirEnemy < -135) || (_dirPlayer - _dirEnemy > 135 &&_dirPlayer - _dirEnemy < 225))then
		{
			playSound ["Missile12OClockL", true];
			if (_debug) then {hint "DEBUG: Rocket 12 oClock"};
		};
		if((_dirPlayer - _dirEnemy > -135 &&_dirPlayer - _dirEnemy < -45) || (_dirPlayer - _dirEnemy > 225 &&_dirPlayer - _dirEnemy < 335))then
		{
			playSound ["Missile9OClockL", true];
			if (_debug) then {hint "DEBUG: Rocket 9 oClock"};
		};
	};
};