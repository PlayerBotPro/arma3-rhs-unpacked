#include "defs.hpp"
/*
[tochka,1] spawn rhs_fnc_ss21_AI_prepare
deploys/undeploys tochka - useful for mission making

_tochka - unit
_type - 0/1

0=undeploy
1=deploy
*/
private["_stable_down","_bay_open","_pylon_up"];
params["_tochka","_type"];


if(_type isEqualTo 0)then
{
	//undeploy
	while {(vehget(stable_down))} do
	{
		_stable_down = vehget(stable_down);
		_bay_open = vehget(bay_open);
		_pylon_up = vehget(pylon_up);
		switch true do
		{
			case (_stable_down && !(_bay_open) ) : {
					[0,0,_tochka] call rhs_fnc_ss21_anim;
				};
			case (_bay_open && !(_pylon_up)) : {
					[1,0,_tochka] call rhs_fnc_ss21_anim;
				};
			case (_pylon_up) : {
					[2,0,_tochka] call rhs_fnc_ss21_anim;
				};
			default {};
		};
	};
}else{
	//deploy
	while {(!vehget(pylon_up))} do
	{
		_stable_down = vehget(stable_down);
		_bay_open = vehget(bay_open);
		_pylon_up = vehget(pylon_up);
		switch true do
		{
			case (!_stable_down) : {
					[0,1,_tochka] call rhs_fnc_ss21_anim;
				};
			case (_stable_down && !(_bay_open)) : {
					[1,1,_tochka] call rhs_fnc_ss21_anim;
				};
			case (_bay_open && (!_pylon_up)) : {
					[2,1,_tochka] call rhs_fnc_ss21_anim;
				};
			default {};
		};
	};
};