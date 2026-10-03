/*
	File: launch.sqf
	Author: Joris-Jan van 't Land

	Description:
	Launching a cruisemissile from a submerged submarine.

	Parameter(s):
	_this select 0: the position from where to launch (should be in water).
	_this select 1: the target object.
*/

//ToDo: convert particle systems to particle sources.
//ToDo: abort when launch position is not in water?

private ["_posLaunch", "_target", "_path", "_pathS"];
_posLaunch = _this select 0;
_target = _this select 1;

_path = "\rhsusf\addons\rhsusf_a2port_air2\CruiseMissile\";
_pathS = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\missile\";

//Spawn the launch variant of the cruise missile and its flare.
private ["_misL", "_misFlare"];
_misL = "CruiseMissile1" createVehicle [(_posLaunch select 0), (_posLaunch select 1), -1];

_misFlare = "CruiseMissileFlare1" createVehicle [(_posLaunch select 0), (_posLaunch select 1), -1];
_misFlare inflame true;

//Start the launch.
_misL setVelocity [0, 0, 20];
[_misL] execVM (_pathS + "watersplash.sqf");

//Unhide animated parts.
_misL setObjectTexture [0, "#(argb,8,8,3)color(0.501961,0.501961,0.501961,1.0,CO)"];
_misL setObjectTexture [1, "#(argb,8,8,3)color(0.501961,0.501961,0.501961,1.0,CO)"];
_misL setObjectTexture [2, "#(argb,8,8,3)color(0.501961,0.501961,0.501961,1.0,CO)"];
_misL setObjectTexture [3, "#(argb,8,8,3)color(0,0,0,1.0,co)"];

_misL setVariable ["cruisemissile_level", false];

sleep 0.8;

[_misL, _misFlare] execVM (_pathS + "cruisemissileflare.sqf");
_misL setObjectTexture [4, _path + "data\exhaust_flame_ca"];
_misFlare say "CruiseMissileLaunch";
[_misL] execVM (_pathS + "exhaust1.sqf");
[_misL] execVM (_pathS + "exhaust3.sqf");

sleep 0.3;

[_misL] execVM (_pathS + "booster.sqf");
//[_misL] execVM (_pathS + "vector_control.sqf");
[_misl, "RHS_9M79_1_K",_posLaunch,_target] execVM (_pathS + "missile_control.sqf");


sleep 1;

_misL setObjectTexture [0, ""];

_misL animate ["Cover1", 1];
_misL animate ["Cover2", 1];
_misL animate ["Fin1", 1];
_misL animate ["Fin2", 1];
_misL animate ["Fin3", 1];
_misL animate ["Fin4", 1];
_misL animate ["Wing1", 1];
_misL animate ["Wing2", 1];
_misL animate ["Intake1", 1];

sleep 0.5;

_misL setObjectTexture [1, ""];
_misL setObjectTexture [2, ""];

drop [_path + "cl_cover1", "", "SpaceObject", 1, 40, [-3, -3, -0.5], [-5, 0, 50], 2, 10.0, 1.0, 0, [1], [[1, 1, 1, 1]], [0, 1], 0, 0, "", "", _misL];
drop [_path + "cl_cover1", "", "SpaceObject", 1, 40, [3, 3, -0.5], [5, 0, 50], 2, 10.0, 1.0, 0, [1], [[1, 1, 1, 1]], [0, 1], 0, 0, "", "", _misL];

waitUntil {getpos _misl select 2 > 10};

_misL setVariable ["cruisemissile_level", true];

_misL setObjectTexture [4, ""];

private ["_pos", "_vel", "_dir"];
_pos = position _misL;
_vel = velocity _misL;
_dir = direction _misL;
deleteVehicle _misL;

//Spawn the actual cruising missile.
private ["_mis", "_pilot"];
//_mis = "CruiseMissile2" createVehicle _pos;
_mis = "RHS_ammo_BGM109" createVehicle _pos;
_mis setVelocity [0,0,20];

drop [_path + "cl_booster1", "", "SpaceObject", 1, 40, [0, -5, 0], [0, 40, 0], 2, 3.0, 1.0, 0, [1], [[1, 1, 1, 1]], [0, 1], 0, 0, "", "", _mis];

[_mis, "RHS_9M79_1_K",_posLaunch,_target] execVM (_pathS + "missile_control.sqf");

true