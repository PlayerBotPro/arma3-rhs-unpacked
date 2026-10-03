class ItemCore;
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;
class optic_LRPS;
class optic_Holosight;
class optic_Hamr;
class acc_pointer_IR;
class muzzle_snds_H;

#define ArsenalDisabled scope=1;scopeArsenal=0;

//- Bipods
class rhsusf_acc_harris_bipod : acc_pointer_IR
{
	//INVENTORY_PICTURE(rhsusf_acc_harris_bipod)
	dlc = "RHS_USAF";

	AUTHOR_MACRO
	scope=2;
	model = "\rhsusf\addons\rhsusf_weapons\acc\bipods\harris\harris";
	picture = "\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_harrisBipod_icon_ca.paa";

	displayName = "Harris Bipod";
	descriptionShort = "Standard US-Army Harris Bipod.";

	class ItemInfo
	{
		scope = 0;
		deployedPivot = "bipod";
		hasBipod = 1;
		mass = 10;
		type = 302;
		soundBipodDown[]	= {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down",0.707946,1,20};
		soundBipodUp[]		= {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up",0.707946,1,20};
	};
	inertia = 0.2;
	type = 131072;
};

class rhsusf_acc_harris_swivel : rhsusf_acc_harris_bipod
{
	//INVENTORY_PICTURE(rhsusf_acc_harris_swivel)
	AUTHOR_MACRO
	scope=2;
	model = "\rhsusf\addons\rhsusf_weapons3\acc\bipods\rhs_Harris_us";
	picture = "\rhsusf\addons\rhsusf_weapons3\icons\rhs_harris_swivel_icon_ca.paa";
};
class rhsusf_acc_saw_bipod: rhsusf_acc_harris_bipod
{
	INVENTORY_PICTURE(rhsusf_acc_saw_bipod)
	dlc = "RHS_USAF";
	AUTHOR_MACRO
	displayName = "SAW Bipod";
	descriptionShort = "M249 SAW Bipod.";
	model = "\rhsusf\addons\rhsusf_weapons2\acc\grips\sawgrip\saw_bipod";
	class ItemInfo: ItemInfo
	{
		scope = 0;
		mass = 20;
	};
};
class rhsusf_acc_saw_lw_bipod: rhsusf_acc_harris_bipod
{
	INVENTORY_PICTURE(rhsusf_acc_saw_lw_bipod)
	AUTHOR_MACRO
	displayName = "SAW Improved Bipod";
	descriptionShort = "M249 SAW Improved Bipod.";
	model = "\rhsusf\addons\rhsusf_weapons2\acc\grips\sawgrip\saw_lw_bipod";
	class ItemInfo: ItemInfo
	{
		scope = 0;
		mass = 10;
	};
};
class rhsusf_acc_m14_bipod : rhsusf_acc_harris_bipod
{
	INVENTORY_PICTURE(rhsusf_acc_m14_bipod)
	AUTHOR_MACRO
	scope = 2;
	model = "\rhsusf\addons\rhsusf_weapons3\acc\bipods\m14_bipod\acca_bipod.p3d";

	displayName = "Multipurpose Bipod";
	descriptionShort = "Generic swivel mounted bipod with ski-feet.";
};

//- Vertical Grips
class rhsusf_acc_grip1 : rhsusf_acc_harris_bipod
{
	INVENTORY_PICTURE(rhsusf_acc_grip1)
	AUTHOR_MACRO
	scope=2;
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\grip1";

	displayName = "Grip Pod";
	descriptionShort = "A Grip Pod is a weapon stabilization system that serves as a weapon grip and as a retractable bipod.";

	weaponInfoType = "RHS_Gripod1";

	class ItemInfo
	{
		deployedPivot = "bipod";
		hasBipod = 1;
		mass = 10;
		type = 302;
		soundBipodDown[]	= {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_OP_down",0.707946,1,20};
		soundBipodUp[]		= {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_OP_up",0.707946,1,20};
	};
	inertia = -0.2;
	type = 131072;
	rhs_grip_type="rhs_grip1_change";
};

class rhsusf_acc_grip2 : rhsusf_acc_grip1
{
	INVENTORY_PICTURE(rhsusf_acc_grip2)
	AUTHOR_MACRO
	displayName = "AFG Grip";
	descriptionShort = "The AFG (Angled Fore Grip) takes into account natural body mechanics and provides a comfortable and stable user interface that reduces fatigue and allows for more precise weapon control.";
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\grip2";
	weaponInfoType = "RHS_Gripod2";
	class ItemInfo: ItemInfo
	{
		hasBipod = 0;
	};
	inertia = -0.2;
	rhs_grip_type="rhs_grip2_change";
};

class rhsusf_acc_grip2_tan : rhsusf_acc_grip2
{
	INVENTORY_PICTURE(rhsusf_acc_grip2_tan)
	AUTHOR_MACRO
	displayName = "AFG Grip (Tan)";
	weaponInfoType = "RHS_Gripod2_tan";
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\grip2_d";
	rhs_grip_type="rhs_grip2_change";
};

class rhsusf_acc_grip2_wd : rhsusf_acc_grip2
{
	INVENTORY_PICTURE(rhsusf_acc_grip2_wd)
	AUTHOR_MACRO
	displayName = "AFG Grip (Woodland)";
	weaponInfoType = "RHS_Gripod2_wd";
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\grip2_wd";
	rhs_grip_type="rhs_grip2_change";
};

class rhsusf_acc_grip3 : rhsusf_acc_grip2
{
	INVENTORY_PICTURE(rhsusf_acc_grip3)
	AUTHOR_MACRO
	displayName = "TD Vertical Grip";
	descriptionShort = "Vertical Grips aid in the maneuverability of the firearm, since the natural angle of a person's outstretched hand is more oriented to grasping objects at a vertical angle, rather than a horizontal one perpendicular to the body";
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\grip3";
	weaponInfoType = "RHS_Gripod3";
	inertia = -0.2;
	rhs_grip_type="rhs_grip3_change";
};

class rhsusf_acc_grip3_tan : rhsusf_acc_grip3
{
	INVENTORY_PICTURE(rhsusf_acc_grip3_tan)
	AUTHOR_MACRO
	displayName = "TD Vertical Grip (Tan)";
	weaponInfoType = "RHS_Gripod3_tan";
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\grip3_tan";
	rhs_grip_type="rhs_grip3_change";
};

class rhsusf_acc_grip4 : rhsusf_acc_grip2
{
	INVENTORY_PICTURE(rhsusf_acc_grip4)
	AUTHOR_MACRO
	displayName = "SAW Grip";
	weaponInfoType = "RHS_Gripod4";
	model = "\rhsusf\addons\rhsusf_weapons2\acc\grips\sawgrip\saw_grip";
	rhs_grip_type="rhs_grip2_change";
};
class rhsusf_acc_grip4_bipod: rhsusf_acc_grip4
{
	INVENTORY_PICTURE(rhsusf_acc_grip4_bipod)
	AUTHOR_MACRO
	displayName = "SAW Grip + Bipod";
	weaponInfoType = "RHS_SAW_Grip4_Bipod";
	model = "\rhsusf\addons\rhsusf_weapons2\acc\grips\sawgrip\saw_grip_lw_bipod";
	class ItemInfo
	{
		scope = 0;
		deployedPivot = "bipod";
		hasBipod = 1;
		mass = 20;
		type = 302;
	};
};

class rhsusf_acc_rvg_blk: rhsusf_acc_grip3
{
	INVENTORY_PICTURE(rhsusf_acc_rvg_blk)
	AUTHOR_MACRO
	displayName = "RVG Grip (Black)";
	weaponInfoType = "RHS_RVG_blk";
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\rvg_blk.p3d";
	rhs_grip_type="rhs_grip3_change";
};
class rhsusf_acc_rvg_de: rhsusf_acc_rvg_blk
{
	INVENTORY_PICTURE(rhsusf_acc_rvg_de)
	AUTHOR_MACRO
	displayName = "RVG Grip (Dark Earth)";
	weaponInfoType = "RHS_RVG_fde";
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\rvg_de.p3d";
};

class rhsusf_acc_tacsac_blk: rhsusf_acc_grip2
{
	INVENTORY_PICTURE(rhsusf_acc_tacsac_blk)
	AUTHOR_MACRO
	displayName = "Tac-Sac Grip (Black)";
	weaponInfoType = "RHS_TacSac_blk";
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\tacsac_blk.p3d";
	rhs_grip_type="rhs_grip2_change";
};
class rhsusf_acc_tacsac_tan: rhsusf_acc_tacsac_blk
{
	INVENTORY_PICTURE(rhsusf_acc_tacsac_tan)
	AUTHOR_MACRO
	displayName = "Tac-Sac Grip (Tan)";
	weaponInfoType = "RHS_TacSac_tan";
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\tacsac_tan.p3d";
};
class rhsusf_acc_tacsac_blue: rhsusf_acc_tacsac_blk
{
	INVENTORY_PICTURE(rhsusf_acc_tacsac_blue)
	AUTHOR_MACRO
	displayName = "Tac-Sac Grip (Blue)";
	weaponInfoType = "RHS_TacSac_blu";
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\tacsac_blue.p3d";
};

class rhsusf_acc_tdstubby_blk: rhsusf_acc_grip3
{
	INVENTORY_PICTURE(rhsusf_acc_tdstubby_blk)
	AUTHOR_MACRO
	displayName = "TD Stubby Grip (Black)";
	weaponInfoType = "RHS_TDstubby_blk";
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\tdstubby_blk.p3d";
	rhs_grip_type="rhs_grip3_change";
};
class rhsusf_acc_tdstubby_tan: rhsusf_acc_tdstubby_blk
{
	INVENTORY_PICTURE(rhsusf_acc_tdstubby_tan)
	AUTHOR_MACRO
	displayName = "TD Stubby Grip (Tan)";
	weaponInfoType = "RHS_TDstubby_tan";
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\tdstubby_tan.p3d";
};

class rhsusf_acc_kac_grip : rhsusf_acc_grip3
{
	INVENTORY_PICTURE(rhsusf_acc_kac_grip)
	AUTHOR_MACRO
	displayName = "KAC Vertical Grip";
	descriptionShort = "Vertical Grips aid in the maneuverability of the firearm, since the natural angle of a person's outstretched hand is more oriented to grasping objects at a vertical angle, rather than a horizontal one perpendicular to the body";
	model = "\rhsusf\addons\rhsusf_weapons3\acc\grips\rhs_kac_grip";
	weaponInfoType = "RHS_KAC_VFG";
	inertia = -0.2;
	rhs_grip_type="rhs_grip3_change";
};
class rhsusf_acc_kac_grip_saw_bipod: rhsusf_acc_kac_grip
{
	INVENTORY_PICTURE(rhsusf_acc_kac_grip_saw_bipod)
	AUTHOR_MACRO
	displayName = "KAC Grip + SAW Bipod";
	model = "\rhsusf\addons\rhsusf_weapons2\acc\grips\sawgrip\kac_grip_saw_bipod";
	weaponInfoType = "RHS_SAW_KAC_Bipod";
	class ItemInfo
	{
		scope = 0;
		deployedPivot = "bipod";
		hasBipod = 1;
		mass = 20;
		type = 302;
	};
};

class rhsusf_acc_grip_m203_blk: rhsusf_acc_grip2
{
	INVENTORY_PICTURE(rhsusf_acc_grip_m203_blk)
	AUTHOR_MACRO
	displayName = "M203 Grip";
	weaponInfoType = "RHS_Grip_m203_blk";
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\m203grip_blk.p3d";
	rhs_grip_type="rhs_grip1_change";
};
class rhsusf_acc_grip_m203_d: rhsusf_acc_grip_m203_blk
{
	INVENTORY_PICTURE(rhsusf_acc_grip_m203_d)
	AUTHOR_MACRO
	displayName = "M203 Grip (Desert)";
	weaponInfoType = "RHS_Grip_m203_d";
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\m203grip_d.p3d";
};
class rhsusf_acc_grip_m203_wd: rhsusf_acc_grip_m203_blk
{
	INVENTORY_PICTURE(rhsusf_acc_grip_m203_wd)
	AUTHOR_MACRO
	displayName = "M203 Grip (Woodland)";
	weaponInfoType = "RHS_Grip_m203_wd";
	model = "\rhsusf\addons\rhsusf_weapons\acc\grips\m203grip_wd.p3d";
};

class rhs_acc_at4_handler : acc_pointer_IR
{
	dlc = "RHS_USAF";

	AUTHOR_MACRO
	scope=2;

	model = "\A3\Weapons_f\empty";
	//picture = "";
	picture = "\A3\Weapons_F\Data\clear_empty.paa"; //- turned off for now

	displayName = AT-4 Peep hole handler;
	descriptionUse = "Use optics mode key (/ on numpad) to change mode";
	descriptionShort = "Use optics mode key (/ on numpad) to change mode";

	class ItemInfo: InventoryFlashLightItem_Base_F
	{
		mass = 0;
		class Pointer {};
		class FlashLight {};
	};
	inertia = 0;
};

//- Lasers

class rhsusf_acc_anpeq15A : acc_pointer_IR
{
	INVENTORY_PICTURE(rhsusf_acc_anpeq15A)
	dlc = "RHS_USAF";

	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_PEQ15A;
	scope=2;

	inertia = 0.1;
};

class rhsusf_acc_anpeq15 : acc_pointer_IR
{
	INVENTORY_PICTURE(rhsusf_acc_anpeq15)
	dlc = "RHS_USAF";

	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_PEQ15SURE_Laser;
	scope=2;
	weaponInfoType = "RHS_Flashlight";
	descriptionShort = "IR Laser. Press CTRL+C (next CM key) to change IR/Light mode";
	descriptionUse = "<t color='#9cf953'>Use: </t>press L Turn ON/OFF, CTRL+C (next CM key) to change IR/Light mode";
	rhs_acc_combo = "rhsusf_acc_anpeq15_light";
	rhs_acc_combo_text = "Switched to Flashlight";
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_top";

	class ItemInfo: InventoryFlashLightItem_Base_F
	{
		RMBhint="IR Laser";
		mass = 8;

		class Pointer
		{
			irLaserPos = "laser pos";
			irLaserEnd = "laser dir";
			irDistance = 5;
		};

		class FlashLight{};
	};

	inertia = 0.2;
	rhs_anpeq15_base = "rhsusf_acc_anpeq15";
};
class rhsusf_acc_anpeq15_bk : rhsusf_acc_anpeq15
{
	INVENTORY_PICTURE(rhsusf_acc_anpeq15_bk)
	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_PEQ15SURE_BK_Laser;
	weaponInfoType = "RHS_Flashlight2";
	rhs_acc_combo = "rhsusf_acc_anpeq15_bk_light";

	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top";
	rhs_anpeq15_base = "rhsusf_acc_anpeq15_bk";
};
class rhsusf_acc_anpeq15_h : rhsusf_acc_anpeq15
{
	AUTHOR_MACRO
	ArsenalDisabled
	rhs_acc_combo = "rhsusf_acc_anpeq15_light_h";

	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_top_h";
};
class rhsusf_acc_anpeq15_sc : rhsusf_acc_anpeq15
{
	AUTHOR_MACRO
	ArsenalDisabled
	rhs_acc_combo = "rhsusf_acc_anpeq15_light_sc";

	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_top_sc";
};
class rhsusf_acc_anpeq15_bk_h : rhsusf_acc_anpeq15_bk
{
	AUTHOR_MACRO
	ArsenalDisabled
	rhs_acc_combo = "rhsusf_acc_anpeq15_bk_light_h";

	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top_h";
};
class rhsusf_acc_anpeq15_bk_sc : rhsusf_acc_anpeq15_bk
{
	AUTHOR_MACRO
	ArsenalDisabled
	rhs_acc_combo = "rhsusf_acc_anpeq15_bk_light_sc";

	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top_sc";
};

class rhsusf_acc_anpeq15_light : rhsusf_acc_anpeq15
{
	INVENTORY_PICTURE(rhsusf_acc_anpeq15_light)
	dlc = "RHS_USAF";

	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_PEQ15SURE_Light;

