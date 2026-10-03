/*
	rhs_fnc_towing_drag
*/
params["_towedVehicle"];

private _player = call rhs_fnc_findPlayer;

private _cargoConfig	= (configOf _towedVehicle >> "RHS_TowingSystem" >> "Cargo");
private _dragOffset		= [_cargoConfig,"rhs_dragOffset",[0,0,0]] call BIS_fnc_returnConfigEntry;

_player playMoveNow "AcinPknlMstpSrasWrflDnon";

private _fakeCarrier = "RHS_FakeCarrier" createVehicle [0,0,1000];
_fakeCarrier attachTo [_player,_dragOffset];
_fakeCarrier hideObject true;
_fakeCarrier setDir 180;
_fakeCarrier setMass 9999;

_fakeVehicle = [_towedVehicle,_fakeCarrier,"rhs_fnc_towing_dragHelper"] call rhs_fnc_towing_attach;
_fakeVehicle setVariable ["rhs_towing_detach",false];
{_x hideObject true}foreach (ropes _fakeVehicle);

_player disableCollisionWith _fakeVehicle;

private _dragAction = _player addAction ["<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\ico_OFF_ca.paa' /> Stop dragging",
{
	params ["_target", "_caller", "_actionId", "_arguments"];
	// Switch animation
	_target playMove "amovpknlmstpsraswrfldnon";
	// Detach vehicle
	[_arguments # 0] call rhs_fnc_towing_detach;
	// Delete fake carrier
	deleteVehicle (_arguments # 1);
	// Remove action
	_target removeAction _actionId;
	// Remove variables
	_target setVariable ["rhs_towing_dragAction",nil];
	_target setVariable ["rhs_towing_fakeCarrier",nil];
},[_fakeVehicle,_fakeCarrier],16];

_player setVariable ["rhs_towing_dragAction",_dragAction];
_player setVariable ["rhs_towing_fakeCarrier",_fakeCarrier];