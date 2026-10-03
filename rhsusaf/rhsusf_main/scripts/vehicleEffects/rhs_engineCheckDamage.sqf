/*
	rhs_fnc_engineCheckDamage

	This small functions is attached to Engine event handler and is removing damage particle effects (if those are present) after engine is turned on
	a: reyhard
*/

params ["_vehicle", "_engineState"];

if(!local _vehicle)exitWith{};

if(_engineState)then
{
	if((_vehicle getHitPointDamage "HitEngine") isEqualTo 1)exitWith{};

	// Try to fetch damage particle effects. If they are not present then exit
	private _effects = nearestObject [_vehicle, "#destructioneffects"];
	if(_effects isEqualTo objNull)exitWith{};

	// Compare position of nearest destruction effects - if they are on same position as vehicle then most likely those are engine smoke particles
	if((getposworld _effects) isEqualTo (getposworld _vehicle))then
	{
		deleteVehicle _effects;
	};
};