class CfgMagazines
{
	class CA_Magazine;
	class CA_LauncherMagazine;
	class FakeMagazine;
	class 30Rnd_556x45_Stanag;

	///! Fake magazines
	class rhs_mag_fold_stock: CA_Magazine
	{
		scope	= 1;
		count	= 1;
		mass	= 0;
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
	};
	class rhs_fakemag : CA_Magazine
	{
		scope=1;
		scopeArsenal=0;
		//ammo = "nope";
		count = 200;
		mass = 0;
	};
	class rhs_mag_fakeMuzzle1 : rhs_fakemag
	{
		count			= 1;
	};

#define MODEL_MAGPULLER model = rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag_puller;\
		modelSpecial = rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_magpul_30rnd;\

#define MODEL_RANGERPLATE model = rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag_ranger;\
		modelSpecial = rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_ranger_30rnd;\

#define MODEL_20rndUSGI model = rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag20_mag;\
		modelSpecial = rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_20rnd;

////////////////////////
////30 round STANAGS////
////////////////////////
	//Aluminium
	class rhs_mag_30Rnd_556x45_M855A1_Stanag : 30Rnd_556x45_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_Stanag)
		displayName			= $STR_RHSUSF_30RND_556x45_M855A1_DISPLAY_NAME;
		displayNameShort	= "M855A1 EPR";
		descriptionShort	= $STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT;
		ammo				= "rhs_ammo_556x45_M855A1_Ball";
		initSpeed			= 960; //3150 ft/s from M16. 2970 ft/s from M4
		mass				= 9.35;
		tracersEvery		= 0;
		lastRoundsTracer	= 0;
		model				= rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag;
		modelSpecial		= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_n_30rnd;
		modelSpecialIsProxy	= 1;
		hiddenSelections[] = {"camo","camo01","camo02"};
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m885a1_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa"
		};
	};
	//depreciated class (all non-tracer STANAGs have no last rounds reload tracers now)
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer : rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer)
		scope = 1;
		scopeArsenal = 0;
		ammo = "rhs_ammo_556x45_M855A1_Ball";
		displayName = $STR_RHSUSF_30RND_556x45_NO_TRACER_DISPLAY_NAME;
		displayNameShort = "M855A1 (No Tracer)";
		descriptionShort = $STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT;
		lastRoundsTracer = 0;
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red : rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red)
		ammo = "rhs_ammo_556x45_M855A1_Ball_Red";
		displayName = $STR_RHSUSF_30RND_556x45_M855A1_TRACER_RED_DISPLAY_NAME;
		displayNameShort = "M856A1 Tracer";
		descriptionShort = $STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT;
		tracersEvery = 1;
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m856_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_drab_co.paa"
		};
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green : rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green)
		scope = 1;
		ammo = "rhs_ammo_556x45_M855A1_Ball_Green";
		displayName = $STR_RHSUSF_30RND_556x45_M855A1_TRACER_GREEN_DISPLAY_NAME;
		displayNameShort = "M856A1 (Green)";
		descriptionShort = $STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT;
		tracersEvery = 1;
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow : rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow)
		scope = 1;
		ammo = "rhs_ammo_556x45_M855A1_Ball_Yellow";
		displayName = $STR_RHSUSF_30RND_556x45_M855A1_TRACER_YELLOW_DISPLAY_NAME;
		displayNameShort = "M856A1 (Yellow)";
		descriptionShort = $STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT;
		tracersEvery = 1;
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange : rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange)
		scope = 1;
		ammo = "rhs_ammo_556x45_M855A1_Ball_Orange";
		displayName = $STR_RHSUSF_30RND_556x45_M855A1_TRACER_ORANGE_DISPLAY_NAME;
		displayNameShort = "M856A1 (Orange)";
		descriptionShort = $STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT;
		tracersEvery = 1;
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag : rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855_Stanag)
		displayName			= $STR_RHSUSF_30RND_556x45_M855_DISPLAY_NAME;
		displayNameShort	= "M855";
		descriptionShort	= $STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT;
		ammo				= "rhs_ammo_556x45_M855_Ball";
		initSpeed			= 948.8424; //3113 ft/s from M16. 2916 ft/s from M4 Source: https://www.dau.edu/cop/ammo/DAU%20Sponsored%20Documents/Public%20Release%20EPR%20Apr12.pdf
		mass				= 9.35;
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m855_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa"
		};
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red : rhs_mag_30Rnd_556x45_M855_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red)
		ammo = "rhs_ammo_556x45_M855_Ball_Red";
		displayName = $STR_RHSUSF_30RND_556x45_M855_TRACER_RED_DISPLAY_NAME;
		displayNameShort = "M856 Tracer";
		descriptionShort = $STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT;
		tracersEvery = 1;
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m856_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_earth_co.paa"
		};
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green : rhs_mag_30Rnd_556x45_M855_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green)
		scope = 1;
		ammo = "rhs_ammo_556x45_M855_Ball_Green";
		displayName = $STR_RHSUSF_30RND_556x45_M855_TRACER_GREEN_DISPLAY_NAME;
		displayNameShort = "M856 (Green)";
		descriptionShort = $STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT;
		tracersEvery = 1;
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow : rhs_mag_30Rnd_556x45_M855_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow)
		scope = 1;
		ammo = "rhs_ammo_556x45_M855_Ball_Yellow";
		displayName = $STR_RHSUSF_30RND_556x45_M855_TRACER_YELLOW_DISPLAY_NAME;
		displayNameShort = "M856 (Yellow)";
		descriptionShort = $STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT;
		tracersEvery = 1;
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange : rhs_mag_30Rnd_556x45_M855_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange)
		scope = 1;
		ammo = "rhs_ammo_556x45_M855_Ball_Orange";
		displayName = $STR_RHSUSF_30RND_556x45_M855_TRACER_ORANGE_DISPLAY_NAME;
		displayNameShort = "M856 (Orange)";
		descriptionShort = $STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT;
		tracersEvery = 1;
	};
	class rhs_mag_30Rnd_556x45_Mk318_Stanag : rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_Mk318_Stanag)
		displayName			= $STR_RHSUSF_30RND_556x45_MK318_DISPLAY_NAME;
		displayNameShort	= "Mk318";
		descriptionShort	= $STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT;
		ammo				= "rhs_ammo_556x45_Mk318_Ball";
		initSpeed			= 950.3664;
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_earth_co.paa"
		};
	};
	class rhs_mag_30Rnd_556x45_Mk262_Stanag : rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_Mk262_Stanag)
		ammo = "rhs_ammo_556x45_Mk262_Ball";
		initSpeed = 838.2;
		displayName = $STR_RHSUSF_30RND_556x45_MK262_DISPLAY_NAME;
		displayNameShort = "Mk262";
		descriptionShort = $STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT;
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa"
		};
	};
	class rhs_mag_30Rnd_556x45_M200_Stanag : rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M200_Stanag)
		ammo = "rhs_ammo_556x45_blank";
		displayName = $STR_RHSUSF_30RND_556x45_BLANK_DISPLAY_NAME;
		displayNameShort = "M200 Blanks";
		descriptionShort = $STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT;
		lastRoundsTracer = 0;
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa"
		};
	};

	class rhs_mag_30Rnd_556x45_M193_Stanag : 30Rnd_556x45_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_Stanag) //TODO
		displayName			= $STR_RHSUSF_30RND_556x45_M193_DISPLAY_NAME;
		displayNameShort	= "M193";
		descriptionShort	= $STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT;
		ammo				= "rhs_ammo_556x45_M193_Ball";
		initSpeed			= 974;
		mass				= 9.35;
		tracersEvery		= 0;
		lastRoundsTracer	= 0;
		model				= rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag;
		modelSpecial		= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_n_30rnd;
		modelSpecialIsProxy	= 1;
		hiddenSelections[] = {"camo","camo01","camo02"};
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa"
		};
	};
	class rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red : rhs_mag_30Rnd_556x45_M193_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red) //TODO
		ammo = "rhs_ammo_556x45_M196_Ball_Red";
		displayName = $STR_RHSUSF_30RND_556x45_M196_TRACER_RED_DISPLAY_NAME;
		displayNameShort = "M196 Tracer";
		tracersEvery = 1;
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m196_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa"
		};
	};
	//EPM
	class rhs_mag_30Rnd_556x45_M855A1_EPM : rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_EPM)
		displayName			= $STR_RHSUSF_30RND_556x45_M855A1_EPM_DISPLAY_NAME;
		displayNameShort	= "M855A1 EPR";
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_epm_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m885a1_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_earth_co.paa"
		};
		model				= rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_epm;
	};
	class rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red : rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red)
		displayName = $STR_RHSUSF_30RND_556x45_M855A1_EPM_TRACER_RED_DISPLAY_NAME;
		displayNameShort = "M856A1 Tracer";
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_epm_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m856_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa"
		};
		model				= rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_epm;
	};
	//SCAR
	class rhs_mag_30Rnd_556x45_Mk318_SCAR : rhs_mag_30Rnd_556x45_Mk318_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_Mk318_SCAR)
		displayName			= $STR_RHSUSF_30RND_556x45_MK318_SCAR_DISPLAY_NAME;
		displayNameShort	= "Mk318";
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_half_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_earth_co.paa"
		};
		model				= rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_scar;
	};
////////////////////////
////30 round STANAGS////
///////Mag Puller///////
////////////////////////
	//Aluminium
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull : rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull)
		displayName			= $STR_RHSUSF_30RND_556x45_M855A1_Pull_DISPLAY_NAME;
		displayNameShort	= "M855A1 EPR (Puller)";
		MODEL_MAGPULLER
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red : rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red)
		displayName			= $STR_RHSUSF_30RND_556x45_M855A1_Pull_TRACER_RED_DISPLAY_NAME;
		displayNameShort	= "M856A1 Tracer";
		MODEL_MAGPULLER
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Pull : rhs_mag_30Rnd_556x45_M855_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855_Stanag_Pull)
		displayName			= $STR_RHSUSF_30RND_556x45_M855_Pull_DISPLAY_NAME;
		displayNameShort	= "M855";
		MODEL_MAGPULLER
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red : rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red)
		displayName = $STR_RHSUSF_30RND_556x45_M855_Pull_TRACER_RED_DISPLAY_NAME;
		displayNameShort = "M856 Tracer";
		MODEL_MAGPULLER
	};
	class rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull : rhs_mag_30Rnd_556x45_Mk318_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull)
		displayName			= $STR_RHSUSF_30RND_556x45_MK318_Pull_DISPLAY_NAME;
		displayNameShort	= "Mk318";
		MODEL_MAGPULLER
	};
	class rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull : rhs_mag_30Rnd_556x45_Mk262_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull)
		displayName = $STR_RHSUSF_30RND_556x45_MK262_Pull_DISPLAY_NAME;
		displayNameShort = "Mk262";
		MODEL_MAGPULLER
	};
	//EPM
	class rhs_mag_30Rnd_556x45_M855A1_EPM_Pull : rhs_mag_30Rnd_556x45_M855A1_EPM
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_EPM_Pull)
		displayName			= $STR_RHSUSF_30RND_556x45_M855A1_EPM_Pull_DISPLAY_NAME;
		displayNameShort	= "M855A1 EPR";
		model				= rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_epm_puller;
		modelSpecial		= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_magpul_30rnd;
	};
	class rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red : rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red)
		displayName = $STR_RHSUSF_30RND_556x45_M855A1_EPM_Pull_TRACER_RED_DISPLAY_NAME;
		displayNameShort = "M856A1 Tracer";
		model				= rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_epm_puller;
		modelSpecial		= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_magpul_30rnd;
	};
	//SCAR
	class rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull : rhs_mag_30Rnd_556x45_Mk318_SCAR
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull)
		displayName			= $STR_RHSUSF_30RND_556x45_MK318_SCAR_Pull_DISPLAY_NAME;
		displayNameShort	= "Mk318";
		model				= rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_scar_puller;
		modelSpecial		= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_magpul_30rnd;
	};