	descriptionShort = "Weapon mounted light. Press CTRL+C (next CM key) to change IR/Light mode";
	rhs_acc_combo = "rhsusf_acc_anpeq15";
	rhs_acc_combo_text = "Switched to Laser";

	class ItemInfo: ItemInfo
	{
		RMBhint="Flashlight";
		mass = 8;

		class Pointer {};

		class FlashLight
		{
			color[] = {25,22,20};
			ambient[]={0.001,0.001,0.001};
			position = "flash dir";
			direction = "flash";
			size = 1;
			innerAngle = 50;
			outerAngle = 120;
			coneFadeCoef = 10;
			intensity = 330;
			useFlare = 1;
			dayLight = 1;
			FlareSize = 0.7;
			onlyInNvg = 0;

			class Attenuation
			{
				start = 0;
				constant = 2;
				linear = 1;
				quadratic = 75;
			};

			scale[] = {0};
		};
	};
	inertia = 0.2;
	rhs_anpeq15_base = "rhsusf_acc_anpeq15_light";
};
class rhsusf_acc_anpeq15_bk_light : rhsusf_acc_anpeq15_light
{
	INVENTORY_PICTURE(rhsusf_acc_anpeq15_bk_light)
	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_PEQ15SURE_BK_Light;
	rhs_acc_combo = "rhsusf_acc_anpeq15_bk";
	rhs_anpeq15_base = "rhsusf_acc_anpeq15_bk_light";
	weaponInfoType = "RHS_Flashlight2";

	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top";
};
class rhsusf_acc_anpeq15_light_h : rhsusf_acc_anpeq15_light
{
	AUTHOR_MACRO
	ArsenalDisabled
	rhs_acc_combo = "rhsusf_acc_anpeq15_h";

	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_top_h";
};
class rhsusf_acc_anpeq15_light_sc : rhsusf_acc_anpeq15_light
{
	AUTHOR_MACRO
	ArsenalDisabled
	rhs_acc_combo = "rhsusf_acc_anpeq15_sc";

	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_top_sc";
};
class rhsusf_acc_anpeq15_bk_light_h : rhsusf_acc_anpeq15_bk_light
{
	AUTHOR_MACRO
	ArsenalDisabled
	rhs_acc_combo = "rhsusf_acc_anpeq15_bk_h";

	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top_h";
};
class rhsusf_acc_anpeq15_bk_light_sc : rhsusf_acc_anpeq15_bk_light
{
	AUTHOR_MACRO
	ArsenalDisabled
	rhs_acc_combo = "rhsusf_acc_anpeq15_bk_sc";

	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top_sc";
};

class rhsusf_acc_anpeq15_wmx : rhsusf_acc_anpeq15
{
	INVENTORY_PICTURE(rhsusf_acc_anpeq15_wmx)
	AUTHOR_MACRO
	displayName = "AN/PEQ-15 + WMX (laser)";
	weaponInfoType = "RHS_Flashlight3";
	rhs_acc_combo = "rhsusf_acc_anpeq15_wmx_light";
	rhs_anpeq15_base = "rhsusf_acc_anpeq15_wmx";

	model = "\rhsusf\addons\rhsusf_weapons\acc\flashlight\WMX\WMX_A3_side";
};

class rhsusf_acc_anpeq15_wmx_light : rhsusf_acc_anpeq15_light
{
	INVENTORY_PICTURE(rhsusf_acc_anpeq15_wmx_light)
	AUTHOR_MACRO
	displayName = "AN/PEQ-15 + WMX (light)";
	weaponInfoType = "RHS_Flashlight3";
	rhs_acc_combo = "rhsusf_acc_anpeq15_wmx";
	rhs_anpeq15_base = "rhsusf_acc_anpeq15_wmx_light";

	model = "\rhsusf\addons\rhsusf_weapons\acc\flashlight\WMX\WMX_A3_side";
};
class rhsusf_acc_anpeq15_wmx_h : rhsusf_acc_anpeq15_wmx
{
	AUTHOR_MACRO
	ArsenalDisabled
	rhs_acc_combo = "rhsusf_acc_anpeq15_wmx_light_h";
	model = "\rhsusf\addons\rhsusf_weapons\acc\flashlight\WMX\WMX_A3_side_h";
};
class rhsusf_acc_anpeq15_wmx_light_h : rhsusf_acc_anpeq15_wmx_light
{
	AUTHOR_MACRO
	ArsenalDisabled
	rhs_acc_combo = "rhsusf_acc_anpeq15_wmx_h";
	model = "\rhsusf\addons\rhsusf_weapons\acc\flashlight\WMX\WMX_A3_side_h";
};
class rhsusf_acc_anpeq15_wmx_sc : rhsusf_acc_anpeq15_wmx
{
	AUTHOR_MACRO
	ArsenalDisabled
	rhs_acc_combo = "rhsusf_acc_anpeq15_wmx_light_sc";
	model = "\rhsusf\addons\rhsusf_weapons\acc\flashlight\WMX\WMX_A3_side_sc";
};
class rhsusf_acc_anpeq15_wmx_light_sc : rhsusf_acc_anpeq15_wmx_light
{
	AUTHOR_MACRO
	ArsenalDisabled
	rhs_acc_combo = "rhsusf_acc_anpeq15_wmx_sc";
	model = "\rhsusf\addons\rhsusf_weapons\acc\flashlight\WMX\WMX_A3_side_sc";
};

class rhsusf_acc_anpeq15_top : rhsusf_acc_anpeq15A
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_acc_anpeq15side)
	displayName = $STR_RHSUSF_ACC_PEQ15_Top;
	descriptionShort = "IR Laser";
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_top_single";
	rhs_anpeq15_base = "rhsusf_acc_anpeq15_top";
	weaponInfoType = "RHS_LaserTop1";
};
class rhsusf_acc_anpeq15_bk_top : rhsusf_acc_anpeq15_top
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_acc_anpeq15side_bk)
	displayName = $STR_RHSUSF_ACC_PEQ15_BK_Top;
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top_single";
	rhs_anpeq15_base = "rhsusf_acc_anpeq15_bk_top";
	weaponInfoType = "RHS_LaserTop2";
};
class rhsusf_acc_anpeq15_top_h : rhsusf_acc_anpeq15_top
{
	AUTHOR_MACRO
	ArsenalDisabled
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_top_single_h";
};
class rhsusf_acc_anpeq15_bk_top_h : rhsusf_acc_anpeq15_bk_top
{
	AUTHOR_MACRO
	ArsenalDisabled
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top_single_h";
};
class rhsusf_acc_anpeq15_top_sc : rhsusf_acc_anpeq15_top
{
	AUTHOR_MACRO
	ArsenalDisabled
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_top_single_sc";
};
class rhsusf_acc_anpeq15_bk_top_sc : rhsusf_acc_anpeq15_bk_top
{
	AUTHOR_MACRO
	ArsenalDisabled
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top_single_sc";
};

class rhsusf_acc_anpeq15side : acc_pointer_IR
{
	INVENTORY_PICTURE(rhsusf_acc_anpeq15side)
	dlc = "RHS_USAF";

	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_PEQ15;
	scope=2;
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_side";
	class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 8;
			class Pointer
			{
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				irDistance = 5;
			};
			class FlashLight{};
		};
	inertia = 0.1;
};
class rhsusf_acc_anpeq15side_bk : rhsusf_acc_anpeq15side
{
	INVENTORY_PICTURE(rhsusf_acc_anpeq15side_bk)
	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_PEQ15_BK;

	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_side";
};

class rhsusf_acc_anpeq16a : rhsusf_acc_anpeq15
{
	INVENTORY_PICTURE(rhsusf_acc_anpeq16a)
	dlc = "RHS_USAF";

	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_PEQ16A_Laser;
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ16\peq16a";
	rhs_acc_combo = "rhsusf_acc_anpeq16a_light";
	rhs_acc_combo_text = "Switched to Flashlight";
	rhs_anpeq15_base = "rhsusf_acc_anpeq16a";
};
class rhsusf_acc_anpeq16a_light : rhsusf_acc_anpeq15_light
{
	INVENTORY_PICTURE(rhsusf_acc_anpeq16a_light)
	dlc = "RHS_USAF";

	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_PEQ16A_Light;
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ16\peq16a";
	rhs_acc_combo = "rhsusf_acc_anpeq16a";
	rhs_acc_combo_text = "Switched to Laser";
	rhs_anpeq15_base = "rhsusf_acc_anpeq16a_light";
};
class rhsusf_acc_anpeq16a_top : rhsusf_acc_anpeq16a
{
	dlc = "RHS_USAF";

	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_PEQ16A_Laser_Top;
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ16\peq16a_top";
	rhs_acc_combo = "rhsusf_acc_anpeq16a_light_top";
	rhs_anpeq15_base = "rhsusf_acc_anpeq16a_top";
};
class rhsusf_acc_anpeq16a_light_top : rhsusf_acc_anpeq16a_light
{
	dlc = "RHS_USAF";

	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_PEQ16A_Light_Top;
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ16\peq16a_top";
	rhs_acc_combo = "rhsusf_acc_anpeq16a_top";
	rhs_anpeq15_base = "rhsusf_acc_anpeq16a_light_top";
};
class rhsusf_acc_anpeq16a_top_h : rhsusf_acc_anpeq16a_top
{
	AUTHOR_MACRO
	ArsenalDisabled
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ16\peq16a_top_h";
	rhs_acc_combo = "rhsusf_acc_anpeq16a_light_top_h";
};
class rhsusf_acc_anpeq16a_light_top_h : rhsusf_acc_anpeq16a_light_top
{
	AUTHOR_MACRO
	ArsenalDisabled
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ16\peq16a_top_h";
	rhs_acc_combo = "rhsusf_acc_anpeq16a_top_h";
};
class rhsusf_acc_anpeq16a_top_sc : rhsusf_acc_anpeq16a_top
{
	AUTHOR_MACRO
	ArsenalDisabled
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ16\peq16a_top_sc";
	rhs_acc_combo = "rhsusf_acc_anpeq16a_light_top_sc";
};
class rhsusf_acc_anpeq16a_light_top_sc : rhsusf_acc_anpeq16a_light_top
{
	AUTHOR_MACRO
	ArsenalDisabled
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ16\peq16a_top_sc";
	rhs_acc_combo = "rhsusf_acc_anpeq16a_top_sc";
};
//- Flashlights

class rhsusf_acc_M952V : rhsusf_acc_anpeq15_light
{
	INVENTORY_PICTURE(rhsusf_acc_M952V)
	dlc = "RHS_USAF";

	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_M952V;
	weaponInfoType = "RHS_Empty";
	descriptionShort = "Weapon mounted light";
	model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\sfm952";

	inertia = 0.1;
};

class rhsusf_acc_wmx : rhsusf_acc_M952V
{
	INVENTORY_PICTURE(rhsusf_acc_wmx)
	dlc = "RHS_USAF";

	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_WMX;
	model = "\rhsusf\addons\rhsusf_weapons\acc\flashlight\WMX\WMX_A3_side_single";
};

class rhsusf_acc_wmx_bk : rhsusf_acc_M952V
{
	INVENTORY_PICTURE(rhsusf_acc_wmx_bk)
	dlc = "RHS_USAF";

	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_WMX_BK;
	model = "\rhsusf\addons\rhsusf_weapons\acc\flashlight\WMX\WMX_A3_bk_side_single";
};

//- Muzzle accessories

class rhsusf_silencer_base : muzzle_snds_H
{
	dlc = "RHS_USAF";

	scope = 0;
	displayName=$STR_RHSUSF_ACC_M2010S;

	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_titan_icon_ca.paa";
	model = "\rhsusf\addons\rhsusf_weapons\acc\silencers\M2010\M2010silencer";

	class ItemInfo: InventoryMuzzleItem_Base_F
	{
		mass=7;
		class MagazineCoef
		{
			initSpeed = 1.01;
		};

		class AmmoCoef
		{
			hit				= 1;
			visibleFire		= 0.2;
			audibleFire		= 0.4;
			visibleFireTime	= 0.5;
			audibleFireTime	= 1.0;
			cost			= 1.0;
			typicalSpeed	= 1;
			airFriction		= 1.0;
		};
		class MuzzleCoef
		{
			dispersionCoef			="0.8f";
			artilleryDispersionCoef	="1.0f";
			fireLightCoef			="0.1f";
			recoilCoef				="1.0f";
			recoilProneCoef			="1.0f";
			minRangeCoef			="1.0f";
			minRangeProbabCoef		="1.0f";
			midRangeCoef			="1.0f";
			midRangeProbabCoef		="1.0f";
			maxRangeCoef			="1.0f";
			maxRangeProbabCoef		="1.0f";
		};

		muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
		alternativeFire = "Zasleh2";  // class in cfgWeapons with model of muzzle flash

		soundTypeIndex = 1;
		inertia=0.2;
	};
};

class rhsusf_acc_M2010S : rhsusf_silencer_base
{
	INVENTORY_PICTURE(rhsusf_acc_M2010S)
	AUTHOR_MACRO
	scope = 2;
};

class rhsusf_acc_M2010S_d : rhsusf_acc_M2010S
{
	INVENTORY_PICTURE(rhsusf_acc_M2010S_d)
	AUTHOR_MACRO
	scope = 2;
	displayName = $STR_RHSUSF_ACC_M2010S_D;
	model = "\rhsusf\addons\rhsusf_weapons\acc\silencers\M2010\M2010silencer_d";
};

class rhsusf_acc_M2010S_sa : rhsusf_acc_M2010S
{
	INVENTORY_PICTURE(rhsusf_acc_M2010S_sa)
	AUTHOR_MACRO
	scope = 2;
	displayName = $STR_RHSUSF_ACC_M2010S_SA;
	model = "\rhsusf\addons\rhsusf_weapons\acc\silencers\M2010\M2010silencer_sa";
};

class rhsusf_acc_M2010S_wd : rhsusf_acc_M2010S
{
	INVENTORY_PICTURE(rhsusf_acc_M2010S_wd)
	AUTHOR_MACRO
	scope = 2;
	displayName = $STR_RHSUSF_ACC_M2010S_WD;
	model = "\rhsusf\addons\rhsusf_weapons\acc\silencers\M2010\M2010silencer_wd";
};

class rhsusf_acc_SR25S : rhsusf_silencer_base
{
	INVENTORY_PICTURE(rhsusf_acc_SR25S)
	AUTHOR_MACRO
	scope = 2;
	displayName="SR-25 Rifle Suppressor";
	model = "\rhsusf\addons\rhsusf_weapons2\sr25\sr25_suppressor";
};

class rhsusf_acc_SR25S_wd : rhsusf_acc_SR25S
{
	INVENTORY_PICTURE(rhsusf_acc_SR25S_wd)
	AUTHOR_MACRO
	displayName="SR-25 Rifle Suppressor (Woodland)";
	model = "\rhsusf\addons\rhsusf_weapons2\sr25\sr25_suppressor_wd";
};

