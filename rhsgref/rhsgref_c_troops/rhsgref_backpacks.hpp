/* CDF backpacks */


#define INVENTORY_CATEGORY Backpacks

class B_FieldPack_oli;
class B_Carryall_oli;

class rhsgref_cdf_backpack_mg : B_Carryall_oli
{
	scope = 1;
	displayName = "Backpack MG";
	class TransportMagazines
	{
		class _xx_PKP
		{
			magazine = "rhs_100Rnd_762x54mmR";
			count = 3;
		};
	};
};

class rhsgref_cdf_backpack_mg2 : B_Carryall_oli
{
	scope = 1;
	displayName = "Backpack MG2";
	class TransportMagazines
	{
		class _xx_PKP
		{
			magazine = "rhsusf_100Rnd_762x51";
			count = 3;
		};
	};
};
class rhsgref_cdf_backpack_mg3 : B_Carryall_oli
{
	scope = 1;
	displayName = "Backpack MG3";
	class TransportMagazines
	{
		class _xx_rhsusf_100Rnd_556x45_soft_pouch
		{
			magazine = "rhsusf_100Rnd_556x45_soft_pouch";
			count = 5;
		};
	};
};

class rhsgref_cdf_backpack_engineer : B_Carryall_oli
{
	scope = 1;
	displayName = "Backpack Engineer";
	class TransportItems
	{
		class _xx_ToolKit
		{
			name = "ToolKit";
			count = 1;
		};
	};
};

class rhsgref_cdf_backpack_medic : B_Carryall_oli
{
	scope = 1;
	displayName = "Backpack Medic";
	class TransportItems
	{
		class _xx_Medikit
		{
			name = "MediKit";
			count = 1;
		};
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 6;
		};
	};
};

/* Nationalist backpacks */
class B_TacticalPack_oli;
class B_AssaultPack_blk;
class rhsusf_falconii;

class rhsgref_nat_backpack_mg : B_AssaultPack_blk
{
	scope = 1;
	displayName = "Backpack MG";
	class TransportMagazines
	{
		class _xx_PKP
		{
			magazine = "rhs_100Rnd_762x54mmR";
			count = 2;
		};
	};
};

class rhsgref_nat_backpack_mg42 : rhsusf_falconii
{
	scope = 1;
	displayName = "Backpack MG42";
	class TransportMagazines
	{
		class _xx_MG42
		{
			magazine = "rhsgref_296Rnd_792x57_SmE_belt";
			count = 1;
		};
	};
};

class rhsgref_nat_backpack_engineer : B_Carryall_oli
{
	scope = 1;
	displayName = "Backpack Engineer";
	class TransportItems
	{
		class _xx_ToolKit
		{
			name = "ToolKit";
			count = 1;
		};
	};
};

class rhsgref_nat_backpack_medic : B_TacticalPack_oli
{
	scope = 1;
	displayName = "Backpack Medic";
	class TransportItems
	{
		class _xx_Medikit
		{
			name = "MediKit";
			count = 1;
		};
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 6;
		};
	};
};

class rhsgref_nat_backpack_explosives : B_TacticalPack_oli
{
	scope = 1;
	displayName = "Backpack Saboteur";
	class TransportItems
	{
		class _xx_rhs_mine_tm62m_mag
		{
			name = "rhs_mine_tm62m_mag";
			count = 1;
		};
		class _xx_IEDUrbanSmall_Remote_Mag
		{
			name = "IEDUrbanSmall_Remote_Mag";
			count = 2;
		};
	};
};

/* ChDKZ backpacks */

class B_FieldPack_khk;
class B_FieldPack_cbr;
class B_TacticalPack_blk;
class B_Carryall_cbr;
class rhs_assault_umbts_engineer_empty;
class B_Carryall_Base;

class rhsgref_ins_pack: B_FieldPack_khk
{
	scope = 1;
	displayName = "Backpack (Ammo)";
	class TransportMagazines
	{
		class _xx_rhs_30Rnd_762x39mm
		{
			magazine = "rhs_30Rnd_762x39mm";
			count = 6;
		};
		class _xx_rhs_mag_rgn
		{
			magazine = "rhs_mag_rgn";
			count = 3;
		};
	};
};

class rhsgref_ins_pack_GR: B_FieldPack_cbr
{
	scope = 1;
	displayName = "Backpack (Ammo)";
	class TransportMagazines
	{
		class _xx_rhs_30Rnd_762x39mm
		{
			magazine = "rhs_30Rnd_762x39mm";
			count = 6;
		};
		class _xx_rhs_mag_rgn
		{
			magazine = "rhs_mag_rgn";
			count = 3;
		};
	};
};

class rhsgref_ins_packMG: B_TacticalPack_blk
{
	scope = 1;
	displayName = "Backpack (MG)";
	class TransportMagazines
	{
		class _xx_PKM
		{
			magazine = "rhs_100Rnd_762x54mmR";
			count = 3;
		};
	};
};

class rhsgref_ins_pack_demo : rhs_assault_umbts_engineer_empty
{
	AUTHOR_MACRO
	scope=1;
	displayName = "$STR_RHS_UMBTSBACKPACKDEMOLITIONS_NAME";

	class TransportItems
	{
		class _xx_DemoCharge_Remote_Mag
		{
			name = "DemoCharge_Remote_Mag";
			count = 1;
		};
		class _xx_rhs_mine_tm62m_mag
		{
			name = "rhs_mine_tm62m_mag";
			count = 1;
		};
		class _xx_rhs_mine_pmn2_mag
		{
			name = "rhs_mine_pmn2_mag";
			count = 3;
		};
	};
};

