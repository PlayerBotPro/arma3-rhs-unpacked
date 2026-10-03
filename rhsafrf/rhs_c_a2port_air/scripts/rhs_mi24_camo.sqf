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
	["\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo1_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa"],
	["\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo2_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo2_co.paa"],
	["\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo3_co.paa"],

	["\rhsafrf\addons\rhs_a2port_air\Mi35\Data\soot\mi24p_001_soot1_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi35\Data\soot\mi24p_002_soot1_co.paa"],
	["\rhsafrf\addons\rhs_a2port_air\Mi35\Data\soot\mi24p_001_soot2_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi35\Data\soot\mi24p_002_soot2_co.paa"],
	["\rhsafrf\addons\rhs_a2port_air\Mi35\Data\soot\mi24p_001_soot3_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi35\Data\soot\mi24p_002_soot3_co.paa"]
];
_camo =  selectRandom _camo;
_u setObjectTextureGlobal [0,_camo select 0];
_u setObjectTextureGlobal [1,_camo select 1];
