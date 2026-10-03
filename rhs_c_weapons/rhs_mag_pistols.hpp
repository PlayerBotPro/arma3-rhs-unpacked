
class rhs_mag_9x19_17: CA_Magazine
{
	scope				= 2;
	type				= 16;
	displayName			= "$STR_RHS_MAG_9X19_17_PY";
	descriptionShort	= "$STR_RHS_MAG_9X19_17_PY_DESC";
	picture				= "\rhsafrf\addons\rhs_weapons\icons\Pya_mag_ca.paa";
	model				= "\rhsafrf\addons\rhs_weapons\magazines\rhs_pya_mag";
	ammo				= "rhs_B_9x19_7N21";
	count				= 17;
	initSpeed			= 465; // http://zonwar.ru/shkolaspetsnaza/Pya.html
	mass				= 7.49;
};
class rhs_mag_9x19_7n31_17: rhs_mag_9x19_17
{
	displayName			= "$STR_RHS_MAG_9X19_7N31_17_PY";
	ammo				= "rhs_B_9x19_7N31";
};

class rhs_mag_9x19mm_7n21_20 : rhs_mag_9x19_17
{
	displayName			= $STR_RHS_CFGMAGAZINES_20RND_9X19_MAG_7N21;
	descriptionShort	= $STR_RHS_CFGMAGAZINES_20RND_9X19_MAG_Desc_1;
	picture				= \rhsafrf\addons\rhs_weapons2\icons\rhs_mag_9x19_20.paa;
	model				= \rhsafrf\addons\rhs_weapons2\magazines\rhs_9x19_20mag;
	modelSpecial		= \rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_9x19_pp2000_20rnd;
	modelSpecialIsProxy	= 1;
	mass				= 8.49;
	count				= 20;
	lastRoundsTracer	= 0;
};
class rhs_mag_9x19mm_7n31_20 : rhs_mag_9x19mm_7n21_20
{
	displayName	= $STR_RHS_CFGMAGAZINES_20RND_9X19_MAG_7N31;
	ammo		= "rhs_B_9x19_7N31";
	initSpeed	= 460;
};
class rhs_mag_9x19mm_7n21_44 : rhs_mag_9x19mm_7n21_20
{
	displayName			= $STR_RHS_CFGMAGAZINES_44RND_9X19_MAG_7N21;
	descriptionShort	= $STR_RHS_CFGMAGAZINES_44RND_9X19_MAG_Desc_0;
	model				= \rhsafrf\addons\rhs_weapons2\magazines\rhs_9x19_44mag;
	modelSpecial		= \rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_9x19_pp2000_44rnd;
	count				= 44;
	mass				= 10.49;
};
class rhs_mag_9x19mm_7n31_44 : rhs_mag_9x19mm_7n21_44
{
	displayName	= $STR_RHS_CFGMAGAZINES_44RND_9X19_MAG_7N31;
	ammo		= "rhs_B_9x19_7N31";
	initSpeed	= 460;
};


class rhs_mag_9x18_12_57N181S: rhs_mag_9x19_17
{
	displayName = "$STR_RHS_CFGMAGAZINES_12RND_9X18_MAG0";
	descriptionShort = "$STR_RHS_MAG_9X18_12_PMM_DESC";
	picture = "\rhsafrf\addons\rhs_weapons\icons\makarov_pmm_mag_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons2\magazines\rhs_pm_mag";
	ammo = "rhs_B_9x18_57N181S";
	count = 12;
	initSpeed = 420;
	mass = 4.49;
};

class rhs_mag_9x18_8_57N181S: rhs_mag_9x18_12_57N181S
{
	displayName = "$STR_RHS_CFGMAGAZINES_8RND_9X18_MAG0";
	descriptionShort = "$STR_RHS_MAG_9X18_8_PM_DESC";
	picture = "\rhsafrf\addons\rhs_weapons2\icons\rhs_pm_mag_ca.paa";
	model = "\rhsafrf\addons\rhs_weapons2\magazines\rhs_pm_mag";
	count = 8;
	initSpeed = 319;
};


// 9x21
// https://sovetarmy.forum2x2.ru/t815-topic
class rhs_18rnd_9x21mm_7N28 : rhs_mag_9x19_17
{
	ammo = "rhs_B_9x21_7N28";
	AUTHOR_MACRO
	picture = "\rhsafrf\addons\rhs_weapons2\icons\rhs_pm_mag_ca.paa";
	displayName = $STR_RHS_CFGMAGAZINES_18RND_9X21_MAG0;
	descriptionShort = $STR_RHS_MAG_9X21_18_SR1_DESC;
	displayNameShort = "7N28";

	initSpeed = 390;
	count = 18;
	mass = 7.49;
};

class rhs_18rnd_9x21mm_7N29 : rhs_18rnd_9x21mm_7N28
{
	ammo = "rhs_B_9x21_7N29";
	AUTHOR_MACRO
	picture = "\rhsafrf\addons\rhs_weapons2\icons\rhs_pm_mag_ca.paa";
	displayName = $STR_RHS_CFGMAGAZINES_18RND_9X21_MAG1;
	descriptionShort = $STR_RHS_MAG_9X21_18_SR1_DESC;
	displayNameShort = "7N29";

	initSpeed = 410;
	count = 18;
	mass = 7.49;
};

class rhs_18rnd_9x21mm_7BT3 : rhs_18rnd_9x21mm_7N28
{
	ammo = "rhs_B_9x21_7BT3";
	AUTHOR_MACRO
	picture = "\rhsafrf\addons\rhs_weapons2\icons\rhs_pm_mag_ca.paa";
	displayName = $STR_RHS_CFGMAGAZINES_18RND_9X21_MAG2;
	descriptionShort = $STR_RHS_MAG_9X21_18_SR1_DESC;
	displayNameShort = "7BT3 Tracer";

	initSpeed = 400;
	count = 18;
	mass = 7.49;
	tracersEvery = 1;
};