class rhsusf_acc_SR25S_d : rhsusf_acc_SR25S
{
	INVENTORY_PICTURE(rhsusf_acc_SR25S_d)
	AUTHOR_MACRO
	displayName="SR-25 Rifle Suppressor (Desert)";
	model = "\rhsusf\addons\rhsusf_weapons2\sr25\sr25_suppressor_d";
};

class rhsusf_acc_rotex5_grey : rhsusf_silencer_base
{
	INVENTORY_PICTURE(rhsusf_acc_rotex5_grey)
	scope = 2;
	AUTHOR_MACRO
	displayName=$STR_RHSUSF_ACC_Rotex5_grey;
	model = "\rhsusf\addons\rhsusf_weapons\acc\silencers\rotex5\rotex5_grey.p3d";
};

class rhsusf_acc_rotex5_tan : rhsusf_acc_rotex5_grey
{
	INVENTORY_PICTURE(rhsusf_acc_rotex5_tan)
	scope = 2;
	AUTHOR_MACRO
	displayName=$STR_RHSUSF_ACC_Rotex5_tan;
	model = "\rhsusf\addons\rhsusf_weapons\acc\silencers\rotex5\rotex5_tan.p3d";
};

class rhsusf_acc_nt4_black : rhsusf_silencer_base
{
	INVENTORY_PICTURE(rhsusf_acc_nt4_black)
	scope = 2;
	AUTHOR_MACRO
	displayName=$STR_RHSUSF_ACC_NT4_BLACK;
	model = "rhsusf\addons\rhsusf_weapons\acc\silencers\nt4\nt4_black.p3d";

	inertia = 0.1;
};

class rhsusf_acc_nt4_tan : rhsusf_acc_nt4_black
{
	INVENTORY_PICTURE(rhsusf_acc_nt4_tan)
	scope = 2;
	AUTHOR_MACRO
	displayName=$STR_RHSUSF_ACC_NT4_TAN;
	model = "rhsusf\addons\rhsusf_weapons\acc\silencers\nt4\nt4_tan.p3d";
};

class rhsusf_acc_omega9k : rhsusf_silencer_base
{
	INVENTORY_PICTURE(rhsusf_acc_omega9k)
	scope = 2;
	AUTHOR_MACRO
	displayName=$STR_RHSUSF_ACC_OMG9K;
	model = "rhsusf\addons\rhsusf_weapons3\acc\silencers\omega9k\rhs_omega9k.p3d";

	inertia = 0.1;
};

class rhsusf_acc_rotex_mp7 : rhsusf_silencer_base
{
	INVENTORY_PICTURE(rhsusf_acc_rotex_mp7)
	scope = 2;
	AUTHOR_MACRO
	displayName=$STR_RHSUSF_ACC_rotex_mp7;
	model = "rhsusf\addons\rhsusf_weapons2\acc\silencers\Rotex2\rotex_II_black.p3d";

	inertia = 0.1;
};
class rhsusf_acc_rotex_mp7_aor1 : rhsusf_acc_rotex_mp7
{
	INVENTORY_PICTURE(rhsusf_acc_rotex_mp7_aor1)
	AUTHOR_MACRO
	displayName=$STR_RHSUSF_ACC_rotex_mp7_aor1;
	model = "rhsusf\addons\rhsusf_weapons2\acc\silencers\Rotex2\rotex_II_aor.p3d";
};
class rhsusf_acc_rotex_mp7_winter : rhsusf_acc_rotex_mp7
{
	INVENTORY_PICTURE(rhsusf_acc_rotex_mp7_winter)
	AUTHOR_MACRO
	displayName=$STR_RHSUSF_ACC_rotex_mp7_winter;
	model = "rhsusf\addons\rhsusf_weapons2\acc\silencers\Rotex2\rotex_II_wht.p3d";
};
class rhsusf_acc_rotex_mp7_desert : rhsusf_acc_rotex_mp7
{
	INVENTORY_PICTURE(rhsusf_acc_rotex_mp7_desert)
	AUTHOR_MACRO
	displayName=$STR_RHSUSF_ACC_rotex_mp7_desert;
	model = "rhsusf\addons\rhsusf_weapons2\acc\silencers\Rotex2\rotex_II_fde.p3d";
};

class rhsusf_acc_muzzleFlash_ar15: ItemCore
{
	dlc = "RHS_USAF";

	scope = 1;
	AUTHOR_MACRO
	model = "rhsusf\addons\rhsusf_muzzleflash\models\muzzle_flash_ar15.p3d";
};

class rhsusf_acc_muzzleFlash_SF3P556: ItemCore
{
	dlc = "RHS_USAF";

	scope = 1;
	AUTHOR_MACRO
	model = "rhsusf\addons\rhsusf_muzzleflash\models\muzzle_flash_SF3P556.p3d";
};
class rhsusf_acc_muzzleFlash_SFMB556: rhsusf_acc_muzzleFlash_SF3P556
{
	model = "rhsusf\addons\rhsusf_muzzleflash\models\muzzle_flash_SFMB556.p3d";
};

class rhsusf_acc_muzzleFlash_ardec_m240: rhsusf_acc_muzzleFlash_SF3P556
{
	model = "rhsusf\addons\rhsusf_muzzleflash\models\muzzle_flash_ardec_m240.p3d";
};
class rhsusf_acc_muzzleFlash_M14_USGI_NM: rhsusf_acc_muzzleFlash_SF3P556
{
	model = "rhsusf\addons\rhsusf_muzzleflash\models\muzzle_flash_rifle_mk14.p3d";
};

class rhsusf_m4muzzlebreak_base : rhsusf_silencer_base
{
	scope = 0;
	AUTHOR_MACRO
	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_m4muzzle_icon_ca.paa";

	inertia = 0;
};

class rhsusf_acc_SF3P556 : rhsusf_m4muzzlebreak_base
{
	INVENTORY_PICTURE(rhsusf_acc_SF3P556)
	scope = 2;

	displayName="$STR_RHSUSF_ACC_SF3P";
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_weapons\acc\silencers\surefirebrakes\SF3P556.p3d";

	class ItemInfo: ItemInfo
	{
		soundTypeIndex = 0;
		inertia=0.05;
		class AmmoCoef
		{
			hit=1;
			visibleFire=0.8;
			audibleFire=0.95;
			visibleFireTime=0.95;
			audibleFireTime=1.0;
			cost = 1.0;
			typicalSpeed= 1;
			airFriction = 1.0;
		};
		class MuzzleCoef
		{
			dispersionCoef="1.0f";
			artilleryDispersionCoef="1.0f";
			fireLightCoef="0.1f";
			recoilCoef="1.0f";
			recoilProneCoef="1.0f";
			minRangeCoef="1.0f";
			minRangeProbabCoef="1.0f";
			midRangeCoef="1.0f";
			midRangeProbabCoef="1.0f";
			maxRangeCoef="1.0f";
			maxRangeProbabCoef="1.0f";
		};
		alternativeFire = "rhsusf_acc_muzzleFlash_SF3P556";
	};
};

class rhsusf_acc_SFMB556 : rhsusf_acc_SF3P556
{
	INVENTORY_PICTURE(rhsusf_acc_SFMB556)
	displayName="$STR_RHSUSF_ACC_SFMB";
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_weapons\acc\silencers\surefirebrakes\SFMB556.p3d";
	class ItemInfo: ItemInfo
	{
		alternativeFire = "rhsusf_acc_muzzleFlash_SFMB556";
	};
};

class rhsusf_acc_ARDEC_M240 : rhsusf_acc_SF3P556
{
	INVENTORY_PICTURE(rhsusf_acc_ARDEC_M240)
	displayName="$STR_RHSUSF_ACC_ARDEC_M240";
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_weapons2\acc\silencers\ardec\ardec_m240.p3d";

	class ItemInfo: ItemInfo
	{
		alternativeFire = "rhsusf_acc_muzzleFlash_ardec_m240";

		class MuzzleCoef : MuzzleCoef
		{
			fireLightCoef="0.4f";
		};
	};
};

class rhsusf_acc_m14_flashsuppresor : rhsusf_acc_SF3P556
{
	INVENTORY_PICTURE(rhsusf_acc_m14_flashsuppresor)
	displayName="M14 SOCOM Flash Hider";
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_weapons3\acc\silencers\m14_flashsupp\acca_soc_flashsupp.p3d";

	class ItemInfo: ItemInfo
	{
		alternativeFire = "rhsusf_acc_muzzleFlash_SFMB556";

		class MuzzleCoef : MuzzleCoef
		{
			fireLightCoef="0.9f";
		};
	};
};


class rhsusf_acc_m24_silencer_black : rhsusf_silencer_base
{
	INVENTORY_PICTURE(rhsusf_acc_m24_silencer_black)
	scope = 2;
	AUTHOR_MACRO
	displayName="M24 Supressor";
	//displayName=$STR_RHSUSF_ACC_NT4_BLACK;
	model = "rhsusf\addons\rhsusf_weapons2\M24\M24_Silencer_black.p3d";

	inertia = 0.1;
};
class rhsusf_acc_m24_silencer_d : rhsusf_acc_m24_silencer_black
{
	INVENTORY_PICTURE(rhsusf_acc_m24_silencer_d)
	AUTHOR_MACRO
	displayName="M24 Supressor (Desert)";
	model = "rhsusf\addons\rhsusf_weapons2\M24\M24_Silencer_D.p3d";
};
class rhsusf_acc_m24_silencer_wd : rhsusf_acc_m24_silencer_black
{
	INVENTORY_PICTURE(rhsusf_acc_m24_silencer_wd)
	AUTHOR_MACRO
	displayName="M24 Supressor (Woodland)";
	model = "rhsusf\addons\rhsusf_weapons2\M24\M24_Silencer_WD.p3d";
};

class rhsusf_acc_m24_muzzlehider_black : rhsusf_m4muzzlebreak_base
{
	INVENTORY_PICTURE(rhsusf_acc_m24_muzzlehider_black)
	scope = 2;

	displayName="M24 15OX. Flash Hider";
	AUTHOR_MACRO
	model = "rhsusf\addons\rhsusf_weapons2\M24\M24_Muzzlehider_black.p3d";

	class ItemInfo: ItemInfo
	{
		soundTypeIndex = 0;
		inertia=0.05;
		class AmmoCoef
		{
			hit=1;
			visibleFire=0.8;
			audibleFire=0.95;
			visibleFireTime=0.95;
			audibleFireTime=1.0;
			cost = 1.0;
			typicalSpeed= 1;
			airFriction = 1.0;
		};
		class MuzzleCoef
		{
			dispersionCoef="1.0f";
			artilleryDispersionCoef="1.0f";
			fireLightCoef="0.1f";
			recoilCoef="1.0f";
			recoilProneCoef="1.0f";
			minRangeCoef="1.0f";
			minRangeProbabCoef="1.0f";
			midRangeCoef="1.0f";
			midRangeProbabCoef="1.0f";
			maxRangeCoef="1.0f";
			maxRangeProbabCoef="1.0f";
		};
		alternativeFire = "rhsusf_acc_muzzleFlash_SF3P556";
	};
};
class rhsusf_acc_m24_muzzlehider_d : rhsusf_acc_m24_muzzlehider_black
{
	INVENTORY_PICTURE(rhsusf_acc_m24_muzzlehider_d)
	AUTHOR_MACRO
	displayName="M24 15OX. Flash Hider (Desert)";
	model = "rhsusf\addons\rhsusf_weapons2\M24\M24_Muzzlehider_D.p3d";
};
class rhsusf_acc_m24_muzzlehider_wd : rhsusf_acc_m24_muzzlehider_black
{
	INVENTORY_PICTURE(rhsusf_acc_m24_muzzlehider_wd)
	AUTHOR_MACRO
	displayName="M24 15OX. Flash Hider (Woodland)";
	model = "rhsusf\addons\rhsusf_weapons2\M24\M24_Muzzlehider_WD.p3d";
};

class rhsusf_acc_aac_scarh_silencer : rhsusf_silencer_base
{
	INVENTORY_PICTURE(rhsusf_acc_aac_scarh_silencer)
	scope = 2;
	AUTHOR_MACRO
	displayName="AAC SCAR-H SD";
	model = "rhsusf\addons\rhsusf_weapons3\acc\silencers\aac_762\rhs_aac_scarh_762.p3d";

	inertia = 0.12;
};
class rhsusf_acc_aac_762sd_silencer : rhsusf_acc_aac_scarh_silencer
{
	INVENTORY_PICTURE(rhsusf_acc_aac_762sd_silencer)
	AUTHOR_MACRO
	displayName="AAC 762-SD";
	model = "rhsusf\addons\rhsusf_weapons3\acc\silencers\aac_762\rhs_aac_762sd.p3d";

	inertia = 0.11;
};

class rhsusf_acc_aac_762sdn6_silencer : rhsusf_acc_aac_scarh_silencer
{
	INVENTORY_PICTURE(rhsusf_acc_aac_762sdn6_silencer)
	AUTHOR_MACRO
	displayName="AAC 762-SDN-6";
	model = "rhsusf\addons\rhsusf_weapons3\acc\silencers\aac_762\rhs_aac_762sdn6.p3d";

	inertia = 0.1;
};

class rhsusf_acc_aac_m14dcqd_silencer : rhsusf_acc_aac_scarh_silencer
{
	INVENTORY_PICTURE(rhsusf_acc_aac_m14dcqd_silencer)
	AUTHOR_MACRO
	displayName="M14 DCQD";
	model = "rhsusf\addons\rhsusf_weapons3\acc\silencers\m14_dcqd\acca_dcqd.p3d";

	inertia = 0.1;
};
class rhsusf_acc_aac_m14dcqd_silencer_d : rhsusf_acc_aac_scarh_silencer
{
	INVENTORY_PICTURE(rhsusf_acc_aac_m14dcqd_silencer_d)
	AUTHOR_MACRO
	displayName="M14 DCQD (Desert)";
	model = "rhsusf\addons\rhsusf_weapons3\acc\silencers\m14_dcqd\acca_dcqd_des.p3d";
};
class rhsusf_acc_aac_m14dcqd_silencer_wd : rhsusf_acc_aac_scarh_silencer
{
	INVENTORY_PICTURE(rhsusf_acc_aac_m14dcqd_silencer_wd)
	AUTHOR_MACRO
	displayName="M14 DCQD (Woodland)";
	model = "rhsusf\addons\rhsusf_weapons3\acc\silencers\m14_dcqd\acca_dcqd_wdl.p3d";
};
///! Scopes
class rhsusf_acc_sniper_base: ItemCore
{
	dlc = "RHS_USAF";

	scope = 0;
	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_LEUPOLDMK401;
	descriptionShort = $STR_RHSUSF_ACC_LEUPOLDMK4_SD;

	picture="\rhsusf\addons\rhsusf_weapons\gear_acc\rhs_leo_icon_ca.paa";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\leupoldmk4\leupoldmk4";

	weaponInfoType = "RscWeaponZeroing";
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 4;
		RMBhint = "Optical Sniper Sight";
		optics = 1;

		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_leu_mildot";
		class OpticsModes
		{
			///! 3.5-10X MAGNIFICATION -> 0.2492/4
			class pso1_scope
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
 				discreteDistanceInitIndex = 1;
				opticsZoomMax = 0.35/3.5;
				opticsZoomMin = 0.35/10;
				opticsZoomInit = 0.35/3.5;
				discretefov[] = {0.35/3.5,0.35/10};
 				discreteInitIndex = 0;
 				modelOptics[] = {"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_leu_mildot3_5", "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_leu_mildot10"};
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 100;
				distanceZoomMax = 1000;
				cameraDir = "";
			};
		};
	};

	inertia = 0.2;
};

