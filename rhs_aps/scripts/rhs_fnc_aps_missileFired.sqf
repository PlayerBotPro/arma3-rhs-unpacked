/*
	rhs_fnc_aps_missileFired
*/

params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

_aps_vehicles = missionNamespace getVariable ["rhs_aps_vehicles",[]];

if(_aps_vehicles isEqualTo [])exitWith{};

//systemChat format["%1 missile %2",_this,_projectile];

private _valid_vehicles	= [];
private _cleanup		= [];

{
	if(!alive _x)exitWith{_cleanup pushBack _x};

	// 
	if( 180-(abs (180-(_unit getRelDir  _x))) < 50 && _unit != _x)then{_valid_vehicles pushBack _x};
}foreach _aps_vehicles;

if(!(_cleanup isEqualTo []))then{_aps_vehicles = _aps_vehicles - _cleanup;missionNamespace setVariable ["rhs_aps_vehicles",_aps_vehicles]};

// Exit if there are no valid vehicles
if(_valid_vehicles isEqualTo [])exitWith{
	//systemchat "no valid vehicles"
};


if(_projectile isEqualTo objNull)exitWith{
	//systemChat "no missile";
};

{
}foreach _valid_vehicles;

_triggerTurn = [];
while{alive _projectile}do
{
	{
		if(_projectile distance _x < 400 && !(_x in _triggerTurn))then
		{
			// Turn turret - TODO: move to separate function
			if(isPlayer (gunner _x) or (gunner _x isEqualTo objNull))then
			{
				_relDir = deg (_x animationSourcePhase "APS_Turn");
				_direction = -(_x getRelDir  _projectile)+ deg(_x animationSourcePhase "MainTurret");
				if(abs _direction > 180)then{_direction = _direction  + 360};
				_x animateSource ["APS_Turn",rad _direction,2];
				//systemchat format["%1 %2 %3",_direction, _x getRelDir _projectile,_relDir];
			}else
			{
				(gunner _x) doWatch (getpos _projectile);
			};
			_triggerTurn pushBack _x;
		};

		if(_projectile distance _x < 40)exitWith{
			systemchat "Hardkill triggered (UNLIMITED TEST MODE)";

			// Test particles - TODO: change to projectile?
			_particle = "#particlesource" createVehicleLocal (getpos _projectile);
			_particle setParticleRandom [0, [0, 0, 0], [0, 0, 0.4], 2.6, 0, [0, 0, 0, 0.1], 0.6, 0.1];
			_particle setParticleParams [["\a3\Data_f\ParticleEffects\Universal\Universal", 16, 0, 8], "", "Billboard", 1, 0.2, [0, 0, 1], [0, 0, 2], 0, 12, 1.7, 0, [4, 32, 0.1], [[1, 1, 1, 0.1], [1, 1, 1, 0.1], [1, 1, 1, 0.1]], [0.08], 1, 0, "", "", _particle];
			_particle setDropInterval 0.1;

			//triggerAmmo _projectile;
			deleteVehicle _projectile;
			_particle spawn {sleep 0.1;deleteVehicle _this};
		};
	}foreach _valid_vehicles;
	sleep 0.05;
};

