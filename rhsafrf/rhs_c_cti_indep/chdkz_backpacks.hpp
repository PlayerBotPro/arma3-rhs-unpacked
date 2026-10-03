class B_FieldPack_khk;
class B_FieldPack_cbr;
class B_TacticalPack_blk;
class B_Carryall_cbr;

class rhs_ins_pack: B_FieldPack_khk
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

class rhs_ins_pack_GR: B_FieldPack_cbr
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

class rhs_ins_packMG: B_TacticalPack_blk
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

class rhs_ins_demo : B_Carryall_cbr
{
	AUTHOR_MACRO
	scope=1;
	model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_assault_umtbs_engineer";
	displayName = "$STR_RHS_UMBTSBACKPACKDEMOLITIONS_NAME";
	hiddenSelectionsTextures[] = {};
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