class rhsusf_acc_compm4 : ItemCore
{
	INVENTORY_PICTURE(rhsusf_acc_compm4)
	dlc = "RHS_USAF";

	scope=2;
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_M68";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\compM4\compm4";

	descriptionShort = $STR_RHSUSF_ACC_COLLIMATOR_SD;

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 0;
		mass = 4;
		optics = 1;

		modelOptics="\A3\Weapons_F\empty";
		class OpticsModes
		{
			class ACO
			{
				opticsID=1;
				useModelOptics=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="opticview";
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				distanceZoomMin=300;
				distanceZoomMax=300;
				cameraDir="";
				visionMode[]={};
				opticsPPEffects[]=
				{
					"OpticsBlur1"
				};
			};
		};
	};

	inertia = 0.1;
};

class rhsusf_acc_T1_high : rhsusf_acc_compm4
{
	INVENTORY_PICTURE(rhsusf_acc_T1_high)
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_T1_H";

	model = "\rhsusf\addons\rhsusf_weapons3\acc\scopes\T1\rhs_T1_h.p3d";

	descriptionShort = $STR_RHSUSF_ACC_COLLIMATOR_SD;

	inertia = 0;
};

class rhsusf_acc_T1_low : rhsusf_acc_T1_high
{
	INVENTORY_PICTURE(rhsusf_acc_T1_low)
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_T1_L";

	model = "\rhsusf\addons\rhsusf_weapons3\acc\scopes\T1\rhs_T1_l.p3d";

	descriptionShort = $STR_RHSUSF_ACC_COLLIMATOR_SD;

	inertia = 0;

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class ACO: ACO
			{
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
		};
	};
};
class rhsusf_acc_T1_low_fwd : rhsusf_acc_T1_low
{
	AUTHOR_MACRO
	weaponInfoType = "RHS_T1_fwd";
	displayName = "$STR_RHSUSF_ACC_T1_L_FWD";
	model = "\rhsusf\addons\rhsusf_weapons3\acc\scopes\T1\rhs_T1_l_front.p3d";
	rhs_T1_base = "rhsusf_acc_T1_low_fwd";
};
class rhsusf_acc_T1_low_fwd_ak : rhsusf_acc_T1_low_fwd
{
	ArsenalDisabled
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_T1_L_FWD_AK";
	model = "\rhsusf\addons\rhsusf_weapons3\acc\scopes\T1\rhs_T1_l_front_ak.p3d";
};

class rhsusf_acc_RX01 : rhsusf_acc_compm4
{
	INVENTORY_PICTURE(rhsusf_acc_RX01)
	dlc = "RHS_USAF";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_RX01";

	model = "\rhsusf\addons\rhsusf_weapons3\acc\scopes\RX01\rhs_reflexsight.p3d";

	descriptionShort = $STR_RHSUSF_ACC_COLLIMATOR_SD;

	inertia = 0;
};
class rhsusf_acc_RX01_tan : rhsusf_acc_RX01
{
	INVENTORY_PICTURE(rhsusf_acc_RX01_tan)
	dlc = "RHS_USAF";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_RX01_TAN";

	model = "\rhsusf\addons\rhsusf_weapons3\acc\scopes\RX01\rhs_reflexsight_tan.p3d";

};

class rhsusf_acc_RX01_NoFilter : rhsusf_acc_RX01
{
	INVENTORY_PICTURE(rhsusf_acc_RX01_NoFilter)
	dlc = "RHS_USAF";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_RX01NOFILTER";

	model = "\rhsusf\addons\rhsusf_weapons3\acc\scopes\RX01\rhs_reflexsight_nofilter.p3d";

	descriptionShort = $STR_RHSUSF_ACC_COLLIMATOR_SD;

	inertia = 0;
};
class rhsusf_acc_RX01_NoFilter_tan : rhsusf_acc_RX01_NoFilter
{
	INVENTORY_PICTURE(rhsusf_acc_RX01_NoFilter_tan)
	dlc = "RHS_USAF";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_RX01NOFILTER_TAN";

	model = "\rhsusf\addons\rhsusf_weapons3\acc\scopes\RX01\rhs_reflexsight_nofilter_tan.p3d";

	descriptionShort = $STR_RHSUSF_ACC_COLLIMATOR_SD;

	inertia = 0;
};

class rhsusf_acc_RM05 : rhsusf_acc_T1_high
{
	INVENTORY_PICTURE(rhsusf_acc_RM05)
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_RM05";

	model = "\rhsusf\addons\rhsusf_scopes\rmr\rhs_rm05";

	descriptionShort = $STR_RHSUSF_ACC_COLLIMATOR_SD;

	inertia = 0;

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class ACO: ACO
			{
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
		};
	};
};

class rhsusf_acc_RM05_fwd : rhsusf_acc_RM05
{
	AUTHOR_MACRO
	weaponInfoType = "RHS_RMR_fwd";
	displayName = "$STR_RHSUSF_ACC_RM05_FWD";
	model = "\rhsusf\addons\rhsusf_scopes\rmr\rhs_rm05_front";
	rhs_T1_base = "rhsusf_acc_RM05_fwd";
};

class rhsusf_acc_RM05_fwd_ak : rhsusf_acc_RM05_fwd
{
	ArsenalDisabled
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_scopes\rmr\rhs_rm05_front_ak";
};

class rhsusf_acc_mrds : rhsusf_acc_T1_high
{
	INVENTORY_PICTURE(rhsusf_acc_mrds)
	AUTHOR_MACRO
	displayName = "MRDS";

	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_mrds";

	descriptionShort = $STR_RHSUSF_ACC_COLLIMATOR_SD;

	inertia = 0;

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class ACO: ACO
			{
				distanceZoomMin=200;
				distanceZoomMax=200;
			};
		};
	};
};

class rhsusf_acc_mrds_fwd : rhsusf_acc_mrds
{
	AUTHOR_MACRO
	weaponInfoType = "RHS_mrds_fwd";
	displayName = "MRDS (Forward)";
	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_mrds_front";
	rhs_T1_base = "rhsusf_acc_mrds_fwd";
};

class rhsusf_acc_mrds_fwd_ak : rhsusf_acc_mrds_fwd
{
	ArsenalDisabled
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_mrds_front_ak";
};

class rhsusf_acc_mrds_c : rhsusf_acc_mrds
{
	INVENTORY_PICTURE(rhsusf_acc_mrds_c)
	AUTHOR_MACRO
	displayName = "MRDS Coyote";

	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_mrds_c";
};

class rhsusf_acc_mrds_fwd_c : rhsusf_acc_mrds_c
{
	AUTHOR_MACRO
	weaponInfoType = "RHS_mrds_c_fwd";
	displayName = "MRDS Coyote (Forward)";
	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_mrds_front_c";
	rhs_T1_base = "rhsusf_acc_mrds_fwd_c";
};

class rhsusf_acc_mrds_fwd_c_ak : rhsusf_acc_mrds_fwd_c
{
	ArsenalDisabled
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_mrds_front_ak_c";
};

class rhsusf_acc_eotech_552 : rhsusf_acc_compm4
{
	INVENTORY_PICTURE(rhsusf_acc_eotech_552)
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_M552";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\eotech\Eotech552";

	descriptionShort = $STR_RHSUSF_ACC_COLLIMATOR_SD;

	inertia = 0;
};

class rhsusf_acc_eotech_552_d : rhsusf_acc_eotech_552
{
	INVENTORY_PICTURE(rhsusf_acc_eotech_552_d)
	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_M552_D;

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\eotech\Eotech552_d";

	descriptionShort = $STR_RHSUSF_ACC_COLLIMATOR_SD;

	inertia = 0;
};

class rhsusf_acc_eotech_552_wd : rhsusf_acc_eotech_552
{
	INVENTORY_PICTURE(rhsusf_acc_eotech_552_wd)
	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_M552_WD;
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\eotech\Eotech552_wd";
};

class rhsusf_acc_anpvs27 : ItemCore
{
	INVENTORY_PICTURE(rhsusf_acc_anpvs27)
	dlc = "RHS_USAF";

	scope=2;
	AUTHOR_MACRO
	displayName = "AN/PVS-27";
	descriptionShort = "Night vision scope<br />Magnification: 1x";

	weaponInfoType = "RscWeaponZeroing";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\pvs27\PVS_27";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 1;
		mass = 4;
		RMBhint = "Night Vision Scope";
		optics = 1;

		modelOptics="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_14_opt";

		class OpticsModes
		{
			class PVS27
			{
				opticsID = 1;
				useModelOptics = 1;

				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","TankCommanderOptics1"};

				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "opticview";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				cameraDir = "";
				visionMode[] = {"NVG"};
			};
		};
	};

	inertia = 0.2;
};

class rhsusf_acc_anpas13gv1 : ItemCore
{
	INVENTORY_PICTURE(rhsusf_acc_anpas13gv1)
	dlc = "RHS_USAF";

	scope=2;
	AUTHOR_MACRO
	displayName = "AN/PAS-13G(V)1";
	descriptionShort = "Light Weapon Thermal Sight (LWTS)";

	weaponInfoType = "rhs_gui_optic_pas13";

	model = "\rhsusf\addons\rhsusf_weapons3\acc\scopes\LWTS\LWTS";
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass = 14;
		weaponInfoType = "RscWeaponRangeZeroingModeFOV";
		optics = 1;
		modelOptics="\rhsusf\addons\rhsusf_weapons3\acc\scopes\optics\LWTS_optic";
		class OpticsModes
		{
			class TWS
			{
				opticsID = 1;
				opticsDisplayName = "  - M4/M16";
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				opticsZoomMin = 0.125;
				opticsZoomMax = 0.25;
				opticsZoomInit = 0.25;
				nFovLimit = 0.15;
				discreteDistance[] = {300};
				discreteDistanceInitIndex = 0;
				distanceZoomMin = 100;
				distanceZoomMax = 300;
				modelOptics[] = {"\rhsusf\addons\rhsusf_weapons3\acc\scopes\optics\LWTS_optic","\rhsusf\addons\rhsusf_weapons3\acc\scopes\optics\LWTS_optic2x"};
				discretefov[] = {0.25, 0.125};
				discreteInitIndex = 0;
				memoryPointCamera = "opticView";
				visionMode[] = {"Ti"};
				thermalMode[] = {0, 1};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				cameraDir = "";
			};
			class TWS_5mil : TWS
			{
				opticsID = 2;
				opticsDisplayName = "  - 5 MIL ";
				modelOptics[] = {"\rhsusf\addons\rhsusf_weapons3\acc\scopes\optics\LWTS_5miloptic","\rhsusf\addons\rhsusf_weapons3\acc\scopes\optics\LWTS_5milopticx2"};
			};
		};
	};
	inertia = 0.2;
};

class rhsusf_acc_LEUPOLDMK4 : rhsusf_acc_sniper_base
{
	INVENTORY_PICTURE(rhsusf_acc_LEUPOLDMK4)
	scope=2;
	AUTHOR_MACRO
};
class rhsusf_acc_LEUPOLDMK4_d : rhsusf_acc_LEUPOLDMK4
{
	INVENTORY_PICTURE(rhsusf_acc_LEUPOLDMK4_d)
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\leupoldmk4\leupoldmk4_d";
	scope=2;
	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_LEUPOLDMK4_SD_d;
};
class rhsusf_acc_LEUPOLDMK4_wd : rhsusf_acc_LEUPOLDMK4
{
	//INVENTORY_PICTURE(rhsusf_acc_LEUPOLDMK4_wd)
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\leupoldmk4\leupoldmk4_wd";
	scope=2;
	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_LEUPOLDMK4_SD_wd;
};

class rhsusf_acc_ELCAN: rhsusf_acc_sniper_base
{
	INVENTORY_PICTURE(rhsusf_acc_ELCAN)
	rhs_optic_base = "rhsusf_acc_ELCAN";
	scope = 2;
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_M145";
	descriptionShort =  "$STR_RHSUSF_ACC_M145";

	model = "\rhsusf\addons\rhsusf_scopes\elcan\elcan";

	weaponInfoType = "rhs_elcan_handler";
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 1;
		mass = 4;
		RMBhint = "Machine Gun Optic";
		optics = 1;

		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_elcan";
		class OpticsModes
		{
			///! 3.5-10X MAGNIFICATION -> 0.2492/4
			class elcan_scope
			{
				opticsID						= 2;
				useModelOptics					= 1;
				opticsPPEffects[]				= {"OpticsCHAbera1","OpticsBlur1","rhs_m150_Blur"};
				discreteDistance[]				= {100};
				discreteDistanceInitIndex		= 0;
				opticsZoomMax					= __EVAL(0.2492/3.4);
				opticsZoomMin					= __EVAL(0.2492/3.4);
				opticsZoomInit					= __EVAL(0.2492/3.4);
				memoryPointCamera				= "opticView";
				visionMode[]					= {};
				opticsFlare						= 1;
				opticsDisablePeripherialVision	= 1;
				distanceZoomMin					= 200;
				distanceZoomMax					= 1000;
				cameraDir						= "direction";
			};
			class alternative_view
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				cameraDir = "";
			};
		};
	};

	inertia = 0.1;
};

class rhsusf_acc_ELCAN_ard : rhsusf_acc_ELCAN
{
	INVENTORY_PICTURE(rhsusf_acc_ELCAN_ard)
	rhs_optic_base = "rhsusf_acc_ELCAN_ard";
	weaponInfoType = "rhs_elcan_ard_handler";
	scope = 2;
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_M145_ARD";
	model = "\rhsusf\addons\rhsusf_scopes\elcan\elcan_ard";
};

class rhsusf_acc_elcan_3d : rhsusf_acc_ELCAN
{
	rhs_optic_base = "rhsusf_acc_ELCAN";
	weaponInfoType = "rhs_elcan_3d_handler";
	scopeArsenal=0;
	scope = 1;
	AUTHOR_MACRO

	class ItemInfo : ItemInfo
	{
		class OpticsModes : OpticsModes
		{
			class elcan_scope : elcan_scope
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur2","rhs_m150_Blur"};
				discreteDistance[] = {100};
 				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.125/1.3;
				opticsZoomMax = 0.125;
				opticsZoomInit = 0.125;
				memoryPointCamera = "opticView_3d";
				visionMode[] = {};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
			};

			class alternative_view : alternative_view {};
		};
	};
};
class rhsusf_acc_elcan_ard_3d : rhsusf_acc_elcan_3d
{
	rhs_optic_base = "rhsusf_acc_ELCAN_ard";
	AUTHOR_MACRO
	weaponInfoType = "rhs_elcan_ard_3d_handler";
	displayName = "$STR_RHSUSF_ACC_M145_ARD";
	model = "\rhsusf\addons\rhsusf_scopes\elcan\elcan_ard";
};

class rhsusf_acc_ELCAN_pip: rhsusf_acc_ELCAN
{
	rhs_optic_base = "rhsusf_acc_ELCAN";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_M145_3D";
	descriptionShort =  "$STR_RHSUSF_ACC_M145_3D";

	scopeArsenal = 0;
	scope = 1;

	model = "\rhsusf\addons\rhsusf_scopes\elcan\elcan_pip";

	weaponInfoType = "rhs_elcan_pip_handler";
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class elcan_scope
			{
				opticsID=1;
				useModelOptics=0;
				opticsZoomMin=0.275;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="pip_view";
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				distanceZoomMin=100;
				distanceZoomMax=100;
				cameraDir="";
				visionMode[]={};
				opticsPPEffects[]=
				{

				};
			};
			class alternative_view: alternative_view {};
		};
	};
};

