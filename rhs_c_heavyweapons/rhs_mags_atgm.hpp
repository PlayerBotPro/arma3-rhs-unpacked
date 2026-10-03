class rhs_mag_9m14m : VehicleMagazine
{
	scope = 1;
	DISP_MAG_STR(9M14M);
	ammo = "rhs_ammo_9m14m";
	count = 1;
	initSpeed = 80;
	maxleadspeed = 30;
	nameSound = "missiles";
};

class rhs_mag_9m14m_3 : rhs_mag_9m14m
{
	count = 3;
};
class rhs_mag_9m14m_4 : rhs_mag_9m14m
{
	count = 4;
};
class rhs_mag_MCLOS_Training : rhs_mag_9m14m
{
	displayname = "MCLOS training round";
	count = 999;
	ammo = "rhs_ammo_mclos_training";
};

class rhs_mag_9m14 : rhs_mag_9m14m
{
	DISP_MAG_STR(9M14);
	ammo = "rhs_ammo_9m14";
};
class rhs_mag_9m17 : VehicleMagazine
{
	scope			= 1;
	DISP_MAG_STR(9M17);
	ammo			= "rhs_ammo_9m17";
	count			= 1;
	initSpeed		= 80;
	maxleadspeed	= 40;
	nameSound		= "missiles";
};
class rhs_mag_9m17p : rhs_mag_9m17
{
	DISP_MAG_STR(9M17P);
	ammo	= "rhs_ammo_9m17p";
};

class rhs_mag_9M17_Mi24_2x : rhs_mag_9m17
{
	model				= rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m17_2x;
	count 				= 2;
	mass				= __EVAL(42.5*2);
	weight				= __EVAL(42.5*2);
	hardpoints[] 		= {"RHS_HP_9m17_Mi24"};
	pylonWeapon			= rhs_weap_2K8_launcher;
};
class rhs_mag_9M17p_Mi24_2x : rhs_mag_9M17_Mi24_2x
{
	DISP_MAG_STR(9M17P);
	ammo = "rhs_ammo_9m17p";
};

class rhs_mag_9m112_6 : VehicleMagazine
{
	scope = public;
	DISP_MAG_STR(9M112);
	reloadTime = 30;
	magazineReloadTime = 30;
	ammo = "rhs_ammo_9m112";
	count = 6;
	initSpeed = 125;
	maxleadspeed = 50;
	nameSound = "missiles";
	rhs_magazineIndex=4;
};

class rhs_mag_9m112m_6 : rhs_mag_9m112_6
{
	DISP_MAG_STR(9M112M);
	ammo = "rhs_ammo_9m112m";
};
class rhs_mag_9m112m_4 : rhs_mag_9m112m_6
{
	count = 4;
};
class rhs_mag_9m112m2_6 : rhs_mag_9m112_6
{
	DISP_MAG_STR(9M112M2);
	ammo = "rhs_ammo_9m112m2";
};
class rhs_mag_9m124_6 : rhs_mag_9m112_6
{
	DISP_MAG_STR(9M124);
	ammo = "rhs_ammo_9m124";
};
class rhs_mag_9m128_6 : rhs_mag_9m112_6
{
	scope = public;
	canLock = 0;
	DISP_MAG_STR(9M128);
	ammo = "rhs_ammo_9m128";
	count = 6;
};

class rhs_mag_9m113 : VehicleMagazine
{
	scope = public;
	DISP_MAG_STR(9M113);
	ammo = "rhs_ammo_9m113";
	count = 1;
	initSpeed = 80;
	maxleadspeed = 80;
	nameSound = "missiles";
	rhs_magazineIndex=4;
};

class rhs_mag_9m113_3 : rhs_mag_9m113
{
	count = 3;
};
class rhs_mag_9m113_4 : rhs_mag_9m113
{
	count = 4;
};
class rhs_mag_9m113_5 : rhs_mag_9m113
{
	count = 5;
};
class rhs_mag_9m113_5_9P148_pylon : rhs_mag_9m113
{
	hardpoints[]		= {"RHS_HP_9P148"};
	displayname			= "9M113";
	displaynameShort	= "HEAT";
	descriptionShort	= "HEAT. 600 mm RHA penetration ";
	pylonWeapon			= "rhs_weap_9P148";
	count				= 5;
	model = "\A3\weapons_f\empty";
};

