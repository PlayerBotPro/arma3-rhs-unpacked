/*
RHS_fnc_fcs_2s3
simple 2s3 fcs system

a: reyhard
*/

if(isNull (uiNamespace getVariable ["RHS_2s3_Ctrl",displayNull]))then
{
	uiNameSpace setVariable ["RHS_2s3_Ctrl",_this # 0];

	_this execFSM "\rhsafrf\addons\rhs_optics\scripts\RHS_fcs_2s3.fsm";
};