class rhsusf_acc_ELCAN_ard_pip : rhsusf_acc_ELCAN_pip
{
	rhs_optic_base = "rhsusf_acc_ELCAN_ard";
	weaponInfoType = "rhs_elcan_ard_pip_handler";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_M145_ARD";
	model = "\rhsusf\addons\rhsusf_scopes\elcan\elcan_ard_pip";
};

class rhsusf_acc_su230_base : ItemCore
{
	rhs_optic_base = "rhsusf_acc_su230_base";
	dlc = "RHS_USAF";

	scope = 0;

	AUTHOR_MACRO

	displayName = "SU-230/PVS";

	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230";

	descriptionShort = $STR_RHSUSF_ACC_SPECTERDR_SHORT;

	opticsDisablePeripherialVision = 0;

	weaponInfoType = "rhs_SpecterDR_handler";

	class ItemInfo : InventoryOpticsItem_Base_F
	{
		opticType = 1;
		mass = 11;
		RMBhint = "Dual role Combat Sight";
		optics = 1;

		modelOptics = "\rhsusf\addons\rhsusf_scopes\optics\elcan\rhsusf_optic_SU230";

		class OpticsModes
		{
			class Elcan_x1
			{
				opticsID=1;
				useModelOptics=0;
				opticsZoomMin=0.25;
				opticsZoomMax=0.6;
				opticsZoomInit=0.75;
				memoryPointCamera="opticview";
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				distanceZoomMin=100;
				distanceZoomMax=100;
				cameraDir="";
				visionMode[]={};

				opticsPPEffects[]				= {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
			};

			class Elcan_x4
			{
				opticsID						= 2;
				useModelOptics					= 1;
				opticsPPEffects[]				= {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
				discreteDistance[]				= {100};
				discreteDistanceInitIndex		= 0;
				opticsZoomMin					= __EVAL(0.25/4);
				opticsZoomMax					= __EVAL(0.25/4);
				opticsZoomInit					= __EVAL(0.25/4);
				memoryPointCamera				= "opticView";
				visionMode[]					= {};
				opticsFlare						= 1;
				opticsDisablePeripherialVision	= 1;
				distanceZoomMin					= 100;
				distanceZoomMax					= 100;
				cameraDir						= "";
			};

			class Elcan_iron
			{
				opticsID = 3;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsZoomMin = 0.275;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye2";
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				cameraDir = "";
			};
		};
	};

	inertia = 0.2;
};

class rhsusf_acc_su230_base_3d : rhsusf_acc_su230_base
{
	rhs_optic_base = "rhsusf_acc_su230_base";
	weaponInfoType = "rhs_SpecterDR_3d_handler";

	scopeArsenal=0;
	scope = 0;

	AUTHOR_MACRO

	class ItemInfo : ItemInfo
	{
		class OpticsModes : OpticsModes
		{
			class Elcan_x1 : Elcan_x1 {};

			class Elcan_x4 : Elcan_x4
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsPPEffects[]				= {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
				discreteDistance[] = {100};
 				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.1;
				opticsZoomMax = 0.15;
				opticsZoomInit = 0.15;
				memoryPointCamera = "opticView";
				visionMode[] = {};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
			};

			class Elcan_iron : Elcan_iron {};
		};
	};
};

class rhsusf_acc_su230_mrds_base : rhsusf_acc_su230_base
{
	rhs_optic_base = "rhsusf_acc_su230_base";

	AUTHOR_MACRO


	displayName = "SU-230/PVS MRDS";
	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230_mrds";

	class ItemInfo : ItemInfo
	{
		class OpticsModes : OpticsModes
		{
			class Elcan_x1 : Elcan_x1 {};

			class Elcan_x4 : Elcan_x4 {};

			class Elcan_mrds : Elcan_iron
			{
				memoryPointCamera = "eye";
			};

			class Elcan_iron_aux : Elcan_iron {};
		};
	};
};

class rhsusf_acc_su230_mrds_base_3d : rhsusf_acc_su230_mrds_base
{
	rhs_optic_base = "rhsusf_acc_su230_base";

	scopeArsenal=0;
	scope = 0;

	AUTHOR_MACRO

	class ItemInfo : ItemInfo
	{
		class OpticsModes : OpticsModes
		{
			class Elcan_x1 : Elcan_x1 {};

			class Elcan_x4 : Elcan_x4
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1","rhs_su230_Blur"};
				discreteDistance[] = {100};
 				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.1;
				opticsZoomMax = 0.15;
				opticsZoomInit = 0.15;
				memoryPointCamera = "opticView";
				visionMode[] = {};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
			};

			class Elcan_mrds : Elcan_mrds {};

			class Elcan_iron_aux : Elcan_iron_aux {};
		};
	};
};

// black su230

class rhsusf_acc_su230 : rhsusf_acc_su230_base
{
	INVENTORY_PICTURE(rhsusf_acc_su230)
	AUTHOR_MACRO
	rhs_optic_base = "rhsusf_acc_su230";
	scope = 2;
	weaponInfoType = "rhsusf_acc_su230_handler";
};

class rhsusf_acc_su230_3d : rhsusf_acc_su230_base_3d
{
	INVENTORY_PICTURE(rhsusf_acc_su230)
	AUTHOR_MACRO
	rhs_optic_base = "rhsusf_acc_su230";
	scope = 1;
	weaponInfoType = "rhsusf_acc_su230_3d_handler";
};

class rhsusf_acc_su230_mrds : rhsusf_acc_su230_mrds_base
{
	INVENTORY_PICTURE(rhsusf_acc_su230_mrds)
	AUTHOR_MACRO
	rhs_optic_base = "rhsusf_acc_su230_mrds";
	scope = 2;
	weaponInfoType = "rhsusf_acc_su230_mrds_handler";
};

class rhsusf_acc_su230_mrds_3d : rhsusf_acc_su230_mrds_base_3d
{
	INVENTORY_PICTURE(rhsusf_acc_su230_mrds)
	AUTHOR_MACRO
	rhs_optic_base = "rhsusf_acc_su230_mrds";
	scope = 1;
	weaponInfoType = "rhsusf_acc_su230_mrds_3d_handler";
};

class rhsusf_acc_su230a : rhsusf_acc_su230
{
	INVENTORY_PICTURE(rhsusf_acc_su230a)
	AUTHOR_MACRO
	rhs_optic_base = "rhsusf_acc_su230a";
	scope = 2;
	displayName = "SU-230A/PVS";
	descriptionShort = $STR_RHSUSF_ACC_SPECTERDR_A_SHORT;
	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230a";

	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsusf\addons\rhsusf_scopes\optics\elcan\rhsusf_optic_SU230A";
	};

	weaponInfoType = "rhsusf_acc_su230a_handler";
};

class rhsusf_acc_su230a_3d : rhsusf_acc_su230_3d
{
	INVENTORY_PICTURE(rhsusf_acc_su230a)
	AUTHOR_MACRO
	rhs_optic_base = "rhsusf_acc_su230a";
	scope = 1;
	displayName = "SU-230A/PVS";
	descriptionShort = $STR_RHSUSF_ACC_SPECTERDR_A_SHORT;
	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230a";
	weaponInfoType = "rhsusf_acc_su230a_3d_handler";
};

class rhsusf_acc_su230a_mrds : rhsusf_acc_su230_mrds
{
	INVENTORY_PICTURE(rhsusf_acc_su230a_mrds)
	AUTHOR_MACRO
	rhs_optic_base = "rhsusf_acc_su230a_mrds";
	scope = 2;
	displayName = "SU-230A/PVS MRDS";
	descriptionShort = $STR_RHSUSF_ACC_SPECTERDR_A_SHORT;
	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230a_mrds";

	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsusf\addons\rhsusf_scopes\optics\elcan\rhsusf_optic_SU230A";
	};

	weaponInfoType = "rhsusf_acc_su230a_mrds_handler";
};

class rhsusf_acc_su230a_mrds_3d : rhsusf_acc_su230_mrds_3d
{
	INVENTORY_PICTURE(rhsusf_acc_su230a_mrds)
	AUTHOR_MACRO
	rhs_optic_base = "rhsusf_acc_su230a_mrds";
	scope = 1;
	displayName = "SU-230A/PVS MRDS";
	descriptionShort = $STR_RHSUSF_ACC_SPECTERDR_A_SHORT;
	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230a_mrds";
	weaponInfoType = "rhsusf_acc_su230a_mrds_3d_handler";
};

// coyote su230

class rhsusf_acc_su230_c : rhsusf_acc_su230_base
{
	INVENTORY_PICTURE(rhsusf_acc_su230_c)
	AUTHOR_MACRO

	rhs_optic_base = "rhsusf_acc_su230_c";
	scope = 2;
	displayName = "SU-230/PVS Coyote";
	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230_c";
	weaponInfoType = "rhsusf_acc_su230_c_handler";
};

class rhsusf_acc_su230_c_3d : rhsusf_acc_su230_base_3d
{
	INVENTORY_PICTURE(rhsusf_acc_su230_c)
	AUTHOR_MACRO

	rhs_optic_base = "rhsusf_acc_su230_c";
	scope = 1;
	displayName = "SU-230/PVS Coyote";
	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230_c";
	weaponInfoType = "rhsusf_acc_su230_c_3d_handler";
};

class rhsusf_acc_su230_mrds_c : rhsusf_acc_su230_mrds_base
{
	INVENTORY_PICTURE(rhsusf_acc_su230_mrds_c)
	AUTHOR_MACRO

	rhs_optic_base = "rhsusf_acc_su230_mrds_c";
	scope = 2;
	displayName = "SU-230/PVS MRDS Coyote";
	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230_mrds_c";
	weaponInfoType = "rhsusf_acc_su230_mrds_c_handler";
};

class rhsusf_acc_su230_mrds_c_3d : rhsusf_acc_su230_mrds_base_3d
{
	INVENTORY_PICTURE(rhsusf_acc_su230_mrds_c)
	AUTHOR_MACRO

	rhs_optic_base = "rhsusf_acc_su230_mrds_c";
	scope = 1;
	displayName = "SU-230/PVS MRDS Coyote";
	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230_mrds_c";
	weaponInfoType = "rhsusf_acc_su230_mrds_c_3d_handler";
};

class rhsusf_acc_su230a_c : rhsusf_acc_su230a
{
	INVENTORY_PICTURE(rhsusf_acc_su230a_c)
	AUTHOR_MACRO

	rhs_optic_base = "rhsusf_acc_su230a_c";
	scope = 2;
	displayName = "SU-230A/PVS Coyote";
	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230a_c";
	weaponInfoType = "rhsusf_acc_su230a_c_handler";
};

class rhsusf_acc_su230a_c_3d : rhsusf_acc_su230a_3d
{
	INVENTORY_PICTURE(rhsusf_acc_su230a_c)
	AUTHOR_MACRO

	rhs_optic_base = "rhsusf_acc_su230a_c";
	scope = 1;
	displayName = "SU-230A/PVS Coyote";
	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230a_c";
	weaponInfoType = "rhsusf_acc_su230a_c_3d_handler";
};

class rhsusf_acc_su230a_mrds_c : rhsusf_acc_su230a_mrds
{
	INVENTORY_PICTURE(rhsusf_acc_su230a_mrds_c)
	AUTHOR_MACRO

	rhs_optic_base = "rhsusf_acc_su230a_mrds_c";
	scope = 2;
	displayName = "SU-230A/PVS MRDS Coyote";
	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230a_mrds_c";
	weaponInfoType = "rhsusf_acc_su230a_mrds_c_handler";
};

class rhsusf_acc_su230a_mrds_c_3d : rhsusf_acc_su230a_mrds_3d
{
	INVENTORY_PICTURE(rhsusf_acc_su230a_mrds_c)
	AUTHOR_MACRO

	rhs_optic_base = "rhsusf_acc_su230a_mrds_c";
	scope = 1;
	displayName = "SU-230A/PVS MRDS Coyote";
	model = "\rhsusf\addons\rhsusf_scopes\specter\rhs_su230a_mrds_c";
	weaponInfoType = "rhsusf_acc_su230a_mrds_c_3d_handler";
};

// deprecated

class rhsusf_acc_SpecterDR : rhsusf_acc_su230
{
	//INVENTORY_PICTURE(rhsusf_acc_SpecterDR)
	scopeArsenal=0;
	scope=1;
	AUTHOR_MACRO

	weaponInfoType = "rhs_SpecterDR_handler";
};

class rhsusf_acc_SpecterDR_D : rhsusf_acc_su230_c
{
	//INVENTORY_PICTURE(rhsusf_acc_SpecterDR_D)
	weaponInfoType = "rhs_SpecterDR_d_handler";
	AUTHOR_MACRO

	scopeArsenal=0;
	scope=1;
};

class rhsusf_acc_SpecterDR_OD : rhsusf_acc_su230_c
{
	//INVENTORY_PICTURE(rhsusf_acc_SpecterDR_OD)
	weaponInfoType = "rhs_SpecterDR_od_handler";
	AUTHOR_MACRO

	scopeArsenal=0;
	scope=1;
};

class rhsusf_acc_SpecterDR_CX : rhsusf_acc_su230_c
{
	//INVENTORY_PICTURE(rhsusf_acc_SpecterDR_CX)
	weaponInfoType = "rhs_SpecterDR_cx_handler";
	AUTHOR_MACRO

	scopeArsenal=0;
	scope=1;
};

class rhsusf_acc_SpecterDR_A : rhsusf_acc_su230a
{
	//INVENTORY_PICTURE(rhsusf_acc_SpecterDR_A)
	weaponInfoType = "rhs_SpecterDR_a_handler";
	AUTHOR_MACRO

	scopeArsenal=0;
	scope=1;
};

class rhsusf_acc_SpecterDR_3d : rhsusf_acc_su230_3d
{
	//INVENTORY_PICTURE(rhsusf_acc_SpecterDR_3d)
	weaponInfoType = "rhs_SpecterDR_3d_handler";
	AUTHOR_MACRO

	scopeArsenal=0;
	scope=1;
};


class rhsusf_acc_SpecterDR_D_3D : rhsusf_acc_su230_c_3d
{
	//INVENTORY_PICTURE(rhsusf_acc_SpecterDR_D_3D)
	weaponInfoType = "rhs_SpecterDR_d_3d_handler";
	AUTHOR_MACRO

	scopeArsenal=0;
	scope=1;
};

class rhsusf_acc_SpecterDR_OD_3D : rhsusf_acc_su230_c_3d
{
	//INVENTORY_PICTURE(rhsusf_acc_SpecterDR_OD_3D)
	weaponInfoType = "rhs_SpecterDR_od_3d_handler";
	AUTHOR_MACRO

	scopeArsenal=0;
	scope=1;
};

class rhsusf_acc_SpecterDR_A_3d : rhsusf_acc_su230a_c_3d
{
	//INVENTORY_PICTURE(rhsusf_acc_SpecterDR_A_3d)
	weaponInfoType = "rhs_SpecterDR_a_3d_handler";
	AUTHOR_MACRO

	scopeArsenal=0;
	scope=1;
};

class rhsusf_acc_SpecterDR_CX_3D : rhsusf_acc_su230_c_3d
{
	//INVENTORY_PICTURE(rhsusf_acc_SpecterDR_CX_3D)
	weaponInfoType = "rhs_SpecterDR_cx_3d_handler";
	AUTHOR_MACRO

	scopeArsenal=0;
	scope=1;
};

