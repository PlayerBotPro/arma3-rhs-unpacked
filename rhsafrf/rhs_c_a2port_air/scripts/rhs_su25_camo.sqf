params ["_u"];

if !(local _u)exitWith{};

/*
type in editor
	this setVariable ["rhs_camo",-1]
 to turn off camo randomisation
 */

if((_u getVariable ["rhs_camo",-10]) isEqualTo -1)exitWith{};

private _camo=
[
	["\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body1_rus_co.paa","\rhsafrf\addons\rhs_a2port_air\su25\data\su25_body2_rus_co.paa"],
	["\rhsafrf\addons\rhs_a2port_air\su25\data\camo\su25_body1_camo1_co.paa","\rhsafrf\addons\rhs_a2port_air\su25\data\camo\su25_body2_camo1_co.paa"]
];
_camo =  selectRandom _camo;
_u setObjectTextureGlobal [0,_camo select 0];
_u setObjectTextureGlobal [1,_camo select 1];