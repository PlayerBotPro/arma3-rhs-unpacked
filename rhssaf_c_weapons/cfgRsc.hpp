
class RscOpticsText;
class RscOpticsValue;
class RscText;
class RscPicture;
class RscControlsGroup;


class RscInGameUI
{
	class RscUnitInfo;
	class RscWeaponZeroing: RscUnitInfo
	{
		class WeaponInfoControlsGroupLeft;
	};

	class rhs_rscOptics_m21a_mtz: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_acc_mtz_handler;_this call rhs_fnc_safemode";
		controls[] = {"CA_Zeroing","RHS_safemode_handler","RHS_npz_rail_handler"};
		class RHS_safemode_handler: RscPicture {idc=9999;};
		class RHS_npz_rail_handler: RscPicture {idc=9897;};
	};
	class rhs_rscOptics_m21s_mtz: rhs_rscOptics_m21a_mtz {};
	class rhs_rscOptics_m70ab2: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_fold_weapon;_this call rhs_fnc_safemode";
		controls[] = {"CA_Zeroing","RHS_safemode_handler","RHS_ak_fold_handler"};
		class RHS_safemode_handler: RscPicture {idc=9999;};
		class RHS_ak_fold_handler: RscPicture {idc=9899;};
	};
	class rhs_rscOptics_m92: rhs_rscOptics_m70ab2 {};
	class rhs_rscOptics_m21a: rhs_rscOptics_m70ab2 {};
	class rhs_rscOptics_m21s: rhs_rscOptics_m70ab2 {};
	class rhs_rscOptics_m70b1: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call rhs_fnc_safemode";
		controls[] = {"CA_Zeroing","RHS_safemode_handler"};
		class RHS_safemode_handler: RscPicture {idc=9999;};
	};
	class rhs_rscOptics_m76: rhs_rscOptics_m70b1 {};
	class rhs_rscOptics_acc_mtz: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_acc_mtz";
	};
	class rhs_rscOptics_g36: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_fold_weapon;_this call rhs_fnc_safemode";
		controls[] = {"CA_Zeroing","RHS_safemode_handler","RHS_fold_handler"};
		class RHS_safemode_handler: RscPicture {idc=9999;};
		class RHS_fold_handler: RscPicture {idc=9899;};
	};
	class rhs_rscOptics_g36c: rhs_rscOptics_g36{};
	class rhs_rscOptics_g36kv: rhs_rscOptics_g36{};
	class rhs_rscOptics_g36kv_ag36: rhs_rscOptics_g36{};
	class rhs_rscOptics_m84: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_handle_pk";
		controls[] = {"CA_Zeroing"};
	};
	/*class rhs_rscOptics_m80: RscWeaponZeroing
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_m136_load";
	};
	class rhs_rscOptics_m70_rifle_gnd: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHSSAF_fnc_rifle_grenade;
		controls[] = {"CA_Zeroing","RHS_ak_rifle_grenade_handler"};
		class RHS_ak_rifle_grenade_handler: RscPicture {idc=9899;};
	};*/
};
