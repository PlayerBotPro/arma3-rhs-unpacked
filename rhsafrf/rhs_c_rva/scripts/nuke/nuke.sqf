params["_pos","_yield","_radius"];

_pos =[_pos select 0, _pos select 1, 2];

if (isNil{_radius}) then {
	_radius = 20*_yield^0.4;
};

{
	[_pos,_yield,_radius] remoteExec [_x,0];
}foreach [
	"rhs_fnc_ss21_nuke_fx_smoke",
	"rhs_fnc_ss21_nuke_fx_light",
	"rhs_fnc_ss21_nuke_fx_shockwave",
	"rhs_fnc_ss21_nuke_fx_postprocessing"
];

[_pos,_yield,_radius] remoteExecCall ["rhs_fnc_ss21_nuke_fx_damage",2];