
class RscOpticsText;
class RscOpticsValue;
class RscText;
class RscPicture;
class RscControlsGroup;
class HScrollbar;
class VScrollbar;

class CfgScriptPaths
{
	RHS_Arsenal="\rhsusf\addons\rhsusf_c_weapons\scripts\arsenal\";
};
class RscDisplayArsenal;
class RHS_RscDisplayArsenal: RscDisplayArsenal {
	idd = -1;
	enableSimulation = 1;
	scriptName = "RHS_RscDisplayArsenal";
	scriptPath = "RHS_Arsenal";
        onLoad = "[""onLoad"",_this,""RHS_RscDisplayArsenal"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
        onUnload = "[""onUnload"",_this,""RHS_RscDisplayArsenal"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
};

class RscInGameUI
{
	class RscUnitInfo;

	class RHS_Flashlight
	{
		idd=3005;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_accCombo";
	};
	class RHS_Flashlight2: RHS_Flashlight {};
	class RHS_Flashlight3: RHS_Flashlight {};
	class RHS_LaserTop1: RHS_Flashlight {
		idd=3007;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_anpeq15_rail";
	};
	class RHS_LaserTop2: RHS_LaserTop1 {};
	class RHS_Empty
	{
		idd=13001;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');";
	};
	class RHS_Gripod1
	{
		idd=3006;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_accGripod";
	};
	class RHS_Gripod2: RHS_Gripod1 {idd=3007;};
	class RHS_Gripod2_tan: RHS_Gripod1 {idd=30071;};
	class RHS_Gripod2_wd: RHS_Gripod1 {idd=30072;};
	class RHS_Gripod3: RHS_Gripod1 {idd=3008;};
	class RHS_Gripod3_tan: RHS_Gripod1 {idd=30081;};
	class RHS_Gripod4: RHS_Gripod1 {idd=3012;};
	class RHS_RVG_blk: RHS_Gripod1 {idd=3013;};
	class RHS_RVG_fde: RHS_Gripod1 {idd=3014;};
	class RHS_TacSac_blk: RHS_Gripod1 {idd=3015;};
	class RHS_TacSac_tan: RHS_Gripod1 {idd=3016;};
	class RHS_TacSac_blu: RHS_Gripod1 {idd=3017;};
	class RHS_TDstubby_blk: RHS_Gripod1 {idd=3018;};
	class RHS_TDstubby_tan: RHS_Gripod1 {idd=3019;};
	class RHS_KAC_VFG: RHS_Gripod1 {idd=3020;};
	class RHS_SAW_KAC_Bipod: RHS_Gripod1 {idd=3021;};
	class RHS_SAW_Grip4_Bipod: RHS_Gripod1 {idd=3022;};
	class RHS_Grip_M203_blk: RHS_Gripod1 {idd=3023;};
	class RHS_Grip_M203_d: RHS_Gripod1 {idd=3024;};
	class RHS_Grip_M203_wd: RHS_Gripod1 {idd=3025;};
	class RscWeaponZeroing;

	class rhs_rscOptics_combo_optics: RscWeaponZeroing
	{
		idd=4006;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_combo_optics";

	};
	class RHS_T1_fwd
	{
		idd=4055;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_aimpointt1_rail";
	};
	
	class RHS_RMR_fwd: RHS_T1_fwd {};

	class RHS_mrds_fwd: RHS_T1_fwd {};
	
	class RHS_mrds_c_fwd: RHS_T1_fwd {};
	