// end deprecated specters

class rhsusf_acc_SpecterDR_pvs27 : rhsusf_acc_SpecterDR
{
	INVENTORY_PICTURE(rhsusf_acc_SpecterDR_pvs27)
	scope=1;
	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_SPECTERDR_PVS27;

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\pvs27\PVS_27_specterdr.p3d";

	class ItemInfo : ItemInfo
	{
		class OpticsModes : OpticsModes
		{
			class Elcan_x1 : Elcan_x1
			{
				useModelOptics = 1;
				visionMode[] = {"NVG"};
			};

			class Elcan_x4 : Elcan_x4
			{
				visionMode[] = {"NVG"};
			};

			class Elcan_iron : Elcan_iron {};
		};
	};

	inertia = 0.2;
};

class rhsusf_acc_ACOG: rhsusf_acc_sniper_base
{
	INVENTORY_PICTURE(rhsusf_acc_ACOG)
	rhs_optic_base = "rhsusf_acc_ACOG";
	weaponInfoType = "rhs_acog_handler";
	scope = 2;
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_M150";
	descriptionShort =  "Rifle Combat Optics<br />Magnification: 4x";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog";

	opticsDisablePeripherialVision = 0;

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 1;
		mass = 4;
		RMBhint = "Rifle Combat Optic";
		optics = 1;

		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_acog";
		class OpticsModes
		{
			class elcan_scope
			{
				opticsID						= 2;
				useModelOptics					= 1;
				opticsPPEffects[]				= {"OpticsCHAbera1","OpticsBlur1","rhs_m150_Blur"};
				//top of arrow is pointing at 100m, rest of range adjustments is performed with
				//help of recticle markings
				discreteDistance[]				= {100};
				discreteDistanceInitIndex		= 0;
				opticsZoomMin					= __EVAL(0.35/4);
				opticsZoomMax					= __EVAL(0.35/4);
				opticsZoomInit					= __EVAL(0.35/4);
				memoryPointCamera				= "opticview";
				visionMode[]					= {};
				opticsFlare						= 1;
				opticsDisablePeripherialVision	= 0;
				distanceZoomMin					= 100;
				distanceZoomMax					= 1000;
				cameraDir						= "";
			};

			class alternative_view
			{
				opticsID						= 1;
				useModelOptics					= 0;
				opticsPPEffects[]				= {""};
				opticsZoomMin					= 0.275;
				opticsZoomMax					= 1.1;
				opticsZoomInit					= 0.75;
				memoryPointCamera				= "eye";
				visionMode[]					= {};
				opticsFlare						= 0;
				opticsDisablePeripherialVision	= 0;
				distanceZoomMin					= 300;
				distanceZoomMax					= 300;
				cameraDir						= "";
			};
		};
	};

	inertia = 0.1;
};

class rhsusf_acc_ACOG_wd: rhsusf_acc_ACOG
{
	INVENTORY_PICTURE(rhsusf_acc_ACOG_wd)
	rhs_optic_base = "rhsusf_acc_ACOG_wd";
	weaponInfoType = "rhs_acog_wd_handler";
	AUTHOR_MACRO
	displayName = "TA31RCO (Woodland)";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_wd";
};

class rhsusf_acc_ACOG_d: rhsusf_acc_ACOG
{
	INVENTORY_PICTURE(rhsusf_acc_ACOG_d)
	rhs_optic_base = "rhsusf_acc_ACOG_d";
	weaponInfoType = "rhs_acog_d_handler";
	AUTHOR_MACRO
	displayName = "TA31RCO (Desert)";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_d";
};

class rhsusf_acc_ACOG_sa: rhsusf_acc_ACOG
{
	INVENTORY_PICTURE(rhsusf_acc_ACOG_sa)
	rhs_optic_base = "rhsusf_acc_ACOG_sa";
	weaponInfoType = "rhs_acog_sa_handler";
	AUTHOR_MACRO
	displayName = "TA31RCO (Semi-Arid)";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_sa";
	scope = 1;
	scopearsenal=0;
};

class rhsusf_acc_ACOG2: rhsusf_acc_ACOG
{
	INVENTORY_PICTURE(rhsusf_acc_ACOG2)
	rhs_optic_base = "rhsusf_acc_ACOG2";
	weaponInfoType = "rhs_acog2_handler";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_M150_ARD";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_glarehider";
	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_acog_hex";
		class OpticsModes: OpticsModes
		{
			class elcan_scope: elcan_scope
			{
				opticsFlare = 0;
			};
			class alternative_view: alternative_view {};
		};
	};
};

class rhsusf_acc_ACOG3: rhsusf_acc_ACOG
{
	INVENTORY_PICTURE(rhsusf_acc_ACOG3)
	rhs_optic_base = "rhsusf_acc_ACOG3";
	weaponInfoType = "rhs_acog3_handler";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_M150_ARD_L";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_glarehider_lenscover";

	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_acog_hex";
	};
};

class rhsusf_acc_ACOG_USMC: rhsusf_acc_ACOG
{
	INVENTORY_PICTURE(rhsusf_acc_ACOG_USMC)
	rhs_optic_base = "rhsusf_acc_ACOG_USMC";
	weaponInfoType = "rhs_acog_usmc_handler";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_31A";

	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_acog2";
	};
};

class rhsusf_acc_ACOG2_USMC: rhsusf_acc_ACOG2
{
	INVENTORY_PICTURE(rhsusf_acc_ACOG2_USMC)
	rhs_optic_base = "rhsusf_acc_ACOG2_USMC";
	weaponInfoType = "rhs_acog2_usmc_handler";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_31A_ARD";
	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_acog2_hex";
	};
};

class rhsusf_acc_ACOG3_USMC: rhsusf_acc_ACOG3
{
	INVENTORY_PICTURE(rhsusf_acc_ACOG3_USMC)
	rhs_optic_base = "rhsusf_acc_ACOG3_USMC";
	weaponInfoType = "rhs_acog3_usmc_handler";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_31A_ARD_L";

	class ItemInfo: ItemInfo
	{

		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_acog2_hex";
	};
};

class rhsusf_acc_ACOG_RMR: rhsusf_acc_ACOG
{
	INVENTORY_PICTURE(rhsusf_acc_ACOG_RMR)
	rhs_optic_base = "rhsusf_acc_ACOG_RMR";
	weaponInfoType = "rhs_acog_rmr_handler";
	AUTHOR_MACRO
	displayName = "TA31RCO-RMR";

	model = "\rhsusf\addons\rhsusf_scopes\rmr\acog_rmr";
};

//3d variants
class rhsusf_acc_ACOG_3d: rhsusf_acc_ACOG
{
	rhs_optic_base = "rhsusf_acc_ACOG";
	weaponInfoType = "rhs_acog_3d_handler";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_M150";
	scope=1;
	scopearsenal=0;

	class ItemInfo: ItemInfo
	{

		class OpticsModes: OpticsModes
		{
			class elcan_scope: elcan_scope
			{
				useModelOptics = 0;
				opticsZoomMin = 0.08;
				opticsZoomMax = 0.125;
				opticsZoomInit = 0.125;
				memoryPointCamera = "opticview_3d";
			};
			class alternative_view: alternative_view {};
		};
	};
};

class rhsusf_acc_ACOG_wd_3d: rhsusf_acc_ACOG_3d
{
	rhs_optic_base = "rhsusf_acc_ACOG_wd";
	weaponInfoType = "rhs_acog_wd_3d_handler";
	AUTHOR_MACRO
	displayName = "TA31RCO (Woodland)";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_wd";
};

class rhsusf_acc_ACOG_d_3d: rhsusf_acc_ACOG_3d
{
	rhs_optic_base = "rhsusf_acc_ACOG_d";
	weaponInfoType = "rhs_acog_d_3d_handler";
	AUTHOR_MACRO
	displayName = "TA31RCO (Desert)";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_d";
};

class rhsusf_acc_ACOG_sa_3d: rhsusf_acc_ACOG_3d
{
	rhs_optic_base = "rhsusf_acc_ACOG_sa";
	weaponInfoType = "rhs_acog_sa_3d_handler";
	AUTHOR_MACRO
	displayName = "TA31RCO (Semi-Arid)";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_sa";
};

class rhsusf_acc_ACOG2_3d: rhsusf_acc_ACOG_3d
{
	rhs_optic_base = "rhsusf_acc_ACOG2";
	weaponInfoType = "rhs_acog2_3d_handler";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_M150_ARD";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_glarehider";
};

class rhsusf_acc_ACOG3_3d: rhsusf_acc_ACOG_3d
{
	rhs_optic_base = "rhsusf_acc_ACOG3";
	weaponInfoType = "rhs_acog3_3d_handler";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_M150_ARD_L";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_glarehider_lenscover";
};

class rhsusf_acc_ACOG_USMC_3d: rhsusf_acc_ACOG_3d
{
	rhs_optic_base = "rhsusf_acc_ACOG_USMC";
	weaponInfoType = "rhs_acog_usmc_3d_handler";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_31A";
};

class rhsusf_acc_ACOG2_USMC_3d: rhsusf_acc_ACOG2_3d
{
	rhs_optic_base = "rhsusf_acc_ACOG2_USMC";
	weaponInfoType = "rhs_acog2_usmc_3d_handler";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_31A_ARD";
};

class rhsusf_acc_ACOG3_USMC_3d: rhsusf_acc_ACOG3_3d
{
	rhs_optic_base = "rhsusf_acc_ACOG3_USMC";
	weaponInfoType = "rhs_acog3_usmc_3d_handler";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_31A_ARD_L";
};

class rhsusf_acc_ACOG_RMR_3d: rhsusf_acc_ACOG_3d
{
	rhs_optic_base = "rhsusf_acc_ACOG_RMR";
	weaponInfoType = "rhs_acog_rmr_3d_handler";
	AUTHOR_MACRO
	displayName = "TA31RCO-RMR";

	model = "\rhsusf\addons\rhsusf_scopes\rmr\acog_rmr";
};

//pip variants
class rhsusf_acc_ACOG_pip: rhsusf_acc_ACOG
{
	rhs_optic_base = "rhsusf_acc_ACOG";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_M150_3D";
	scope=1;
	scopearsenal=0;

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_pip";

	weaponInfoType = "rhs_acog_pip_handler";

	class ItemInfo: ItemInfo
	{

		class OpticsModes: OpticsModes
		{
			class elcan_scope
			{
				opticsID=1;
				useModelOptics=0;
				opticsZoomMin=0.275;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="opticview";
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				distanceZoomMin=100;
				distanceZoomMax=100;
				cameraDir="";
				visionMode[]={};
				opticsPPEffects[]=
				{

				};
			};
			class alternative_view: alternative_view {};
		};
	};
};

class rhsusf_acc_ACOG_wd_pip: rhsusf_acc_ACOG_pip
{
	rhs_optic_base = "rhsusf_acc_ACOG_wd";
	weaponInfoType = "rhs_acog_wd_pip_handler";
	AUTHOR_MACRO
	displayName = "TA31RCO (Woodland)";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_wd_pip";
};

class rhsusf_acc_ACOG_d_pip: rhsusf_acc_ACOG_pip
{
	rhs_optic_base = "rhsusf_acc_ACOG_d";
	weaponInfoType = "rhs_acog_d_pip_handler";
	AUTHOR_MACRO
	displayName = "TA31RCO (Desert)";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_d_pip";
};

class rhsusf_acc_ACOG_sa_pip: rhsusf_acc_ACOG_pip
{
	rhs_optic_base = "rhsusf_acc_ACOG_sa";
	weaponInfoType = "rhs_acog_sa_pip_handler";
	AUTHOR_MACRO
	displayName = "TA31RCO (Semi-Arid)";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_sa_pip";
};

class rhsusf_acc_ACOG2_pip: rhsusf_acc_ACOG_pip
{
	rhs_optic_base = "rhsusf_acc_ACOG2";
	weaponInfoType = "rhs_acog2_pip_handler";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_M150_ARD";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_glarehider_pip";
};

class rhsusf_acc_ACOG3_pip: rhsusf_acc_ACOG_pip
{
	rhs_optic_base = "rhsusf_acc_ACOG3";
	weaponInfoType = "rhs_acog3_pip_handler";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_M150_ARD_L";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\acog\acog_glarehider_lenscover_pip";
};

class rhsusf_acc_ACOG_USMC_pip: rhsusf_acc_ACOG_pip
{
	rhs_optic_base = "rhsusf_acc_ACOG_USMC";
	weaponInfoType = "rhs_acog_usmc_pip_handler";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_31A";
};

class rhsusf_acc_ACOG2_USMC_pip: rhsusf_acc_ACOG2_pip
{
	rhs_optic_base = "rhsusf_acc_ACOG2_USMC";
	weaponInfoType = "rhs_acog2_usmc_pip_handler";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_31A_ARD";
};

class rhsusf_acc_ACOG3_USMC_pip: rhsusf_acc_ACOG3_pip
{
	rhs_optic_base = "rhsusf_acc_ACOG3_USMC";
	weaponInfoType = "rhs_acog3_usmc_pip_handler";
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_31A_ARD_L";
};

class rhsusf_acc_ACOG_RMR_pip: rhsusf_acc_ACOG_pip
{
	rhs_optic_base = "rhsusf_acc_ACOG_RMR";
	weaponInfoType = "rhs_acog_rmr_pip_handler";
	AUTHOR_MACRO
	displayName = "TA31RCO-RMR";

	model = "\rhsusf\addons\rhsusf_scopes\rmr\acog_rmr_pip";
};

class rhsusf_acc_ACOG_anpvs27: rhsusf_acc_ACOG
{
	INVENTORY_PICTURE(rhsusf_acc_ACOG_anpvs27)
	displayName = "M150 RCO + AN/PVS-27";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\pvs27\PVS_27_ACOG.p3d";
	scope = 2;
	AUTHOR_MACRO
	weaponInfoType = "RscWeaponZeroing";

	class ItemInfo: ItemInfo
	{
		opticType = 1;
		mass = 10;
		RMBhint = "Rifle Combat Optic + Night Vision";
		optics = 1;

		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_acog";

		class OpticsModes
		{
			class elcan_nvg
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","TankCommanderOptics1"};
				//top of arrow is pointing at 100m, rest of range adjustments is performed with
				//help of recticle markings
				discreteDistance[] = {100};
 				discreteDistanceInitIndex = 0;
				opticsZoomMin = 0.25/4;
				opticsZoomMax = 0.25/4;
				opticsZoomInit = 0.25/4;
				memoryPointCamera = "opticView";

				visionMode[] = {"NVG"};

				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 100;
				distanceZoomMax = 1000;
				cameraDir = "";
			};
		};
	};

	inertia = 0.2;
};


class rhsusf_acc_LEUPOLDMK4_2 : rhsusf_acc_sniper_base
{
	INVENTORY_PICTURE(rhsusf_acc_LEUPOLDMK4_2)
	displayName = $STR_RHSUSF_ACC_LEUPOLDMK402;
	scope=2;
	AUTHOR_MACRO
	weaponInfoType = "RscWeaponZeroing";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\leupoldmk4\leupoldmk4_2";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 8;
		RMBhint = "Optical Sniper Sight";
		optics = 1;

		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_leu_H58";
		class OpticsModes
		{
			///! 3.5-10X MAGNIFICATION -> 0.2492/4
			class pso1_scope
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
 				discreteDistanceInitIndex = 1;
				opticsZoomMax = 0.35/6.5;
				opticsZoomMin = 0.35/20;
				opticsZoomInit = 0.35/6.5;
				discretefov[] = {0.35/6.5,0.35/20};
 				discreteInitIndex = 0;
 				modelOptics[] = {"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_leu_H58", "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_leu_H58_20"};

				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 200;
				distanceZoomMax = 1000;
				cameraDir = "";
			};
		};
	};
};

