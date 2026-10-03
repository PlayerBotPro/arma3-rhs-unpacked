#define INVENTORY_CATEGORY backpacks

class B_AssaultPack_Base;
class B_Carryall_Base;

class rhs_assault_umbts: B_AssaultPack_Base
{
	dlc = "RHS_AFRF";

	scope = 2;
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_assault_umtbs";
	INVENTORY_PICTURE(rhs_assault_umbts)
	displayName = "$STR_RHS_UMBTSBACKPACK_NAME";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\gearpack3_ranets_co.paa"};
	maximumLoad = 240;
	mass = 35;
};

//Pack Pre-filled With Ammo
class rhs_assault_umbts_ammo : rhs_assault_umbts
{
	scope = 1;
	class TransportMagazines
	{
		mag_xx(rhs_mag_rgd5,2);
		mag_xx(rhs_mag_rdg2_white,2);
		mag_xx(rhs_mag_nspn_red,1);
		mag_xx(rhs_30Rnd_545x39_7N10_AK,6);
	};
};

class rhs_assault_umbts_ammo_recon : rhs_assault_umbts
{
	scope = 1;
	class TransportMagazines
	{
		mag_xx(rhs_mag_rgn,2);
		mag_xx(rhs_mag_fakel,2);
		mag_xx(rhs_mag_rdg2_white,1);
		mag_xx(rhs_30Rnd_762x39mm_U,6);
	};
};

class rhs_assault_umbts_engineer: rhs_assault_umbts
{
	scope=1;
	model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_assault_umtbs_engineer";
	INVENTORY_PICTURE(rhs_assault_umbts_engineer)
	AUTHOR_MACRO
	displayName = "$STR_RHS_UMBTSBACKPACKENGINEER_NAME";
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};

class rhs_assault_umbts_engineer_empty: rhs_assault_umbts_engineer
{
	AUTHOR_MACRO
	scope=2;
	class TransportItems {};
};

class rhs_assault_umbts_medic: rhs_assault_umbts
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "$STR_RHS_UMBTSBACKPACKMEDIC_NAME";
	class TransportItems
	{
		item_xx(MediKit,1);
		item_xx(FirstAidKit,10);
	};
};

class rhs_assault_umbts_demo : rhs_assault_umbts
{
	AUTHOR_MACRO
	scope=1;
	model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_assault_umtbs_engineer";
	displayName = "$STR_RHS_UMBTSBACKPACKDEMOLITIONS_NAME";
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(DemoCharge_Remote_Mag,3);
	};
};

//RK-ShT-30 (Olive)

class rhs_rk_sht_30_olive : rhs_assault_umbts
{
	dlc = "RHS_AFRF";

	scope = 2;
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_rk_sht_30_olive)
	displayName = "$STR_RHS_RK_SHT_30_OLIVE_NAME";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\rk_sht_30_olive_co.paa"};
};

//Pack Pre-filled With Ammo

class rhs_rk_sht_30_olive_ammo : rhs_rk_sht_30_olive
{
	scope = 1;
	class TransportMagazines
	{
		mag_xx(rhs_mag_rgd5,2);
		mag_xx(rhs_mag_rdg2_white,2);
		mag_xx(rhs_mag_nspn_red,1);
		mag_xx(rhs_30Rnd_545x39_7N10_AK,6);
	};
};

class rhs_rk_sht_30_olive_ammo_recon : rhs_rk_sht_30_olive
{
	scope = 1;
	class TransportMagazines
	{
		mag_xx(rhs_mag_rgn,2);
		mag_xx(rhs_mag_fakel,2);
		mag_xx(rhs_mag_rdg2_white,1);
		mag_xx(rhs_30Rnd_762x39mm_U,6);
	};
};

class rhs_rk_sht_30_olive_engineer: rhs_rk_sht_30_olive
{
	scope=1;
	model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_assault_umtbs_engineer";
	INVENTORY_PICTURE(rhs_rk_sht_30_olive_engineer)
	AUTHOR_MACRO
	displayName = "$STR_RHS_RK_SHT_30_OLIVE_ENGINEER_NAME";
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};

class rhs_rk_sht_30_olive_engineer_empty: rhs_rk_sht_30_olive_engineer
{
	AUTHOR_MACRO
	scope=2;
	class TransportItems {};
};

