/*
	loader switch animation
*/

params ["_loaderModeSwitch","_rhs_loadMode"];

if(inputAction rhs_key_mode_chng_GLB > 0)then
{
	waitUntil {inputAction rhs_key_mode_chng_GLB == 0};
	if(_rhs_loadMode isEqualTo 0)then
	{
		_loaderModeSwitch ctrlSetModel "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_on.p3d";
		_rhs_loadMode=1;
	}else{

		_loaderModeSwitch ctrlSetModel "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_off.p3d";
		_rhs_loadMode=0;
	};
	playsound ["RHS_SwitchToggle",true];
};

_rhs_loadMode