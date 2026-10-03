/*
	rhs_fnc_towing_dragAI
*/
params["_unit","_towedVehicle"];

private _cargoConfig	= (configOf _towedVehicle >> "RHS_TowingSystem" >> "Cargo");
private _dragOffset		= [_cargoConfig,"rhs_dragOffset",[0,0,0]] call BIS_fnc_returnConfigEntry;

_grp = createGroup (side _unit);
_fakeAI = _grp createUnit [ typeOf _unit, position _unit, [], 0, "CAN_COLLIDE"];
_fakeAI hideObject true;
_fakeAI limitSpeed 3.5;
_fakeAI setAnimSpeedCoef 0.7;

{_fakeAI disableAI _x}foreach ["target","autotarget","cover","radioprotocol","autocombat","checkvisible","suppression","weaponaim","MINEDETECTION"];

_unit attachTo [_fakeAI,[0,0,0]];
_unit setDir 180;
_unit playMoveNow "AcinPknlMstpSrasWrflDnon";

private _fakeCarrier = "RHS_FakeCarrier" createVehicle [0,0,1000];
_fakeCarrier attachTo [_fakeAI,_dragOffset];
_fakeCarrier hideObject true;
_fakeCarrier setDir 180;
_fakeCarrier setMass 9999;

_fakeVehicle = [_towedVehicle,_fakeCarrier,"rhs_fnc_towing_dragHelperAI"] call rhs_fnc_towing_attach;
_fakeVehicle setVariable ["rhs_towing_detach",false];
{_x hideObject true}foreach (ropes _fakeVehicle);

_fakeAI disableCollisionWith _fakeVehicle;

_unit setVariable ["rhs_towing_fakeCarrier",_fakeCarrier];
_towedVehicle setVariable ["rhs_towing_ai_unit",_unit];
_towedVehicle setVariable ["rhs_towing_ai_fake",_fakeAI];

_fakeAI