	class rhs_rscOptics_m4: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');  _this call rhs_fnc_safemode";
		controls[] = {"CA_Zeroing","RHS_safemode_handler"};
		class RHS_safemode_handler: RscPicture {idc=9999;};
	};
	class rhs_rscOptics_SCAR: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_fold_weapon;_this call rhs_fnc_safemode";
		controls[] = {"CA_Zeroing","RHS_safemode_handler","RHS_fold_handler"};
		class RHS_safemode_handler: RscPicture {idc=9999;};
		class RHS_fold_handler: RscPicture {idc=9899;};
	};
	class rhs_rscOptics_SCAR_H_LB: rhs_rscOptics_SCAR {};
	class rhs_rscOptics_SCAR_H_STD: rhs_rscOptics_SCAR {};
	class rhs_rscOptics_SCAR_H_CQC: rhs_rscOptics_SCAR {};
	class rhs_rscOptics_m249: rhs_rscOptics_m4 {};
	class rhs_rscOptics_m249_para: rhs_rscOptics_m249
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_fold_weapon;_this call rhs_fnc_safemode";
		controls[] = {"CA_Zeroing","RHS_safemode_handler","RHS_fold_handler"};
		class RHS_safemode_handler: RscPicture {idc=9999;};
		class RHS_fold_handler: RscPicture {idc=9899;};
	};
	class rhs_rscOptics_sr25: rhs_rscOptics_m4 {};
	class rhs_rscOptics_mk14: rhs_rscOptics_m4 {};
	class rhs_rscOptics_m107: rhs_rscOptics_m4 {
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');  _this call rhs_fnc_safemode; _this call rhs_fnc_handle_mg";
	};
	class rhs_rscOptics_pistol_usf: rhs_rscOptics_m4 {};
	class rhs_rscOptics_at4: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_at4_peep;_this call RHS_fnc_m136_load";
	};
	class rhs_rscOptics_m72a7: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_m136_load";
	};
	class rhs_rscOptics_smaw : RscWeaponZeroing
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_smaw_load";
	};
	//2d handler
	class rhs_acog_handler: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');[] call RHS_fnc_preferedOptic";
	};
	class rhs_acog2_handler: rhs_acog_handler {};
	class rhs_acog3_handler: rhs_acog_handler {};
	class rhs_acog_usmc_handler: rhs_acog_handler {};
	class rhs_acog2_usmc_handler: rhs_acog_handler {};
	class rhs_acog3_usmc_handler: rhs_acog_handler {};
	class rhs_acog_wd_handler: rhs_acog_handler {};
	class rhs_acog_sa_handler: rhs_acog_handler {};
	class rhs_acog_d_handler: rhs_acog_handler {};
	class rhs_acog_rmr_handler: rhs_acog_handler {};
	//3d handler
	class rhs_acog_3d_handler: rhs_acog_handler {};
	class rhs_acog2_3d_handler: rhs_acog_handler {};
	class rhs_acog3_3d_handler: rhs_acog_handler {};
	class rhs_acog_usmc_3d_handler: rhs_acog_handler {};
	class rhs_acog2_usmc_3d_handler: rhs_acog_handler {};
	class rhs_acog3_usmc_3d_handler: rhs_acog_handler {};
	class rhs_acog_wd_3d_handler: rhs_acog_handler {};
	class rhs_acog_sa_3d_handler: rhs_acog_handler {};
	class rhs_acog_d_3d_handler: rhs_acog_handler {};
	class rhs_acog_rmr_3d_handler: rhs_acog_handler {};

	class rhs_acog_pip_handler: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0,4,'acog']  call RHS_fnc_pip_handler;[] call RHS_fnc_preferedOptic";
	};
	class rhs_acog2_pip_handler: rhs_acog_pip_handler {};
	class rhs_acog3_pip_handler: rhs_acog_pip_handler {};
	class rhs_acog_usmc_pip_handler: rhs_acog_pip_handler {};
	class rhs_acog2_usmc_pip_handler: rhs_acog_pip_handler {};
	class rhs_acog3_usmc_pip_handler: rhs_acog_pip_handler {};
	class rhs_acog_wd_pip_handler: rhs_acog_pip_handler {};
	class rhs_acog_sa_pip_handler: rhs_acog_pip_handler {};
	class rhs_acog_d_pip_handler: rhs_acog_pip_handler {};
	class rhs_acog_rmr_pip_handler: rhs_acog_pip_handler {};
	class rhs_elcan_pip_handler: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0,3.4,'elcan'] call RHS_fnc_pip_handler;[] call RHS_fnc_preferedOptic";
	};
	class rhs_elcan_ard_pip_handler: rhs_elcan_pip_handler {};
	class rhs_elcan_handler: rhs_acog_handler {};
	class rhs_elcan_ard_handler: rhs_acog_handler {};
	class rhs_elcan_3d_handler: rhs_acog_handler {};
	class rhs_elcan_ard_3d_handler: rhs_acog_handler {};
	
	class rhsusf_acc_su230_handler: rhs_acog_handler {};
	class rhsusf_acc_su230_mrds_handler: rhs_acog_handler {};
	class rhsusf_acc_su230a_handler: rhs_acog_handler {};
	class rhsusf_acc_su230a_mrds_handler: rhs_acog_handler {};
	class rhsusf_acc_su230_c_handler: rhs_acog_handler {};
	class rhsusf_acc_su230_mrds_c_handler: rhs_acog_handler {};
	class rhsusf_acc_su230a_c_handler: rhs_acog_handler {};
	class rhsusf_acc_su230a_mrds_c_handler: rhs_acog_handler {};
	class rhsusf_acc_su230_3d_handler: rhs_acog_handler {};
	class rhsusf_acc_su230_mrds_3d_handler: rhs_acog_handler {};
	class rhsusf_acc_su230a_3d_handler: rhs_acog_handler {};
	class rhsusf_acc_su230a_mrds_3d_handler: rhs_acog_handler {};
	class rhsusf_acc_su230_c_3d_handler: rhs_acog_handler {};
	class rhsusf_acc_su230_mrds_c_3d_handler: rhs_acog_handler {};
	class rhsusf_acc_su230a_c_3d_handler: rhs_acog_handler {};
	class rhsusf_acc_su230a_mrds_c_3d_handler: rhs_acog_handler {};
	
	// deprecated
	class rhs_SpecterDR_handler: rhs_acog_handler {};
	class rhs_SpecterDR_d_handler: rhs_acog_handler {};
	class rhs_SpecterDR_od_handler: rhs_acog_handler {};
	class rhs_SpecterDR_cx_handler: rhs_acog_handler {};
	class rhs_SpecterDR_a_handler: rhs_acog_handler {};
	class rhs_SpecterDR_3d_handler: rhs_acog_handler {};
	class rhs_SpecterDR_d_3d_handler: rhs_acog_handler {};
	class rhs_SpecterDR_od_3d_handler: rhs_acog_handler {};
	class rhs_SpecterDR_cx_3d_handler: rhs_acog_handler {};
	class rhs_SpecterDR_a_3d_handler: rhs_acog_handler {};

	class rhs_m2010_handler: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');  _this call rhs_fnc_safemode";
		controls[] = {"CA_Zeroing","RHS_safemode_handler"};
		class RHS_safemode_handler: RscPicture {idc=9999;};
	};
	class rhs_m590_handler: RscWeaponZeroing
	{
// [_this select 0,'m590'] call RHS_fnc_m590_handler;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_safemode";
	};
	class rhs_m240b_handler: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_handle_mg; _this call rhs_fnc_safemode";
		controls[] = {"CA_Zeroing","RHS_safemode_handler"};
		class RHS_safemode_handler: RscPicture {idc=9999;};
	};
	class rhs_m240b_cap_handler: rhs_m240b_handler {};
	class rhs_m240g_handler: rhs_m240b_handler {};


	class rhs_rscOptics_mp7: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_fold_PP;_this call rhs_fnc_safemode";
		controls[] = {"CA_Zeroing","RHS_safemode_handler","RHS_pp_fold_handler"};
		class RHS_safemode_handler: RscPicture {idc=9999;};
		class RHS_pp_fold_handler: RscPicture {idc=9898;};
	};


	class rhs_gui_optic_rangemaster1200_rangefinder: RscUnitInfo
	{
		idd = 300;

		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_leica_rf";

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
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
				class CA_Distance: RscOpticsValue
				{
					idc = 151;
					style = 1;
					shadow = 0;
					colorText[] = {0.94,0.26,0.28,0.9};
					font="rhsusf_digital_font";
					sizeEx = "0.049*SafezoneH";
					x =17.95 *   (0.01875 * Safezoneh);
					y =17.45 *   (0.025 * SafezoneH);
					//w="12.9 *   (0.01875 * SafezoneH)";
					//h="12.9 *   (0.025 * SafezoneH)";
					w="0";
					h="0";
				};
				class RHS_Distance: CA_Distance
				{
					idc = 4;
					text="";
					w="12.9 *   (0.01875 * SafezoneH)";
					h="12.9 *   (0.025 * SafezoneH)";
				};

			};
		};
	};
	
	class rhs_gui_optic_Vector21_rangefinder: RscUnitInfo
	{
		idd = 300;
		controls[] = {"RHS_Vector21_IGUI_elements_group"};
		class RHS_Vector21_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class RHS_Vector_Distance: RscText
				{
					idc = 198;
					style = 1;
					sizeEx = "0.075*SafezoneH";
					colorText[] = {0.94,0.26,0.28,0.9};
					shadow = 0;
					font = "rhsusf_digital_font";
					text = "2456";
					x = "30 * 		(0.01875 * SafezoneH)";
					y = "22.5 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class rhs_gui_optic_pas13: RscUnitInfo
	{
		idd = 300;
		controls[] = {"RHS_PAS13_IGUI_elements_group", "RHS_PAS13_WFOV_mode_group", "RHS_PAS13_NFOV_mode_group"};
		class RHS_PAS13_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class PAS13_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "rhsusf_digital_font_var";
  					colorBackground[] = {0, 0, 0, 1};
					text = "BHOT";
					x = "8.8 * 		(0.01875 * SafezoneH)";
					y = "4 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class PAS13_WpnMode: RscText
				{
					style = 1;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "rhsusf_digital_font_var";
					idc = 154;
  					colorBackground[] = {0, 0, 0, 1};
					text = "  - M4/M16";
					x = "41.7 * 		(0.01875 * SafezoneH)";
					y = "4 * 		(0.025 * SafezoneH)";
					w = "6.2 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class PAS13_AGCMode: RscText
				{
					style = 1;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "rhsusf_digital_font_var";
					idc = -1;
  					colorBackground[] = {0, 0, 0, 1};
					text = "AGC ON";
					x = "41.7 * 		(0.01875 * SafezoneH)";
					y = "35 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class PAS13_Wind: PAS13_AGCMode
				{
					style = 1;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "rhsusf_digital_font_var";
					idc = -1;
  					colorBackground[] = {0, 0, 0, 1};
					text = "WND - 000";
					x = "8.8 * 		(0.01875 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class PAS13_Elev: PAS13_AGCMode
				{
					style = 1;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "rhsusf_digital_font_var";
					idc = -1;
  					colorBackground[] = {0, 0, 0, 1};
					text = "EL - 000";
					x = "20 * 		(0.01875 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class RHS_PAS13_NFOV_mode_group: RscControlsGroup
		{
			idc = 162;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeNFOV: RscText
				{
				style = 1;
				sizeEx = "0.028*SafezoneH";
				shadow = 0;
				font = "rhsusf_digital_font_var";
				idc = 1002;
				text = "N         ";
				x = "41.7 * 		(0.01875 * SafezoneH)";
				y = "4 * 		(0.025 * SafezoneH)";
				w = "6.2 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
				};
			};
		};
		class RHS_PAS13_WFOV_mode_group: RscControlsGroup
		{
			idc = 163;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_FOVModeWFOV: RscText
				{
					style = 1;
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "rhsusf_digital_font_var";
					idc = 1001;
					text = "W         ";
					x = "41.7 * 		(0.01875 * SafezoneH)";
					y = "4 * 		(0.025 * SafezoneH)";
					w = "6.2 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
};
