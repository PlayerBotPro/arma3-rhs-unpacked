
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
	class rhs_rscOptics_vz58v: rhs_rscOptics_m70ab2 {};
	class rhs_rscOptics_vz58v_rail: rhs_rscOptics_m70ab2 {};
	class rhs_rscOptics_vz58v_ris: rhs_rscOptics_m70ab2 {};

	class rhs_rscOptics_m70b1: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call rhs_fnc_safemode";
		controls[] = {"CA_Zeroing","RHS_safemode_handler"};
		class RHS_safemode_handler: RscPicture {idc=9999;};
	};
	class rhs_rscOptics_m76: rhs_rscOptics_m70b1 {};
	class rhs_rscOptics_vz58p: rhs_rscOptics_m70b1 {};
	class rhs_rscOptics_vz58p_rail: rhs_rscOptics_m70b1 {};
	class rhs_rscOptics_stgw57: rhs_rscOptics_m70ab2 {};
	class rhs_rscOptics_m3a1: rhs_rscOptics_m70b1 {};

	class rhs_rscOptics_acc_mtz: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_acc_mtz";
	};

	class rhs_kar98k_handler: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');  _this call rhs_fnc_safemode";
		controls[] = {"CA_Zeroing","RHS_safemode_handler"};
		class RHS_safemode_handler: RscPicture {idc=1;};
	};
	class rhs_mosin_handler: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');  _this call rhs_fnc_safemode";
		controls[] = {"CA_Zeroing","RHS_safemode_handler"};
		class RHS_safemode_handler: RscPicture {idc=1;};
	};

	class rhs_rscOptics_m1garand_handler: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');  _this call rhs_fnc_safemode;_this call rhs_fnc_m1garand_ads";
		controls[] = {"CA_Zeroing","RHS_safemode_handler","RHS_m1garand_handler"};
		class RHS_safemode_handler: RscPicture {idc=1;};
		class RHS_m1garand_handler: RscPicture {idc=9798;};
	};

	class rhs_rscOptics_vz61: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_fold_PP;_this call rhs_fnc_safemode";
		controls[] = {"CA_Zeroing","RHS_safemode_handler","RHS_pp_fold_handler"};
		class RHS_safemode_handler: RscPicture {idc=9999;};
		class RHS_pp_fold_handler: RscPicture {idc=9898;};
	};
	class rhs_rscOptics_vhs: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call rhs_fnc_safemode";
		controls[] = {"CA_Zeroing","RHS_safemode_handler"};
		class RHS_safemode_handler: RscPicture {idc=9999;};
	};
	class rhs_rscOptics_fnfal: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call rhs_fnc_safemode";
		controls[] = {"CA_Zeroing","RHS_safemode_handler"};
		class RHS_safemode_handler: RscPicture {idc=9999;};
	};
	class rhs_rscOptics_acc_l2a2: RscWeaponZeroing
	{
		idd = 300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this # 0,true] call RHS_fnc_sight_l2a2;";
		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			idc = 170;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,0,0,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,0,0,0};
				height = 0.001;
			};
			class Controls
			{
//  (uiNamespace getVariable "rhs_1p29_ctrl" displayCtrl 1) ctrlSetPosition [-3.54 *   (0.01875 *    Safezoneh),-9.85*   (0.025 *          SafezoneH),60.5 *   (0.01875 * SafezoneH),60.5 *   (0.025 * SafezoneH)];(uiNamespace    getVariable "rhs_1p29_ctrl"    displayCtrl       1) ctrlCommit 0
				class RHS_Illumination: RscPicture
				{
					idc=1;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.44,0.98,0.21,1};
					shadow=0;
					text="rhsgref\addons\rhsgref_weapons3\acc\scopes\l2a2\Optic\rhs_suit_optic_illum_ca.paa";
					x =-3.54 *   (0.01875 * Safezoneh);
					y =-9.85 *   (0.025 * SafezoneH);
					w="60.5 *   (0.01875 * SafezoneH)";
					h="60.5 *   (0.025 * SafezoneH)";
				};
			};
		};
	};
	class rhs_rscOptics_acc_l2a2_3d: RscWeaponZeroing
	{
		idd = 300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');  [_this select 0,true] call RHS_fnc_sight_1p29;";
	};

	class rhs_rscOptics_mg42_handler: RscWeaponZeroing
	{
		// _this call rhs_fnc_safemode
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_handle_mg; ";
		//controls[] = {"CA_Zeroing","RHS_safemode_handler"};
		//class RHS_safemode_handler: RscPicture {idc=9999;};
	};

	class rhs_fnmag_handler: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_handle_mg; _this call rhs_fnc_safemode";
		controls[] = {"CA_Zeroing","RHS_safemode_handler"};
		class RHS_safemode_handler: RscPicture {idc=9999;};
	};
};