class rhs_rk_sht_30_olive_medic: rhs_rk_sht_30_olive
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "$STR_RHS_RK_SHT_30_OLIVE_MEDIC_NAME";
	class TransportItems
	{
		item_xx(MediKit,1);
		item_xx(FirstAidKit,10);
	};
};

class rhs_rk_sht_30_olive_demo : rhs_rk_sht_30_olive
{
	AUTHOR_MACRO
	scope=1;
	model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_assault_umtbs_engineer";
	displayName = "$STR_RHS_RK_SHT_30_OLIVE_DEMOLITIONS_NAME";
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(DemoCharge_Remote_Mag,3);
	};
};

class rhs_rk_sht_30_olive_mg: rhs_rk_sht_30_olive
{
	scope = 1;
	displayName = "$STR_RHS_RK_SHT_30_OLIVE_MG_NAME";
	class TransportMagazines
	{
		mag_xx(rhs_100Rnd_762x54mmR,2);
	};
};

//RK-ShT-30 (EMR)

class rhs_rk_sht_30_emr : rhs_assault_umbts
{
	dlc = "RHS_AFRF";

	scope = 2;
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_rk_sht_30_emr)
	displayName = "$STR_RHS_RK_SHT_30_EMR_NAME";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\rk_sht_30_emr_co.paa"};
};

//Pack Pre-filled With Ammo

class rhs_rk_sht_30_emr_ammo : rhs_rk_sht_30_emr
{
	scope = 1;
	class TransportMagazines
	{
		mag_xx(rhs_mag_rgd5,2);
		mag_xx(rhs_mag_rdg2_white,2);
		mag_xx(rhs_mag_nspn_red,1);
		mag_xx(rhs_30Rnd_545x39_7N10_AK,6);
	};
};

class rhs_rk_sht_30_emr_ammo_recon : rhs_rk_sht_30_emr
{
	scope = 1;
	class TransportMagazines
	{
		mag_xx(rhs_mag_rgn,2);
		mag_xx(rhs_mag_fakel,2);
		mag_xx(rhs_mag_rdg2_white,1);
		mag_xx(rhs_30Rnd_762x39mm_U,6);
	};
};

class rhs_rk_sht_30_emr_engineer: rhs_rk_sht_30_emr
{
	scope=1;
	model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_assault_umtbs_engineer";
	INVENTORY_PICTURE(rhs_rk_sht_30_emr_engineer)
	AUTHOR_MACRO
	displayName = "$STR_RHS_RK_SHT_30_EMR_ENGINEER_NAME";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\rk_sht_30_emr_co.paa"};
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};

class rhs_rk_sht_30_emr_engineer_empty: rhs_rk_sht_30_emr_engineer
{
	AUTHOR_MACRO
	scope=2;
	class TransportItems {};
};

class rhs_rk_sht_30_emr_medic: rhs_rk_sht_30_emr
{
	scope = 1;
	AUTHOR_MACRO
	displayName = "$STR_RHS_RK_SHT_30_EMR_MEDIC_NAME";
	class TransportItems
	{
		item_xx(MediKit,1);
		item_xx(FirstAidKit,10);
	};
};

class rhs_rk_sht_30_emr_demo : rhs_rk_sht_30_emr
{
	AUTHOR_MACRO
	scope=1;
	model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_assault_umtbs_engineer";
	displayName = "$STR_RHS_RK_SHT_30_EMR_DEMOLITIONS_NAME";
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(DemoCharge_Remote_Mag,3);
	};
};

class rhs_rk_sht_30_emr_mg: rhs_rk_sht_30_emr
{
	scope = 1;
	displayName = "$STR_RHS_RK_SHT_30_EMR_MG_NAME";
	class TransportMagazines
	{
		mag_xx(rhs_100Rnd_762x54mmR,2);
	};
};

//RPG Carriers

class rhs_rpg: B_AssaultPack_Base
{
	dlc = "RHS_AFRF";

	scope = 1;
	model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_rpg";
	picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_rpg_ca.paa";
	AUTHOR_MACRO
	displayName = "$STR_RHS_RPGCARRIER_NAME";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\gearpack2_rpg_co.paa"};
	maximumLoad = 140;
	mass = 20;
	class TransportMagazines
	{
		mag_xx(rhs_rpg7_PG7VL_mag,1);
		mag_xx(rhs_rpg7_OG7V_mag,1);
		mag_xx(rhs_rpg7_TBG7V_mag,1);
	};
};

