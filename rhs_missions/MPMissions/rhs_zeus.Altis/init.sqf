["Initialize"] call BIS_fnc_dynamicGroups;
[] execVM 'repetitive_cleanup.sqf';

enableSaving [false, false];

_paramsArray = "";
//workaround for dedicated server - manual addon activation
//it's stated on website, that addons should be activated only server side but it seems it works the othey way
//0 - all units
//1 - bis + rhs units
if((paramsArray select 3) == 1)then{
	private _addons = [];
	{
		if ((toLower _x) find "rhs" == 0) then {
			_addons pushBack _x;
		};
	} forEach ((configFile >> "CfgPatches") call BIS_fnc_getCfgSubClasses);
	activateAddons _addons;
}else{
 	activateAddons ((configFile >> "CfgPatches") call BIS_fnc_getCfgSubClasses);
};