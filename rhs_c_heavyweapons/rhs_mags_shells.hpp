#define MUZZLE_FACTOR 14
class Laserbatteries;
class rhs_LaserMag: Laserbatteries
{
	scope = 1;
	ammo="rhs_laserbeam";
};
class rhs_LaserFCSMag: Laserbatteries
{
	scope = 1;
	ammo="rhs_laserbeam_FCS";
	count = 99;
	initSpeed = 600;
	maxLeadSpeed=150;
};
#define MAX_SHELLS_COUNT 40
#define MAX_SHELLS(child,par) \
class child : par\
{\
	count = MAX_SHELLS_COUNT;\
};
class rhs_mag_bm_base : VehicleMagazine
{
	scope = public;
	reloadTime = 12;
	magazineReloadTime = 12;
	count = 14;
	initSpeed = 900;
	rhs_magazineIndex=1;
	maxLeadSpeed=80;
	muzzleImpulseFactor[] = {MUZZLE_FACTOR*0.2,MUZZLE_FACTOR};
};

class rhs_mag_br412_14 : rhs_mag_bm_base {
	DISP_MAG_STR(BR412);
	ammo = "rhs_ammo_br412";
	initSpeed = 1450;
};


class rhs_mag_br412_17 : rhs_mag_br412_14 {
	count = 17;
};

class rhs_mag_br540_10 : rhs_mag_bm_base
{
	displayName = "BR-540 AP";
	displayNameShort = "AP";
	ammo = "rhs_ammo_br540";
	initSpeed = 600;
	count = 10;
};
class rhs_mag_br540_4 : rhs_mag_bm_base
{
	count = 4;
};
MAX_SHELLS(rhs_mag_br540,rhs_mag_br540_10)

class rhs_mag_bm25_14 : rhs_mag_bm_base {
	DISP_MAG_STR(3UBM11);
	ammo = "rhs_ammo_bm25";
	initSpeed = 1430;
};

class rhs_mag_bm8_14 : rhs_mag_bm_base {
	DISP_MAG_STR(3UBM6);
	ammo = "rhs_ammo_bm8";
	initSpeed = 1415;
};

class rhs_mag_bm4_15 : rhs_mag_bm_base {
	DISP_MAG_STR(3UBM4);
	ammo = "rhs_ammo_bm4";
	count = 15;
	initSpeed = 1411;
};

class rhs_mag_bm23_15 : rhs_mag_bm_base {
	DISP_MAG_STR(3UBM13);
	ammo = "rhs_ammo_bm23";
	initSpeed = 1450;
	count = 15;
};

class rhs_mag_3bm_base : rhs_mag_bm_base
{
	reloadTime = 6.5;
	magazineReloadTime = 6.5;
	lastRoundsTracer = 5;
	tracersEvery = 1;
	count = 10;
};

class rhs_mag_dummy : rhs_mag_3bm_base
{
	ammo = "rhs_ammo_3bm9";
};

// BM10
class rhs_mag_3bm9_10 : rhs_mag_3bm_base
{
	DISP_MAG_STR(3BM9);
	ammo = "rhs_ammo_3bm9";
	initSpeed = 1800;
};
MAX_SHELLS(rhs_mag_3bm9,rhs_mag_3bm9_10)

// BM12
class rhs_mag_3bm12_10 : rhs_mag_3bm_base
{
	DISP_MAG_STR(3BM12);
	ammo = "rhs_ammo_3bm12";
	initSpeed = 1800;
};
MAX_SHELLS(rhs_mag_3bm12,rhs_mag_3bm12_10)

// BM15
class rhs_mag_3bm15_10 : rhs_mag_3bm_base
{
	DISP_MAG_STR(3BM15);
	ammo = "rhs_ammo_3bm15";
	initSpeed = 1785;
};
MAX_SHELLS(rhs_mag_3bm15,rhs_mag_3bm15_10)

// BM17
class rhs_mag_3bm17_10 : rhs_mag_3bm_base
{
	DISP_MAG_STR(3BM17);
	ammo = "rhs_ammo_3bm17";
	initSpeed = 1760;
};
class rhs_mag_3bm17_14 : rhs_mag_3bm17_10
{
	count = 14;
};
MAX_SHELLS(rhs_mag_3bm17,rhs_mag_3bm17_10)

