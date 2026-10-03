/*m136 HEAT fired EH*/
private["_u"];

_u = nearestObject [_this, "Man"];

if(local _u)then
{
	[_u,"rhs_weap_M136"] call rhs_fnc_disposable_usf;
	//[_u,4] call rhs_fnc_backblast;
};