class rhsusf_acc_LEUPOLDMK4_2_mrds : rhsusf_acc_LEUPOLDMK4_2
{
	scope = 2;
	displayName = $STR_RHSUSF_ACC_LEUPOLDMK402_SD_MRDS;
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\leupoldmk4\leupoldmk4_2_pt";
	
	class ItemInfo : ItemInfo
	{
		mass = 9;
		class OpticsModes : OpticsModes
		{
			class pso1_scope : pso1_scope {};
			class Mrds
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsZoomMin = 0.275;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				cameraDir = "";
			};
		};
	};
};

class rhsusf_acc_LEUPOLDMK4_2_d : rhsusf_acc_LEUPOLDMK4_2
{
	INVENTORY_PICTURE(rhsusf_acc_LEUPOLDMK4_2_d)
	displayName = $STR_RHSUSF_ACC_LEUPOLDMK402_SD_D;
	scope=2;
	AUTHOR_MACRO

	weaponInfoType = "RscWeaponZeroing";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\leupoldmk4\leupoldmk4_2_d";
};

class rhsusf_acc_premier : rhsusf_acc_LEUPOLDMK4_2
{
	INVENTORY_PICTURE(rhsusf_acc_premier)
	displayName = "M8541A SSDS";
	scope=2;
	AUTHOR_MACRO
	weaponInfoType = "RscWeaponZeroing";
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\ph_5_25x_56mm\prem_scope";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 8;
		RMBhint = "Optical Sniper Sight";
		optics = 1;

		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot3";

		class OpticsModes
		{
			///! 3-15X MAGNIFICATION -> 0.25/3
			class pso1_scope
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};

				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800};
 				discreteDistanceInitIndex = 1;

				opticsZoomMax = 0.25/3;
				opticsZoomMin = 0.25/15;
				opticsZoomInit = 0.25/3;

				discretefov[] = {0.25/3,0.25/6,0.25/9,0.25/12,0.25/15};
 				discreteInitIndex = 0;

 				modelOptics[] =
 				{
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot3",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot6",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot9",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot12",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot15"
 				};

				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 200;
				distanceZoomMax = 1800;
				cameraDir = "";
			};
		};
	};
};

class rhsusf_acc_premier_mrds : rhsusf_acc_premier
{
	scope = 2;
	displayName = "M8541A SSDS (MRDS)";
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\ph_5_25x_56mm\prem_scope_pt";
	
	class ItemInfo : ItemInfo
	{
		mass = 9;
		class OpticsModes : OpticsModes
		{
			class pso1_scope : pso1_scope {};
			class Mrds
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsZoomMin = 0.275;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				cameraDir = "";
			};
		};
	};
};

class rhsusf_acc_premier_low : rhsusf_acc_premier
{
	INVENTORY_PICTURE(rhsusf_acc_premier_low)
	displayName = "M8541A (low mount)";
	scope=2;
	AUTHOR_MACRO

	weaponInfoType = "RscWeaponZeroing";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\ph_5_25x_56mm\prem_scope_low";
};

class rhsusf_acc_premier_anpvs27 : rhsusf_acc_premier
{
	INVENTORY_PICTURE(rhsusf_acc_premier_anpvs27)
	displayName = "M8541A + AN/PVS-27";
	scope=2;
	AUTHOR_MACRO

	weaponInfoType = "RscWeaponZeroing";

	model = "\rhsusf\addons\rhsusf_weapons\acc\scopes\PVS27\PVS_27_M8451A";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 14;
		RMBhint = "Optical Sniper Sight + Night Vision Device";
		optics = 1;

		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot3";

		class OpticsModes
		{
			///! 3-15X MAGNIFICATION -> 0.25/3
			class pso1_nvg
			{
				opticsID = 2;
				useModelOptics = 1;

				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","TankCommanderOptics1"};

				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800};
 				discreteDistanceInitIndex = 1;

				opticsZoomMax = 0.25/3;
				opticsZoomMin = 0.25/15;
				opticsZoomInit = 0.25/3;

				discretefov[] = {0.25/3,0.25/6,0.25/9,0.25/12,0.25/15};
 				discreteInitIndex = 0;

 				modelOptics[] =
 				{
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot3",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot6",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot9",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot12",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot15"
 				};

				memoryPointCamera = "opticView";
				visionMode[] = {"NVG"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 200;
				distanceZoomMax = 1800;
				cameraDir = "";
			};
		};
	};

	inertia = 0.4;
};

class rhsusf_acc_M8541 : rhsusf_acc_premier
{
	INVENTORY_PICTURE(rhsusf_acc_M8541)
	scope = 2;
	displayName = "M8541";
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_scopes\sb_M8541\rhs_M8541";
	descriptionShort = "Magnification: 3-12x";
	weaponInfoType = "RscWeaponZeroing";
	inertia = 0.4;

	class ItemInfo : InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 8;
		RMBhint = "M8541";
		weaponInfoType = "RscWeaponRangeZeroingFOV";
		optics = true;
		modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot3";

		class OpticsModes
		{
			class Snip
			{
				opticsID = 1;
				opticsDisplayName = WFOV;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				opticsZoomMin = 0.02083;
				opticsZoomMax = 0.02778;
				opticsZoomInit = 0.075;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 3;
				distanceZoomMin = 100;
				distanceZoomMax = 1500;
				discretefov[] = {0.08333, 0.04167, 0.02778, 0.02083};
				discreteInitIndex = 1;
				memoryPointCamera = "opticView";
				modelOptics[] =
				{
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot3",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot6",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot9",
 					"\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_prem_mildot12"
				};
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				cameraDir = "";
			};
		};
	};
};
class rhsusf_acc_M8541_d : rhsusf_acc_M8541
{
	INVENTORY_PICTURE(rhsusf_acc_M8541_low_d)
	scope = 2;
	displayName = "M8541 (Desert)";
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_scopes\sb_M8541\camo\rhs_M8541_d1";
};

class rhsusf_acc_M8541_wd : rhsusf_acc_M8541
{
	INVENTORY_PICTURE(rhsusf_acc_M8541_low_wd)
	scope = 2;
	displayName = "M8541 (Woodland)";
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_scopes\sb_M8541\camo\rhs_M8541_wd1";
};


class rhsusf_acc_M8541_mrds : rhsusf_acc_M8541
{
	INVENTORY_PICTURE(rhsusf_acc_M8541_mrds)
	scope = 2;
	displayName = "M8541 (MRDS)";
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_scopes\sb_M8541\rhs_M8541_pt";
	
	class ItemInfo : ItemInfo
	{
		mass = 9;
		class OpticsModes : OpticsModes
		{
			class Snip : Snip {};
			class Mrds
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsZoomMin = 0.275;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				cameraDir = "";
			};
		};
	};
};

class rhsusf_acc_M8541_low : rhsusf_acc_M8541
{
	INVENTORY_PICTURE(rhsusf_acc_M8541_low)
	scope = 2;
	displayName = "M8541 (low mount)";
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_scopes\sb_M8541\rhs_M8541_low";
};

class rhsusf_acc_M8541_low_d : rhsusf_acc_M8541_low
{
	INVENTORY_PICTURE(rhsusf_acc_M8541_low_d)
	scope = 2;
	displayName = "M8541 (low mount/Desert)";
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_scopes\sb_M8541\camo\rhs_M8541_d1_low";
};

class rhsusf_acc_M8541_low_wd : rhsusf_acc_M8541_low
{
	INVENTORY_PICTURE(rhsusf_acc_M8541_low_wd)
	scope = 2;
	displayName = "M8541 (low mount/Woodland)";
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_scopes\sb_M8541\camo\rhs_M8541_wd1_low";
};
//Nightforce scopes
class rhsusf_acc_nxs_3515x50_base : ItemCore
{
	scope = 1;
	INVENTORY_PICTURE(rhsusf_acc_nxs_3515x50_md)
	dlc = "RHS_USAF";
	AUTHOR_MACRO
	displayName = "NXS 3.5-15x50";
	model = "\rhsusf\addons\rhsusf_scopes\nf\rhs_nxs_3515x50";
	descriptionShort = "Reticle: Second focal plane<br />Magnification: 3.5-15x";
	weaponInfoType = "RscWeaponZeroing";
	inertia = 0.2;
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 8;
		RMBhint = "Optical Sight";
		optics = 1;
		modelOptics = "\rhsusf\addons\rhsusf_scopes\optics\nf\f2\rhsusf_nxs_15xf2_mildot";
		class OpticsModes
		{
			///! 3.5-15X MAGNIFICATION -> 0.25/3.5
			class nxs_scope
			{
				opticsID						= 2;
				useModelOptics					= 1;
				opticsPPEffects[]				= {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[]				= {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex		= 3;
				opticsZoomMin					= 0.25/15;
				opticsZoomMax					= 0.25/3.5;
				opticsZoomInit					= 0.25/15;
				memoryPointCamera				= "opticView";
				visionMode[]					= {"Normal"};
				opticsFlare						= 1;
				opticsDisablePeripherialVision	= 1;
				distanceZoomMin					= 200;
				distanceZoomMax					= 1800;
				cameraDir						= "";
			};
		};
	};
};
class rhsusf_acc_nxs_3515x50_md : rhsusf_acc_nxs_3515x50_base
{
	scope = 2;
	dlc = "RHS_USAF";
	AUTHOR_MACRO
	displayName = "NXS 3.5-15x50 (mil-dot)";
	descriptionShort = "Reticle: Second focal plane mildot<br />Magnification: 3.5-15x";
	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsusf\addons\rhsusf_scopes\optics\nf\f2\rhsusf_nxs_15xf2_mildot";
	};
};
class rhsusf_acc_nxs_3515x50f1_base : rhsusf_acc_sniper_base
{
	scope = 1;
	INVENTORY_PICTURE(rhsusf_acc_nxs_3515x50_md)
	dlc = "RHS_USAF";
	AUTHOR_MACRO
	displayName = "NXS 3.5-15x50 F1";
	model = "\rhsusf\addons\rhsusf_scopes\nf\rhs_nxs_3515x50";
	descriptionShort = "Reticle: First focal plane<br />Magnification: 3.5-15x";
	weaponInfoType = "RscWeaponZeroing";
	inertia = 0.2;
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 8;
		RMBhint = "Optical Sniper Sight";
		optics = 1;
		modelOptics = "\rhsusf\addons\rhsusf_scopes\optics\nf\f1\rhsusf_nxs_15xf1_mildot";
		class OpticsModes
		{
			///! 3.5-15X MAGNIFICATION -> 0.25/3.5
			class nxs_scope
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800};
				discreteDistanceInitIndex = 1;
				opticsZoomMax = 0.25/3;
				opticsZoomMin = 0.25/15;
				opticsZoomInit = 0.25/3;
				discretefov[] = {0.25/3.5,0.25/6,0.25/9,0.25/12,0.25/15};
				discreteInitIndex = 0;
				modelOptics[] =
				{
					"\rhsusf\addons\rhsusf_scopes\optics\nf\f1\rhsusf_nxs_3-5xf1_mildot",
					"\rhsusf\addons\rhsusf_scopes\optics\nf\f1\rhsusf_nxs_6xf1_mildot",
					"\rhsusf\addons\rhsusf_scopes\optics\nf\f1\rhsusf_nxs_9xf1_mildot",
					"\rhsusf\addons\rhsusf_scopes\optics\nf\f1\rhsusf_nxs_12xf1_mildot",
					"\rhsusf\addons\rhsusf_scopes\optics\nf\f1\rhsusf_nxs_15xf1_mildot"
				};
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 200;
				distanceZoomMax = 1800;
				cameraDir = "";
			};
		};
	};
};
class rhsusf_acc_nxs_3515x50f1_md : rhsusf_acc_nxs_3515x50f1_base
{
	scope = 2;
	dlc = "RHS_USAF";
	AUTHOR_MACRO
	displayName = "NXS 3.5-15x50 F1 (mil-dot)";
	descriptionShort = "Reticle: First focal plane mildot<br />Magnification: 3.5-15x";
	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsusf\addons\rhsusf_scopes\optics\nf\f1\rhsusf_nxs_15xf1_mildot";
		class OpticsModes: OpticsModes
		{
			///! 3.5-15X MAGNIFICATION -> 0.25/3.5
			class nxs_scope: nxs_scope
			{
				modelOptics[] =
				{
					"\rhsusf\addons\rhsusf_scopes\optics\nf\f1\rhsusf_nxs_3-5xf1_mildot",
					"\rhsusf\addons\rhsusf_scopes\optics\nf\f1\rhsusf_nxs_6xf1_mildot",
					"\rhsusf\addons\rhsusf_scopes\optics\nf\f1\rhsusf_nxs_9xf1_mildot",
					"\rhsusf\addons\rhsusf_scopes\optics\nf\f1\rhsusf_nxs_12xf1_mildot",
					"\rhsusf\addons\rhsusf_scopes\optics\nf\f1\rhsusf_nxs_15xf1_mildot"
				};
			};
		};
	};
};
class rhsusf_acc_nxs_3515x50f1_md_sun : rhsusf_acc_nxs_3515x50f1_md
{
	scope = 2;
	INVENTORY_PICTURE(rhsusf_acc_nxs_3515x50f1_md_sun)
	dlc = "RHS_USAF";
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_scopes\nf\rhs_nxs_3515x50_sun";
	displayName = "NXS 3.5-15x50 F1 (sunshade/mil-dot)";
};
class rhsusf_acc_nxs_3515x50f1_h58 : rhsusf_acc_nxs_3515x50f1_base
{
	scope = 2;
	dlc = "RHS_USAF";
	AUTHOR_MACRO
	displayName = "NXS 3.5-15x50 F1 (H58)";
	descriptionShort = "Reticle: First focal plane H58<br />Magnification: 3.5-15x";
	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsusf\addons\rhsusf_scopes\optics\nf\f1\rhsusf_nxs_15xf1_h58";
		class OpticsModes: OpticsModes
		{
			///! 3.5-15X MAGNIFICATION -> 0.25/3.5
			class nxs_scope: nxs_scope
			{
				modelOptics[] =
				{
					"\rhsusf\addons\rhsusf_scopes\optics\nf\f1\rhsusf_nxs_3-5xf1_h58",
					"\rhsusf\addons\rhsusf_scopes\optics\nf\f1\rhsusf_nxs_6xf1_h58",
					"\rhsusf\addons\rhsusf_scopes\optics\nf\f1\rhsusf_nxs_9xf1_h58",
					"\rhsusf\addons\rhsusf_scopes\optics\nf\f1\rhsusf_nxs_12xf1_h58",
					"\rhsusf\addons\rhsusf_scopes\optics\nf\f1\rhsusf_nxs_15xf1_h58"
				};
			};
		};
	};
};
class rhsusf_acc_nxs_3515x50f1_h58_sun : rhsusf_acc_nxs_3515x50f1_h58
{
	scope = 2;
	INVENTORY_PICTURE(rhsusf_acc_nxs_3515x50f1_md_sun)
	dlc = "RHS_USAF";
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_scopes\nf\rhs_nxs_3515x50_sun";
	displayName = "NXS 3.5-15x50 F1 (sunshade/H58)";
};
class rhsusf_acc_nxs_5522x56_base : ItemCore
{
	scope = 1;
	INVENTORY_PICTURE(rhsusf_acc_nxs_5522x56_md)
	dlc = "RHS_USAF";
	AUTHOR_MACRO
	displayName = "NXS 5.5-22x56";
	model = "\rhsusf\addons\rhsusf_scopes\nf\rhs_nxs_5522x56";
	descriptionShort = "Reticle: Second focal plane<br />Magnification: 5.5-22x";
	weaponInfoType = "RscWeaponZeroing";
	inertia = 0.2;
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		opticType = 2;
		mass = 13.64;
		RMBhint = "Optical Sight";
		optics = 1;
		modelOptics = "\rhsusf\addons\rhsusf_scopes\optics\nf\f2\rhsusf_nxs_22xf2_mildot";
		class OpticsModes
		{
			///! 5.5-22X MAGNIFICATION -> 0.25/5.5
			class nxs_scope
			{
				opticsID						= 2;
				useModelOptics					= 1;
				opticsPPEffects[]				= {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[]				= {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex		= 3;
				opticsZoomMin					= 0.25/22;
				opticsZoomMax					= 0.25/5.5;
				opticsZoomInit					= 0.25/22;
				memoryPointCamera				= "opticView";
				visionMode[]					= {"Normal"};
				opticsFlare						= 1;
				opticsDisablePeripherialVision	= 1;
				distanceZoomMin					= 200;
				distanceZoomMax					= 1800;
				cameraDir						= "";
			};
		};
	};
};
class rhsusf_acc_nxs_5522x56_md : rhsusf_acc_nxs_5522x56_base
{
	scope = 2;
	dlc = "RHS_USAF";
	AUTHOR_MACRO
	displayName = "NXS 5.5-22x56 (mil-dot)";
	descriptionShort = "Reticle: Second focal plane mildot<br />Magnification: 5.5-22x";
	class ItemInfo: ItemInfo
	{
		modelOptics = "\rhsusf\addons\rhsusf_scopes\optics\nf\f2\rhsusf_nxs_22xf2_mildot";
	};
};
class rhsusf_acc_nxs_5522x56_md_sun : rhsusf_acc_nxs_5522x56_md
{
	scope = 2;
	INVENTORY_PICTURE(rhsusf_acc_nxs_5522x56_md_sun)
	dlc = "RHS_USAF";
	AUTHOR_MACRO
	model = "\rhsusf\addons\rhsusf_scopes\nf\rhs_nxs_5522x56_sun";
	displayName = "NXS 5.5-22x56 (sunshade/mil-dot)";
};

class rhsusf_acc_EOTECH : optic_Holosight
{
	INVENTORY_PICTURE(rhsusf_acc_EOTECH)
	displayName = "$STR_RHSUSF_ACC_EOTECH_EXPS";
	author = "Bohemia Interactive";
	scope=2;
	descriptionShort = "$STR_RHSUSF_ACC_COLLIMATOR_SD";
	dlc = "RHS_USAF";