// BM22
class rhs_mag_3bm22_10 : rhs_mag_3bm_base
{
	DISP_MAG_STR(3BM22);
	ammo = "rhs_ammo_3bm22";
	initSpeed = 1760;
};
class rhs_mag_3bm22_14 : rhs_mag_3bm22_10
{
	count = 14;
};
class rhs_mag_3bm22_7 : rhs_mag_3bm22_10
{
	count = 7;
};
MAX_SHELLS(rhs_mag_3bm22,rhs_mag_3bm22_10)

// BM26
class rhs_mag_3bm26_10 : rhs_mag_3bm_base
{
	DISP_MAG_STR(3BM26);
	ammo = "rhs_ammo_3bm26";
	initSpeed = 1720;
};
class rhs_mag_3bm26_7 : rhs_mag_3bm26_10
{
	count = 7;
};
MAX_SHELLS(rhs_mag_3bm26,rhs_mag_3bm26_10)

// BM29
class rhs_mag_3bm29_10 : rhs_mag_3bm_base
{
	DISP_MAG_STR(3BM29);
	ammo = "rhs_ammo_3bm29";
	initSpeed = 1660;
};
class rhs_mag_3bm29_7 : rhs_mag_3bm29_10
{
	count = 7;
};
MAX_SHELLS(rhs_mag_3bm29,rhs_mag_3bm29_10)

// BM32
class rhs_mag_3bm32_10 : rhs_mag_3bm_base
{
	DISP_MAG_STR(3BM32);
	ammo = "rhs_ammo_3bm32";
	initSpeed = 1700;
};
class rhs_mag_3bm32_7 : rhs_mag_3bm32_10
{
	count = 7;
};
MAX_SHELLS(rhs_mag_3bm32,rhs_mag_3bm32_10)

// BM42
class rhs_mag_3bm42_10 : rhs_mag_3bm_base
{
	DISP_MAG_STR(3BM42);
	ammo = "rhs_ammo_3bm42";
	initSpeed = 1700;
};
class rhs_mag_3bm42_7 : rhs_mag_3bm42_10
{
	count=7;
};
MAX_SHELLS(rhs_mag_3bm42,rhs_mag_3bm42_10)

// BM42M
class rhs_mag_3bm42m_10 : rhs_mag_3bm_base
{
	DISP_MAG_STR(3BM42M);
	ammo = "rhs_ammo_3bm42m";
	initSpeed = 1750;
};
MAX_SHELLS(rhs_mag_3bm42m,rhs_mag_3bm42m_10)

// BM46
class rhs_mag_3bm46_10 : rhs_mag_3bm_base
{
	DISP_MAG_STR(3BM46);
	ammo = "rhs_ammo_3bm46";
	initSpeed = 1700;
};
class rhs_mag_3bm46_8 : rhs_mag_3bm46_10
{
	count = 8;
};
MAX_SHELLS(rhs_mag_3bm46,rhs_mag_3bm46_10)

// BM59
class rhs_mag_3bm59_10 : rhs_mag_3bm_base
{
	DISP_MAG_STR(3BM59);
	ammo = "rhs_ammo_3bm59";
	initSpeed = 1700;
};
MAX_SHELLS(rhs_mag_3bm59,rhs_mag_3bm59_10)

// BM60
class rhs_mag_3bm60_10 : rhs_mag_3bm_base
{
	DISP_MAG_STR(3BM60);
	ammo = "rhs_ammo_3bm60";
	initSpeed = 1700;
};
MAX_SHELLS(rhs_mag_3bm60,rhs_mag_3bm60_10)

// BM69
class rhs_mag_3bm69_10 : rhs_mag_3bm_base
{
	DISP_MAG_STR(3BM59);
	ammo = "rhs_ammo_3bm69";
	initSpeed = 2050;
};
class rhs_mag_3bm69_17 : rhs_mag_3bm69_10
{
	count = 17;
};
MAX_SHELLS(rhs_mag_3bm69,rhs_mag_3bm69_10)

