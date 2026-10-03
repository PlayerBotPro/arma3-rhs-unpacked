/*
	loader switch animation
*/

params ["_loaderSwitch","_mode"];

private _angle = 0;
private _anglePool=
[
	[[-97,1],[0,3]],
	[[-125,2],[47,2]],
	[[-155,3],[74,0]],
	[[-67,0],[25,1]]
];
if(inputAction rhs_key_nxt_rnd_GLB > 0)then
{
	waitUntil {inputAction rhs_key_nxt_rnd_GLB == 0};

	_angle = ((_anglePool select rhs_loadType) select _mode) select 0;
	rhs_loadType=((_anglePool select rhs_loadType) select _mode) select 1;

	_v1=[[0,1],_angle] call BIS_fnc_rotateVector2D;
	_loaderSwitch ctrlSetModelDirAndUp [[0,-1,0],[_v1 select 0, 0, _v1 select 1]];
	playsound ["RHS_SwitchClick",true];
};