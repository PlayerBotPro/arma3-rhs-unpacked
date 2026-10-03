class CfgMagazineWells
{
/////Handgun/////
/////9x18mm//////

	class CBA_9x18_PM
	{
		RHS_Magazines[] =
		{
			"rhs_mag_9x18_8_57N181S"
		};
	};
	class CBA_9x18_PMM
	{
		RHS_Magazines[] =
		{
			"rhs_mag_9x18_12_57N181S"
		};
	};

/////9x19mm//////

	class CBA_9x19_MP443
	{
		RHS_Magazines[] =
		{
			"rhs_mag_9x19_17",
			"rhs_mag_9x19_7n31_17"
		};
	};

/////9x21mm//////

	class CBA_9x21_SR1M 
	{
		RHS_Magazines[] =
		{
			"rhs_18rnd_9x21mm_7N28",
			"rhs_18rnd_9x21mm_7N29",
			"rhs_18rnd_9x21mm_7BT3"
		};
	};

///////SMG///////
/////9x19mm//////

	class CBA_9x19_PP2000			// PP-2000 SMG
	{
		RHS_Magazines[] =
		{
			"rhs_mag_9x19mm_7n21_20",
			"rhs_mag_9x19mm_7n31_20",
			"rhs_mag_9x19mm_7n21_44",
			"rhs_mag_9x19mm_7n31_44"
		};
	};

///Rifle & MGs///
////5.45x39mm////

	#define MACRO_545x39_AK \
			rhs_30Rnd_545x39_AK,\
			rhs_30Rnd_545x39_7N6_AK,\
			rhs_30Rnd_545x39_AK_no_tracers,\
			rhs_30Rnd_545x39_7N6_green_AK,\
			rhs_30Rnd_545x39_AK_green,\
			rhs_30Rnd_545x39_AK_plum_green,\
			rhs_30Rnd_545x39_7U1_AK,\
			rhs_30Rnd_545x39_7N6M_AK,\
			rhs_30Rnd_545x39_7N6M_green_AK,\
			rhs_30Rnd_545x39_7N6M_plum_AK,\
			rhs_30Rnd_545x39_7N10_AK,\
			rhs_30Rnd_545x39_7N10_plum_AK,\
			rhs_30Rnd_545x39_7N10_camo_AK,\
			rhs_30Rnd_545x39_7N10_desert_AK,\
			rhs_30Rnd_545x39_7N22_AK,\
			rhs_30Rnd_545x39_7N22_plum_AK,\
			rhs_30Rnd_545x39_7N22_camo_AK,\
			rhs_30Rnd_545x39_7N22_desert_AK,\
			rhs_30Rnd_545x39_7N10_2mag_AK,\
			rhs_30Rnd_545x39_7N10_2mag_plum_AK,\
			rhs_30Rnd_545x39_7N10_2mag_camo_AK,\
			rhs_30Rnd_545x39_7N10_2mag_desert_AK
	#define MACRO_545x39_RPK \
			rhs_45Rnd_545x39_AK,\
			rhs_45Rnd_545x39_7N6_AK,\
			rhs_45Rnd_545x39_7N6M_AK,\
			rhs_45Rnd_545x39_7N10_AK,\
			rhs_45Rnd_545x39_7N22_AK,\
			rhs_45Rnd_545x39_AK_green,\
			rhs_45Rnd_545x39_7U1_AK
	#define MACRO_545x39_60rnd \
			rhs_60Rnd_545x39_7N10_AK,\
			rhs_60Rnd_545x39_7N22_AK,\
			rhs_60Rnd_545x39_AK_green,\
			rhs_60Rnd_545x39_7U1_AK
			//rhs_60Rnd_545x39_AK,\
			//rhs_60Rnd_545x39_7N6_AK,\
			//rhs_60Rnd_545x39_7N6M_AK,\

	class AK_545x39
	{
		RHS_Magazines[] =
		{
			MACRO_545x39_AK,
			MACRO_545x39_RPK,
			MACRO_545x39_60rnd
		};
	};
	class CBA_545x39_AK				// Standard AK-74 magazines
	{
		RHS_Magazines[] =
		{
			MACRO_545x39_AK,
			MACRO_545x39_60rnd
		};
	};
	class CBA_545x39_RPK			// 45rnd RPK-74
	{
		RHS_Magazines[] =
		{
			MACRO_545x39_RPK
		};
	};

////7.62x39mm////

	#define MACRO_762x39_AK \
			rhs_30Rnd_762x39mm,\
			rhs_30Rnd_762x39mm_tracer,\
			rhs_30Rnd_762x39mm_89,\
			rhs_30Rnd_762x39mm_U,\
			rhs_30Rnd_762x39mm_bakelite,\
			rhs_30Rnd_762x39mm_bakelite_tracer,\
			rhs_30Rnd_762x39mm_bakelite_89,\
			rhs_30Rnd_762x39mm_bakelite_U,\
			rhs_30Rnd_762x39mm_polymer,\
			rhs_30Rnd_762x39mm_polymer_tracer,\
			rhs_30Rnd_762x39mm_polymer_89,\
			rhs_30Rnd_762x39mm_polymer_U,\
			rhs_10Rnd_762x39mm,\
			rhs_10Rnd_762x39mm_tracer,\
			rhs_10Rnd_762x39mm_89,\
			rhs_10Rnd_762x39mm_U

	#define MACRO_762x39_RPK \
			rhs_75Rnd_762x39mm,\
			rhs_75Rnd_762x39mm_tracer,\
			rhs_75Rnd_762x39mm_89

	class AK_762x39
	{
		RHS_Magazines[] =
		{
			MACRO_762x39_AK,
			MACRO_762x39_RPK
		};
	};
	class CBA_762x39_AK			// Standard AK-47/AKM magazines
	{
		RHS_Magazines[] =
		{
			MACRO_762x39_AK
		};
	};			
	class CBA_762x39_RPK		// 40/45/75rnd RPK magazines
	{
		RHS_Magazines[] =
		{
			MACRO_762x39_RPK
		};
	};			

///7.62x54Rmm////

	class PK_762x54R
	{
		RHS_Magazines[] =
		{
			rhs_100Rnd_762x54mmR,
			rhs_100Rnd_762x54mmR_green,
			rhs_100Rnd_762x54mmR_7N13,
			rhs_100Rnd_762x54mmR_7N26,
			rhs_100Rnd_762x54mmR_7BZ3
		};
	};
	class CBA_762x54R_LINKS {};		// Links for PK, PKM, and similar
	class CBA_762x54R_SVD			// SVD
	{
		RHS_Magazines[] =
		{
			rhs_10Rnd_762x54mmR_7N1,
			rhs_10Rnd_762x54mmR_7N14
		};
	};

////8.6x70mm/////

	class CBA_338LM_T5000			// ORSIS T-5000
	{
		RHS_Magazines[] =
		{
			rhs_5Rnd_338lapua_t5000
		};
	};

/////9x39mm//////

	class CBA_9x39_VSS			// Vintorez, Val
	{
		RHS_Magazines[] =
		{
			rhs_20rnd_9x39mm_SP5,
			rhs_20rnd_9x39mm_SP6,
			rhs_10rnd_9x39mm_SP5,
			rhs_10rnd_9x39mm_SP6
		};
	};

///Explosives////
//////40mm///////

	class VOG_40mm
	{
		RHS_Magazines[] =
		{
			rhs_VOG25,
			rhs_VOG25p,
			rhs_vg40tb,
			rhs_vg40sz,
			rhs_vg40op_white,
			rhs_vg40op_green,
			rhs_vg40op_red,
			rhs_GRD40_white,
			rhs_GRD40_green,
			rhs_GRD40_red,
			rhs_VG40MD,
			rhs_VG40MD_White,
			rhs_VG40MD_Green,
			rhs_VG40MD_Red,
			rhs_GDM40
		};
	};
	class CBA_40mm_GP {};			// single grenade for GP-25/GP-30/GP-34

//////RPG-7//////

	class RPG7
	{
		RHS_Magazines[] =
		{
			rhs_rpg7_PG7V_mag,
			rhs_rpg7_PG7VM_mag,
			rhs_rpg7_PG7VS_mag,
			rhs_rpg7_PG7VL_mag,
			rhs_rpg7_PG7VR_mag,
			rhs_rpg7_OG7V_mag,
			rhs_rpg7_TBG7V_mag,
			rhs_rpg7_TYPE69_airburst_mag
		};
	};
	class CBA_RPG7 {};
};