// BM70
class rhs_mag_3bm70_10 : rhs_mag_3bm_base
{
	DISP_MAG_STR(3BM70);
	ammo = "rhs_ammo_3bm70";
	initSpeed = 2050;
};
MAX_SHELLS(rhs_mag_3bm70,rhs_mag_3bm70_10)

class rhs_mag_bk_base : VehicleMagazine
{
	scope = public;
	reloadTime = 12;
	magazineReloadTime = 12;
	count = 8;
	initSpeed = 900;
	maxLeadSpeed=27;
	rhs_magazineIndex=2;
	muzzleImpulseFactor = 0.01;
};

class rhs_mag_bk4_5 : rhs_mag_bk_base {
	DISP_MAG_STR(3UBK3);
	ammo = "rhs_ammo_bk4";
	count = 5;
	initSpeed = 1750;
};

class rhs_mag_bk5_8 : rhs_mag_bk_base {
	DISP_MAG_STR(3UBK4);
	ammo = "rhs_ammo_bk5";
	initSpeed =900;
};

class rhs_mag_bk6m: rhs_mag_bk_base
{
	DISP_MAG_STR(bk6m);
	ammo = "rhs_ammo_bk6m";
	initSpeed = 680;
	count = 1;
};

class rhs_mag_bk6m_5: rhs_mag_bk6m
{
	count = 5;
};

class rhs_mag_bk6m_26: rhs_mag_bk6m
{
	count = 26;
};

class rhs_mag_bk13: rhs_mag_bk_base
{
	DISP_MAG_STR(bk13);
	ammo = "rhs_ammo_bk13";
	initSpeed = 726;
	count = 1;
};

class rhs_mag_bk13_26: rhs_mag_bk13
{
	count = 26;
};

class rhs_mag_bk13_5: rhs_mag_bk13
{
	count = 5;
};
class rhs_mag_bk13_10: rhs_mag_bk13
{
	count = 10;
};

class rhs_mag_bk15_5 : rhs_mag_bk_base {
	DISP_MAG_STR(3UBK7);
	ammo = "rhs_ammo_bk15";
	count = 5;
	initSpeed = 1750;
};

class rhs_mag_bk17_8 : rhs_mag_bk_base {
	DISP_MAG_STR(3UBK9);
	ammo = "rhs_ammo_bk17";
	initSpeed = 850;
};

class rhs_mag_bp540_4 : rhs_mag_bk_base
{
	displayName = "BP-540 HEAT";
	displayNameShort = "HEAT";
	ammo = "rhs_ammo_bp540";
	initSpeed = 680;
	count = 4;
};
MAX_SHELLS(rhs_mag_bp540,rhs_mag_bp540_4)

class rhs_mag_3bk_base : rhs_mag_bk_base
{
	reloadTime = 6.5;
	magazineReloadTime = 6.5;
	count = 8;
	tracersEvery = 1;
	muzzleImpulseFactor[] = {MUZZLE_FACTOR*0.2,MUZZLE_FACTOR};
};

class rhs_mag_3bk12_8 : rhs_mag_3bk_base
{
	DISP_MAG_STR(3BK12);
	ammo = "rhs_ammo_3bk12";
	initSpeed = 905;
};

MAX_SHELLS(rhs_mag_3bk12,rhs_mag_3bk12_8)
class rhs_mag_3bk14_8 : rhs_mag_3bk_base
{
	DISP_MAG_STR(3BK14);
	ammo = "rhs_ammo_3bk14";
	initSpeed = 905;
};
class rhs_mag_3bk14_6 : rhs_mag_3bk14_8
{
	count=6;
};
MAX_SHELLS(rhs_mag_3bk14,rhs_mag_3bk14_8)

class rhs_mag_3bk18_8 : rhs_mag_3bk_base
{
	DISP_MAG_STR(3BK18);
	ammo = "rhs_ammo_3bk18";
	initSpeed = 905;
};
class rhs_mag_3bk18_6 : rhs_mag_3bk18_8
{
	count=6;
};
MAX_SHELLS(rhs_mag_3bk18,rhs_mag_3bk18_8)

