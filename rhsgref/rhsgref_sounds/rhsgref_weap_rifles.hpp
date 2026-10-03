class Rifle_Base_F;
class arifle_MX_Base_F: Rifle_Base_F {};
class Rifle_Long_Base_F;
class UGL_F;
class srifle_EBR_F;
class LMG_Mk200_F;
class LMG_M200;
class MGun;

// M70
class rhs_weap_m70_base: Rifle_Base_F
{
	reloadMagazineSound[] = {"rhsafrf\addons\rhs_sounds\ak_shared\reload_AK762",1.5,1,10};
	changeFiremodeSound[] = {"rhsgref\addons\rhsgref_sounds\ak_shared\firemode",0.6,1,5};
};

// M21

class rhs_weap_m21_base : rhs_weap_m70_base
{
	reloadMagazineSound[] = {"rhsgref\addons\rhsgref_sounds\ak_shared\reload",1.5,1,10};
	changeFiremodeSound[] = {"rhsgref\addons\rhsgref_sounds\ak_shared\firemode",0.6,1,5};
};

// M76
class rhs_weap_m76 : rhs_weap_m70_base
{
	reloadMagazineSound[] = {"rhsafrf\addons\rhs_sounds\ak_shared\reload_AK2",1.2,1,15};
	changeFiremodeSound[] = {"rhsafrf\addons\rhs_sounds\ak_shared\firemode",0.6,1,5};
};

// M38 Mosin Nagant
class rhs_weap_m38_Base_F: Rifle_Base_F
{
	reloadMagazineSound[] = {"\rhsgref\addons\rhsgref_weapons\kar98k\data\sounds\1903A1_reload_noscope",0.8,1,10};
	class Single: Mode_SemiAuto
	{
		sounds[]={"StandardSound","SilencedSound"};
		class StandardSound
		{
			soundSetShot[] = {"RHS_kar98_Shot_SoundSet","RHS_mmg1_Tail_SoundSet"};
		};
		class SilencedSound
		{
			soundSetShot[] = {"RHSUSF_sd_xm2010_Shot_SoundSet","RHS_sd_mmg1_Tail_SoundSet"};
		};
	};
};


// Kar98
class rhs_weap_kar98k_Base_F: Rifle_Base_F
{
	reloadMagazineSound[] = {"\rhsgref\addons\rhsgref_weapons\kar98k\data\sounds\1903A1_reload_noscope",0.8,1,10};
	class Single: Mode_SemiAuto
	{
		sounds[]={"StandardSound"};
		class StandardSound
		{
			soundSetShot[] = {"RHS_kar98_Shot_SoundSet","RHS_mmg1_Tail_SoundSet"};
		};
	};
};

//Sa vz.58
class rhs_weap_savz58_base: Rifle_Base_F
{
	reloadMagazineSound[] = {"rhsafrf\addons\rhs_sounds\ak_shared\reload_AK762",1.5,1,10};
	changeFiremodeSound[] = {"rhsgref\addons\rhsgref_sounds\ak_shared\firemode",0.6,1,5};
	class Single: Mode_SemiAuto
	{
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound
		{
			soundSetShot[] = {"RHS_akm_Closure_SoundSet","RHS_akm_Shot_SoundSet","RHS_lmg1_Tail_SoundSet"};
		};
		class SilencedSound
		{
			soundSetShot[] = {"RHS_akm_Closure_SoundSet","RHS_akm_ShotSD_SoundSet","RHS_Rifle1_SD_Tail_SoundSet"};
		};
	};
	class FullAuto: Mode_FullAuto
	{
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound
		{
			soundSetShot[] = {"RHS_akm_Closure_SoundSet","RHS_akm_Shot_SoundSet","RHS_lmg1_Tail_SoundSet"};
		};
		class SilencedSound
		{
			soundSetShot[] = {"RHS_akm_Closure_SoundSet","RHS_akm_ShotSD_SoundSet","RHS_Rifle1_SD_Tail_SoundSet"};
		};
	};
};

//Stgw 57
class rhs_weap_stgw57_base: Rifle_Base_F
{
	reloadMagazineSound[] = {"rhsgref\addons\rhsgref_sounds\ak_shared\reload",1.5,1,10};
	changeFiremodeSound[] = {"rhsgref\addons\rhsgref_sounds\ak_shared\firemode",0.6,1,5};
	class Single: Mode_SemiAuto
	{
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound
		{
			soundSetShot[] = {"RHS_akm_Closure_SoundSet","RHS_akm_Shot_SoundSet","RHS_lmg1_Tail_SoundSet"};
		};
		class SilencedSound
		{
			soundSetShot[] = {"RHS_akm_Closure_SoundSet","RHS_akm_ShotSD_SoundSet","RHS_Rifle1_SD_Tail_SoundSet"};
		};
	};
	class FullAuto: Mode_FullAuto
	{
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound
		{
			soundSetShot[] = {"RHS_akm_Closure_SoundSet","RHS_akm_Shot_SoundSet","RHS_lmg1_Tail_SoundSet"};
		};
		class SilencedSound
		{
			soundSetShot[] = {"RHS_akm_Closure_SoundSet","RHS_akm_ShotSD_SoundSet","RHS_Rifle1_SD_Tail_SoundSet"};
		};
	};
};