	inertia = 0;
};

class rhsusf_acc_M2A1: rhsusf_acc_compm4
{
	INVENTORY_PICTURE(rhsusf_acc_M2A1)
	AUTHOR_MACRO
	displayName = "$STR_RHSUSF_ACC_M2A1";

	model = "\rhsusf\addons\rhsusf_weapons2\M32\rhs_m2a1";

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class ACO: ACO
			{
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
		};
	};
};

class rhsusf_acc_eotech_xps3 : optic_Holosight
{
	INVENTORY_PICTURE(rhsusf_acc_eotech_xps3)
	AUTHOR_MACRO
	dlc = "RHS_USAF";
	displayName = "$STR_RHSUSF_ACC_EOTECH";
	descriptionShort = "$STR_RHSUSF_ACC_COLLIMATOR_SD";

	model = "\rhsusf\addons\rhsusf_weapons2\acc\scopes\xps3\rhs_xps3";

	inertia = 0;
};

class rhsusf_acc_ACOG_MDO : ItemCore {
	scope = public;
	displayName = "SU-260/P (MDO)";
	AUTHOR_MACRO
	dlc = "RHS_USAF";
	INVENTORY_PICTURE(rhsusf_acc_ACOG_MDO)
	model = "\rhsusf\addons\rhsusf_scopes\mdo\rhs_ta648mdo";
	descriptionShort = "Machine Gun Day Optic<br />ACOG TA648MDO<br />Magnification: 6x<br />RMR<br />Magnification: 1x";
	weaponInfoType = "RscWeaponZeroing";
	inertia = 0.4;

	class ItemInfo : InventoryOpticsItem_Base_F {
		opticType = 2;
		mass = 11;
		RMBhint = "MDO";
		weaponInfoType = "RscWeaponZeroing";
		optics = true;
		modelOptics = "\rhsusf\addons\rhsusf_scopes\optics\mdo\rhs_ta648-mdo";

		class OpticsModes {

			class RMR
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsFlare = false;
				opticsDisablePeripherialVision = false;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.125;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				cameraDir = "";
			};

			class ACOGMDO
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1","rhs_m150_Blur"};
				opticsZoomMin = 0.04167;
				opticsZoomMax = 0.04167;
				opticsZoomInit = 0.04167;
				memoryPointCamera = "opticView";
				modelOptics[] = {"\rhsusf\addons\rhsusf_scopes\optics\mdo\rhs_ta648-mdo"};
				visionMode[] = {"Normal"};
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				discreteInitIndex = 0;
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
			};
		};
	};
};

//////G33 Variants//////

//G33 + XPS3 (Black)
//2D magnified
class rhsusf_acc_g33_xps3 : ItemCore
{
	INVENTORY_PICTURE(rhsusf_acc_g33_xps3)
	scope = 2;
	displayName = $STR_RHSUSF_ACC_G33_XPS3;
	AUTHOR_MACRO
	dlc = "RHS_USAF";
	descriptionShort =  "Magnifier<br />Magnification: 4x";
	weaponInfoType = "rhs_rscOptics_combo_optics";

	model = "\rhsusf\addons\rhsusf_weapons3\acc\scopes\G33\g33_xps3";

	rhs_accessory_next = "rhsusf_acc_g33_xps3_flip";

	inertia = 0;

	class ItemInfo : InventoryOpticsItem_Base_F {
		opticType = 1;
		mass = 6;
		RMBhint = "Magnifier";
		weaponInfoType = "RscWeaponZeroing";
		optics = true;
		modelOptics = "\rhsusf\addons\rhsusf_weapons3\acc\scopes\optics\rhsusf_g33_eotech";

		class OpticsModes {
			class MAG
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1","rhs_g33_Blur"};
				opticsZoomMin = 0.08333;
				opticsZoomMax = 0.08333;
				opticsZoomInit = 0.08333;
				memoryPointCamera = "eye";
				modelOptics[] = {"\rhsusf\addons\rhsusf_weapons3\acc\scopes\optics\rhsusf_g33_eotech"};
				visionMode[] = {"Normal"};
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				discreteInitIndex = 0;
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
			};
		};
	};
};
//Unmagnified
class rhsusf_acc_g33_xps3_flip : optic_Holosight
{
	INVENTORY_PICTURE(rhsusf_acc_g33_xps3_flip)
	scope = 1;
	displayName = $STR_RHSUSF_ACC_G33_XPS3;
	AUTHOR_MACRO
	dlc = "RHS_USAF";
	descriptionShort = "STR_RHSUSF_ACC_COLLIMATOR_SD";
	weaponInfoType = "rhs_rscOptics_combo_optics";

	model = "rhsusf\addons\rhsusf_weapons3\acc\scopes\G33\g33_xps3_flip";

	rhs_accessory_next = "rhsusf_acc_g33_xps3";

	inertia = 0;
};

//G33 + XPS3 (Tan G33)
//2D magnified
class rhsusf_acc_g33_xps3_tan : rhsusf_acc_g33_xps3
{
	INVENTORY_PICTURE(rhsusf_acc_g33_xps3_tan)
	scope = 2;
	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_G33_XPS3_TAN;

	model = "\rhsusf\addons\rhsusf_weapons3\acc\scopes\G33\g33_xps3_tan";

	rhs_accessory_next = "rhsusf_acc_g33_xps3_tan_flip";
};
//Unmagnified
class rhsusf_acc_g33_xps3_tan_flip : rhsusf_acc_g33_xps3_flip
{
	INVENTORY_PICTURE(rhsusf_acc_g33_xps3_tan_flip)
	scope = 1;
	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_G33_XPS3_TAN;

	model = "rhsusf\addons\rhsusf_weapons3\acc\scopes\G33\g33_xps3_tan_flip";

	rhs_accessory_next = "rhsusf_acc_g33_xps3_tan";
};

//G33 + T1
class rhsusf_acc_g33_T1 : rhsusf_acc_g33_xps3
{
	INVENTORY_PICTURE(rhsusf_acc_g33_T1)
	scope = 2;
	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_G33_T1;

	model = "\rhsusf\addons\rhsusf_weapons3\acc\scopes\G33\g33_T1";

	rhs_accessory_next = "rhsusf_acc_g33_T1_flip";
};
//Unmagnified
class rhsusf_acc_g33_T1_flip : rhsusf_acc_g33_xps3_flip
{
	INVENTORY_PICTURE(rhsusf_acc_g33_T1_flip)
	scope = 1;
	AUTHOR_MACRO
	displayName = $STR_RHSUSF_ACC_G33_T1;

	model = "\rhsusf\addons\rhsusf_weapons3\acc\scopes\G33\g33_T1_flip";

	rhs_accessory_next = "rhsusf_acc_g33_T1";
};

// SMAW Optic
class rhs_weap_optic_smaw: ItemCore
{
	////INVENTORY_PICTURE(rhs_weap_optic_smaw)
	dlc = "RHS_USAF";

	useAsBinocular=1;
	AUTHOR_MACRO
	scope = 2;
	displayName = "SMAW sight";
	picture = "\rhsusf\addons\rhsusf_weapons2\smaw\UI\scope_CA.paa";
	model = "rhsusf\addons\rhsusf_weapons2\smaw\optic_smaw.p3d";
	descriptionShort = "Optical Sight for the SMAW";
	weaponInfoType = "RscWeaponZeroing";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass = 8;
		opticType = 1;
		optics = 1;
		modelOptics = "rhsusf\addons\rhsusf_weapons2\smaw\optic_smaw_2d.p3d";

		class OpticsModes
		{
			class optic
			{

				opticsID = 1;

				useModelOptics = 1;
				opticsZoomMin = 0.07;
				opticsZoomMax = 0.07;
				opticsZoomInit = 0.07;//0.1083;
	   			discreteDistance[] = {50,100,150,200,250,300,350,400,450,500};
	   			discreteDistanceInitIndex = 0;
				discreteDistanceCameraPoint[] = {"eye_1", "eye_2", "eye_3", "eye_4","eye_5", "eye_6", "eye_7", "eye_8", "eye_9", "eye_10"};
			//	memoryPointCamera = "eye";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 0;
				cameraDir = "look";
				visionMode[] = {};
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur5"};
				distancezoommin=50;
				distancezoommax=50;
			};
		};
	};
	inertia = 0.0;
};

class rhs_weap_optic_smaw_1: rhs_weap_optic_smaw
{
	AUTHOR_MACRO
	ArsenalDisabled

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=50;
				distancezoommax=50;
				discreteInitIndex = 0;
				discreteDistanceInitIndex = 0;
			};
		};
	};
};

class rhs_weap_optic_smaw_2: rhs_weap_optic_smaw_1
{
	AUTHOR_MACRO

	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=100;
				distancezoommax=100;
				discreteInitIndex = 1;
				discreteDistanceInitIndex = 1;
			};
		};
	};
};

class rhs_weap_optic_smaw_3: rhs_weap_optic_smaw_1
{
	AUTHOR_MACRO
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=150;
				distancezoommax=150;
				discreteInitIndex = 2;
				discreteDistanceInitIndex = 2;
			};
		};
	};
};

class rhs_weap_optic_smaw_4: rhs_weap_optic_smaw_1
{
	AUTHOR_MACRO
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=200;
				distancezoommax=200;
				discreteInitIndex = 3;
				discreteDistanceInitIndex = 3;
			};
		};
	};
};

class rhs_weap_optic_smaw_5: rhs_weap_optic_smaw_1
{
	AUTHOR_MACRO
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=250;
				distancezoommax=250;
				discreteInitIndex = 4;
				discreteDistanceInitIndex = 4;
			};
		};
	};
};

class rhs_weap_optic_smaw_6: rhs_weap_optic_smaw_1
{
	AUTHOR_MACRO
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=300;
				distancezoommax=300;
				discreteInitIndex = 5;
				discreteDistanceInitIndex = 5;
			};
		};
	};
};

class rhs_weap_optic_smaw_7: rhs_weap_optic_smaw_1
{
	AUTHOR_MACRO
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=350;
				distancezoommax=350;
				discreteInitIndex = 6;
				discreteDistanceInitIndex = 6;
			};
		};
	};
};

class rhs_weap_optic_smaw_8: rhs_weap_optic_smaw_1
{
	AUTHOR_MACRO
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=400;
				distancezoommax=400;
				discreteInitIndex = 7;
				discreteDistanceInitIndex = 7;
			};
		};
	};
};

class rhs_weap_optic_smaw_9: rhs_weap_optic_smaw_1
{
	AUTHOR_MACRO
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=450;
				distancezoommax=450;
				discreteInitIndex = 8;
				discreteDistanceInitIndex = 8;
			};
		};
	};
};

class rhs_weap_optic_smaw_10: rhs_weap_optic_smaw_1
{
	AUTHOR_MACRO
	class ItemInfo: ItemInfo
	{
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distancezoommin=500;
				distancezoommax=500;
				discreteInitIndex = 9;
				discreteDistanceInitIndex = 9;
			};
		};
	};
};

class rhs_optic_maaws: ItemCore
{
	//INVENTORY_PICTURE(rhs_optic_maaws)
	AUTHOR_MACRO
	scope = 2;
	displayName = "M3 MAAWS sight";
	picture = "\rhsusf\addons\rhsusf_weapons2\m3maaws\UI\gear_scope_CA.paa";
	model = "rhsusf\addons\rhsusf_weapons2\m3maaws\optic_m3maaws.p3d";
	descriptionShort = "Optical Sight for the M3 MAAWS";
	weaponInfoType = "RscWeaponZeroing";

	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass = 8;
		opticType = 0;
		optics = 2;
		modelOptics = "rhsusf\addons\rhsusf_weapons2\m3maaws\optic_m3maaws.p3d";

		class OpticsModes
		{
			class optic
			{
				distanceZoomMin = 100;
				distanceZoomMax = 900;

				opticsID = 1;

				opticType = 1;
				modelOptics[]=
				{
					"rhsusf\addons\rhsusf_weapons2\m3maaws\optic_m3maaws_2d"
				};
				useModelOptics = 1;
				opticsZoomMin = 0.1538;	//0.1083; 0.125
				opticsZoomMax = 0.1538;	//0.1083;
				opticsZoomInit = 0.1538;//0.1083;
   				discreteDistance[] = {100,200,300,400,500, 600, 700, 800, 900};
   				discreteDistanceInitIndex = 0;
				discreteDistanceCameraPoint[] = {"eye_1", "eye_2", "eye_3", "eye_4","eye_5", "eye_6", "eye_7", "eye_8", "eye_9"};
			//	memoryPointCamera = "eye";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 0;
				cameraDir = "look2";
				visionMode[] = {};
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur5"};
			};
		};
	};
	inertia = 0.1;
};