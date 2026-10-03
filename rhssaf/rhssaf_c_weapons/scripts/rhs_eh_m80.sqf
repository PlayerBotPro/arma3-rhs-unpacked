/*M80 fired EH*/
private["_u"];

_u = nearestObject [_this, "Man"];

if(local _u)then
{
	[_u,"rhs_weap_m80"] call rhs_fnc_disposable_usf;
	//[_u,4] call rhs_fnc_backblast;
};