class rhs_rpg_at: rhs_rpg
{
	AUTHOR_MACRO
	scope = 1;

	class TransportMagazines
	{
		mag_xx(rhs_rpg7_PG7VR_mag,2);
		mag_xx(rhs_rpg7_PG7VL_mag,1);
	};
};

class rhs_rpg_vl: rhs_rpg_at
{
	AUTHOR_MACRO
	class TransportMagazines
	{
		mag_xx(rhs_rpg7_PG7VL_mag,3);
	};
};

class rhs_rpg_v: rhs_rpg_vl
{
	AUTHOR_MACRO
	class TransportMagazines
	{
		mag_xx(rhs_rpg7_PG7V_mag,3);
	};
};

class rhs_rpg_empty: rhs_rpg
{
	AUTHOR_MACRO
	scope = 2;
	class TransportMagazines{};
};

class rhs_sidor: B_AssaultPack_Base
{
	dlc = "RHS_AFRF";

	scope = 2;
	model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_sidor";
	picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_sidor_ca.paa";
	AUTHOR_MACRO
	displayName = "$STR_RHS_SIDOR_NAME";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\gearpack3_ranets_co.paa"};
	maximumLoad = 129;
	mass = 20;
};

class rhs_sidorMG: rhs_sidor
{
	scope = 1;
	displayName = "$STR_RHS_SIDORPKBOXES_NAME";
	class TransportMagazines
	{
		mag_xx(rhs_100Rnd_762x54mmR,2);
	};
};

class rhs_medic_bag: B_AssaultPack_Base
{
	dlc = "RHS_AFRF";

	scope = 2;
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_medic_bag";
	picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_medic_bag_ca.paa";
	displayName = "$STR_RHS_MEDICBAG_NAME";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\gearpack3_ranets_co.paa"};
	maximumLoad = 96;	//medkit(80) + few first aid kits (2x8)
	mass = 15;
};

class rhs_medic_bag_filled: rhs_medic_bag
{
	scope = 1;
	class TransportItems
	{
		item_xx(MediKit,1);
		item_xx(FirstAidKit,2);
	};
};

class B_Parachute;
class Steerable_Parachute_F;

class rhs_d6_Parachute: Steerable_Parachute_F
{
	scope = 1;
	scopeArsenal = 0;
	side = 0;
	faction = "rhs_faction_vdv";
	vehicleClass = "Air";
	crew = "rhs_vdv_rifleman";

	maxgravity=-10;
	maxliftduration=4;
	maxliftthrust=-40;
	maxrotationx=0.1;
	maxrotationz=0.4;
	maxsensitivityhorizontal=0.05;
	maxsensitivityvertical=0.01;
	mingravity=-2;
	minliftduration=4;
	minliftthrust=-40;
	minrotationx=-0.1;
	minrotationz=-0.4;
	normalgravity=-5;
	thrustaccel=0.001;
	thrustdeccel=0.001;
	thrustnormal=0.001;
	turnforcescale=0.0001;

	displayName="D-6 Parachute";
	driverAction="rhs_d6_pilot";
	model="\rhsafrf\addons\rhs_air\parachute\para.p3d";
};

class rhs_d6_Parachute_backpack: B_Parachute
{
	scope=2;
	scopeArsenal = 2;
	displayName="D6 Parachute Bag";
	ParachuteClass="rhs_d6_Parachute";
	maximumLoad=0;
	mass=130;
};


//Lodu Content
//RD-54
class rhs_rd54: B_AssaultPack_Base
{
	AUTHOR_MACRO
	dlc = "RHS_AFRF";
	INVENTORY_PICTURE(rhs_rd54)
	
	LODU_SCOPE
	
