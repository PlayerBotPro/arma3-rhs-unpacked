/*
RHS_fnc_fcs_d30
simple d30 fcs system

a: reyhard
*/

if(isNull (uiNamespace getVariable ["RHS_d30_Ctrl",displayNull]))then
{
	uiNameSpace setVariable ["RHS_d30_Ctrl",_this # 0];

	_this execFSM "\rhsafrf\addons\rhs_optics\scripts\RHS_fcs_d30.fsm";
};