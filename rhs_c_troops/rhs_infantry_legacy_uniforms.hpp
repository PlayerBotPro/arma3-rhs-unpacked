//variants

#define MSV_LEGACY_Macro 	\
vehicleClass = "rhs_vehclass_infantry_emr";\
editorSubcategory = "rhs_EdSubcat_infantry_emr";\
uniformClass = "rhs_uniform_emr_patchless";\
model = "\rhsafrf\addons\rhs_infantry2\rhs_emr_base.p3d";\
selectionClan = "clan";\
hiddenSelections[] = {"camo1","camo2","camob","insignia"};\
hiddenSelectionsTextures[] =\
{\
	"rhsafrf\addons\rhs_infantry2\data\rhs_emr_msv_co.paa",\
	"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",\
	"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"\
};\
class Wounds\
{\
	tex[] = {};\
	mat[] = {\
		"rhsafrf\addons\rhs_infantry2\data\rhs_emr.rvmat",\
		"rhsafrf\addons\rhs_infantry2\data\rhs_emr_w1.rvmat",\
		"rhsafrf\addons\rhs_infantry2\data\rhs_emr_w2.rvmat",\
		A3_Injury \
	};\
};\
identityTypes[]=\
{\
	"LanguageRUS_F",\
	"Head_Russian",\
	"Head_Asian"\
};\
AUTHOR_MACRO

	class rhs_msv_emr_rifleman_patchless : rhs_msv_emr_rifleman
	{
		MSV_LEGACY_Macro
		EdPrev(rhs_msv_emr_rifleman_patchless)
		scope=1;
		scopeCurator = 0;
		displayName= "$STR_RHS_INF_RIFLEMAN_PATCHLESS";

	};
	class rhs_vdv_emr_patchless : rhs_msv_emr_rifleman_patchless
	{
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\data\rhs_emr_co.paa",
			"rhsafrf\addons\rhs_infantry\data\shevrons_vdv_co.paa",
			"rhsafrf\addons\rhs_infantry\data\digi_chevrons_co.paa"
		};
		scope=1;
		scopeCurator = 0;
		displayName = "$STR_RHS_INF_RIFLEMAN";
	};
	class rhs_msv_mflora_rifleman_patchless : rhs_msv_emr_rifleman
	{
		EdPrev(rhs_msv_mflora_rifleman_patchless)
		scope=1;
		scopeCurator = 0;
		displayName= "$STR_RHS_INF_RIFLEMAN_PATCHLESS";
		model = "\rhsafrf\addons\rhs_infantry\rhs_msv_base.p3d";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry\data\flora_mf_co.paa"
		};
		selectionClan = "clan";
		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_infantry\data\flora.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_w1.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_w2.rvmat",

				"rhsafrf\addons\rhs_infantry\data\flora_bz.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_bz_w1.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_bz_w2.rvmat",

				A3_Injury
			};
		};
	};
	class rhs_msv_rifleman_patchless : rhs_msv_emr_rifleman
	{
		EdPrev(rhs_msv_rifleman_patchless)
		scope=1;
		scopeCurator = 0;
		displayName= "$STR_RHS_INF_RIFLEMAN_PATCHLESS";
		model = "\rhsafrf\addons\rhs_infantry\rhs_msv_base.p3d";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry\data\flora_patchless_co.paa"
		};
		selectionClan = "clan";
		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_infantry\data\flora.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_w1.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_w2.rvmat",

				"rhsafrf\addons\rhs_infantry\data\flora_bz.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_bz_w1.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_bz_w2.rvmat",

				A3_Injury
			};
		};
	};
	class rhs_msv_rifleman_patchless_alt : rhs_msv_emr_rifleman
	{
		EdPrev(rhs_msv_rifleman_patchless_alt)
		scope=1;
		scopeCurator = 0;
		displayName= "$STR_RHS_INF_RIFLEMAN_PATCHLESS";
		model = "\rhsafrf\addons\rhs_infantry\rhs_vdv_base.p3d";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry\data\flora_crew_patchless_co.paa"
		};
		selectionClan = "clan";
		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_infantry\data\flora.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_w1.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_w2.rvmat",

				"rhsafrf\addons\rhs_infantry\data\flora_bz.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_bz_w1.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_bz_w2.rvmat",

				A3_Injury
			};
		};
	};

	class rhs_msv_rifleman_m88_patchless : rhs_msv_emr_rifleman
	{
		EdPrev(rhs_msv_rifleman_m88_patchless)
		scope=1;
		scopeCurator = 0;
		displayName= "$STR_RHS_INF_RIFLEMAN_PATCHLESS";
		model = "\rhsafrf\addons\rhs_infantry\rhs_vdv_base.p3d";
		hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry\data\flora_m88_co.paa"
		};
		selectionClan = "clan";
		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"rhsafrf\addons\rhs_infantry\data\flora.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_w1.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_w2.rvmat",

				"rhsafrf\addons\rhs_infantry\data\flora_bz.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_bz_w1.rvmat",
				"rhsafrf\addons\rhs_infantry\data\flora_bz_w2.rvmat",

				A3_Injury
			};
		};
	};