/*
	rhs_fnc_m1garand_ads
	a: reyhard
*/

uiNameSpace setVariable ["rhs_m1garand_ctrl",_this # 0];

["rhs_pfh_m1garandhandler", "onEachFrame", {

	private _player = call rhs_fnc_findPlayer;
	private _ammo = (_player ammo "ADS") isEqualTo 1;


	if( isNull ( (uiNamespace getVariable ["rhs_m1garand_ctrl",displayNull]) displayCtrl 9798) )exitWith
	{
		//systemChat "remove EH";
		uiNameSpace setVariable ["rhs_m1garand_ctrl",nil];
		_player removePrimaryWeaponItem "rhs_mag_m1garand_ads";
		["rhs_pfh_m1garandhandler", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	};

	if(cameraView == "gunner")then
	{
		if(!_ammo)then {_player addPrimaryWeaponItem "rhs_mag_m1garand_ads";};
	}else{
		if(_ammo)then {_player removePrimaryWeaponItem "rhs_mag_m1garand_ads";};
	};

}, [0]] call BIS_fnc_addStackedEventHandler;