////////////////////////
////30 round STANAGS////
//////Ranger Plate//////
////////////////////////
	//Aluminium
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger : rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger)
		displayName			= $STR_RHSUSF_30RND_556x45_M855A1_Ranger_DISPLAY_NAME;
		displayNameShort	= "M855A1 EPR";
		MODEL_RANGERPLATE
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red : rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red)
		displayName			= $STR_RHSUSF_30RND_556x45_M855A1_Ranger_TRACER_RED_DISPLAY_NAME;
		displayNameShort	= "M856A1 Tracer";
		MODEL_RANGERPLATE
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Ranger : rhs_mag_30Rnd_556x45_M855_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855_Stanag_Ranger)
		displayName			= $STR_RHSUSF_30RND_556x45_M855_Ranger_DISPLAY_NAME;
		displayNameShort	= "M855";
		MODEL_RANGERPLATE
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red : rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red)
		displayName = $STR_RHSUSF_30RND_556x45_M855_Ranger_TRACER_RED_DISPLAY_NAME;
		displayNameShort = "M856 Tracer";
		MODEL_RANGERPLATE
	};
	class rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger : rhs_mag_30Rnd_556x45_Mk318_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger)
		displayName			= $STR_RHSUSF_30RND_556x45_MK318_Ranger_DISPLAY_NAME;
		displayNameShort	= "Mk318";
		MODEL_RANGERPLATE
	};
	class rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger : rhs_mag_30Rnd_556x45_Mk262_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger)
		displayName = $STR_RHSUSF_30RND_556x45_MK262_Ranger_DISPLAY_NAME;
		displayNameShort = "Mk262";
		MODEL_RANGERPLATE
	};
	//EPM
	class rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger : rhs_mag_30Rnd_556x45_M855A1_EPM
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger)
		displayName			= $STR_RHSUSF_30RND_556x45_M855A1_EPM_Ranger_DISPLAY_NAME;
		displayNameShort	= "M855A1 EPR";
		model				= rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_epm_ranger;
		modelSpecial		= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_ranger_30rnd;
	};
	class rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red : rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red)
		displayName = $STR_RHSUSF_30RND_556x45_M855A1_EPM_Ranger_TRACER_RED_DISPLAY_NAME;
		displayNameShort = "M856A1 Tracer";
		model				= rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_epm_ranger;
		modelSpecial		= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_ranger_30rnd;
	};
	//SCAR
	class rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger : rhs_mag_30Rnd_556x45_Mk318_SCAR
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger)
		displayName			= $STR_RHSUSF_30RND_556x45_MK318_SCAR_Ranger_DISPLAY_NAME;
		displayNameShort	= "Mk318";
		model				= rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_scar_ranger;
		modelSpecial		= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_ranger_30rnd;
	};
//////////////////////
////30 round PMAGs////
//////////////////////
	//Black
	class rhs_mag_30Rnd_556x45_M855A1_PMAG : rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_PMAG)
		displayName					= $STR_RHSUSF_30RND_556x45_M855A1_PMAG_DISPLAY_NAME;
		mass						= 9.35;//Should mass be lowered?
		model						= rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_pmag;
		modelSpecial				= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_pmag1_30rnd;
		hiddenSelections[]			= {"camo"};
		hiddenSelectionsTextures[]	= {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"};
	};
	class rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red : rhs_mag_30Rnd_556x45_M855A1_PMAG
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red)
		displayName			= $STR_RHSUSF_30RND_556x45_M855A1_PMAG_TRACER_RED_DISPLAY_NAME;
		displayNameShort	= "M856A1 Tracer";
		ammo				= "rhs_ammo_556x45_M855A1_Ball_Red";
		tracersEvery		= 1;
	};
	class rhs_mag_30Rnd_556x45_M855_PMAG : rhs_mag_30Rnd_556x45_M855A1_PMAG
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855_PMAG)
		displayName			= $STR_RHSUSF_30RND_556x45_M855_PMAG_DISPLAY_NAME;
		displayNameShort	= "M855";
		ammo				= "rhs_ammo_556x45_M855_Ball";
		initSpeed			= 948.8424;
	};
	class rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red : rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red)
		displayName			= $STR_RHSUSF_30RND_556x45_M855_PMAG_TRACER_RED_DISPLAY_NAME;
		displayNameShort	= "M856 Tracer";
		ammo				= "rhs_ammo_556x45_M855_Ball_Red";
		initSpeed			= 948.8424;
	};
	class rhs_mag_30Rnd_556x45_Mk318_PMAG : rhs_mag_30Rnd_556x45_M855A1_PMAG
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_Mk318_PMAG)
		displayName			= $STR_RHSUSF_30RND_556x45_MK318_PMAG_DISPLAY_NAME;
		displayNameShort	= "Mk318";
		ammo				= "rhs_ammo_556x45_Mk318_Ball";
		initSpeed			= 950.3664;
	};
	class rhs_mag_30Rnd_556x45_Mk262_PMAG : rhs_mag_30Rnd_556x45_M855A1_PMAG
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_Mk262_PMAG)
		displayName			= $STR_RHSUSF_30RND_556x45_MK262_PMAG_DISPLAY_NAME;
		displayNameShort	= "Mk262";
		ammo				= "rhs_ammo_556x45_Mk262_Ball";
		initSpeed			= 838.2;
	};
	#define TEX_TAN_PMAG hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_tan_co.paa"};
	//Tan
	class rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan : rhs_mag_30Rnd_556x45_M855A1_PMAG
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan)
		TEX_TAN_PMAG
		model = rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_pmag_tan;
	};
	class rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red : rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red)
		TEX_TAN_PMAG
		model = rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_pmag_tan;
	};
	class rhs_mag_30Rnd_556x45_M855_PMAG_Tan : rhs_mag_30Rnd_556x45_M855_PMAG
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855_PMAG_Tan)
		TEX_TAN_PMAG
		model = rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_pmag_tan;
	};
	class rhs_mag_30Rnd_556x45_M855_PMAG_Tan_Tracer_Red : rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_M855_PMAG_Tan_Tracer_Red)
		TEX_TAN_PMAG
		model = rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_pmag_tan;
	};
	class rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan : rhs_mag_30Rnd_556x45_Mk318_PMAG
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan)
		TEX_TAN_PMAG
		model = rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_pmag_tan;
	};
	class rhs_mag_30Rnd_556x45_Mk262_PMAG_Tan : rhs_mag_30Rnd_556x45_Mk262_PMAG
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_30Rnd_556x45_Mk262_PMAG_Tan)
		TEX_TAN_PMAG
		model = rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_pmag_tan;
	};

//////////////////////
////40 round PMAGs////
//////////////////////

////////////////////////
////20 round STANAGs////
////////////////////////
	class rhs_mag_20Rnd_556x45_M193_Stanag : rhs_mag_30Rnd_556x45_M193_Stanag
	{
		AUTHOR_MACRO
		count				= 20;
		INVENTORY_PICTURE(rhs_mag_20Rnd_556x45_M193_Stanag)
		displayName			= $STR_RHSUSF_20RND_556x45_M193_DISPLAY_NAME;
		descriptionShort	= $STR_RHSUSF_20RND_556x45_DESCRIPTION_SHORT;
		mass				= 6.25;
		MODEL_20rndUSGI
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_20rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa"
		};
	};
	class rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red : rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red
	{
		AUTHOR_MACRO
		count				= 20;
		INVENTORY_PICTURE(rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red)
		displayName = $STR_RHSUSF_20RND_556x45_M196_TRACER_RED_DISPLAY_NAME;
		descriptionShort	= $STR_RHSUSF_20RND_556x45_DESCRIPTION_SHORT;
		mass				= 6.25;
		MODEL_20rndUSGI
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_20rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m196_co.paa"
		};
	};
	class rhs_mag_20Rnd_556x45_M200_Stanag : rhs_mag_30Rnd_556x45_M200_Stanag
	{
		AUTHOR_MACRO
		count				= 20;
		INVENTORY_PICTURE(rhs_mag_20Rnd_556x45_M200_Stanag)
		displayName			= $STR_RHSUSF_20RND_556x45_M200_DISPLAY_NAME;
		descriptionShort	= $STR_RHSUSF_20RND_556x45_DESCRIPTION_SHORT;
		mass				= 6.25;
		MODEL_20rndUSGI
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_20rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa"
		};
	};
	class rhs_mag_20Rnd_556x45_M855_Stanag : rhs_mag_30Rnd_556x45_M855_Stanag
	{
		AUTHOR_MACRO
		count				= 20;
		INVENTORY_PICTURE(rhs_mag_20Rnd_556x45_M855_Stanag)
		displayName			= $STR_RHSUSF_20RND_556x45_M855_DISPLAY_NAME;
		descriptionShort	= $STR_RHSUSF_20RND_556x45_DESCRIPTION_SHORT;
		mass				= 6.25;
		MODEL_20rndUSGI
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_20rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m855_co.paa"
		};
	};
	class rhs_mag_20Rnd_556x45_M855A1_Stanag : rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		AUTHOR_MACRO
		count				= 20;
		INVENTORY_PICTURE(rhs_mag_20Rnd_556x45_M855A1_Stanag)
		displayName			= $STR_RHSUSF_20RND_556x45_M855A1_DISPLAY_NAME;
		descriptionShort	= $STR_RHSUSF_20RND_556x45_DESCRIPTION_SHORT;
		mass				= 6.25;
		MODEL_20rndUSGI
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_20rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m885a1_co.paa"
		};
	};
	class rhs_mag_20Rnd_556x45_Mk262_Stanag : rhs_mag_30Rnd_556x45_Mk262_Stanag
	{
		AUTHOR_MACRO
		count				= 20;
		INVENTORY_PICTURE(rhs_mag_20Rnd_556x45_Mk262_Stanag)
		displayName			= $STR_RHSUSF_20RND_556x45_Mk262_DISPLAY_NAME;
		descriptionShort	= $STR_RHSUSF_20RND_556x45_DESCRIPTION_SHORT;
		mass				= 6.25;
		MODEL_20rndUSGI
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_20rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa"
		};
	};
