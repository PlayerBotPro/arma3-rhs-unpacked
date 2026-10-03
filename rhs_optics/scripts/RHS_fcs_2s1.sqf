/*
RHS_fnc_fcs_2s1
simple 2s1 fcs system

a: reyhard
*/

if(isNull (uiNamespace getVariable ["RHS_2s1_Ctrl",displayNull]))then
{
	uiNameSpace setVariable ["RHS_2s1_Ctrl",_this # 0];

	_this execFSM "\rhsafrf\addons\rhs_optics\scripts\RHS_fcs_2s1.fsm";
};