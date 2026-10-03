if(true)exitWith{};
	
// Exit if spall simulation is disabled
if !(isNil "RHS_SPALL_ENABLED") exitWith {};

params ["_array"];

private _direct= _array select 10;

if !(_direct) exitWith {};

//diag_log format["%1",_array select 9];
if(!((_array select 9) == "a3\data_f\penetration\metal_plate.bisurf"))exitWith{};

//systemChat format["%1", (_array select 6) select 4];
private _ammo = (_array select 6) select 4;
if( _ammo == "rhs_ammo_spall")exitWith{};

// Exit if caliber is lower than 4
private _caliber = getNumber(configFile >> "CfgAmmo" >> _ammo >> "caliber");
if(_caliber < 4)exitWith{};

// Exit if shell has submunition
private _submunition = getNumber(configFile >> "CfgAmmo" >> _ammo >> "submunitionAmmo");
if(!(_submunition isEqualTo ""))exitWith{};

private _pos = ASLToAGL (_array select 3);

#define randomNumber 85

for [{_i=1},{_i<=30},{_i=_i+1}] do
{
	private _vec = vectorNormalized (_array select 4);
	_vec = _vec vectorMultiply 125;
	_vec = _vec vectorAdd [random(randomNumber)-random(randomNumber),random(randomNumber)-random(randomNumber),random(randomNumber)-random(randomNumber)];
	//diag_log _vec;
	private _p = createVehicle ["rhs_ammo_spall", _pos, [], 0, "CAN_COLLIDE"];
	[_p,[vehicle (_array select 1),_array select 1]]  remoteExecCall ["setShotParents",2];
	_p setVelocity _vec;
};