	displayName = "RD-54";
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\backpacks\rhs_RD54_backpack_nobodyarmor";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\rd54_co.paa"};
	
	maximumLoad = 240;
	mass = 35;
};
class rhs_rd54_vest: rhs_rd54
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_rd54_vest)

	displayName = "RD-54 (vest)";
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\backpacks\rhs_RD54_backpack";
};
class rhs_rd54_flora1: rhs_rd54
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_rd54_flora1)
	
	LODU_SCOPE
	
	displayName = "RD-54 (Flora)";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\RD54_flora1_co.paa"};
};
class rhs_rd54_vest_flora1: rhs_rd54_flora1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_rd54_vest_flora1)

	displayName = "RD-54 (vest/Flora)";
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\backpacks\rhs_RD54_backpack";
};
class rhs_rd54_flora2: rhs_rd54
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_rd54_flora2)
	
	LODU_SCOPE
	
	displayName = "RD-54 (Flora Alt)";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\RD54_flora2_co.paa"};
};
class rhs_rd54_vest_flora2: rhs_rd54_flora2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_rd54_vest_flora2)

	displayName = "RD-54 (vest/Flora Alt)";
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\backpacks\rhs_RD54_backpack";
};
class rhs_rd54_emr1: rhs_rd54
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_rd54_emr1)
	
	LODU_SCOPE
	
	displayName = "RD-54 (EMR-Summer)";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\RD54_emr1_co.paa"};
};
class rhs_rd54_vest_emr1: rhs_rd54_emr1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_rd54_vest_emr1)

	displayName = "RD-54 (vest/EMR-Summer)";
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\backpacks\rhs_RD54_backpack";
};





//RPG
class rhs_rpg_2: rhs_rpg
{
	AUTHOR_MACRO
	dlc = "RHS_AFRF";
	INVENTORY_PICTURE(rhs_rpg_2)

	LODU_SCOPE
	
	displayName = "RPG Carrier";
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\backpacks\rhs_RPG_backpack";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\rpg_pouchs_co.paa"};
	class TransportMagazines {};
};
class rhs_rpg_2_at: rhs_rpg_2
{
	AUTHOR_MACRO
	scope = 1;
	class TransportMagazines
	{
		mag_xx(rhs_rpg7_PG7VL_mag,3);
	};
};
class rhs_rpg_6b2: rhs_rpg_2
{
	AUTHOR_MACRO
	dlc = "RHS_AFRF";
	INVENTORY_PICTURE(rhs_rpg_6b2)

	displayName = "RPG Carrier (6B2)";
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\backpacks\rhs_RPG_backpack_6b2";
};
class rhs_rpg_6b2_at: rhs_rpg_6b2
{
	AUTHOR_MACRO
	scope = 1;
	class TransportMagazines
	{
		mag_xx(rhs_rpg7_PG7VL_mag,3);
	};
};
class rhs_rpg_6b3: rhs_rpg_2
{
	AUTHOR_MACRO
	dlc = "RHS_AFRF";
	INVENTORY_PICTURE(rhs_rpg_6b3)

	displayName = "RPG Carrier (6B3)";
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\backpacks\rhs_RPG_backpack_6b3";
};
class rhs_rpg_6b3_at: rhs_rpg_6b3
{
	scope = 1;
	class TransportMagazines
	{
		mag_xx(rhs_rpg7_PG7VL_mag,3);
	};
};
//R-148
class rhs_r148: B_AssaultPack_Base
{
	AUTHOR_MACRO
	dlc = "RHS_AFRF";
	INVENTORY_PICTURE(rhs_r148)

	LODU_SCOPE
	
	displayName = "R-148";
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\backpacks\rhs_R_148_backpack";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\r148_co.paa"};
	
	maximumLoad = 10;
	mass = 5;
};
//SPOSN Tortila

class rhs_tortila_grey: B_Carryall_Base
{
	AUTHOR_MACRO
	dlc = "RHS_AFRF";
	INVENTORY_PICTURE(rhs_tortila_grey)

	scope = 2;
	
	displayName = "SPOSN Tortila Backpack (Grey)";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\tortilla_grey_co.paa"};
};

class rhs_tortila_khaki: rhs_tortila_grey
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_tortila_khaki)

	scope = 2;
	displayName = "SPOSN Tortila Backpack (Khaki)";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\tortilla_khaki_co.paa"};
};

class rhs_tortila_olive: rhs_tortila_grey
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_tortila_olive)

	displayName = "SPOSN Tortila Backpack (Olive)";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\tortilla_olive_co.paa"};
};

class rhs_tortila_black: rhs_tortila_grey
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_tortila_black)

	displayName = "SPOSN Tortila Backpack (Black)";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\tortilla_black_co.paa"};
};

class rhs_tortila_emr: rhs_tortila_grey
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_tortila_emr)

	displayName = "SPOSN Tortila Backpack (EMR-Summer)";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\tortilla_emr_co.paa"};
};