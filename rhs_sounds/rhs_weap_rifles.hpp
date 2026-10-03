class Rifle_Base_F;
class arifle_MX_Base_F: Rifle_Base_F {};
class Rifle_Long_Base_F;
class GrenadeLauncher;
class UGL_F : GrenadeLauncher {};
class srifle_EBR_F;
class LMG_Mk200_F;
class LMG_M200;
class MGun;

class pdw2000_base_F;
class hgun_PDW2000_F : pdw2000_base_F {
	class Single;
	class FullAuto;
	class WeaponSlotsInfo;
};

// PP2000
class rhs_weap_pp2000: hgun_PDW2000_F
{
	class Single : Single {
		class StandardSound
		{
			soundSetShot[] = {"RHS_pp2000_Closure_SoundSet","RHS_pp2000_Shot_SoundSet","RHS_pistol1_Tail_SoundSet"};
		};
	};
	class FullAuto : FullAuto {
		class StandardSound
		{
			soundSetShot[] = {"RHS_pp2000_Closure_SoundSet","RHS_pp2000_Shot_SoundSet","RHS_pistol1_Tail_SoundSet"};
		};
	};
};

// AK74
class rhs_weap_ak74m_Base_F: Rifle_Base_F
{
	reloadMagazineSound[] = {"rhsafrf\addons\rhs_sounds\ak_shared\reload",0.8,1,10};
	changeFiremodeSound[] = {"rhsafrf\addons\rhs_sounds\ak_shared\firemode",0.6,1,5};
	class Single: Mode_SemiAuto
	{
		class StandardSound
		{
			soundSetShot[] = {"RHS_ak74_Closure_SoundSet","RHS_ak74_Shot_SoundSet","RHS_rifle1_Tail_SoundSet"};
		};
		class SilencedSound
		{
			soundSetShot[] = {"RHS_ak74_Closure_SoundSet","RHS_ak74_ShotSD_SoundSet","RHS_Rifle1_SD_Tail_SoundSet"};
		};
	};
	class FullAuto: Mode_FullAuto
	{
		class StandardSound
		{
			soundSetShot[] = {"RHS_ak74_Closure_SoundSet","RHS_ak74_Shot_SoundSet","RHS_rifle1_Tail_SoundSet"};
		};
		class SilencedSound
		{
			soundSetShot[] = {"RHS_ak74_Closure_SoundSet","RHS_ak74_ShotSD_SoundSet","RHS_Rifle1_SD_Tail_SoundSet"};
		};
	};
};
class rhs_weap_ak74m : rhs_weap_ak74m_Base_F{};
class rhs_weap_asval : rhs_weap_ak74m
{
	L_ES_Prefix		= "nosound";
	L_ES_maxPlopp 	= 0;
	class Single : Single
	{
		class StandardSound
		{
			soundSetShot[] = {"RHS_ASVAL_Closure_SoundSet","RHS_ASVAL_ShotSD_SoundSet","RHS_rifle1_SD_Tail_SoundSet"};
		};
	};
	class FullAuto : FullAuto
	{
		class StandardSound
		{
			soundSetShot[] = {"RHS_ASVAL_Closure_SoundSet","RHS_ASVAL_ShotSD_SoundSet","RHS_rifle1_SD_Tail_SoundSet"};
		};
	};
};

