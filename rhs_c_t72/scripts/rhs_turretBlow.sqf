/*
a: reyhard
turret popping script!
i: eh killed input

automatic deletion of turret wreck after 360 seconds
*/

params
[
	"_v",
	"_t",
	["_probability",20,[0]]
];

if (not(local _v) OR {fuel _v < 0.1} or {_probability < random 100}) exitWith {};

_v animate ["turretHide",1,true];

private _dirTurret = deg(_v animationSourcePhase "mainTurret");
private _dir = (getDir _v)-_dirTurret;
private _turPos = _v modelToWorldVisual (_v selectionPosition "turret_center") ;

private _tur = _t createVehicle _turPos;
_tur setdir _dir;
private _turCenter = [(_tur selectionPosition "turret_center"),-_dir] call BIS_fnc_rotateVector2D;
_tur setposatl (_turPos vectorDiff [_turCenter select 0,_turCenter select 1,0]);
_tur addForce [[random[-30000,0,30000],random[-30000,0,30000],90000],[random[-2,0,2],random[-2,0,2],random[-2,0,2]]];

_tur spawn
{
	sleep 600;
	deleteVehicle _this;
};