class rhs_mag_3bk18m_8 : rhs_mag_3bk_base
{
	DISP_MAG_STR(3BK18M);
	ammo = "rhs_ammo_3bk18M";
	initSpeed = 905;
};
class rhs_mag_3bk18m_6 : rhs_mag_3bk18m_8
{
	count=6;
};
MAX_SHELLS(rhs_mag_3bk18m,rhs_mag_3bk18m_8)

class rhs_mag_3bk21_8 : rhs_mag_3bk_base
{
	DISP_MAG_STR(3BK21);
	ammo = "rhs_ammo_3bk21";
	initSpeed = 905;
};
MAX_SHELLS(rhs_mag_3bk21,rhs_mag_3bk21_8)

class rhs_mag_3bk29_8 : rhs_mag_3bk_base
{
	DISP_MAG_STR(3BK29);
	ammo = "rhs_ammo_3bk29";
	initSpeed = 905;
};
MAX_SHELLS(rhs_mag_3bk29,rhs_mag_3bk29_8)

class rhs_mag_3bk31_8 : rhs_mag_3bk_base
{
	DISP_MAG_STR(3BK31);
	ammo = "rhs_ammo_3bk31";
	initSpeed =905;
};
class rhs_mag_3bk31_6 : rhs_mag_3bk31_8
{
	count=6;
};
class rhs_mag_3bk31_3 : rhs_mag_3bk31_8
{
	count=3;
};
MAX_SHELLS(rhs_mag_3bk31,rhs_mag_3bk31_8)

class rhs_mag_of_base : VehicleMagazine
{
	scope = public;
	reloadTime = 12;
	magazineReloadTime = 12;
	count = 17;
	initSpeed = 900;
	rhs_magazineIndex=3;
	maxLeadSpeed=40;
	muzzleImpulseFactor = 0.001;
};

class rhs_mag_of412_17 : rhs_mag_of_base
{
	DISP_MAG_STR(OF412);
	ammo = "rhs_ammo_of412";
};

class rhs_mag_of412_21 : rhs_mag_of412_17
{
	count = 21;
};

class rhs_mag_of412_18 : rhs_mag_of412_17
{
	count = 18;
};

class rhs_mag_of11_20 : rhs_mag_of_base
{
	DISP_MAG_STR(3UOF11);
	ammo = "rhs_ammo_of11";
	count = 20;
	muzzleImpulseFactor[] = {1,.1};
};

class rhs_mag_of28_20 : rhs_mag_of_base
{
	DISP_MAG_STR(3UOF37);
	ammo = "rhs_ammo_of28";
	count = 20;
	muzzleImpulseFactor[] = {1,.1};
};

class rhs_mag_3of_base : rhs_mag_of_base
{
	reloadTime = 6.5;
	magazineReloadTime = 6.5;
	count = 6;
	tracersEvery = 1;
	muzzleImpulseFactor[] = {MUZZLE_FACTOR*0.5,MUZZLE_FACTOR};
};

class rhs_mag_3of11_6 : rhs_mag_3of_base
{
	DISP_MAG_STR(3OF11);
	ammo = "rhs_ammo_3of11";
};
MAX_SHELLS(rhs_mag_3of11,rhs_mag_3of11_6)

class rhs_mag_3of26_6 : rhs_mag_3of_base
{
	DISP_MAG_STR(3OF26);
	ammo			= "rhs_ammo_3of26";
	initSpeed		= 850;
	tracersEvery	= 0;
};
class rhs_mag_3of26_5 : rhs_mag_3of26_6
{
	count=5;
};
class rhs_mag_3of26_7 : rhs_mag_3of26_6
{
	count=7;
};
MAX_SHELLS(rhs_mag_3of26,rhs_mag_3of26_6)


class rhs_mag_3UOF17_22 : VehicleMagazine
{
	scope = public;
	DISP_MAG_STR(3UOF17);
	ammo = "rhs_ammo_3UOF17";
	count=22;
	initSpeed = 250;
	maxLeadSpeed=60;
	nameSound="heat";
	tracersEvery = 0;
	rhs_magazineIndex=3;
};

class rhs_mag_3UOF19_22 : VehicleMagazine
{
	scope = public;
	DISP_MAG_STR(3UOF19);
	ammo = "rhs_ammo_3UOF19";
	count=22;
	initSpeed = 355;
	maxLeadSpeed=60;
	nameSound="heat";
	tracersEvery = 1;
	rhs_magazineIndex=3;
};

