class Rangefinder;
class binocular;

class rhsusf_bino_lerca_1200_black: Rangefinder
{
	INVENTORY_PICTURE(rhsusf_bino_lerca_1200_black)
	AUTHOR_MACRO
	dlc = "RHS_USAF";

	scope = 2;
	displayName = "$STR_RHSUSF_MISC_LERCA_BLACK";
	class Library
	{
		libTextDesc = "$STR_A3_cfgWeapons_Rangefinder_Library0";
	};
	descriptionShort	= "Lerca Rangefinder";
	model				= "\rhsusf\addons\rhsusf_weapons\misc\lerca1200\rhs_lerca_1200_black.p3d";
	modelOptics			= "\rhsusf\addons\rhsusf_weapons\misc\lerca1200\rhs_lerca_reticle.p3d";
	opticsZoomMin		= __EVAL(0.35/7);
	opticsZoomMax		= __EVAL(0.35/7);
	opticsZoomInit		= __EVAL(0.35/7);
	distanceZoomMin		= 15;
	distanceZoomMax		= 1097;
	weaponInfoType		= "rhs_gui_optic_rangemaster1200_rangefinder";
	visionMode[]		= {"Normal"};
	class WeaponSlotsInfo
	{
		mass = 20;
	};
};

class rhsusf_bino_lerca_1200_tan: rhsusf_bino_lerca_1200_black
{
	INVENTORY_PICTURE(rhsusf_bino_lerca_1200_tanp)
	AUTHOR_MACRO
	scope		= 2;
	displayName	= "$STR_RHSUSF_MISC_LERCA_TAN";
	model		= "\rhsusf\addons\rhsusf_weapons\misc\lerca1200\rhs_lerca_1200_tan.p3d";

};
class lerca_1200_black: rhsusf_bino_lerca_1200_black 	{ scope = 1;scopeArsenal = 0;};
class lerca_1200_tan: rhsusf_bino_lerca_1200_tan 		{ scope = 1;scopeArsenal = 0;};

class rhsusf_bino_lrf_Vector21: Rangefinder
{
	INVENTORY_PICTURE(rhsusf_bino_lrf_Vector21)
	AUTHOR_MACRO
	dlc			= "RHS_USAF";
	scope		= 2;
	displayName	= "Vector 21-B"; //AN/PED-3A is official designation
	model		= "\rhsusf\addons\rhsusf_weapons\misc\vector21\vector21.p3d";
	class Library
	{
		libTextDesc = "$STR_A3_cfgWeapons_Rangefinder_Library0";
	};
	descriptionShort	= "Vector 21 Rangefinder";
	modelOptics			= "\rhsusf\addons\rhsusf_weapons\misc\vector21\rhs_vector21_reticle.p3d";
	opticsZoomMin		= __EVAL(0.35/7);
	opticsZoomMax		= __EVAL(0.35/7);
	opticsZoomInit		= __EVAL(0.35/7);
	weaponInfoType		= "rhs_gui_optic_Vector21_rangefinder";
	visionMode[]		= {"Normal"};
	class WeaponSlotsInfo
	{
		mass = 37.62;
	};
};
class rhsusf_lrf_Vector21: rhsusf_bino_lrf_Vector21 { scope = 1;scopeArsenal = 0;};
class rhsusf_bino_leopold_mk4: binocular
{
	INVENTORY_PICTURE(rhsusf_bino_leopold_mk4p)
	AUTHOR_MACRO
	dlc = "RHS_USAF";

	scope = 2;
	displayName = "$STR_RHSUSF_MISC_LEUPOLD_SPOTTER";
	class Library
	{
		libTextDesc = "$STR_A3_cfgWeapons_Rangefinder_Library0";
	};
			
	descriptionShort	= "Leupold spotting Scope";
	model				= "\rhsusf\addons\rhsusf_weapons\misc\LeupoldMk4\Rhs_Spotter_mk4.p3d";
	modelOptics			= "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_leu_H58_20";
	opticsZoomMin		= __EVAL(0.35/20);
	opticsZoomMax		= __EVAL(0.35/20);
	opticsZoomInit		= __EVAL(0.35/20);
	distanceZoomMin		= 1097;
	distanceZoomMax		= 1097;
	visionMode[] = {"Normal"};
	class WeaponSlotsInfo
	{
		mass = 20;
	};
};
class Leupold_Mk4: rhsusf_bino_leopold_mk4 { scope = 1;scopeArsenal = 0;};


class rhsusf_bino_m24 : binocular
{
	INVENTORY_PICTURE(rhsusf_bino_m24p)
	AUTHOR_MACRO
	dlc = "RHS_USAF";

	scope = 2;
	displayName = "M24 Binoculars"; //TODO
	
	class Library
	{
		libTextDesc = "";//TODO
	};
			
	descriptionShort = "Magnification 7X"; //TODO
	model = "\rhsusf\addons\rhsusf_weapons3\misc\m24binocular\m24binocular.p3d";
	//modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_leu_H58_20"; //TODO
	//picture = "\rhsusf\addons\rhsusf_weapons\misc\LeupoldMk4\Data\m151_logo.paa"; //TODO
	opticsZoomMin	= __EVAL(0.35/7);
	opticsZoomMax	= __EVAL(0.35/7);
	opticsZoomInit	= __EVAL(0.35/7);
	//distanceZoomMin = 1097; //TODO
	//distanceZoomMax = 1097; //TODO
	visionMode[] = {"Normal"};
	class WeaponSlotsInfo
	{
		mass = 20; //TODO
	};
};
class rhsusf_bino_m24_ARD : rhsusf_bino_m24
{
	displayName = "M24 Binoculars (ARD)"; //TODO
	scope = 2;
		
	descriptionShort = "Magnification 7X"; //TODO
	model = "\rhsusf\addons\rhsusf_weapons3\misc\m24binocular\m24binocular_ARD.p3d";
	//modelOptics = "\rhsusf\addons\rhsusf_weapons\acc\scopes\optics\rhsusf_leu_H58_20"; //TODO
	//picture = "\rhsusf\addons\rhsusf_weapons\misc\LeupoldMk4\Data\m151_logo.paa"; //TODO
};

class m24_bino: rhsusf_bino_m24 { scope = 1;scopeArsenal = 0;};
class m24_bino_ARD : rhsusf_bino_m24_ARD { scope = 1;scopeArsenal = 0;};