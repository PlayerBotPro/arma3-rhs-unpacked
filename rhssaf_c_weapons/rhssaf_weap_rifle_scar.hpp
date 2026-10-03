//////////////////
///////call///////
///Base Classes///
//////////////////
class rhs_weap_SCAR_H_Base;
class rhs_weap_SCAR_H_CQC_Base : rhs_weap_SCAR_H_Base
{
	class WeaponSlotsInfo;
	class Single;
	class Fullauto;
};
class rhs_weap_SCAR_H_STD_Base : rhs_weap_SCAR_H_Base
{
	class WeaponSlotsInfo;
	class Single;
	class Fullauto;
};
class rhs_weap_SCAR_H_LB_Base : rhs_weap_SCAR_H_Base
{
	class WeaponSlotsInfo;
	class Single;
	class Fullauto;
};

//////////////////
//////SCAR-H//////
//Ingame Classes//
//////////////////
class rhs_weap_SCARH_CQC : rhs_weap_SCAR_H_CQC_Base
{
	DLC_AUTHOR;
	scope 				= 2;
	INVENTORY_PICTURE(rhs_weap_SCARH_CQC)
	model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH_CQC";
	hiddenSelectionsTextures[] =
	{
		"rhssaf\addons\rhssaf_t_weapon_scar\data\scarh_blk_co.paa"
	};
	magazines[]			= {"rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk","rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk","rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk","rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk","rhs_mag_20Rnd_SCAR_762x51_m118_special_bk"};
	displayName 		= "SCAR-H (CQC)";
	baseweapon			= "rhs_weap_SCARH_CQC";
	rhs_grip1_change 	= "rhs_weap_SCARH_CQC_grip";
	rhs_grip2_change 	= "rhs_weap_SCARH_CQC_grip3";
	rhs_grip3_change 	= "rhs_weap_SCARH_CQC_grip2";
	rhs_fold = "rhs_weap_SCARH_CQC_Folded";
};
class rhs_weap_SCARH_CQC_grip : rhs_weap_SCARH_CQC
{
	DLC_AUTHOR;
	GRIP_MACRO_US(1,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_CQC_Folded_grip";
};
class rhs_weap_SCARH_CQC_grip2 : rhs_weap_SCARH_CQC
{
	DLC_AUTHOR;
	GRIP_MACRO_US(3,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_CQC_Folded_grip2";
};
class rhs_weap_SCARH_CQC_grip3 : rhs_weap_SCARH_CQC
{
	DLC_AUTHOR;
	GRIP_MACRO_US(2,SCAR_afg)
	rhs_fold = "rhs_weap_SCARH_CQC_Folded_grip3";
};
class rhs_weap_SCARH_STD : rhs_weap_SCAR_H_STD_Base
{
	DLC_AUTHOR;
	scope 				= 2;
	INVENTORY_PICTURE(rhs_weap_SCARH_STD)
	model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH";
	hiddenSelectionsTextures[] =
	{
		"rhssaf\addons\rhssaf_t_weapon_scar\data\scarh_blk_co.paa"
	};
	magazines[]			= {"rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk","rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk","rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk","rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk","rhs_mag_20Rnd_SCAR_762x51_m118_special_bk"};
	displayName			= "SCAR-H (STD)";
	baseweapon			= "rhs_weap_SCARH_STD";
	rhs_grip1_change	= "rhs_weap_SCARH_STD_grip";
	rhs_grip2_change	= "rhs_weap_SCARH_STD_grip3";
	rhs_grip3_change	= "rhs_weap_SCARH_STD_grip2";
	rhs_fold = "rhs_weap_SCARH_STD_Folded";
};
class rhs_weap_SCARH_STD_grip : rhs_weap_SCARH_STD
{
	DLC_AUTHOR;
	GRIP_MACRO_US(1,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_STD_Folded_grip";
};
class rhs_weap_SCARH_STD_grip2 : rhs_weap_SCARH_STD
{
	DLC_AUTHOR;
	GRIP_MACRO_US(3,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_STD_Folded_grip2";
};
class rhs_weap_SCARH_STD_grip3 : rhs_weap_SCARH_STD
{
	DLC_AUTHOR;
	GRIP_MACRO_US(2,SCAR_afg)
	rhs_fold = "rhs_weap_SCARH_STD_Folded_grip3";
};
class rhs_weap_SCARH_LB : rhs_weap_SCAR_H_LB_Base
{
	DLC_AUTHOR;
	scope				= 2;
	INVENTORY_PICTURE(rhs_weap_SCARH_LB)
	model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH_LB";
	hiddenSelectionsTextures[] =
	{
		"rhssaf\addons\rhssaf_t_weapon_scar\data\scarh_blk_co.paa"
	};
	magazines[]			= {"rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk","rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk","rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk","rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk","rhs_mag_20Rnd_SCAR_762x51_m118_special_bk"};
	displayName			= "SCAR-H (LB)";
	baseweapon			= "rhs_weap_SCARH_LB";
	rhs_grip1_change	= "rhs_weap_SCARH_LB_grip";
	rhs_grip2_change	= "rhs_weap_SCARH_LB_grip3";
	rhs_grip3_change	= "rhs_weap_SCARH_LB_grip2";
	rhs_fold = "rhs_weap_SCARH_LB_Folded";
};
class rhs_weap_SCARH_LB_grip : rhs_weap_SCARH_LB
{
	DLC_AUTHOR;
	GRIP_MACRO_US(1,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_LB_Folded_grip";
};
class rhs_weap_SCARH_LB_grip2 : rhs_weap_SCARH_LB
{
	DLC_AUTHOR;
	GRIP_MACRO_US(3,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_LB_Folded_grip2";
};
class rhs_weap_SCARH_LB_grip3 : rhs_weap_SCARH_LB
{
	DLC_AUTHOR;
	GRIP_MACRO_US(2,SCAR_afg)
	rhs_fold = "rhs_weap_SCARH_LB_Folded_grip3";
};

///Tan/FDE SCARs//

class rhs_weap_SCARH_FDE_CQC : rhs_weap_SCARH_CQC
{
	DLC_AUTHOR;
	INVENTORY_PICTURE(rhs_weap_SCARH_FDE_CQC)
	hiddenSelectionsTextures[] =
	{
		"rhssaf\addons\rhssaf_t_weapon_scar\data\scarh_tan_co.paa"
	};
	displayName 		= "SCAR-H (CQC)";
	baseweapon			= "rhs_weap_SCARH_FDE_CQC";
	rhs_grip1_change 	= "rhs_weap_SCARH_FDE_CQC_grip";
	rhs_grip2_change 	= "rhs_weap_SCARH_FDE_CQC_grip3";
	rhs_grip3_change 	= "rhs_weap_SCARH_FDE_CQC_grip2";
	rhs_fold = "rhs_weap_SCARH_FDE_CQC_Folded";
};
class rhs_weap_SCARH_FDE_CQC_grip : rhs_weap_SCARH_FDE_CQC
{
	DLC_AUTHOR;
	GRIP_MACRO_US(1,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_FDE_CQC_Folded_grip";
};
class rhs_weap_SCARH_FDE_CQC_grip2 : rhs_weap_SCARH_FDE_CQC
{
	DLC_AUTHOR;
	GRIP_MACRO_US(3,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_FDE_CQC_Folded_grip2";
};
class rhs_weap_SCARH_FDE_CQC_grip3 : rhs_weap_SCARH_FDE_CQC
{
	DLC_AUTHOR;
	GRIP_MACRO_US(2,SCAR_afg)
	rhs_fold = "rhs_weap_SCARH_FDE_CQC_Folded_grip3";
};
class rhs_weap_SCARH_FDE_STD : rhs_weap_SCARH_STD
{
	DLC_AUTHOR;
	INVENTORY_PICTURE(rhs_weap_SCARH_FDE_STD)
	hiddenSelectionsTextures[] =
	{
		"rhssaf\addons\rhssaf_t_weapon_scar\data\scarh_tan_co.paa"
	};
	displayName 		= "SCAR-H (STD)";
	baseweapon			= "rhs_weap_SCARH_FDE_STD";
	rhs_grip1_change	= "rhs_weap_SCARH_FDE_STD_grip";
	rhs_grip2_change	= "rhs_weap_SCARH_FDE_STD_grip3";
	rhs_grip3_change	= "rhs_weap_SCARH_FDE_STD_grip2";
	rhs_fold			= "rhs_weap_SCARH_FDE_STD_Folded";
};
class rhs_weap_SCARH_FDE_STD_grip : rhs_weap_SCARH_FDE_STD
{
	DLC_AUTHOR;
	GRIP_MACRO_US(1,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_FDE_STD_Folded_grip";
};
class rhs_weap_SCARH_FDE_STD_grip2 : rhs_weap_SCARH_FDE_STD
{
	DLC_AUTHOR;
	GRIP_MACRO_US(3,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_FDE_STD_Folded_grip2";
};
class rhs_weap_SCARH_FDE_STD_grip3 : rhs_weap_SCARH_FDE_STD
{
	DLC_AUTHOR;
	GRIP_MACRO_US(2,SCAR_afg)
	rhs_fold = "rhs_weap_SCARH_FDE_STD_Folded_grip3";
};
class rhs_weap_SCARH_FDE_LB : rhs_weap_SCARH_LB
{
	DLC_AUTHOR;
	INVENTORY_PICTURE(rhs_weap_SCARH_FDE_LB)
	hiddenSelectionsTextures[] =
	{
		"rhssaf\addons\rhssaf_t_weapon_scar\data\scarh_tan_co.paa"
	};
	displayName 		= "SCAR-H (LB)";
	baseweapon			= "rhs_weap_SCARH_FDE_LB";
	rhs_grip1_change	= "rhs_weap_SCARH_FDE_LB_grip";
	rhs_grip2_change	= "rhs_weap_SCARH_FDE_LB_grip3";
	rhs_grip3_change	= "rhs_weap_SCARH_FDE_LB_grip2";
	rhs_fold			= "rhs_weap_SCARH_FDE_LB_Folded";
};
class rhs_weap_SCARH_FDE_LB_grip : rhs_weap_SCARH_FDE_LB
{
	DLC_AUTHOR;
	GRIP_MACRO_US(1,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_FDE_LB_Folded_grip";
};
class rhs_weap_SCARH_FDE_LB_grip2 : rhs_weap_SCARH_FDE_LB
{
	DLC_AUTHOR;
	GRIP_MACRO_US(3,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_FDE_LB_Folded_grip2";
};
class rhs_weap_SCARH_FDE_LB_grip3 : rhs_weap_SCARH_FDE_LB
{
	DLC_AUTHOR;
	GRIP_MACRO_US(2,SCAR_afg)
	rhs_fold = "rhs_weap_SCARH_FDE_LB_Folded_grip3";
};

//////////////////
//////SCAR-H//////
//Folded Classes//
//////////////////
class rhs_weap_SCARH_CQC_Folded : rhs_weap_SCARH_CQC
{
	DLC_AUTHOR;
	scopeArsenal 		= 0;
	baseweapon			= "rhs_weap_SCARH_CQC_Folded";
	INVENTORY_PICTURE(rhs_weap_SCARH_CQC_folded)
	displayName 		= "SCAR-H (CQC) Folded";
	// Core
	model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH_CQC_folded";
// Inventory
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 76.78;
	};
// Shooting
	initSpeed			= -0.93;
	recoil 				= "rhs_weap_scarh_folded_recoil";
	rhs_grip1_change	= "rhs_weap_SCARH_CQC_Folded_grip";
	rhs_grip2_change	= "rhs_weap_SCARH_CQC_Folded_grip3";
	rhs_grip3_change	= "rhs_weap_SCARH_CQC_Folded_grip2";
	rhs_fold			= "rhs_weap_SCARH_CQC";
	rhs_fold_anim		= "RHS_GestureUnfoldSCAR";
};
class rhs_weap_SCARH_CQC_Folded_grip : rhs_weap_SCARH_CQC_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO_US(1,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_CQC_grip";
};
class rhs_weap_SCARH_CQC_Folded_grip2 : rhs_weap_SCARH_CQC_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO_US(3,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_CQC_grip2";
};
class rhs_weap_SCARH_CQC_Folded_grip3 : rhs_weap_SCARH_CQC_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO_US(2,SCAR_afg)
	rhs_fold = "rhs_weap_SCARH_CQC_grip3";
};
class rhs_weap_SCARH_STD_Folded : rhs_weap_SCARH_STD
{
	DLC_AUTHOR;
	scopeArsenal 		= 0;
	baseweapon			= "rhs_weap_SCARH_STD_Folded";
	INVENTORY_PICTURE(rhs_weap_SCARH_STD_folded)
	displayName 		= "SCAR-H (STD) Folded";
	// Core
	model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH_folded";
// Inventory
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 76.78;
	};
// Shooting
	initSpeed			= -0.93;
	recoil 				= "rhs_weap_scarh_folded_recoil";
	rhs_grip1_change	= "rhs_weap_SCARH_STD_Folded_grip";
	rhs_grip2_change	= "rhs_weap_SCARH_STD_Folded_grip3";
	rhs_grip3_change	= "rhs_weap_SCARH_STD_Folded_grip2";
	rhs_fold			= "rhs_weap_SCARH_STD";
	rhs_fold_anim		= "RHS_GestureUnfoldSCAR";
};
class rhs_weap_SCARH_STD_Folded_grip : rhs_weap_SCARH_STD_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO_US(1,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_STD_grip";
};
class rhs_weap_SCARH_STD_Folded_grip2 : rhs_weap_SCARH_STD_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO_US(3,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_STD_grip2";
};
class rhs_weap_SCARH_STD_Folded_grip3 : rhs_weap_SCARH_STD_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO_US(2,SCAR_afg)
	rhs_fold = "rhs_weap_SCARH_STD_grip3";
};
class rhs_weap_SCARH_LB_Folded : rhs_weap_SCARH_LB
{
	DLC_AUTHOR;
	scopeArsenal 		= 0;
	baseweapon			= "rhs_weap_SCARH_LB_Folded";
	INVENTORY_PICTURE(rhs_weap_SCARH_LB_folded)
	displayName 		= "SCAR-H (LB) Folded";
	// Core
	model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH_LB_folded";
// Inventory
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 76.78;
	};
// Shooting
	initSpeed			= -0.93;
	recoil 				= "rhs_weap_scarh_folded_recoil";
	rhs_grip1_change	= "rhs_weap_SCARH_LB_Folded_grip";
	rhs_grip2_change	= "rhs_weap_SCARH_LB_Folded_grip3";
	rhs_grip3_change	= "rhs_weap_SCARH_LB_Folded_grip2";
	rhs_fold			= "rhs_weap_SCARH_LB";
	rhs_fold_anim		= "RHS_GestureUnfoldSCAR";
};
class rhs_weap_SCARH_LB_Folded_grip : rhs_weap_SCARH_LB_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO_US(1,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_LB_grip";
};
class rhs_weap_SCARH_LB_Folded_grip2 : rhs_weap_SCARH_LB_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO_US(3,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_LB_grip2";
};
class rhs_weap_SCARH_LB_Folded_grip3 : rhs_weap_SCARH_LB_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO_US(2,SCAR_afg)
	rhs_fold = "rhs_weap_SCARH_LB_grip3";
};
///Tan/FDE SCARs//

class rhs_weap_SCARH_FDE_CQC_Folded : rhs_weap_SCARH_FDE_CQC
{
	DLC_AUTHOR;
	scopeArsenal 		= 0;
	baseweapon			= "rhs_weap_SCARH_FDE_CQC_Folded";
	INVENTORY_PICTURE(rhs_weap_SCARH_FDE_CQC_folded)
	displayName 		= "SCAR-H (CQC) Folded";
	// Core
	model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH_CQC_folded";
// Inventory
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 76.78;
	};
// Shooting
	initSpeed			= -0.93;
	recoil 				= "rhs_weap_scarh_folded_recoil";
	rhs_grip1_change	= "rhs_weap_SCARH_FDE_CQC_Folded_grip";
	rhs_grip2_change	= "rhs_weap_SCARH_FDE_CQC_Folded_grip3";
	rhs_grip3_change	= "rhs_weap_SCARH_FDE_CQC_Folded_grip2";
	rhs_fold			= "rhs_weap_SCARH_FDE_CQC";
	rhs_fold_anim		= "RHS_GestureUnfoldSCAR";
};
class rhs_weap_SCARH_FDE_CQC_Folded_grip : rhs_weap_SCARH_FDE_CQC_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO_US(1,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_FDE_CQC_grip";
};
class rhs_weap_SCARH_FDE_CQC_Folded_grip2 : rhs_weap_SCARH_FDE_CQC_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO_US(3,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_FDE_CQC_grip2";
};
class rhs_weap_SCARH_FDE_CQC_Folded_grip3 : rhs_weap_SCARH_FDE_CQC_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO_US(2,SCAR_afg)
	rhs_fold = "rhs_weap_SCARH_FDE_CQC_grip3";
};
class rhs_weap_SCARH_FDE_STD_Folded : rhs_weap_SCARH_FDE_STD
{
	DLC_AUTHOR;
	scopeArsenal 		= 0;
	baseweapon			= "rhs_weap_SCARH_FDE_STD_Folded";
	INVENTORY_PICTURE(rhs_weap_SCARH_FDE_STD_Folded)
	displayName 		= "SCAR-H (STD) Folded";
	// Core
	model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH_folded";
// Inventory
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 76.78;
	};
// Shooting
	initSpeed			= -0.93;
	recoil 				= "rhs_weap_scarh_folded_recoil";
	rhs_grip1_change	= "rhs_weap_SCARH_FDE_STD_Folded_grip";
	rhs_grip2_change	= "rhs_weap_SCARH_FDE_STD_Folded_grip3";
	rhs_grip3_change	= "rhs_weap_SCARH_FDE_STD_Folded_grip2";
	rhs_fold			= "rhs_weap_SCARH_FDE_STD";
	rhs_fold_anim		= "RHS_GestureUnfoldSCAR";
};
class rhs_weap_SCARH_FDE_STD_Folded_grip : rhs_weap_SCARH_FDE_STD_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO_US(1,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_FDE_STD_grip";
};
class rhs_weap_SCARH_FDE_STD_Folded_grip2 : rhs_weap_SCARH_FDE_STD_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO_US(3,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_FDE_STD_grip2";
};
class rhs_weap_SCARH_FDE_STD_Folded_grip3 : rhs_weap_SCARH_FDE_STD_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO_US(2,SCAR_afg)
	rhs_fold = "rhs_weap_SCARH_FDE_STD_grip3";
};
class rhs_weap_SCARH_FDE_LB_Folded : rhs_weap_SCARH_FDE_LB
{
	DLC_AUTHOR;
	scopeArsenal 		= 0;
	baseweapon			= "rhs_weap_SCARH_FDE_LB_Folded";
	INVENTORY_PICTURE(rhs_weap_SCARH_FDE_LB_folded)
	displayName 		= "SCAR-H (LB) Folded";
	// Core
	model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH_LB_folded";
// Inventory
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 76.78;
	};
// Shooting
	initSpeed			= -0.93;
	recoil 				= "rhs_weap_scarh_folded_recoil";
	rhs_grip1_change	= "rhs_weap_SCARH_FDE_LB_Folded_grip";
	rhs_grip2_change	= "rhs_weap_SCARH_FDE_LB_Folded_grip3";
	rhs_grip3_change	= "rhs_weap_SCARH_FDE_LB_Folded_grip2";
	rhs_fold			= "rhs_weap_SCARH_FDE_LB";
	rhs_fold_anim		= "RHS_GestureUnfoldSCAR";
};
class rhs_weap_SCARH_FDE_LB_Folded_grip : rhs_weap_SCARH_FDE_LB_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO_US(1,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_FDE_LB_grip";
};
class rhs_weap_SCARH_FDE_LB_Folded_grip2 : rhs_weap_SCARH_FDE_LB_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO_US(3,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_FDE_LB_grip2";
};
class rhs_weap_SCARH_FDE_LB_Folded_grip3 : rhs_weap_SCARH_FDE_LB_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO_US(2,SCAR_afg)
	rhs_fold = "rhs_weap_SCARH_FDE_LB_grip3";
};