// AKM
class rhs_weap_akm : rhs_weap_ak74m
{
	reloadMagazineSound[] = {"rhsafrf\addons\rhs_sounds\ak_shared\reload_AK762",0.8,1,10};
	changeFiremodeSound[] = {"rhsafrf\addons\rhs_sounds\ak_shared\firemode",0.6,1,5};
	class Single: Mode_SemiAuto
	{
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

class rhs_weap_ak103_base : rhs_weap_akm
{
	reloadMagazineSound[] = {"rhsafrf\addons\rhs_sounds\ak_shared\reload",0.8,1,10};
};

// PKP
class rhs_pkp_base: Rifle_Long_Base_F
{
	reloadMagazineSound[] = {"rhsafrf\addons\rhs_sounds\pkp\reload",1.1,1,12};
	class Single: Mode_SemiAuto
	{
	 	class StandardSound
		{
			soundSetShot[] = {"RHS_pkp_Closure_SoundSet","RHS_pkp_Shot_SoundSet","RHS_mmg1_Tail_SoundSet"};
		};
		class SilencedSound
		{
			soundSetShot[] = {"RHS_pkp_Closure_SoundSet","RHS_pkp_Shot_SoundSet","RHS_mmg1_Tail_SoundSet"};
		};
	};
	class FullAuto: Mode_FullAuto
	{
	 	class StandardSound
		{
			soundSetShot[] = {"RHS_pkp_Closure_SoundSet","RHS_pkp_Shot_SoundSet","RHS_mmg1_Tail_SoundSet"};
		};
		class SilencedSound
		{
			soundSetShot[] = {"RHS_pkp_Closure_SoundSet","RHS_pkp_Shot_SoundSet","RHS_mmg1_Tail_SoundSet"};
		};
	};
};
class rhs_weap_pkp: rhs_pkp_base{};

// RPK
class rhs_weap_rpk_base: Rifle_Long_Base_F
{
	reloadMagazineSound[] = {"rhsafrf\addons\rhs_sounds\ak_shared\reload_AK762",0.8,1,10};
	changeFiremodeSound[] = {"rhsafrf\addons\rhs_sounds\ak_shared\firemode",0.6,1,5};
};
class PKT: MGun{};

// PKT
class rhs_weap_pkt : PKT
{
	class manual: MGun
	{
		sounds[] = {"StandardSound"};
	 	class StandardSound
		{
			soundSetShot[] = {"RHS_pkp_Closure_SoundSet","RHS_pkp_Shot_SoundSet","RHS_mmg1_Tail_SoundSet"};
		};
	};
};

// SVD
class rhs_weap_svd : rhs_weap_ak74m
{
	reloadMagazineSound[] = {"rhsafrf\addons\rhs_sounds\svd\rhs_reload_svd",1.2,1,15};
	changeFiremodeSound[] = {"rhsafrf\addons\rhs_sounds\ak_shared\firemode",0.6,1,5};
	class Single: Mode_SemiAuto
	{
		class StandardSound
		{
			soundSetShot[] = {"RHS_svd_Closure_SoundSet","RHS_akm_Shot_SoundSet","RHS_mmg1_Tail_SoundSet"};
		};
		class SilencedSound
		{
			soundSetShot[] = {"RHS_svd_Closure_SoundSet","RHS_akm_ShotSD_SoundSet","RHS_rifle1_SD_Tail_SoundSet"};
		};
	};
};

class rhs_weap_svdp : rhs_weap_svd
{
	reloadMagazineSound[] = {"rhsafrf\addons\rhs_sounds\svd\rhs_reload_svd",1.2,1,15};
	changeFiremodeSound[] = {"rhsafrf\addons\rhs_sounds\ak_shared\firemode",0.6,1,5};
	class Single: Mode_SemiAuto
	{
		class StandardSound
		{
			soundSetShot[] = {"RHS_svd_Closure_SoundSet","RHS_akm_Shot_SoundSet","RHS_mmg1_Tail_SoundSet"};
		};
		class SilencedSound
		{
			soundSetShot[] = {"RHS_svd_Closure_SoundSet","RHS_akm_ShotSD_SoundSet","RHS_rifle1_SD_Tail_SoundSet"};
		};
	};
};


//GP-25
class GP25_Base: UGL_F
{
	class Single : Mode_SemiAuto
	{
		sounds[]={"StandardSound"};
		class StandardSound
		{
			soundSetShot[] = {"rhs_gp25_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
		};
	};
};

class rhs_weap_orsis_Base_F: Rifle_Base_F
{
	reloadMagazineSound[] = {"rhsafrf\addons\rhs_sounds\t5000\reload",1.2,1,15};
};