class rhs_mag_3UOF191_22 : rhs_mag_3UOF19_22
{
	displayName = "3UOF191";
	displayNameShort = "3UOF191";
	ammo = "rhs_ammo_3UOF191";
};

class rhs_mag_9m41_20 : VehicleMagazine
{
	scope = public;
	//DISP_MAG_STR(9M41);
	displayName = "$STR_RHS_9m41_NAME";
	displayNameShort = "$STR_RHS_9m41_NAME";
	//ammo = "rhs_ammo_9m41";
	ammo = "Flare_82mm_AMOS_White";
	count = 20;
	initSpeed = 200;
	//initSpeed = 650;
};
class 32Rnd_155mm_Mo_shells;
//2s3 155mm
class rhs_mag_HE_2a33: 32Rnd_155mm_Mo_shells
{
	scope = 2;
	displayName = "$STR_RHS_53WOF27_NAME";
	displayNameShort = "HE";
	ammo = "rhs_ammo_3WOF27";
	count = 26;
	nameSound = "heat";
	initSpeed = 655;
	rhs_magazineIndex=3;
};
class rhs_mag_HE_2a33_26: rhs_mag_HE_2a33
{
	count = 26;
};
class rhs_mag_HE_2a33_32: rhs_mag_HE_2a33
{
	count = 32;
};
class rhs_mag_HE_2a33_46: rhs_mag_HE_2a33
{
	count = 46;
};
class rhs_mag_53vof546v: rhs_mag_HE_2a33
{
	displayName	= "53-VOF-546V";
	ammo		= "rhs_ammo_53OF546";
	initSpeed	= 655;
	count		= 1;
};
class rhs_mag_53vof546v_26: rhs_mag_53vof546v
{
	count = 26;
};
class rhs_mag_53vof546v_32: rhs_mag_53vof546v
{
	count = 32;
};
class rhs_mag_53vof546v_46: rhs_mag_53vof546v
{
	count = 46;
};
class rhs_mag_53vof546v_direct: rhs_mag_53vof546v
{
	ammo		= "rhs_ammo_53OF546_direct";
};
class rhs_mag_53vof546v_direct_32: rhs_mag_53vof546v_direct
{
	count = 32;
};
class rhs_mag_WP_2a33: rhs_mag_HE_2a33
{
	displayName = "$STR_RHS_53OCH540_NAME";
	displayNameShort = "WP";
	count = 5;
	ammo = "rhs_ammo_152_WP";
};
class rhs_mag_WP_2a33_26: rhs_mag_WP_2a33
{
	count = 26;
};
class rhs_mag_WP_2a33_46: rhs_mag_WP_2a33
{
	count = 46;
};
class rhs_mag_Atomic_2a33: rhs_mag_HE_2a33
{
	displayName = "$STR_RHS_3WB3_NAME";
	displayNameShort = "Nuke";
	ammo = "rhs_ammo_3WB3";
};
class rhs_mag_Atomic_2a33_26: rhs_mag_Atomic_2a33
{
	count = 26;
};
class rhs_mag_Atomic_2a33_46: rhs_mag_Atomic_2a33
{
	count = 46;
};
class rhs_mag_LASER_2a33: rhs_mag_HE_2a33
{
	displayName = "$STR_RHS_3WOF93_NAME";
	displayNameShort = "LG";
	count = 5;
	ammo = "rhs_ammo_3WOF93";
};
class rhs_mag_LASER_2a33_26: rhs_mag_LASER_2a33
{
	count = 26;
};
class rhs_mag_LASER_2a33_46: rhs_mag_LASER_2a33
{
	count = 26;
};
class rhs_mag_SMOKE_2a33: rhs_mag_HE_2a33
{
	displayName = "$STR_RHS_53WD546_NAME";
	displayNameShort = "Smoke";
	count = 5;
	ammo = "rhs_ammo_53WD546U";
};
class rhs_mag_SMOKE_2a33_26: rhs_mag_SMOKE_2a33
{
	count = 26;
};
class rhs_mag_SMOKE_2a33_46: rhs_mag_SMOKE_2a33
{
	count = 26;
};
class rhs_mag_ILLUM_2a33: rhs_mag_HE_2a33
{
	displayName = "$STR_RHS_3WS23_NAME";
	displayNameShort = "Illum";
	count = 5;
	ammo = "rhs_ammo_3WS23";
};
class rhs_mag_ILLUM_2a33_26: rhs_mag_ILLUM_2a33
{
	count = 26;
};
class rhs_mag_ILLUM_2a33_46: rhs_mag_ILLUM_2a33
{
	count = 26;
};
//D30