class rhs_mag_9m113M : rhs_mag_9m113
{
	DISP_MAG_STR(9M113M);
	ammo = "rhs_ammo_9m113M";
};
class rhs_mag_9m113M_3 : rhs_mag_9m113M
{
	count = 3;
};
class rhs_mag_9m113M_4 : rhs_mag_9m113M
{
	count = 4;
};
class rhs_mag_9m113M_5 : rhs_mag_9m113M
{
	count = 5;
};
class rhs_mag_9m111 : rhs_mag_9m113
{
	DISP_MAG_STR(9M111);
	ammo = "rhs_ammo_9m111";
};
class rhs_mag_9m111_3 : rhs_mag_9m111
{
	count = 4;
};
class rhs_mag_9m111_4 : rhs_mag_9m111
{
	count = 4;
};
class rhs_mag_9m111_5 : rhs_mag_9m111
{
	count = 5;
};
class rhs_mag_9m111M : rhs_mag_9m111
{
	DISP_MAG_STR(9M111M);
	ammo = "rhs_ammo_9m111M";
};
class rhs_mag_9m111M_3 : rhs_mag_9m111M
{
	count = 3;
};
class rhs_mag_9m111M_4 : rhs_mag_9m111M
{
	count = 4;
};
class rhs_mag_9m111M_5 : rhs_mag_9m111M
{
	count = 5;
};


class rhs_mag_9m117_3 : VehicleMagazine
{
	scope = public;
	DISP_MAG_STR(3UBK101);
	ammo = "rhs_ammo_9m117";
	reloadTime = 12;
	magazineReloadTime = 12;
	count = 3;
	initSpeed = 80;
	maxleadspeed = 70;
	nameSound = "missiles";
	rhs_magazineIndex=2; // defined as heat for compatibility with FCS system
};

class rhs_mag_9m117_8 : rhs_mag_9m117_3
{
	count = 8;
};
class rhs_mag_9m117m_3 : rhs_mag_9m117_3
{
	DISP_MAG_STR(3UBK10M);
	ammo = "rhs_ammo_9m117m";
	count = 3;
};

class rhs_mag_9m117m_8 : rhs_mag_9m117m_3
{
	count = 8;
};
class rhs_mag_9m117m1_3 : rhs_mag_9m117_3
{
	DISP_MAG_STR(3UBK23);
	ammo = "rhs_ammo_9m117m";
	count = 3;
};

class rhs_mag_9m117m1_8 : rhs_mag_9m117m1_3
{
	count = 8;
};


class rhs_mag_9m118_3 : rhs_mag_9m117_3
{
	DISP_MAG_STR(3UBK102);
	canlock = 1;
	ammo = "rhs_ammo_9m118";
	count = 3;
	initSpeed = 100;
};

class rhs_mag_9m119_6 : rhs_mag_9m112_6
{
	scope = public;
	canLock = 0;
	DISP_MAG_STR(9M119);
	ammo = "rhs_ammo_9m119";
	count = 6;
};
class rhs_mag_9m119_4 : rhs_mag_9m119_6
{
	count = 4;
};

class rhs_mag_9m119rx_6 : rhs_mag_9m119_6
{
	scope = public;
	DISP_MAG_STR(9M119RX);
	canLock = 0;
	reloadTime = 8;
	magazineReloadTime = 8;
	ammo = "rhs_ammo_9m119";
	count = 6;
	initSpeed = 120;
	maxleadspeed = 50;
	nameSound = "missiles";
};

class rhs_mag_9m119m_6 : rhs_mag_9m112_6
{
	scope = public;
	canLock = 0;
	DISP_MAG_STR(9M119M);
	ammo = "rhs_ammo_9m119m";
	count = 6;
};
class rhs_mag_9m119m_4 : rhs_mag_9m119m_6
{
	count = 4;
};
class rhs_mag_9m119f_6 : rhs_mag_9m112_6
{
	DISP_MAG_STR(9M119F);
	ammo = "rhs_ammo_9m119f";
};