class rhsgref_ins_pack_saboteur : rhsgref_ins_pack_demo
{
	AUTHOR_MACRO
	scope=1;

	displayName = "Backpack Saboteur";

	class TransportItems
	{
		class _xx_rhs_mine_tm62m_mag
		{
			name = "rhs_mine_tm62m_mag";
			count = 1;
		};
		class _xx_IEDUrbanSmall_Remote_Mag
		{
			name = "IEDUrbanSmall_Remote_Mag";
			count = 2;
		};
	};
};

class rhsgref_tortila_specter: B_Carryall_Base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_tortila_specter)
	scope = 2;
	displayName = "SPOSN Tortila (Spectre-SKWO)";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\tortilla_specter_co.paa"};
};

/*HIDF Backpacks*/
class Bag_Base;
class B_AssaultPack_rgr;
class B_Kitbag_rgr;


//ALICE packs
class rhsgref_hidf_alicepack : Bag_Base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_hidf_alicepack)
	displayname = "ALICE Pack (OD)";
	
	hiddenSelections[] = {"Camo"};
	hiddenselectionstextures[] = {"\rhsgref\addons\rhsgref_infantry\data_tanoa\alicepack_co.paa"};
	model = "\rhsgref\addons\rhsgref_infantry\gear_tanoa\backpack\alicepack";
	
	scope = 2;
	scopeCurator = 0;
	
	maximumLoad = 320;
	mass = 60;
};

class rhsgref_wdl_alicepack : rhsgref_hidf_alicepack
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_wdl_alicepack)
	displayname = "ALICE Pack (Woodland)";
	
	hiddenselectionstextures[] = {"\rhsgref\addons\rhsgref_infantry\data_cdf\alicepack_co_gref_woodland.paa"};
};
class rhsgref_ttsko_alicepack : rhsgref_hidf_alicepack
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_ttsko_alicepack)
	displayname = "ALICE Pack (TTsKO)";
	
	hiddenselectionstextures[] = {"\rhsgref\addons\rhsgref_infantry\data_cdf\alicepack_co_gref_ttsko.paa"};
};

//HIDF ALICE equipment packs

class rhsgref_hidf_alicepack_ar : rhsgref_hidf_alicepack
{
	scope = 1;
	class TransportMagazines
	{
		class _xx_rhsusf_200rnd_556x45_M855_mixed_box
		{
			magazine = "rhsusf_200rnd_556x45_M855_mixed_box";
			count = 2;
		};
	};
};

class rhsgref_hidf_alicepack_gr : rhsgref_hidf_alicepack
{
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_mag_M441_HE
		{
			name = "rhs_mag_M441_HE";
			count = 10;
		};

		class _xx_rhs_mag_M583A1_white // Flare
		{
			name = "rhs_mag_M583A1_white";
			count = 5;
		};
	};
};

class rhsgref_hidf_alicepack_mg : rhsgref_hidf_alicepack
{
	scope = 1;
	class TransportMagazines
	{
		class _xx_rhsusf_100Rnd_762x51
		{
			magazine = "rhsusf_100Rnd_762x51";
			count = 4;
		};
	};
};

class rhsgref_hidf_alicepack_medic : rhsgref_hidf_alicepack
{
	scope = 1;
	class TransportItems
	{
		class _xx_Medikit
		{
			name = "MediKit";
			count = 1;
		};
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 6;
		};
	};
};


//Assault packs
class rhsgref_hidf_backpack_ar : B_AssaultPack_rgr
{
	scope = 1;
	class TransportMagazines
	{
		class _xx_rhsusf_200rnd_556x45_M855_mixed_box
		{
			magazine = "rhsusf_200rnd_556x45_M855_mixed_box";
			count = 2;
		};
	};
};

class rhsgref_hidf_backpack_gr : B_AssaultPack_rgr
{
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_mag_M441_HE
		{
			name = "rhs_mag_M441_HE";
			count = 10;
		};

		class _xx_rhs_mag_M583A1_white // Flare
		{
			name = "rhs_mag_M583A1_white";
			count = 5;
		};
	};
};


//Tactical packs
class rhsgref_hidf_backpack_mg : B_TacticalPack_oli
{
	scope = 1;
	class TransportMagazines
	{
		class _xx_rhsusf_100Rnd_762x51
		{
			magazine = "rhsusf_100Rnd_762x51";
			count = 4;
		};
	};
};

class rhsgref_hidf_backpack_medic : B_TacticalPack_oli
{
	scope = 1;
	class TransportItems
	{
		class _xx_Medikit
		{
			name = "MediKit";
			count = 1;
		};
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 6;
		};
	};
};

//TLA Backpacks
class rhs_rpg;
class rhsgref_tla_backpack_rpg: rhs_rpg
{
	scope = 1;
	class TransportMagazines
	{
		class _xx_rhs_rpg7_PG7V_mag
		{
			magazine = "rhs_rpg7_PG7V_mag";
			count = 1;
		};
		class _xx_rhs_rpg7_type69_airburst_mag
		{
			magazine = "rhs_rpg7_type69_airburst_mag";
			count = 2;
		};
	};
};
class rhs_sidor;
class rhsgref_tla_backpack_mg42: rhs_sidor
{
	scope = 1;
	class TransportMagazines
	{
		class _xx_rhsgref_296Rnd_792x57_SmE_belt
		{
			magazine = "rhsgref_296Rnd_792x57_SmE_belt";
			count = 1;
		};
	};
};