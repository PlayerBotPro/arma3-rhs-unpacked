/*
	RSP-30 handler - automatic magazine adding upon selection

	a: reyhard
*/

private _p=call rhs_fnc_findPlayer;
if (handgunWeapon _p != "")then
{
	private _m = "";
	switch(handgunWeapon _p)do
	{
		case "rhs_weap_rsp30_white": {_m="rhs_mag_rsp30_white"};
		case "rhs_weap_rsp30_red": {_m="rhs_mag_rsp30_red"};
		case "rhs_weap_rsp30_green": {_m="rhs_mag_rsp30_green"};
		default {};
	};
	_p addHandgunItem _m;
};