//Jungle Mags
	class rhs_mag_20Rnd_556x45_M193_2MAG_Stanag : rhs_mag_20Rnd_556x45_M193_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_20Rnd_556x45_M193_2MAG_Stanag)
		displayName			= $STR_RHSUSF_20RND_556x45_M193_2MAG_DISPLAY_NAME;
		mass			= 9.35; //Larger, takes more space?
		model			= rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag20_2mag;
		modelSpecial	= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_tape_20rnd;
	};
	class rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red : rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red)
		displayName			= $STR_RHSUSF_20RND_556x45_M196_TRACER_RED_2MAG_DISPLAY_NAME;
		mass			= 9.35; //Larger, takes more space?
		model			= rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag20_2mag;
		modelSpecial	= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_tape_20rnd;
	};

	//100 round Beta Co. C-Mags (Needs somebody multilingual to do stringtables for mixed mags)
	class rhs_mag_100Rnd_556x45_M855A1_cmag : rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_100Rnd_556x45_M855A1_cmag)
		displayName			= $STR_RHSUSF_100RND_556x45_M855A1_CMAG_DISPLAY_NAME;
		descriptionShort	= "Caliber: 5.56x45mm NATO&lt;br/&gt;Rounds: 100&lt;br/&gt;Used in: M4, M16, M27, M249";
		reloadAction 		= "RHS_GestureReloadAR15_CMAG";
		mass				= 34.65;
		count				= 100;
		model				= rhsusf\addons\rhsusf_weapons\magazines\rhs_cmag;
		modelSpecial		= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_cmag_100rnd;
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\g36_cmag_co.paa"
		};
		hiddenSelections[]			= {"camo"};
	};
	class rhs_mag_100Rnd_556x45_M855A1_cmag_mixed : rhs_mag_100Rnd_556x45_M855A1_cmag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_100Rnd_556x45_M855A1_cmag_mixed)
		displayName			= "100rnd C-Mag M855A1 (Mixed)";
		displayNameShort	= "M855A1 (Mixed)";

		ammo				= "rhs_ammo_556x45_M855A1_Ball_Red";
		tracersEvery		= 5;
		lastRoundsTracer	= 5;
	};
	class rhs_mag_100Rnd_556x45_M855_cmag : rhs_mag_100Rnd_556x45_M855A1_cmag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_100Rnd_556x45_M855_cmag)
		displayName			= $STR_RHSUSF_100RND_556x45_M855_CMAG_DISPLAY_NAME;
		displayNameShort	= "M855";

		ammo				= "rhs_ammo_556x45_M855_Ball";
		initSpeed			= 948.8424;
	};
	class rhs_mag_100Rnd_556x45_M855_cmag_mixed : rhs_mag_100Rnd_556x45_M855_cmag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_100Rnd_556x45_M855_cmag_mixed)
		displayName			= "100rnd C-Mag M855 (Mixed)";
		displayNameShort	= "M855 (Mixed)";

		ammo				= "rhs_ammo_556x45_M855_Ball_Red";
		tracersEvery		= 5;
		lastRoundsTracer	= 5;
	};
	class rhs_mag_100Rnd_556x45_Mk318_cmag : rhs_mag_100Rnd_556x45_M855A1_cmag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_100Rnd_556x45_Mk318_cmag)
		displayName			= $STR_RHSUSF_100RND_556x45_MK318_CMAG_DISPLAY_NAME;
		displayNameShort	= "Mk318";
		ammo				= "rhs_ammo_556x45_Mk318_Ball";
		initSpeed			= 950.3664;
	};
	class rhs_mag_100Rnd_556x45_Mk262_cmag : rhs_mag_100Rnd_556x45_M855A1_cmag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_mag_100Rnd_556x45_Mk262_cmag)
		displayName			= $STR_RHSUSF_100RND_556x45_MK262_CMAG_DISPLAY_NAME;
		displayNameShort	= "Mk262";
		ammo				= "rhs_ammo_556x45_Mk262_Ball";
		initSpeed			= 838.2;
	};

	//40mm grenades
	class 1Rnd_HE_Grenade_shell;
 	class rhs_mag_M441_HE: 1Rnd_HE_Grenade_shell
	{
		AUTHOR_MACRO
		mass = 5.06;
		ammo = "rhsusf_40mm_HE";
		displayName = "M441 HE Grenade Round";
		displaynameshort = "HE Grenade";
		descriptionshort = "Type: High Explosive Grenade<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		model = "\rhsusf\addons\rhsusf_weapons2\magazines\40mm\rhs_m443";
		modelspecial = "\rhsusf\addons\rhsusf_weapons\mag_proxies\40mm\rhs_m443";
		modelSpecialIsProxy	= 1;
		deleteIfEmpty = 0;
	};
	class rhsusf_mag_6Rnd_M441_HE : rhs_mag_M441_HE
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = "6rnd M441 HE Grenade Rounds";
		descriptionshort = "Type: High Explosive Grenade<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		count = 6;
		mass = __EVAL(5.06*6);
	};
 	class rhs_mag_M433_HEDP: rhs_mag_M441_HE
	{
		AUTHOR_MACRO
		displayName = "M433 HEDP Grenade Round";
		displaynameshort = "HEDP Grenade";
		descriptionshort = "Type: High Explosive Dual Purpose Grenade<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		ammo = "rhsusf_40mm_HEDP";
		model = "\rhsusf\addons\rhsusf_weapons2\magazines\40mm\rhs_m443";
		modelspecial = "\rhsusf\addons\rhsusf_weapons\mag_proxies\40mm\rhs_m443";
		modelSpecialIsProxy	= 1;
		deleteIfEmpty = 0;
		picture = "\rhsusf\addons\rhsusf_weapons2\icons\rhs_icon_m443_ca.paa";
	};
	class rhsusf_mag_6Rnd_M433_HEDP : rhs_mag_M433_HEDP
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = "6rnd M433 HEDP Grenades";
		descriptionshort = "Type: High Explosive Dual Purpose Grenade<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		count = 6;
		mass = __EVAL(5.06*6);
	};
 	class rhs_mag_M397_HET: rhs_mag_M441_HE
	{
		AUTHOR_MACRO
		displayName = "M397 HET Grenade Round";
		displaynameshort = "HET Grenade";
		descriptionshort = "Type: High Explosive Timed<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		ammo = "rhs_ammo_m397";
		model = "\rhsusf\addons\rhsusf_weapons2\magazines\40mm\rhs_m443";
		modelspecial = "\rhsusf\addons\rhsusf_weapons\mag_proxies\40mm\rhs_m443";
		modelSpecialIsProxy	= 1;
		deleteIfEmpty = 0;
		picture = "\rhsusf\addons\rhsusf_weapons2\icons\rhs_icon_m443_ca.paa";
	};
	class rhsusf_mag_6Rnd_M397_HET : rhs_mag_M397_HET
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = "6rnd M397 HET Grenades";
		descriptionshort = "Type: High Explosive Timed<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		count = 6;
		mass = __EVAL(5.06*6);
	};
	class rhs_mag_M781_Practice: rhs_mag_M433_HEDP
	{
		AUTHOR_MACRO
		displayName = "M781 Practice Round";
		displaynameshort = "Practice Rnd.";
		descriptionshort = "Type: Practice Grenade<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		ammo = "rhsusf_40mm_Practice";
		model = "\rhsusf\addons\rhsusf_weapons2\magazines\40mm\rhs_m781";
		modelspecial = "\rhsusf\addons\rhsusf_weapons\mag_proxies\40mm\rhs_m781";
		picture = "\rhsusf\addons\rhsusf_weapons2\icons\rhs_icon_m781_ca.paa";
	};
	class rhsusf_mag_6Rnd_M781_Practice: rhs_mag_M781_Practice
	{
		AUTHOR_MACRO
		displayName = "6Rnd. M781 Practice Round";
		descriptionshort = "Type: Practice Grenade<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		scope = 2;
		count = 6;
        mass = __EVAL(5.06*6);
	};

	// Flashbang
 	class rhs_mag_m4009: rhs_mag_M441_HE
	{
		AUTHOR_MACRO
		displayName = "GL Stun Grenade Round";
		displaynameshort = "Stun Grenade";
		descriptionShort = "Type: Stun Grenade<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\m576_buckshot_ca.paa";
		ammo = "rhsusf_40mm_FLASHBANG";
	};
	class rhsusf_mag_6Rnd_m4009: rhsusf_mag_6Rnd_M433_HEDP
	{
		AUTHOR_MACRO
		displayName = "6rnd. GL Stun Grenade Round";
		displaynameshort = "Stun Grenade";
		descriptionShort = "Type: Stun Grenade<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\m576_buckshot_ca.paa";
		ammo = "rhs_g_vg40sz";
		mass = __EVAL(5.06*6);
	};
	// Buckshot
 	class rhs_mag_m576: rhs_mag_M441_HE
	{
		AUTHOR_MACRO
		displayName = "M576 Buckshot Round";
		displaynameshort = "Buckshot";
		descriptionShort = "Type: Buckshot Round<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		model = "\rhsusf\addons\rhsusf_weapons2\magazines\40mm\rhs_m576";
		modelspecial = "\rhsusf\addons\rhsusf_weapons\mag_proxies\40mm\rhs_m576";
		modelSpecialIsProxy	= 1;
		deleteIfEmpty = 0;
		picture = "\rhsusf\addons\rhsusf_weapons\icons\m576_buckshot_ca.paa";
		ammo = "rhs_ammo_m576_buckshot";
        initSpeed = 268;
	};
	class rhsusf_mag_6Rnd_M576_Buckshot : rhsusf_mag_6Rnd_M433_HEDP
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = "6rnd. M576 Buckshot Round";
		displaynameshort = "Buckshot";
		descriptionShort = "Type: Buckshot Round<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		model = "\rhsusf\addons\rhsusf_weapons2\magazines\40mm\rhs_m576";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\m576_buckshot_ca.paa";
		ammo = "rhs_ammo_m576_buckshot";
		mass = __EVAL(5.06*6);
	};

	// Flare
 	class rhs_mag_M585_white: rhs_mag_M441_HE
	{
		scope = 1;
		AUTHOR_MACRO
		displayName = "M583 White Flare Round";
		displaynameshort = "White Flare";
		descriptionShort = "Type: Flare Round - White<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		ammo = "rhsusf_40mm_white";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
	};
 	class rhs_mag_M583A1_white: rhs_mag_M585_white
	{
		scope = 2;
		AUTHOR_MACRO
		displayName = "M583A1 White Flare Round";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
	};
 	class rhs_mag_m661_green: rhs_mag_M585_white
	{
		scope = 2;
		AUTHOR_MACRO
		displayName = "M661 Green Flare Round";
		displaynameshort = "Green Flare";
		descriptionShort = "Type: Flare Round - Green<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		ammo = "rhsusf_40mm_green";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_green_CA.paa";
	};
 	class rhs_mag_m662_red: rhs_mag_M585_white
	{
		scope = 2;
		AUTHOR_MACRO
		displayName = "M662 Red Flare Round";
		displaynameshort = "Red Flare";
		descriptionShort = "Type: Flare Round - Red<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		ammo = "rhsusf_40mm_red";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_Red_CA.paa";
	};

 	class rhs_mag_M585_white_cluster: rhs_mag_M585_white
	{
		scope = 2;
		AUTHOR_MACRO
		displayName = "M585 White Cluster Star Round";
		displaynameshort = "White Cluster Star";
		descriptionShort = "Type: Cluster Star - White<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		ammo = "rhsusf_40mm_clusterflare_white";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
	};
 	class rhs_mag_M663_green_cluster: rhs_mag_M585_white_cluster
	{
		scope = 2;
		AUTHOR_MACRO
		displayName = "M663 Green Cluster Star Round";
		displaynameshort = "Green Cluster Star";
		descriptionShort = "Type: Cluster Star - Green<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		ammo = "rhsusf_40mm_clusterflare_green";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_green_CA.paa";
	};
 	class rhs_mag_M664_red_cluster: rhs_mag_M585_white_cluster
	{
		scope = 2;
		AUTHOR_MACRO
		displayName = "M664 Red Cluster Star Round";
		displaynameshort = "Red Cluster Star";
		descriptionShort = "Type: Cluster Star - Red<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		ammo = "rhsusf_40mm_clusterflare_red";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_red_CA.paa";
	};

	class rhsusf_mag_6Rnd_M585_white : rhsusf_mag_6Rnd_M433_HEDP
	{
		scope = 1;
		AUTHOR_MACRO
		displayName = "6Rnd. M585 White Flare Round";
		displaynameshort = "White Flare";
		descriptionShort = "Type: Flare Round - White<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		ammo = "rhsusf_40mm_white";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
	};
 	class rhsusf_mag_6Rnd_M583A1_white: rhsusf_mag_6Rnd_M585_white
	{
		scope = 2;
		AUTHOR_MACRO
		displayName = "6Rnd. M583A1 White Flare Round";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
	};
	class rhsusf_mag_6Rnd_m661_green : rhsusf_mag_6Rnd_M585_white
	{
		scope = 2;
		AUTHOR_MACRO
		displayName = "6Rnd. M661 Green Flare Round";
		displaynameshort = "Green Flare";
		descriptionShort = "Type: Flare Round - Green<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		ammo = "rhsusf_40mm_green";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_green_CA.paa";
	};
	class rhsusf_mag_6Rnd_m662_red: rhsusf_mag_6Rnd_M585_white
	{
		scope = 2;
		AUTHOR_MACRO
		displayName = "6Rnd. M662 Red Flare Round";
		displaynameshort = "Red Flare";
		descriptionShort = "Type: Flare Round - Red<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		ammo = "rhsusf_40mm_red";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_Red_CA.paa";
	};

	// Smoke
 	class rhs_mag_m713_Red: rhs_mag_M441_HE
	{
		AUTHOR_MACRO
		displayName			= "M713 Red Smoke Round";
		displaynameshort	= "Red Smoke";
		descriptionShort	= "Type: Smoke Round - Red<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		picture				="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
		ammo				= "rhs_40mm_m713_red";
		nameSoundWeapon		= "smokeshell";
		nameSound			= "smokeshell";
	};
 	class rhs_mag_m714_White: rhs_mag_m713_Red
	{
		AUTHOR_MACRO
		displayName			= "M714 White Smoke Round";
		displaynameshort	= "White Smoke";
		descriptionShort	= "Type: Smoke Round - White<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		picture				="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
		ammo				= "rhs_40mm_m714_white";
	};
 	class rhs_mag_m715_Green: rhs_mag_m713_Red
	{
		AUTHOR_MACRO
		displayName			= "M715 Green Smoke Round";
		displaynameshort	= "Green Smoke";
		descriptionShort	= "Type: Smoke Round - Green<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		picture				="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
		ammo				= "rhs_40mm_m715_green";
	};
 	class rhs_mag_m716_yellow: rhs_mag_m713_Red
	{
		AUTHOR_MACRO
		displayName			= "M716 Yellow Smoke Round";
		displaynameshort	= "Yellow Smoke";
		descriptionShort	= "Type: Smoke Round - Yellow<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		picture				="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
		ammo				= "rhs_40mm_m716_yellow";
	};

	class rhsusf_mag_6Rnd_M713_red : rhsusf_mag_6Rnd_M433_HEDP
	{
		AUTHOR_MACRO
		displayName			= "6Rnd. M713 Red Smoke Round";
		displaynameshort	= "Red Smoke";
		descriptionShort	= "Type: Smoke Grenade - Red<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		picture				="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
		ammo				= "rhs_40mm_m713_red";
		nameSoundWeapon		= "smokeshell";
		nameSound			= "smokeshell";
	};
	class rhsusf_mag_6Rnd_M714_white : rhsusf_mag_6Rnd_M713_red
	{
		AUTHOR_MACRO
		displayName			= "6Rnd. M714 White Smoke Round";
		displaynameshort	= "White Smoke";
		descriptionShort	= "Type: Smoke Grenade - White<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		picture				="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
		ammo				= "rhs_40mm_m714_white";
	};
	class rhsusf_mag_6Rnd_M715_green : rhsusf_mag_6Rnd_M713_red
	{
		AUTHOR_MACRO
		displayName			= "6Rnd. M715 Green Smoke Round";
		displaynameshort	= "Green Smoke";
		descriptionShort	= "Type: Smoke Grenade - Green<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		picture				="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
		ammo				= "rhs_40mm_m715_green";
	};

	class rhsusf_mag_6Rnd_M716_yellow : rhsusf_mag_6Rnd_M713_red
	{
		AUTHOR_MACRO
		displayName			= "6Rnd. M716 Yellow Smoke Round";
		displaynameshort	= "Yellow Smoke";
		descriptionShort	= "Type: Smoke Grenade - Yellow<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		picture				="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
		ammo				= "rhs_40mm_m716_yellow";
	};



	// Rifle Mags
	// M2010 mag
	class rhsusf_5Rnd_300winmag_xm2010 : CA_Magazine
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = $STR_rhsusf_5Rnd_300winmag_xm2010; //Should it be named Mk248 Mod 1?
		displaynameshort = ".300 Win Mag";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_win_mag";
		picture = "\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		ammo = "rhsusf_B_300winmag";
		count = 5;
		initSpeed = 869;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = $STR_rhsusf_5Rnd_300winmag_xm2010_DESC;
		mass = 	1.56;
	};

	// M107 mags
	class 10Rnd_RHS_50BMG_Box : CA_Magazine
	{
		AUTHOR_MACRO
		scope = 1;
		value = 1;
		displayName = "";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\m_bmg_stdbox_ca.paa";
		modelSpecial = "";
		useAction = false;
		useActionTitle = "";
		reloadAction = "";
		ammo = "rhsusf_ammo_127x99_M33_Ball";
		count = 10;
		type = 256;
		initSpeed = 853;
		selectionFireAnsim = "zasleh";
		nameSound = "magazine";
		maxLeadSpeed = 23;	// max estimated speed km/h
		weaponpoolavailable = 1;
		mass = 41.14;
	};
	class rhsusf_mag_10Rnd_STD_50BMG_M33 : 10Rnd_RHS_50BMG_Box
	{
		AUTHOR_MACRO
		scope = 2;
		initSpeed = 853;
		displayName = "10rnd M107 M33";
		displayNameShort = "M33 Ball";
		descriptionShort = "10RD .50BMG M33 Ball M107 Magazine";
		tracersEvery = 0;
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_50cal_box_mag";
	};
	class rhsusf_mag_10Rnd_STD_50BMG_mk211 : rhsusf_mag_10Rnd_STD_50BMG_M33
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = "10rnd M107 Mk211";
		displayNameShort = "Mk 211 HEIAP";
		descriptionShort = "10RD .50BMG Mk 211 HEIAP M107 Magazine";
		ammo = "rhsusf_ammo_127x99_mk211";
	};

	//.12 Guage Shotgun mags
	class rhsusf_5Rnd_00Buck : CA_Magazine
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = $STR_RHSUSF_5RND_12G_00BUCKSHOT_DISPLAY_NAME;
		displayNameShort = "Buckshot";
		descriptionshort = "Caliber: 12 gauge<br />Rounds: 5<br />Used in: M590A1";

		picture = "\rhsusf\addons\rhsusf_weapons\icons\m_12g_buck.paa";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\12g\12g_buckshot";
		modelSpecial = "\rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_12ga_buckshot_1rnd.p3d";
		modelSpecialIsProxy = 1;
		ammo = "rhs_ammo_12g_00buckshot";

		count = 5;
		mass = 	5.5;

		initSpeed = 336;
	};
	class rhsusf_8Rnd_00Buck : rhsusf_5Rnd_00Buck
	{
		AUTHOR_MACRO
		displayName = $STR_RHSUSF_8RND_12G_00BUCKSHOT_DISPLAY_NAME;
		descriptionshort = "Caliber: 12 gauge<br />Rounds: 8<br />Used in: M590A1";

		count = 8;
		mass = 	8.8;

		initSpeed = 403;
	};
	class rhsusf_5Rnd_Slug : rhsusf_5Rnd_00Buck
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = $STR_RHSUSF_5RND_12G_SLUG_DISPLAY_NAME;
		displayNameShort = "Slug";

		picture = "\rhsusf\addons\rhsusf_weapons\icons\m_12g_slug.paa";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\12g\12g_slug";
		modelSpecial = "\rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_12ga_slug_1rnd.p3d";
		ammo = "rhs_ammo_12g_slug";

		initSpeed = 395;
	};
	class rhsusf_8Rnd_Slug : rhsusf_5Rnd_Slug
	{
		AUTHOR_MACRO
		displayName = $STR_RHSUSF_8RND_12G_SLUG_DISPLAY_NAME;
		descriptionshort = "Caliber: 12 gauge<br />Rounds: 8<br />Used in: M590A1";

		count = 8;
		mass = 	8.8;

		initSpeed = 475;
	};
	class rhsusf_5Rnd_HE : rhsusf_8Rnd_Slug
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = $STR_RHSUSF_5RND_12G_HEEP_DISPLAY_NAME;
		displayNameShort = "HE";
		descriptionshort = "Caliber: 12 gauge<br />Rounds: 5<br />Used in: M590A1";

		picture = "\rhsusf\addons\rhsusf_weapons\icons\m_12g_heep.paa";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\12g\12g_he";
		modelSpecial = "\rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_12ga_heer_1rnd.p3d";
		ammo = "rhs_ammo_12g_HE";

		count = 5;
		mass = 	5.5;

		initSpeed = 125;
	};
	class rhsusf_8Rnd_HE : rhsusf_5Rnd_HE
	{
		AUTHOR_MACRO
		displayName = $STR_RHSUSF_8RND_12G_HEEP_DISPLAY_NAME;
		descriptionshort = "Caliber: 12 gauge<br />Rounds: 8<br />Used in: M590A1";

		count = 8;
		mass = 	8.8;

		initSpeed = 150;
	};
	class rhsusf_5Rnd_FRAG : rhsusf_8Rnd_HE
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = $STR_RHSUSF_5RND_12G_FRAG_DISPLAY_NAME;
		displayNameShort = "FRAG";
		descriptionshort = "Caliber: 12 gauge<br />Rounds: 5<br />Used in: M590A1";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\m_12g_frag.paa";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\12g\12g_frag";
		modelSpecial = "\rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_12ga_hefrag_1rnd.p3d";
		ammo = "rhs_ammo_12g_FRAG";
		count = 5;
		mass = 	5.5;

		initSpeed = 125;
	};
	class rhsusf_8Rnd_FRAG : rhsusf_5Rnd_FRAG
	{
		AUTHOR_MACRO
		displayName = $STR_RHSUSF_8RND_12G_FRAG_DISPLAY_NAME;
		descriptionshort = "Caliber: 12 gauge<br />Rounds: 8<br />Used in: M590A1";

		count = 8;
		mass = 	8.8;

		initSpeed = 150;
	};
	class rhsusf_5Rnd_doomsday_Buck : rhsusf_5Rnd_00Buck
	{
		AUTHOR_MACRO
		scope = 1;
		scopeArsenal = 0;
		displayName = "5rnd. 12g Doosmday Buckshot";
		displayNameShort = "DOOMSDAY";
		descriptionshort = "Caliber: 12 gauge<br />Rounds: 5<br />Used in: M590A1";
		ammo = "rhs_ammo_doomsday_buckshot";
		count = 5;
		mass = 	12;
	};
	class rhsusf_8Rnd_doomsday_Buck : rhsusf_5Rnd_doomsday_Buck
	{
		AUTHOR_MACRO
		displayName = "8rnd. 12g Doosmday Buckshot";
		descriptionshort = "Caliber: 12 gauge<br />Rounds: 8<br />Used in: M590A1";
		ammo = "rhs_ammo_doomsday_buckshot";
		count = 8;
		mass = 	15;
	};
	// Six-12
	class rhs_mag_six12_slug: CA_Magazine
	{
		scope				= 2;
		displayname			= "Six-12 Slug";
		displayNameShort	= "Slug";
		ammo				= "rhs_ammo_12g_slug";
		count				= 6;
		initSpeed			= 395;
		modelspecial		= "\a3\Weapons_F_Enoch\MagazineProxies\mag_12ga_tsp12_6rnd_F.p3d";
		modelSpecialIsProxy	= 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_black_CO.paa"};
	};

	//M249 mags (stringtables need to be redone for softpacks and box mags)
	//100 round softpacks
	//M81 Woodland
	class rhsusf_100Rnd_556x45_soft_pouch : rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_556x45_soft_pouch)
		ammo = "rhs_ammo_556x45_M855A1_Ball";
		count = 100;

		descriptionshort = "Caliber: 5.56x45mm M855A1 NATO<br />Rounds: 100<br />Used in: M249";
		displayname = "100rnd M249 Softpack M855A1";
		displayNameShort = "M855A1 EPR";

		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_m81_co.paa"};

		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag";
		modelSpecial = rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_pouch_100rnd;

		reloadAction = rhs_GestureReloadM249;

		mass = 26.9;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		//initSpeed = 915;
	};
	class rhsusf_100Rnd_556x45_mixed_soft_pouch : rhsusf_100Rnd_556x45_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_556x45_soft_pouch)
		ammo = "rhs_ammo_556x45_M855A1_Ball_Red";

		displayname = "100rnd M249 Softpack M855A1 (Mixed)";
		displayNameShort = "M855A1 (Mixed)";
		lastroundstracer = 5;
		tracersEvery = 5;
	};
	/* class rhsusf_100Rnd_556x45_M856A1_soft_pouch : rhsusf_100Rnd_556x45_soft_pouch
	{
		AUTHOR_MACRO
		ammo = "rhs_ammo_556x45_M855A1_Ball_Red";
		displayname = "100rnd M249 Softpack M856A1 (Tracer)";
		displayNameShort = "M856A1 Tracer";
		tracersEvery = 1;
	}; */
	class rhsusf_100Rnd_556x45_M855_soft_pouch : rhsusf_100Rnd_556x45_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_556x45_soft_pouch)
		descriptionshort	= "Caliber: 5.56x45mm M855 NATO<br />Rounds: 100<br />Used in: M249";
		displayname			= "100rnd M249 Softpack M855";
		displayNameShort 	= "M855";
		ammo				= "rhs_ammo_556x45_M855_Ball";
		initSpeed			= 948.8424;
	};
	class rhsusf_100Rnd_556x45_M855_mixed_soft_pouch : rhsusf_100Rnd_556x45_M855_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_556x45_soft_pouch)
		ammo = "rhs_ammo_556x45_M855_Ball_Red";

		displayname	= "100rnd M249 Softpack M855 (Mixed)";
		displayNameShort = "M855 (Mixed)";
		lastroundstracer = 5;
		tracersEvery = 5;
	};
	/* class rhsusf_100Rnd_556x45_M856_soft_pouch : rhsusf_100Rnd_556x45_M855_soft_pouch
	{
		AUTHOR_MACRO
		ammo = "rhs_ammo_556x45_M855_Ball_Red";
		displayname = "100rnd M249 Softpack M856 (Tracer)";
		displayNameShort = "M856 Tracer";
		tracersEvery = 1;
	}; */
	class rhsusf_100Rnd_556x45_M995_soft_pouch : rhsusf_100Rnd_556x45_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_556x45_soft_pouch)
		descriptionshort	= "Caliber: 5.56x45mm AP NATO<br />Rounds: 100<br />Used in: M249";
		displayname			= "100rnd M249 Softpack M995 AP";
		displayNameShort	= "M995 AP";
		ammo				= "rhs_ammo_556x45_M995_AP";
		initSpeed			= 1024;
		tracersEvery		= 5;
	};
	class rhsusf_100Rnd_556x45_M200_soft_pouch : rhsusf_100Rnd_556x45_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_556x45_soft_pouch)
		descriptionshort	= "Caliber: 5.56x45mm Blank NATO<br />Rounds: 100<br />Used in: M249";
		displayname			= "100rnd M249 Softpack M200";
		displayNameShort 	= "M200 Blanks";
		ammo				= "rhs_ammo_556x45_blank";
	};
	//UCP
	class rhsusf_100Rnd_556x45_soft_pouch_ucp : rhsusf_100Rnd_556x45_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_556x45_soft_pouch_ucp)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_ucp";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"};
	};
	class rhsusf_100Rnd_556x45_mixed_soft_pouch_ucp : rhsusf_100Rnd_556x45_mixed_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_556x45_soft_pouch_ucp)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_ucp";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"};
	};
	class rhsusf_100Rnd_556x45_M855_soft_pouch_ucp : rhsusf_100Rnd_556x45_M855_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_556x45_soft_pouch_ucp)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_ucp";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"};
	};
	class rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_ucp : rhsusf_100Rnd_556x45_M855_mixed_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_556x45_soft_pouch_ucp)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_ucp";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"};
	};
	class rhsusf_100Rnd_556x45_M995_soft_pouch_ucp : rhsusf_100Rnd_556x45_M995_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_556x45_soft_pouch_ucp)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_ucp";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"};
	};
	class rhsusf_100Rnd_556x45_M200_soft_pouch_ucp : rhsusf_100Rnd_556x45_M200_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_556x45_soft_pouch_ucp)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_ucp";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"};
	};
	//Coyote Brown
	class rhsusf_100Rnd_556x45_soft_pouch_coyote : rhsusf_100Rnd_556x45_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_556x45_soft_pouch_coyote)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_coy";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"};
	};
	class rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote : rhsusf_100Rnd_556x45_mixed_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_556x45_soft_pouch_coyote)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_coy";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"};
	};
	class rhsusf_100Rnd_556x45_M855_soft_pouch_coyote : rhsusf_100Rnd_556x45_M855_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_556x45_soft_pouch_coyote)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_coy";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"};
	};
	class rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote : rhsusf_100Rnd_556x45_M855_mixed_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_556x45_soft_pouch_coyote)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_coy";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"};
	};
	class rhsusf_100Rnd_556x45_M995_soft_pouch_coyote : rhsusf_100Rnd_556x45_M995_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_556x45_soft_pouch_coyote)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_coy";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"};
	};
	class rhsusf_100Rnd_556x45_M200_soft_pouch_coyote : rhsusf_100Rnd_556x45_M200_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_556x45_soft_pouch_coyote)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_coy";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"};
	};

	//200 round softpacks
	class rhsusf_200Rnd_556x45_soft_pouch : rhsusf_100Rnd_556x45_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_200Rnd_556x45_soft_pouch)
		count = 200;

		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag";
		modelSpecial = rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_pouch_200rnd;

		descriptionshort = "Caliber: 5.56x45mm M855A1 NATO<br />Rounds: 200<br />Used in: M249";
		displayname = "200rnd M249 Softpack M855A1";

		mass = 45.87;
	};
	class rhsusf_200Rnd_556x45_mixed_soft_pouch : rhsusf_200Rnd_556x45_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_200Rnd_556x45_soft_pouch)
		ammo = "rhs_ammo_556x45_M855A1_Ball_Red";

		displayname = "200rnd M249 Softpack M855A1 (Mixed)";
		displayNameShort = "M855A1 (Mixed)";
		lastroundstracer = 5;
		tracersEvery = 5;
	};
	/* class rhsusf_200Rnd_556x45_M856A1_soft_pouch : rhsusf_200Rnd_556x45_soft_pouch
	{
		AUTHOR_MACRO
		ammo = "rhs_ammo_556x45_M855A1_Ball_Red";
		displayname = "200rnd M249 Softpack M856A1 (Tracer)";
		displayNameShort = "M856A1 Tracer";
		tracersEvery = 1;
	}; */
	class rhsusf_200Rnd_556x45_M855_soft_pouch : rhsusf_100Rnd_556x45_M855_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_200Rnd_556x45_soft_pouch)
		count = 200;

		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag";
		modelSpecial = rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_pouch_200rnd;
		descriptionshort = "Caliber: 5.56x45mm M855 NATO<br />Rounds: 200<br />Used in: M249";
		displayname = "200rnd M249 Softpack M855";

		mass = 45.87;
	};
	class rhsusf_200Rnd_556x45_M855_mixed_soft_pouch : rhsusf_200Rnd_556x45_M855_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_200Rnd_556x45_soft_pouch)
		ammo = "rhs_ammo_556x45_M855_Ball_Red";

		displayname = "200rnd M249 Softpack M855 (Mixed)";
		displayNameShort = "M855 (Mixed)";
		lastroundstracer = 5;
		tracersEvery = 5;
	};
	/* class rhsusf_200Rnd_556x45_M856_soft_pouch : rhsusf_200Rnd_556x45_M855_soft_pouch
	{
		AUTHOR_MACRO
		ammo = "rhs_ammo_556x45_M855_Ball_Red";
		displayname = "200rnd M249 Softpack M856 (Tracer)";
		displayNameShort = "M856 Tracer";
		tracersEvery = 1;
	}; */
	//UCP
	class rhsusf_200Rnd_556x45_soft_pouch_ucp : rhsusf_200Rnd_556x45_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_200Rnd_556x45_soft_pouch_ucp)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_ucp";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"};
	};
	class rhsusf_200Rnd_556x45_mixed_soft_pouch_ucp : rhsusf_200Rnd_556x45_mixed_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_200Rnd_556x45_soft_pouch_ucp)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_ucp";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"};
	};
	class rhsusf_200Rnd_556x45_M855_soft_pouch_ucp : rhsusf_200Rnd_556x45_M855_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_200Rnd_556x45_soft_pouch_ucp)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_ucp";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"};
	};
	class rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp : rhsusf_200Rnd_556x45_M855_mixed_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_200Rnd_556x45_soft_pouch_ucp)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_ucp";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"};
	};
	//Coyote Brown
	class rhsusf_200Rnd_556x45_soft_pouch_coyote : rhsusf_200Rnd_556x45_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_200Rnd_556x45_soft_pouch_coyote)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_coy";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"};
	};
	class rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote : rhsusf_200Rnd_556x45_mixed_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_200Rnd_556x45_soft_pouch_coyote)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_coy";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"};
	};
	class rhsusf_200Rnd_556x45_M855_soft_pouch_coyote : rhsusf_200Rnd_556x45_M855_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_200Rnd_556x45_soft_pouch_coyote)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_coy";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"};
	};
	class rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote : rhsusf_200Rnd_556x45_M855_mixed_soft_pouch
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_200Rnd_556x45_soft_pouch_coyote)
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_coy";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"};
	};

	//Plastic box mags
	class rhs_200rnd_556x45_M_SAW : rhsusf_200Rnd_556x45_soft_pouch //legacy class
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_200Rnd_556x45_box)
		scope = 1;
		scopeArsenal = 0;

		ammo = "rhs_ammo_556x45_M855A1_Ball_Red";

		displayname = "200rnd M249 Box M855A1 (Mixed)";
		displaynameshort = "M855A1 (Mixed)";
		lastroundstracer = 5;
		tracersevery = 5;
		mass = 51.65;

		hiddenSelections[] = {};

		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
		modelSpecial = rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd;
		//picture = ""; //TODO
	};
	class rhs_200rnd_556x45_T_SAW : rhs_200rnd_556x45_M_SAW //legacy class
	{
		AUTHOR_MACRO
		displayname = "200rnd M249 Box M856A1 (Tracer)";
		displaynameshort = "M856A1 Tracer";
		lastroundstracer = 5;
		tracersevery = 1;
		mass = 51.65;
	};
	class rhs_200rnd_556x45_B_SAW : rhs_200rnd_556x45_M_SAW //legacy class
	{
		AUTHOR_MACRO
		ammo = "rhs_ammo_556x45_M855A1_Ball";

		displayname = "200rnd M249 Box M855A1";
		displaynameshort = "M855A1 EPR";
		lastroundstracer = 0;
		tracersevery = 0;
	};
	class rhsusf_200Rnd_556x45_box : rhs_200rnd_556x45_B_SAW {scope = 2; scopeArsenal = 2;};
	class rhsusf_200rnd_556x45_mixed_box : rhs_200rnd_556x45_M_SAW {scope = 2; scopeArsenal = 2;};
	//class rhsusf_200rnd_556x45_M856A1_box : rhs_200rnd_556x45_T_SAW {scope = 2; scopeArsenal = 2;};
	class rhsusf_200rnd_556x45_M855_box : rhs_200rnd_556x45_B_SAW //legacy class
	{
		AUTHOR_MACRO
		scope = 2;
		scopeArsenal = 2;
		mass = 51.65;
		displayname = "200rnd M249 Box M855";
		displaynameshort = "M855";
		descriptionshort = "Caliber: 5.56x45mm M855 NATO<br />Rounds: 200<br />Used in: M249";
		ammo				= "rhs_ammo_556x45_M855_Ball";
		initSpeed			= 948.8424;
	};
	class rhsusf_200rnd_556x45_M855_mixed_box : rhsusf_200rnd_556x45_M855_box
	{
		AUTHOR_MACRO
		ammo = "rhs_ammo_556x45_M855A1_Ball_Red";

		displayname = "200rnd M249 Box M855 (Mixed)";
		displaynameshort = "M855 (Mixed)";
		tracersevery = 5;
	};
	/* class rhsusf_200rnd_556x45_M856_box : rhs_200rnd_556x45_T_SAW
	{
		ammo = "rhs_ammo_556x45_M855_Ball_Red";
		displayname = "200rnd M249 Box M856 (Tracer)";
		displaynameshort = "M856 Tracer";
	}; */

	// M240 mags
	//50 round softpacks
	class rhsusf_50Rnd_762x51 : CA_Magazine // M80
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_50Rnd_762x51)
		scope				= 2;

		descriptionshort	= "Caliber: 7.62x51mm NATO<br />Rounds: 50<br />Used in: M240";
		displayname			= "50rnd M240 Softpack M80";
		displaynameshort	= "M80 Ball";

		model				= "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_softpouch_mag";

		count				= 50;
		type				= 2*WeaponSlotItem;
		ammo				= "rhs_ammo_762x51_M80_Ball";
		initSpeed			= 838;
		tracersEvery		= 5;
		lastRoundsTracer	= 0;
		mass				= 25.41;
		modelSpecial		= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_50rnd;
		modelSpecialIsProxy	= 1;
	};
	class rhsusf_50Rnd_762x51_m61_ap : rhsusf_50Rnd_762x51
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_50Rnd_762x51_m61_ap)
		displayname			= "50rnd M240 Softpack M61 AP";
		displayNameShort	= "M61 AP";
		ammo				= "rhs_ammo_762x51_M61_AP";
		initSpeed			= 838;
		mass				= 25.41;
	};
	class rhsusf_50Rnd_762x51_m62_tracer : rhsusf_50Rnd_762x51
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_50Rnd_762x51_m62_tracer)
		displayname			= "50rnd M240 Softpack M62 (Tracer)";
		displayNameShort	= "M62 Tracer";
		ammo				= "rhs_ammo_762x51_M62_tracer";
		initSpeed			= 817;
		mass				= 25.41;
		tracersEvery		= 1;
	};
	class rhsusf_50Rnd_762x51_m80a1epr : rhsusf_50Rnd_762x51
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_50Rnd_762x51_m80a1epr)
		displayname			= "50rnd M240 Softpack M80A1 EPR";
		displayNameShort	= "M80A1 EPR";
		ammo				= "rhs_ammo_762x51_M80A1EPR_Ball";
		initSpeed			= 930; //Should be about 930m/s from M240: https://apps.dtic.mil/dtic/tr/fulltext/u2/a567897.pdf
		mass				= 25.41;
	};
	class rhsusf_50Rnd_762x51_m82_blank : rhsusf_50Rnd_762x51
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_50Rnd_762x51_m82_blank)
		displayname			= "50rnd M240 Belt M82 (Blank)";
		displayNameShort	= "M82 Blanks";
		ammo				= "rhs_ammo_762x51_M82_blank";
		initSpeed			= 838;
		mass				= 25.41;
	};
	//100 round boxes/bandolier ammo bags
	class rhsusf_100Rnd_762x51 : rhsusf_50Rnd_762x51 // M80
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_762x51)
		displayname			= "100rnd M240 Box M80"; //Might be worth naming "100rnd 7.62 Box..." in future in case other 7.62 MG's get added...
		displayNameShort	= "M80 Ball";
		descriptionshort	= "Caliber: 7.62x51mm NATO<br />Rounds: 100<br />Used in: M240";

		model				= "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
		count				= 100;
		initSpeed			= 838;
		mass				= 32.34;

		lastroundstracer	= 0;
		modelSpecial		= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd;
	};
	class rhsusf_100Rnd_762x51_m61_ap : rhsusf_50Rnd_762x51_m61_ap
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_762x51_m61_ap)
		displayname			= "100rnd M240 Box M61 AP";
		displayNameShort	= "M61 AP";
		descriptionshort	= "Caliber: 7.62x51mm NATO<br />Rounds: 100<br />Used in: M240";
		count				= 100;
		mass				= 32.34;
		lastroundstracer	= 0;
		model				= "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
		modelSpecial		= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd;
	};
	class rhsusf_100Rnd_762x51_m62_tracer : rhsusf_50Rnd_762x51_m62_tracer
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_762x51_m62_tracer)
		displayname			= "100rnd M240 Box M62 (Tracer)";
		displayNameShort	= "M62 Tracer";
		descriptionshort	= "Caliber: 7.62x51mm NATO<br />Rounds: 100<br />Used in: M240";
		count				= 100;
		mass				= 32.34;
		model				= "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
		modelSpecial		= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd;
	};
	class rhsusf_100Rnd_762x51_m80a1epr : rhsusf_50Rnd_762x51_m80a1epr
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_762x51_m80a1epr)
		displayname			= "100rnd M240 Box M80A1 EPR";
		displayNameShort	= "M80A1 EPR";
		descriptionshort	= "Caliber: 7.62x51mm NATO<br />Rounds: 100<br />Used in: M240";
		count				= 100;
		mass				= 32.34;
		lastroundstracer	= 0;
		model				= "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
		modelSpecial		= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd;
	};
	class rhsusf_100Rnd_762x51_m82_blank : rhsusf_50Rnd_762x51_m82_blank
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_100Rnd_762x51_m82_blank)
		displayname			= "100rnd M240 Box M82 (Blank)";
		displayNameShort	= "M82 Blanks";
		descriptionshort	= "Caliber: 7.62x51mm NATO<br />Rounds: 100<br />Used in: M240";
		count				= 100;
		mass				= 32.34;
		model				= "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
		modelSpecial		= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd;
	};

	// M993 ONLY USED in M60 MGs and M24 (should be deleted but scoped for back compatibility)
	class rhsusf_50Rnd_762x51_m993 : rhsusf_50Rnd_762x51
	{
		AUTHOR_MACRO
		scope				= 1;

		displayName			= "50rnd M240 Softpack M993 AP";
		displayNameShort	= "M993 AP";
		descriptionshort	= "Caliber: 7.62x51mm NATO<br />Rounds: 50<br />Used in: M240";
		ammo				= "rhs_ammo_762x51_M993_Ball";
		initSpeed			= 910;
		mass				= 16.24;
	};
	class rhsusf_100Rnd_762x51_m993 : rhsusf_50Rnd_762x51_m993
	{
		AUTHOR_MACRO
		scope				= 1;

		displayName			= "100rnd M240 Box M993 AP";
		descriptionshort	= "Caliber: 7.62x51mm NATO<br />Rounds: 100<br />Used in: M240";
		count				= 100;
		mass				= 32.34;
	};

	// M14 series mags
	class rhsusf_20Rnd_762x51_m118_special_Mag: CA_Magazine
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = "20rnd M14 M118";
		displayNameShort = "M118 Ball";
		picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m14_mag";
		modelSpecial		= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_M14_20rnd;
		modelSpecialIsProxy	= 1;
		count = 20;
		ammo = "rhs_ammo_762x51_M118_Special_Ball";
		mass = 16.24;
		initSpeed = 805; //786 according to PEO Ammunition systems: https://apps.dtic.mil/dtic/tr/fulltext/u2/a567897.pdf
		descriptionShort = "Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: M14 Series Rifles";
	};
	class rhsusf_20Rnd_762x51_m993_Mag: rhsusf_20Rnd_762x51_m118_special_Mag
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = "20rnd M14 M993 AP";
		displayNameShort = "M993 AP";
		ammo = "rhs_ammo_762x51_M993_Ball";
		mass = 16.24;
		initSpeed = 910;
	};
	class rhsusf_20Rnd_762x51_m80_Mag: rhsusf_20Rnd_762x51_m118_special_Mag
	{
		AUTHOR_MACRO
		scope = 2;
		displayname = "20rnd M14 M80";
		displayNameShort = "M80 Ball";
		ammo = "rhs_ammo_762x51_M80_Ball";
		mass = 16.24;
		initSpeed = 838;
	};
	class rhsusf_20Rnd_762x51_m62_Mag: rhsusf_20Rnd_762x51_m118_special_Mag
	{
		AUTHOR_MACRO
		scope = 2;
		displayname = "20rnd M14 M62 (Tracer)";
		displayNameShort = "M62 Tracer";
		ammo = "rhs_ammo_762x51_M62_tracer";
		mass = 16.24;
		initSpeed = 817;
		tracersEvery = 1;
	};

	// Mk11/M110/SR-25 mags
	class rhsusf_20Rnd_762x51_SR25_m118_special_Mag: rhsusf_20Rnd_762x51_m118_special_Mag
	{
		AUTHOR_MACRO
		displayName = "20rnd SR-25 M118";
		descriptionShort = "Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: SR-25 Series Rifles";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_20rnd_ar308_mag";
	};
	class rhsusf_20Rnd_762x51_SR25_m993_Mag: rhsusf_20Rnd_762x51_m993_Mag
	{
		AUTHOR_MACRO
		displayName = "20rnd SR-25 M993 AP";
		descriptionShort = "Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: SR-25 Series Rifles";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_20rnd_ar308_mag";
	};
	class rhsusf_20Rnd_762x51_SR25_m62_Mag: rhsusf_20Rnd_762x51_m62_Mag
	{
		AUTHOR_MACRO
		displayName = "20rnd SR-25 M62 (Tracer)";
		descriptionShort = "Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: SR-25 Series Rifles";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_20rnd_ar308_mag";
	};
	class rhsusf_20Rnd_762x51_SR25_mk316_special_Mag: rhsusf_20Rnd_762x51_m118_special_Mag
	{
		AUTHOR_MACRO
		initSpeed = 814;
		ammo = "rhs_ammo_762x51_Mk316_Special_Ball";
		displayName = "20rnd SR-25 Mk316 Mod 0";
		descriptionShort = "Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: SR-25 Series Rifles";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_20rnd_ar308_mag";
	};

	// 5 round 7.62x51mm stripper clips (M24 SWS & M40 series)
	class rhsusf_5Rnd_762x51_m118_special_Mag: CA_Magazine
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = "5rnd M118";
		displayNameShort = "M118 Ball";
		picture = "\A3\weapons_f\data\UI\m_5rnd_127x108_ca.paa";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_762x51_loose";
		modelSpecial = rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_aics_5rnd;
		modelSpecialIsProxy = 1;
		count = 5;
		ammo = "rhs_ammo_762x51_M118_Special_Ball";
		mass = 2.64;
		initSpeed = 805; //786 according to PEO Ammunition systems: https://apps.dtic.mil/dtic/tr/fulltext/u2/a567897.pdf
		descriptionShort = "Caliber: 7.62x51mm NATO<br />Rounds: 5<br />Used in: M24 SWS";
	};
	class rhsusf_5Rnd_762x51_m993_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = "5rnd M993 AP";
		displayNameShort = "M993 AP";
		ammo = "rhs_ammo_762x51_M993_Ball";
		mass = 2.64;
		initSpeed = 910;
		descriptionShort = "Caliber: 7.62x51mm NATO<br />Rounds: 5<br />Used in: M24 SWS";
	};
	class rhsusf_5Rnd_762x51_m62_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
	{
		AUTHOR_MACRO
		scope = 2;
		displayname = "5rnd M62 (Tracer)";
		displayNameShort = "M62 Tracer";
		ammo = "rhs_ammo_762x51_M62_tracer";
		mass = 2.64;
		initSpeed = 817;
		tracersEvery = 1;
		descriptionShort = "Caliber: 7.62x51mm NATO<br />Rounds: 5<br />Used in: M24 SWS";
	};

	// M40A3/A5 AICS mags
	class rhsusf_10Rnd_762x51_m118_special_Mag: CA_Magazine
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = "10rnd AICS M118";
		displayNameShort = "M118 Ball";
		picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_10rnd_aics_mag";
		modelSpecial = rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_aics_10rnd;
		modelSpecialIsProxy	= 1;
		count = 10;
		ammo = "rhs_ammo_762x51_M118_Special_Ball";
		mass = 5.28;
		initSpeed = 805; //786 according to PEO Ammunition systems: https://apps.dtic.mil/dtic/tr/fulltext/u2/a567897.pdf
		descriptionShort = "Caliber: 7.62x51mm NATO<br />Rounds: 10<br />Used in: M40A5";
	};
	class rhsusf_10Rnd_762x51_m993_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
	{
		AUTHOR_MACRO
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_10rnd_aics_mag";
		modelSpecial = rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_aics_10rnd;
		scope = 2;
		displayName = "10rnd AICS M993 AP";
		displayNameShort = "M993 AP";
		picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		ammo = "rhs_ammo_762x51_M993_Ball";
		count = 10;
		mass = 5.28;
		initSpeed = 910;
		descriptionShort = "Caliber: 7.62x51mm NATO<br />Rounds: 10<br />Used in: M40A5";
	};
	class rhsusf_10Rnd_762x51_m62_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
	{
		AUTHOR_MACRO
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_10rnd_aics_mag";
		modelSpecial = rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_aics_10rnd;
		scope = 2;
		displayname = "10rnd AICS M62 (Tracer)";
		displayNameShort = "M62 Tracer";
		picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		ammo = "rhs_ammo_762x51_M62_tracer";
		count = 10;
		mass = 5.28;
		initSpeed = 817;
		tracersEvery = 1;
		descriptionShort = "Caliber: 7.62x51mm NATO<br />Rounds: 10<br />Used in: M40A5";
	};
	class rhsusf_5Rnd_762x51_AICS_m118_special_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
	{
		AUTHOR_MACRO
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_5rnd_aics_mag";
		displayName = "5rnd AICS M118";
		picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		descriptionShort = "Caliber: 7.62x51mm NATO<br />Rounds: 5<br />Used in: M40A5";
	};
	class rhsusf_5Rnd_762x51_AICS_m993_Mag: rhsusf_5Rnd_762x51_m993_Mag
	{
		AUTHOR_MACRO
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_5rnd_aics_mag";
		displayName = "5rnd AICS M993 AP";
		picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		descriptionShort = "Caliber: 7.62x51mm NATO<br />Rounds: 5<br />Used in: M40A5";
	};
	class rhsusf_5Rnd_762x51_AICS_m62_Mag: rhsusf_5Rnd_762x51_m62_Mag
	{
		AUTHOR_MACRO
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_5rnd_aics_mag";
		displayname = "5rnd AICS M62 (Tracer)";
		picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		descriptionShort = "Caliber: 7.62x51mm NATO<br />Rounds: 5<br />Used in: M40A5";
	};

	// SCAR-H Mags
	class rhs_mag_20Rnd_SCAR_762x51_m80_ball: CA_Magazine
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = "20rnd SCAR M80";
		displayNameShort = "M80 Ball";
		INVENTORY_PICTURE(rhs_mag_20Rnd_SCAR_762x51_m80_ball)
		count = 20;
		ammo = "rhs_ammo_762x51_M80_Ball";
		mass = 16.24;
		initSpeed = 794;
		descriptionShort = "Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: SCAR-H";
		model				= "rhsusf\addons\rhsusf_weapons\magazines\rhs_20rnd_scar_mag.p3d";
		modelSpecial		= rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_MK17_20rnd;
		modelSpecialIsProxy	= 1;
	};
	class rhs_mag_20Rnd_SCAR_762x51_m80a1_epr: rhs_mag_20Rnd_SCAR_762x51_m80_ball
	{
		AUTHOR_MACRO
		displayName = "20rnd SCAR M80A1 EPR";
		displayNameShort = "M80A1 EPR";
		ammo = "rhs_ammo_762x51_M80A1EPR_Ball";
	};
	class rhs_mag_20Rnd_SCAR_762x51_m62_tracer: rhs_mag_20Rnd_SCAR_762x51_m80_ball
	{
		AUTHOR_MACRO
		displayName = "20rnd SCAR M62 (Tracer)";
		displayNameShort = "M62 Tracer";
		ammo = "rhs_ammo_762x51_M62_tracer";
		tracersEvery = 1;
	};
	class rhs_mag_20Rnd_SCAR_762x51_m61_ap: rhs_mag_20Rnd_SCAR_762x51_m80_ball
	{
		AUTHOR_MACRO
		displayName = "20rnd SCAR M61 AP";
		displayNameShort = "M61 AP";
		ammo = "rhs_ammo_762x51_M61_AP";
	};
	class rhs_mag_20Rnd_SCAR_762x51_m118_special: rhs_mag_20Rnd_SCAR_762x51_m80_ball
	{
		AUTHOR_MACRO
		displayName = "20rnd SCAR M118 Ball";
		displayNameShort = "M118 Special Ball";
		ammo = "rhs_ammo_762x51_M118_Special_Ball";
		initSpeed = 763;
	};

	class rhs_mag_20Rnd_SCAR_762x51_mk316_special: rhs_mag_20Rnd_SCAR_762x51_m80_ball
	{
		AUTHOR_MACRO
		displayName = "20rnd SCAR Mk316 Mod 0";
		displayNameShort = "Mk316 Special Ball";
		ammo = "rhs_ammo_762x51_Mk316_Special_Ball";
		initSpeed = 772;
	};

	// Submachinegun Mags
	//MP7 mags
	class rhsusf_mag_40Rnd_46x30_FMJ: CA_Magazine
	{
		AUTHOR_MACRO
		scope = 2;
		type = 16;
		mass = 8.8;
		displayName = "40rnd MP7 SX FMJ";
		//displayName = "7Rnds. 45ACP";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\mag_45acp_ca.paa";
		ammo = "rhs_ammo_46x30_FMJ";
		count = 40;
		initSpeed = 620;
		descriptionShort = "$STR_RHSUSF_7RND_45ACP_DESCRIPTION_SHORT";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_40rnd_mp7_mag";
	};
	class rhsusf_mag_40Rnd_46x30_JHP: CA_Magazine
	{
		AUTHOR_MACRO
		scope = 2;
		type = 16;
		displayName = "40rnd MP7 SX JHP";
		picture = "\rhsusf\addons\rhsusf_weapons2\glock17g4\data\rhs_mag1_glock17g4_ca.paa";
		ammo = "rhs_ammo_46x30_JHP";
		count = 40;
		mass = 8.8;
		initSpeed = 620;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "$STR_RHSUSF_17RND_9x19_FMJ_DESCRIPTION_SHORT";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_40rnd_mp7_mag";
	};
	class rhsusf_mag_40Rnd_46x30_AP: CA_Magazine
	{
		AUTHOR_MACRO
		scope = 2;
		type = 16;
		displayName = "40rnd MP7 SX AP ";
		picture = "\rhsusf\addons\rhsusf_weapons2\glock17g4\data\rhs_mag1_glock17g4_ca.paa";
		ammo = "rhs_ammo_46x30_AP";
		count = 40;
		mass = 8.8;
		initSpeed = 680.1;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "$STR_RHSUSF_17RND_9x19_FMJ_DESCRIPTION_SHORT";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_40rnd_mp7_mag";
	};

	// Pistol Mags
	// M1911 mags
	class rhsusf_mag_7x45acp_MHP: CA_Magazine
	{
		AUTHOR_MACRO
		scope = 2;
		type = 16;
		displayName = "$STR_RHSUSF_7RND_45ACP_DISPLAY_NAME";
		//displayName = "7Rnds. 45ACP";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\mag_45acp_ca.paa";
		ammo = "rhs_ammo_45ACP_MHP";
		count = 7;
		mass = 5.28;
		initSpeed = 280;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		descriptionShort = "$STR_RHSUSF_7RND_45ACP_DESCRIPTION_SHORT";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_7rnd_m1911_mag";
	};
	// G17 mags
	class rhsusf_mag_17Rnd_9x19_FMJ: CA_Magazine
	{
		AUTHOR_MACRO
		scope = 2;
		type = 16;
		displayName = "$STR_RHSUSF_17RND_9x19_FMJ_DISPLAY_NAME";
		displayNameShort = "9mm FMJ Mag";
		picture = "\rhsusf\addons\rhsusf_weapons2\glock17g4\data\rhs_mag1_glock17g4_ca.paa";
		ammo = "rhs_ammo_9x19_FMJ";
		count = 17;
		mass = 6;
		initSpeed = 390.1;
		descriptionShort = "$STR_RHSUSF_17RND_9x19_FMJ_DESCRIPTION_SHORT";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_17rnd_glk_mag";
	};
	class rhsusf_mag_17Rnd_9x19_JHP: rhsusf_mag_17Rnd_9x19_FMJ
	{
		AUTHOR_MACRO
		displayName = "$STR_RHSUSF_17RND_9x19_JHP_DISPLAY_NAME";
		displayNameShort = "9mm JHP Mag";
		picture = "\rhsusf\addons\rhsusf_weapons2\glock17g4\data\rhs_mag2_glock17g4_ca.paa";
		ammo = "rhs_ammo_9x19_JHP";
		initSpeed = 301.8;
		descriptionShort = "$STR_RHSUSF_17RND_9x19_JHP_DESCRIPTION_SHORT";
	};
	class rhsusf_mag_15Rnd_9x19_FMJ: rhsusf_mag_17Rnd_9x19_FMJ
	{
		AUTHOR_MACRO
		displayName = "$STR_RHSUSF_15RND_9x19_FMJ_DISPLAY_NAME";
		picture = "\rhsusf\addons\rhsusf_weapons2\m9_beretta\Data\UI\M9_Magazine_ca.paa";
		ammo = "rhs_ammo_9x19_FMJ";
		count = 15;
		descriptionShort = "$STR_RHSUSF_15RND_9x19_FMJ_DESCRIPTION_SHORT";
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_15rnd_m9_mag";
	};
	class rhsusf_mag_15Rnd_9x19_JHP: rhsusf_mag_17Rnd_9x19_JHP
	{
		AUTHOR_MACRO
		displayName = "$STR_RHSUSF_15RND_9x19_JHP_DISPLAY_NAME";
		picture = "\rhsusf\addons\rhsusf_weapons2\m9_beretta\Data\UI\M9_Magazine_ca.paa";
		descriptionShort = "$STR_RHSUSF_15RND_9x19_JHP_DESCRIPTION_SHORT";
		count = 15;
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_15rnd_m9_mag";
	};

	// Rocket Mags
	//M136 mags
	class rhs_m136_mag : CA_LauncherMagazine
	{
		AUTHOR_MACRO
		allowedSlots[] = {801, 701, 901};
		scope = 1;
		displayName = "M136 HEAT";
		descriptionshort = "Type: High Explosive Anti Tank";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\m_m136_ca.paa";
		model = "\A3\weapons_f\empty";
		//ammo = rhs_rpg26_rocket;
		ammo = rhs_ammo_M136_rocket;
		type = 6 * 		256;
		initSpeed = 290;
		mass = 0;
	};
	class rhs_dummy_mag : FakeMagazine
	{
		AUTHOR_MACRO
		allowedSlots[] = {801, 701, 901};
		scope = 1;
		displayName = "M136 HEAT";
		descriptionshort = "Type: High Explosive Anti Tank";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\m_m136_ca.paa";
		model = "\A3\weapons_f\empty";
		ammo = rhs_ammo_M136_rocket;
		type = 6 * 		256;
		initSpeed = 290;
		mass = 0;
	};
	class rhsusf_launcher_dummy_mag : rhs_dummy_mag
	{
		scope = 1;
		count = 0;
	};
	class rhs_m136_hedp_mag : rhs_m136_mag
	{
		AUTHOR_MACRO
		displayName = "M136 HEDP";
		descriptionshort = "Type: High Explosive, Dual Purpose";
		ammo = rhs_ammo_M136_hedp_rocket;
	};
	class rhs_m136_hp_mag : rhs_m136_mag
	{
		AUTHOR_MACRO
		displayName = "M136 HP";
		descriptionshort = "Type: High Penetration";
		ammo = rhs_ammo_M136_hp_rocket;
	};

	//M72 mags
	class rhs_m72a7_mag : rhs_m136_hedp_mag
	{
		AUTHOR_MACRO
		displayName = "M72 HEDP";
		ammo = rhs_ammo_m72a7_rocket;
	};

	//FIM-92 mag
	class Titan_AA;
	class rhs_fim92_mag : Titan_AA
	{
		AUTHOR_MACRO

		scope = 2;
		mass = 120;
		displayName = "FIM-92F";
		descriptionshort = "Type: Surface-to-air<br />Caliber: 70 mm<br />Used in: FIM-92";
		ammo=rhs_ammo_fim92_missile;
		type = 6 * WeaponSlotItem;
		picture="\rhsusf\addons\rhsusf_weapons\icons\m_stinger_ca.paa";
		model = "\rhsusf\addons\rhsusf_weapons\FIM92\Stinger_proxy";
		initSpeed = 20;
		maxLeadSpeed=220;  //  let AA soldiers attack chopers in cruise speed
	};

	// Javelin mag
	class rhs_fgm148_magazine_AT: CA_LauncherMagazine
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = "FGM-148 Missile";
		descriptionshort = "Type: High Explosive Anti Tank<br />Caliber: 127 mm<br />Used in: FGM-148";
		picture = "\rhsusf\addons\rhsusf_weapons\FGM148\data\UI\m_fgm148_ca.paa";

		model = "\rhsusf\addons\rhsusf_weapons\FGM148\fgm148_tube_ammo";
		//modelSpecial = "\rhsusf\addons\rhsusf_weapons\FGM148\fgm148_clu_loaded";

		deleteIfEmpty = 0;
		count = 1;
		ammo = "rhs_ammo_M_fgm148_AT";
		initSpeed = 10;
		maxLeadSpeed = 350;
		//mass = 150;
		mass = 286.88;
		rhs_addEmptyTube = "rhs_fgm148_magazine_AT_empty";
	};
	class rhs_fgm148_magazine_AT_empty: rhs_fgm148_magazine_AT
	{
		scope = 1;
		displayName = "FGM-148 Empty Tube";
		mass = 72.6;
		model = "\rhsusf\addons\rhsusf_weapons\FGM148\fgm148_tube_ammo_empty";
	};

	// SRAW mags
	class rhs_fgm172a_magazine_AT: CA_LauncherMagazine
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = "FGM172A SRAW";
		descriptionshort = "Type: High Explosive Anti Tank<br />Caliber: 139 mm<br />Used in: Mk 40 Mod 0";
		picture = "\rhsusf\addons\rhsusf_weapons\FGM148\data\UI\m_fgm148_ca.paa";

		model = "\rhsusf\addons\rhsusf_weapons\FGM148\fgm148_tube_ammo";
		//modelSpecial = "\rhsusf\addons\rhsusf_weapons\FGM148\fgm148_clu_loaded";

		type = "3 * 256";
		count = 1;
		ammo = "rhs_ammo_M_fgm172a_AT";
		initSpeed = 40;
		maxLeadSpeed = 350;
		mass = 140.8;
	};
	class rhs_fgm172b_magazine_MPV : rhs_fgm172a_magazine_AT
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = "FGM172B SRAW-MPV";
		descriptionshort = "Type: High Explosive Multi-purpose<br />Caliber: 139 mm<br />Used in: Mk41 Mod 0";
		picture = "\rhsusf\addons\rhsusf_weapons\FGM148\data\UI\m_fgm148_ca.paa";

		model = "\rhsusf\addons\rhsusf_weapons\FGM148\fgm148_tube_ammo";
		//modelSpecial = "\rhsusf\addons\rhsusf_weapons\FGM148\fgm148_clu_loaded";

		count = 1;
		ammo = "rhs_ammo_M_fgm172b_MPV";
		maxLeadSpeed = 350;
		mass = 140.8;
	};

	// SMAW mags
	class rhs_mag_smaw_HEAA : CA_LauncherMagazine
	{
		AUTHOR_MACRO
        scope = 2;
        displayName = "Mk.6 HEAA";
		descriptionshort = "Type: High Explosive Anti Armor<br />Caliber: 83 mm<br />Used in: SMAW";
        model = "rhsusf\addons\rhsusf_weapons2\smaw\ammo_smaw.p3d";
		picture = "\rhsusf\addons\rhsusf_weapons2\smaw\UI\ammo_CA.paa";
        initSpeed = 220;
        displaynameshort = "Mk.6 HEAA";
        ammo = rhs_ammo_smaw_HEAA;
        type = 2*256;
        mass = 136.4;
    };
	class rhs_mag_smaw_HEDP : CA_LauncherMagazine
	{
		AUTHOR_MACRO
        scope = 2;
        displayName = "Mk.3 HEDP";
		descriptionshort = "Type: High Explosive Dual Purpose<br />Caliber: 83 mm<br />Used in: SMAW";
        model = "rhsusf\addons\rhsusf_weapons2\smaw\ammo_smaw.p3d";
		picture = "\rhsusf\addons\rhsusf_weapons2\smaw\UI\ammo_CA.paa";
        initSpeed = 220;
        displaynameshort = "Mk.3 HEDP";
        ammo = rhs_ammo_smaw_HEDP;
        type = 2*256;
        mass = 129.8;
    };
	class rhs_mag_smaw_SR : CA_LauncherMagazine
	{
		AUTHOR_MACRO
        scope = 2;
        displayName = "Mk.217 Spotting";
		descriptionshort = "Type: 9mm Spotting Round<br />Rounds: 5<br />Used in: SMAW Spotting Rifle";
        model = "rhsusf\addons\rhsusf_weapons2\smaw\spotting_smaw.p3d";
		picture = "\rhsusf\addons\rhsusf_weapons2\smaw\UI\spotting_CA.paa";
        initSpeed = 220;
        displaynameshort = "MK217 Tracer";
		ammo = rhs_ammo_smaw_SR;
		type = 256;
        mass = 7;
		count = 5;
    };

	// MAAWS mags
	class rhs_mag_maaws_HEAT : CA_LauncherMagazine
	{
		AUTHOR_MACRO
        scope = 2;
        displayName = "FFV751 HEAT";
        model = "rhsusf\addons\rhsusf_weapons2\m3maaws\mag_m3maaws.p3d";
        picture = "\rhsusf\addons\rhsusf_weapons2\m3maaws\UI\gear_small_CA.paa";
        initSpeed = 290;
        descriptionShort = "High Explosive Anti tank";
        displaynameshort = "751 HEAT";
        ammo = rhs_ammo_maaws_HEAT;
        type = 2*        256;
        mass = 88.20;
    };
	class rhs_mag_maaws_HEDP : CA_LauncherMagazine
	{
		AUTHOR_MACRO
        scope = 2;
        displayName = "FFV502 HEDP";
        model = "rhsusf\addons\rhsusf_weapons2\m3maaws\mag_m3maaws.p3d";
		picture = "\rhsusf\addons\rhsusf_weapons2\m3maaws\UI\gear_small_CA.paa";
        initSpeed = 230;
        descriptionShort = "High Explosive Dual Purpose";
        displaynameshort = "502 HEDP";
        ammo = rhs_ammo_maaws_HEDP;
        type = 2*        256;
        mass = 72.77;
    	};
	class rhs_mag_maaws_HE : CA_LauncherMagazine
	{
		AUTHOR_MACRO
        scope = 2;
        displayName = "FFV441 HE";
        model = "rhsusf\addons\rhsusf_weapons2\m3maaws\mag_m3maaws.p3d";
		picture = "\rhsusf\addons\rhsusf_weapons2\m3maaws\UI\gear_small_CA.paa";
        initSpeed = 255;
        descriptionShort = "High Explosive";
        displaynameshort = "441 HE";
        ammo = rhs_ammo_maaws_HE;
        type = 2*        256;
        mass = 68,36;
    };
	class rhs_mag_maaws_SMOKE : CA_LauncherMagazine
	{
		AUTHOR_MACRO
        scope = 1;
        displayName = "FFV469 SMOKE";
        model = "rhsusf\addons\rhsusf_weapons2\m3maaws\mag_m3maaws.p3d";
		picture = "\rhsusf\addons\rhsusf_weapons2\m3maaws\UI\gear_small_CA.paa";
        initSpeed = 255;
        descriptionShort = "Smoke";
        displaynameshort = "469 SMOKE";
		nameSoundWeapon	= "smokeshell";
		nameSound		= "smokeshell";
        ammo = rhs_ammo_maaws_SMOKE;
        type = 2*        256;
        mass = 68.36;
    };
	class rhs_mag_maaws_ILLUM : CA_LauncherMagazine
	{
		AUTHOR_MACRO
        scope = 1;
        displayName = "FFV545 ILLUMINATION";
        model = "rhsusf\addons\rhsusf_weapons2\m3maaws\mag_m3maaws.p3d";
		picture = "\rhsusf\addons\rhsusf_weapons2\m3maaws\UI\gear_small_CA.paa";
        initSpeed = 255;
        descriptionShort = "Ilumination Flare";
        displaynameshort = "545 ILLUMINATION";
        ammo = rhs_ammo_maaws_ILLUM;
        type = 2*        256;
        mass = 71.83;
    	};
	///! GL Mags


	///! Explosives


	// Demo charge mags
	class rhsusf_m112_mag: CA_Magazine
	{
		AUTHOR_MACRO
		scope = 2;
		displayName = "$STR_RHSUSF_M112_EXPLOSIVE_DISPLAY_NAME";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\rhsusf_explosive_m112x1_ca.paa";
		model = "\rhsusf\addons\rhsusf_weapons\explosives\rhsusf_m112x1_d";
		descriptionShort = "$STR_A3_cfgMagazines_PipeBomb1";
		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_PipeBomb_Library0";
		};
		descriptionUse = "$STR_A3_use_charge";
		type = "2*		256";
		allowedSlots[] = {901};
		value = 5;
		ammo = "rhsusf_m112_ammo";
		mass = 12.54;
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		nameSoundWeapon = "satchelcharge";
		nameSound = "satchelcharge";
		weaponPoolAvailable = 1;
		useAction = 1;
		useActionTitle = "$STR_ACTION_PUTBOMB";
		sound[] = {"A3\sounds_f\dummysound",0.00031622776,1,10};
	};
	class rhsusf_m112x4_mag: rhsusf_m112_mag
	{
		AUTHOR_MACRO
		scope = 2;
		mass = 50.16;
		displayName = "$STR_RHSUSF_M112X4_EXPLOSIVE_DISPLAY_NAME";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\rhsusf_explosive_m112x4_ca.paa";
		model = "\rhsusf\addons\rhsusf_weapons\explosives\rhsusf_m112x4_d";
		ammo = "rhsusf_m112x4_ammo";
		descriptionShort = "$STR_A3_cfgMagazines_DemoCharge1";
		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_DemoCharge_Library0";
		};
		allowedSlots[] = {901,701};
	};

	// Mine mags
	class ATMine_Range_Mag;
	class rhs_mine_M19_mag: ATMine_Range_Mag
	{
		AUTHOR_MACRO
		mass = 138.16; //12.7kg
		ammo = "rhsusf_mine_m19_ammo";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\rhsusf_mine_m19_ca.paa";
		displayName = "$STR_RHSUSF_M19_ATMINE_DISPLAY_NAME"; //FIX LATER
		model = "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m19_e";
		descriptionShort = "$STR_RHSUSF_M19_ATMINE_DESCRIPTION_SHORT"; //FIX LATER

		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
		};

		descriptionUse = "$STR_A3_use_mine";
	};
	class rhsusf_mine_m14_mag: ATMine_Range_Mag
	{
		AUTHOR_MACRO
		mass = 2.2;
		ammo = "rhsusf_mine_m14_ammo";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\rhsusf_mine_m14_ca.paa";
		displayName = "$STR_RHSUSF_M14_APMINE_DISPLAY_NAME";
		model = "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m14_d";
		descriptionShort = "$STR_RHSUSF_M14_APMINE_DESCRIPTION_SHORT";

		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
		};

		descriptionUse = "$STR_A3_use_mine";
	};
	class rhsusf_mine_m49a1_3m_mag: ATMine_Range_Mag
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhsusf_mine_m49a1_mag)
		mass				= 20;
		ammo				= "rhsusf_mine_m49a1_3m_ammo";
		model				= "\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m49a1_d";
		displayName			= "M49A1 (3m)";
		descriptionShort	= "$STR_RHSUSF_MINE_M49A1_MAG_DESCRIPTIONSHORT";
		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_ClassicMineWireMagazine_Library0";
		};
		descriptionUse = "$STR_A3_use_mine";
		allowedSlots[] = {901,701};
	};
	class rhsusf_mine_m49a1_6m_mag: rhsusf_mine_m49a1_3m_mag
	{
		displayName			= "M49A1 (6m)";
		ammo				= "rhsusf_mine_m49a1_6m_ammo";
	};
	class rhsusf_mine_m49a1_10m_mag: rhsusf_mine_m49a1_3m_mag
	{
		displayName			= "M49A1 (10m)";
		ammo				= "rhsusf_mine_m49a1_10m_ammo";
	};


	// Hand Grenade mags
	class HandGrenade;
	class rhs_mag_m67: HandGrenade
	{
		AUTHOR_MACRO
		ammo = "rhs_ammo_m67";
		displayName = $STR_RHSUSF_1Rnd_M67;
		displayNameShort = "Frag Grenade";
		descriptionshort = "Type: Fragmentation Grenade<br />Rounds: 1<br />Used in: Hand";
		mass = 8.8;
		model = "\rhsusf\addons\rhsusf_weapons\grenades\m67\m67_frag";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\g_m67_ca.paa";
	};
	class rhs_mag_m69: HandGrenade
	{
		AUTHOR_MACRO
		ammo = "rhs_ammo_m69";
		displayName = $STR_RHSUSF_1Rnd_M69;
		displayNameShort = "Practice Grenade";
		descriptionshort = "Type: Practice Grenade<br />Rounds: 1<br />Used in: Hand";
		mass = 8.8;
		model = "\rhsusf\addons\rhsusf_weapons\grenades\m69\m69_practice";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\g_m69_ca.paa";
	};
	class rhs_mag_mk84: HandGrenade
	{
		AUTHOR_MACRO
		ammo = "rhs_ammo_m84";
		displayName = $STR_RHSUSF_1Rnd_MK84;
		displayNameShort = "Stun Grenade";
		descriptionshort = "Type: Stun Grenade<br />Rounds: 1<br />Used in: Hand";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\g_m84_flash_ca.paa";
		model = "\rhsusf\addons\rhsusf_weapons\grenades\m84\m84_flash";
		mass = 5.19;
	};
	class rhs_mag_an_m8hc: HandGrenade
	{
		AUTHOR_MACRO
		ammo				= "rhs_ammo_an_m8hc";
		displayName			= $STR_RHSUSF_1Rnd_M8HC;
		displayNameShort	= "White Smoke";
		descriptionshort	= "Type: Smoke Grenade - White<br />Rounds: 1<br />Used in: Hand";
		picture				= "\rhsusf\addons\rhsusf_weapons\icons\g_an_m8hc_ca.paa";
		model				= "\rhsusf\addons\rhsusf_weapons\grenades\an-m8hc\an-m8hc";
		mass				= 8.98;
		nameSoundWeapon		= "smokeshell";
		nameSound			= "smokeshell";
	};
	class rhs_mag_an_m14_th3: HandGrenade
	{
		AUTHOR_MACRO
		ammo = "rhs_ammo_an_m14_th3";
		displayName = $STR_RHSUSF_1Rnd_ANM14_TH3;
		displayNameShort = "Incendiary Grenade";
		descriptionshort = "Type: Incendiary Grenade<br />Rounds: 1<br />Used in: Hand";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\g_an_m14_th3_ca.paa";
		model = "\rhsusf\addons\rhsusf_weapons\grenades\an-m14_th3\an-m14_th3";
		mass = 12.01;
	};
	class rhs_mag_m7a3_cs: HandGrenade
	{
		AUTHOR_MACRO
		ammo = "rhs_ammo_m7a3_cs";
		displayName = $STR_RHSUSF_1Rnd_M7A3_CS;
		displayNameShort = "CS Gas Grnd.";
		descriptionshort = "Type: CS Gas Grenade<br />Rounds: 1<br />Used in: Hand";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\g_m7a3_cs_ca.paa";
		model = "\rhsusf\addons\rhsusf_weapons\grenades\m7a3_cs\m7a3_cs";
		mass = 9.68;
	};
	class rhs_mag_mk3a2: HandGrenade
	{
		AUTHOR_MACRO
		ammo = "rhs_ammo_mk3a2";
		displayName = $STR_RHSUSF_1Rnd_MK3A2;
		displayNameShort = "Concussion Grnd.";
		descriptionshort = "Type: Concussion Grenade<br />Rounds: 1<br />Used in: Hand";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\g_mk3a2_ca.paa";
		model = "\rhsusf\addons\rhsusf_weapons\grenades\mk3a2\mk3a2";
		mass = 9.57;
	};
	class rhs_mag_m18_smoke_base: HandGrenade
	{
		AUTHOR_MACRO
		//placeholder
		model = "\rhsusf\addons\rhsusf_weapons\grenades\m18\m18_smoke";
		mass = 11.88;
		scope = 0;
		descriptionshort = "Type: Smoke Grenade - White<br />Rounds: 1<br />Used in: Hand";
		nameSoundWeapon		= "smokeshell";
		nameSound			= "smokeshell";
	};
	class rhs_mag_m18_green: rhs_mag_m18_smoke_base
	{
		AUTHOR_MACRO
		ammo = "rhs_ammo_m18_green";
		displayName = $STR_RHSUSF_1Rnd_M18_GREEN;
		descriptionshort = "Type: Smoke Grenade - Green<br />Rounds: 1<br />Used in: Hand";
		displayNameShort = "Green Smoke";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\g_m18_green_ca.paa";
		scope = 2;
	};
	class rhs_mag_m18_purple: rhs_mag_m18_smoke_base
	{
		AUTHOR_MACRO
		ammo = "rhs_ammo_m18_purple";
		displayName = $STR_RHSUSF_1Rnd_M18_PURPLE;
		displayNameShort = "Purple Smoke";
		descriptionshort = "Type: Smoke Grenade - Purple<br />Rounds: 1<br />Used in: Hand";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\g_m18_purple_ca.paa";
		model = "\rhsusf\addons\rhsusf_weapons\grenades\m18\m18_smoke_purple";
		scope = 2;
	};
	class rhs_mag_m18_red: rhs_mag_m18_smoke_base
	{
		AUTHOR_MACRO
		ammo = "rhs_ammo_m18_red";
		displayName = $STR_RHSUSF_1Rnd_M18_RED;
		displayNameShort = "Red Smoke";
		descriptionshort = "Type: Smoke Grenade - Red<br />Rounds: 1<br />Used in: Hand";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\g_m18_red_ca.paa";
		model = "\rhsusf\addons\rhsusf_weapons\grenades\m18\m18_smoke_red";
		scope = 2;
	};
	class rhs_mag_m18_yellow: rhs_mag_m18_smoke_base
	{
		AUTHOR_MACRO
		ammo = "rhs_ammo_m18_yellow";
		displayName = $STR_RHSUSF_1Rnd_M18_YELLOW;
		displayNameShort = "Yellow Smoke";
		descriptionshort = "Type: Smoke Grenade - Yellow<br />Rounds: 1<br />Used in: Hand";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\g_m18_yellow_ca.paa";
		model = "\rhsusf\addons\rhsusf_weapons\grenades\m18\m18_smoke_yellow";
		scope = 2;
	};
};