// 9M133
class rhs_mag_9m133_2 : VehicleMagazine
{
	scope = public;
	DISP_MAG_STR(9M133);
	canLock = 1;
	reloadTime = 8;
	magazineReloadTime = 8;
	ammo = "rhs_ammo_9m133";
	count = 2;
	initSpeed = 100;
	maxleadspeed = 60;
	nameSound = "missiles";
	rhs_magazineIndex=4;
	model = "\A3\weapons_f\empty";
};
class rhs_mag_9m133 : rhs_mag_9m133_2
{
	count = 1;
};
// 9M133F
class rhs_mag_9m133f_2 : rhs_mag_9m133_2
{
	DISP_MAG_STR(9M133F);
	ammo = "rhs_ammo_9m133f";
};
class rhs_mag_9m133f : rhs_mag_9m133f_2
{
	count = 1;
	canLock = 0;
};
// 9M133-1
class rhs_mag_9m1331_2 : rhs_mag_9m133_2
{
	DISP_MAG_STR(9M1331);
	ammo = "rhs_ammo_9m1331";
};
class rhs_mag_9m1331 : rhs_mag_9m1331_2
{
	count = 1;
};
// 9M133M2
class rhs_mag_9m133m2_2 : rhs_mag_9m133_2
{
	DISP_MAG_STR(9M133M2);
	ammo = "rhs_ammo_9m133m2";
};
class rhs_mag_9m133m2 : rhs_mag_9m133m2_2
{
	count = 1;
};

class rhs_mag_9m133_pylon : rhs_mag_9m133
{
	hardpoints[] 		= {"RHS_HP_T15"};
	displayname			= "9M133";
	displaynameShort	= "Tandem HEAT";
	descriptionShort	= "Tandem HEAT. 1,000 mm RHA penetration ";
	pylonWeapon			= "rhs_weap_9K133M_9M133";
	initSpeed			= 0;
};
class rhs_mag_9m133f_pylon : rhs_mag_9m133f
{
	hardpoints[] 		= {"RHS_HP_T15"};
	displayname			= "9M133F";
	displaynameShort	= "Thermobaric";
	descriptionShort	= "Thermobaric 10 kg TNT equivalent";
	pylonWeapon			= "rhs_weap_9K133M_9M133f";
	initSpeed			= 0;
};
class rhs_mag_9m1331_pylon : rhs_mag_9m1331
{
	hardpoints[] 		= {"RHS_HP_T15"};
	displayname			= "9M131-1";
	displaynameShort	= "Tandem HEAT";
	descriptionShort	= "Tandem HEAT. 1,100 mm RHA penetration ";
	pylonWeapon			= "rhs_weap_9K133M_9M1331";
	initSpeed			= 0;
};
class rhs_mag_9m133m2_pylon : rhs_mag_9m133m2
{
	hardpoints[] 		= {"RHS_HP_T15"};
	displayname			= "9M133M-2";
	displaynameShort	= "Tandem HEAT";
	descriptionShort	= "Tandem HEAT. 1,300 mm RHA penetration ";
	pylonWeapon			= "rhs_weap_9K133M_9M133M2";
	initSpeed			= 0;
};
#define SPARE_M133_ATGM hardpoints[] = {"RHS_HP_T15_SPARE"};pylonWeapon	= "rhs_weap_9K133M_spare";ammo = "rhs_Laserbeam"
class rhs_mag_9m133_spare_pylon: rhs_mag_9m133_pylon { SPARE_M133_ATGM; };
class rhs_mag_9m133f_spare_pylon: rhs_mag_9m133f_pylon { SPARE_M133_ATGM; };
class rhs_mag_9m1331_spare_pylon: rhs_mag_9m1331_pylon { SPARE_M133_ATGM; };
class rhs_mag_9m133m2_spare_pylon: rhs_mag_9m133m2_pylon { SPARE_M133_ATGM; };


class rhs_mag_3m7_12 : VehicleMagazine
{
	scope = public;
	displayName = "3M7";
	canLock = 1;
	reloadTime = 10;
	magazineReloadTime = 8.5;
	ammo = "rhs_ammo_3m7";
	count = 12;
	initSpeed = 100;
	maxleadspeed = 40;
	nameSound = "missiles";
};


class Titan_AA;
class rhs_mag_2Rnd_Igla : Titan_AA
{
	scope = 1;
	displayname="9K32";
	descriptionshort="Range: 800-4200 m <br/>Type: ground-air <br/>Used in: 9K32";
	ammo=rhs_ammo_9k38;
	type = 6 * WeaponSlotItem;
	count = 2;
	initspeed=40;
	maxleadspeed=320;
	nameSound = "missiles";
};