class rhs_mag_of462: 32Rnd_155mm_Mo_shells
{
	scope = 2;
	DISP_MAG_STR_SIMPLE(of462);
	ammo = "rhs_ammo_of462";
	count = 1;
	nameSound = "heat";
	initSpeed = 690;
	rhs_magazineIndex=3;
	muzzleImpulseFactor = 0.1;
};
class rhs_mag_of462_10: rhs_mag_of462
{
	count = 10;
};
class rhs_mag_of462_direct: rhs_mag_of462
{
	ammo = "rhs_ammo_of462_direct";
};
class rhs_mag_of462_direct_10: rhs_mag_of462_direct
{
	count = 10;
};

class rhs_mag_3of56: rhs_mag_of462
{
	DISP_MAG_STR_SIMPLE(3of56);
	ammo = "rhs_ammo_3of56";
};
class rhs_mag_3of56_10: rhs_mag_3of56
{
	count = 10;
};
class rhs_mag_3of56_5: rhs_mag_3of56
{
	count = 5;
};
class rhs_mag_3of56_30: rhs_mag_3of56
{
	count = 30;
};
class rhs_mag_3of56_35: rhs_mag_3of56
{
	count = 35;
};

class rhs_mag_3of56_direct: rhs_mag_3of56
{
	ammo = "rhs_ammo_3of56_direct";
};
class rhs_mag_3of56_direct_10: rhs_mag_3of56_direct
{
	count = 10;
};
class rhs_mag_3of56_direct_30: rhs_mag_3of56_direct
{
	count = 30;
};
class rhs_mag_3of56_direct_5: rhs_mag_3of56_direct
{
	count = 5;
};

class rhs_mag_d462: rhs_mag_of462
{
	DISP_MAG_STR_SIMPLE(d462);
	displayNameShort = "Smoke";
	ammo = "rhs_ammo_d462";
	rhs_magazineIndex=-1;
};
class rhs_mag_d462_2: rhs_mag_d462
{
	count = 2;
};


class rhs_mag_s463: rhs_mag_of462
{
	DISP_MAG_STR_SIMPLE(s463);
	displayNameShort = "Illum";
	ammo = "rhs_ammo_s463";
	rhs_magazineIndex=-1;
};
class rhs_mag_s463_2: rhs_mag_s463
{
	count = 2;
};

class rhs_mag_3of69m: rhs_mag_of462
{
	DISP_MAG_STR_SIMPLE(3of69m);
	displayNameShort = "LG";
	ammo = "rhs_ammo_3of69m";
	rhs_magazineIndex=-1;
};
class rhs_mag_3of69m_2: rhs_mag_3of69m
{
	count = 2;
};


//2b14
class rhs_mag_3vo18_10: 32Rnd_155mm_Mo_shells
{
	scope = 2;
	DISP_MAG_STR_SIMPLE(3vo18);
	ammo = "rhs_ammo_3vo18";
	count = 10;
	initSpeed = 211;
};
class rhs_mag_3vs25m_10: rhs_mag_3vo18_10
{
	DISP_MAG_STR_SIMPLE(3vs25m);
	displayNameShort = "Illum";
	ammo = "rhs_ammo_3vs25m";
};

class rhs_mag_53_va_832a_10: rhs_mag_3vo18_10
{
	DISP_MAG_STR_SIMPLE(va_832a);
	displayNameShort = "Illum";
	ammo = "rhs_ammo_3vs25m";
};

class rhs_mag_d832du_10: rhs_mag_3vo18_10
{
	DISP_MAG_STR_SIMPLE(d832du);
	displayNameShort = "Smoke";
	ammo = "rhs_ammo_d832du";
};
