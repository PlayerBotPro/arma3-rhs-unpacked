{rhs_uaz_01 setHitPointDamage [_x,1]}foreach [
	"HitDoor_1_1",
	"HitDoor_1_2",
	"HitDoor_2_1",
	"HitDoor_2_2",
	"HitHood"
];

 rhs_kamaz_01 setVehicleCargo rhs_uaz_01;
 {rhs_kamaz_02 setVehicleCargo _x}foreach [rhs_crateCargo_01,rhs_crateCargo_02,rhs_crateCargo_03];

// Disable drones
{
	hideObject _x;
	_x enableSimulation false;
}forEach [rhs_drone_01,rhs_drone_02];

rhs_towing_showHint = false;

rhs_player_01 addWeapon "binocular";

// Hide all helpers on startup
{hideObject _x}foreach ((getMissionLayerEntities "Helper locations") # 0);
private _units = [];
{if (side _x == east)then{_units pushBack _x}}forEach allUnits ;
[ "Init", [ _units,true ] ] call BIS_fnc_moduleFriendlyFire;

#include "initBriefing.hpp"