class rhs_mag_9M115 : VehicleMagazine
{
	scope = public;
	DISP_MAG_STR(9M115);
	canLock = 0;
	reloadTime = 8;
	magazineReloadTime = 8;
	ammo = "rhs_ammo_9m115";
	count = 1;
	initSpeed = 80;
	maxleadspeed = 60;
	nameSound = "missiles";
	rhs_magazineIndex=4;
};
class rhs_mag_9M131 : rhs_mag_9M115
{
	DISP_MAG_STR(9M131);
	ammo = "rhs_ammo_9m131";
};
class rhs_mag_9M131M : rhs_mag_9M115
{
	DISP_MAG_STR(9M131m);
	ammo = "rhs_ammo_9m131m";
};
class rhs_mag_9M131F : rhs_mag_9M115
{
	DISP_MAG_STR(9M131f);
	ammo = "rhs_ammo_9m131f";
};

class rhs_mag_9M114 : VehicleMagazine
{
	count				= 1;
	initspeed			= 55;
	namesound			= "missiles";
	displayname			= "9M114";
	displaynameshort	= "9M114";
	maxleadspeed		= 120;
	ammo				=  rhs_ammo_9M114;
	mass				= 42.5;
	weight				= 42.5;
	pylonWeapon			= "rhs_weap_9K114_launcher";
	hardpoints[] 		= {""};
};
class rhs_mag_9M114_Mi24_2x : rhs_mag_9M114
{
	model				= rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m114_2x;
	count 				= 2;
	mass				= __EVAL(42.5*2);
	weight				= __EVAL(42.5*2);
	hardpoints[] 		= {"RHS_HP_9m114_Mi24"};
};
class rhs_mag_9M114M_Mi24_2x : rhs_mag_9M114_Mi24_2x
{
	displayname			= "9M114M";
	displaynameshort	= "9M114M";
	ammo 				= rhs_ammo_9m114m;
};
class rhs_mag_9M114F_Mi24_2x : rhs_mag_9M114_Mi24_2x
{
	displayname			= "9M114F";
	displaynameshort	= "9M114F";
	ammo 				= rhs_ammo_9m114f;
	pylonWeapon			= "rhs_weap_9K114f_launcher";
};
class rhs_mag_9M114M1_Mi24_2x : rhs_mag_9M114_Mi24_2x
{
	displayname			= "9M114M1";
	displaynameshort	= "9M114M1";
	ammo 				= rhs_ammo_9m114m1;
};
class rhs_mag_9M114M2_Mi24_2x : rhs_mag_9M114_Mi24_2x
{
	displayname			= "9M114M2";
	displaynameshort	= "9M114M2";
	ammo 				= rhs_ammo_9m114m2;
};

