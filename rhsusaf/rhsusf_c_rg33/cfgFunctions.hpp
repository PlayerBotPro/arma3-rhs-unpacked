class RscPicture;
class RscInGameUI
{
	class RscUnitInfo;

	class RscWeaponZeroing: RscUnitInfo
	{
		class WeaponInfoControlsGroupLeft;
	};
	class rhs_rg33l_hatch: RscWeaponZeroing
	{
		idd = 300;
		controls[] = {"CA_Zeroing","RHS_tigr_handler"};
		class RHS_tigr_handler: RscPicture {idc=59999;};
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0] call RHSusf_fnc_hatch_control";
	};
};