class rhs_mag_9m120 : rhs_mag_9M114
{
	ammo				= "rhs_ammo_9m120";
	displayname			= "9M120";
	displaynameshort	= "9M120";
	weight				= 42.5;
	pylonWeapon			= "rhs_weap_9m120_launcher";
};
class rhs_mag_9M120_Mi24_2x : rhs_mag_9M120
{
	model				= rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m120_2x;
	count 				= 2;
	mass				= __EVAL(42.5*2);
	weight				= __EVAL(42.5*2);
	hardpoints[] 		= {"RHS_HP_9m120_Mi24"};
};
class rhs_mag_9M120_Mi28_8x : rhs_mag_9m120
{
	model				= rhsafrf\addons\rhs_airweapons\rhs_pylon_m_9m120_8x;
	count 				= 8;
	mass				= __EVAL(42.5*8);
	weight				= __EVAL(42.5*8);
	hardpoints[] 		= {"RHS_HP_9m120_Mi28"};
};
class rhs_mag_9M120_8 : rhs_mag_9m120
{
	count	= 8;
	weight	= __EVAL(42.5*8);
};
class rhs_mag_9M120_16 : rhs_mag_9m120
{
	count	= 16;
	weight	= __EVAL(42.5*16);
};
class rhs_mag_9m120m : rhs_mag_9M114
{
	ammo				= "rhs_ammo_9m120m";
	displayname			= "9M120M";
	displaynameshort	= "9M120M";
	weight				= 42.5;
	pylonWeapon			= "rhs_weap_9m120_launcher";
};
class rhs_mag_9M120M_Mi24_2x : rhs_mag_9M120M
{
	model				= rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m120_2x;
	count 				= 2;
	mass				= __EVAL(42.5*2);
	weight				= __EVAL(42.5*2);
	hardpoints[] 		= {"RHS_HP_9m120_Mi24"};
};
class rhs_mag_9M120M_Mi28_8x : rhs_mag_9m120m
{
	model				= rhsafrf\addons\rhs_airweapons\rhs_pylon_m_9m120_8x;
	count 				= 8;
	mass				= __EVAL(42.5*8);
	weight				= __EVAL(42.5*8);
	hardpoints[] 		= {"RHS_HP_9m120_Mi28"};
};
class rhs_mag_9M120m_8 : rhs_mag_9m120m
{
	count	= 8;
	weight	= 42.5*8;
};
class rhs_mag_9M120m_16 : rhs_mag_9m120m
{
	count	= 16;
	weight	= __EVAL(42.5*16);
};
class rhs_mag_9m120f : rhs_mag_9M114
{
	ammo				= "rhs_ammo_9m120f";
	displayname			="9M120F HE";
	displaynameshort	="9M120F HE";
	weight				= 42.5;
	pylonWeapon			= "rhs_weap_9m120f_launcher";
};
class rhs_mag_9M120F_Mi24_2x : rhs_mag_9m120f
{
	model				= rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m120_2x;
	count 				= 2;
	mass				= __EVAL(42.5*2);
	weight				= __EVAL(42.5*2);
	hardpoints[] 		= {"RHS_HP_9m120_Mi24"};
};
class rhs_mag_9M120f_Mi28_8x : rhs_mag_9m120f
{
	model				= rhsafrf\addons\rhs_airweapons\rhs_pylon_m_9m120_8x;
	count 				= 8;
	mass				= __EVAL(42.5*8);
	weight				= __EVAL(42.5*8);
	hardpoints[] 		= {"RHS_HP_9m120_Mi28"};
};
class rhs_mag_9M120f_8 : rhs_mag_9m120f
{
	count	= 8;
	weight	= __EVAL(42.5*8);
};
class rhs_mag_9M120f_16 : rhs_mag_9m120f
{
	count	= 16;
	weight	= __EVAL(42.5*16);
};
class rhs_mag_9m120o : rhs_mag_9M114
{
	ammo				= "rhs_ammo_9m120o";
	displayname			= "9M120O Proximity";
	displaynameshort	= "9M120O Proximity";
	weight				= 42.5;
	pylonWeapon			= "rhs_weap_9m120o_launcher";
};
class rhs_mag_9M120O_Mi24_2x : rhs_mag_9m120o
{
	model				= rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m120_2x;
	count 				= 2;
	mass				= __EVAL(42.5*2);
	weight				= __EVAL(42.5*2);
	hardpoints[] 		= {"RHS_HP_9m120_Mi24"};
};
class rhs_mag_9M120O_Mi28_8x : rhs_mag_9m120o
{
	model				= rhsafrf\addons\rhs_airweapons\rhs_pylon_m_9m120_8x;
	count 				= 8;
	mass				= __EVAL(42.5*8);
	weight				= __EVAL(42.5*8);
	hardpoints[] 		= {"RHS_HP_9m120_Mi28"};
};


class rhs_mag_mi24_empty: VehicleMagazine
{
	scope			= 2;
	ammo			= "rhs_ammo_ptb1500";
	displayName		= "Empty Shelf";
	count			= 1;
	mass			= __EVAL(8.5);
	weight			= __EVAL(8.5);
	nameSound		= "";
	model			= rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_mi24_empty;
	pylonweapon		= "rhs_weap_DummyLauncher";
	hardpoints[]	= {"RHS_HP_Empty_Mi24"};
};

class rhs_proxy_ags30_mag : VehicleMagazine
{
	ammo = rhs_proxy_ags30_mag;count = 1;
	weight=7;
};
class rhs_proxy_ags30_12_mag : rhs_proxy_ags30_mag
{
	count = 12;
	weight=__EVAL(7*12);
};

class rhs_proxy_pkm_18_mag : VehicleMagazine
{
	ammo = rhs_proxy_pkm_mag;count = 18;
	weight=7;
};


MAX_SHELLS(rhs_mag_9m112,rhs_mag_9m112_6)
MAX_SHELLS(rhs_mag_9m112m,rhs_mag_9m112m_6)
MAX_SHELLS(rhs_mag_9m112m2,rhs_mag_9m112m2_6)
MAX_SHELLS(rhs_mag_9m124,rhs_mag_9m124_6)
MAX_SHELLS(rhs_mag_9m128,rhs_mag_9m128_6)
MAX_SHELLS(rhs_mag_9m119,rhs_mag_9m119_4)
MAX_SHELLS(rhs_mag_9m119rx,rhs_mag_9m119rx_6)
MAX_SHELLS(rhs_mag_9m119m,rhs_mag_9m119m_4)
MAX_SHELLS(rhs_mag_9m119f,rhs_mag_9m119f_6)