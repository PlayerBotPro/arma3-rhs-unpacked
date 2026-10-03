class 450Rnd_127x108_Ball;	// External class reference
//he
class rhs_mag_3uor6_230 : 450Rnd_127x108_Ball
{
	DISP_MAG_STR(3UOR6);
	nameSound			= "heat";
	ammo				= "rhs_ammo_3uor6";
	count				= 230;
	maxLeadSpeed		= 25;
	initSpeed			= 1120;
	tracersEvery		= 4;
	weight				= 0.385*230;
	rhs_magazineIndex	= 5;
};

class rhs_mag_3uor6_125 : rhs_mag_3uor6_230 { count = 125; weight = __EVAL(0.385*125);};
class rhs_mag_3uor6_150 : rhs_mag_3uor6_230 { count = 150; weight = __EVAL(0.385*150);};
class rhs_mag_3uor6_180 : rhs_mag_3uor6_230 { count = 180; weight = __EVAL(0.385*180);};
class rhs_mag_3uor6_200 : rhs_mag_3uor6_230 { count = 200; weight = __EVAL(0.385*200);};
class rhs_mag_3uor6_237 : rhs_mag_3uor6_230 { count = 237; weight = __EVAL(0.385*237);};
class rhs_mag_3uor6_250 : rhs_mag_3uor6_230 { count = 250; weight = __EVAL(0.385*250);};
class rhs_mag_3uor6_305 : rhs_mag_3uor6_230 { count = 305; weight = __EVAL(0.385*305);};
class rhs_mag_3uor6_340 : rhs_mag_3uor6_230 { count = 340; weight = __EVAL(0.385*340);};

class rhs_mag_3uof8_230 : rhs_mag_3uor6_230
{
	DISP_MAG_STR(3UOF8);
	ammo		= "rhs_ammo_3uof8";
	initSpeed	= 960;
	weight		= __EVAL(0.389*230);
};
class rhs_mag_3uof8_125 : rhs_mag_3uof8_230 { count = 125; weight = __EVAL(0.389*125);};
class rhs_mag_3uof8_150 : rhs_mag_3uof8_230 { count = 150; weight = __EVAL(0.389*150);};
class rhs_mag_3uof8_180 : rhs_mag_3uof8_230 { count = 180; weight = __EVAL(0.389*180);};
class rhs_mag_3uof8_200 : rhs_mag_3uof8_230 { count = 200; weight = __EVAL(0.389*200);};
class rhs_mag_3uof8_237 : rhs_mag_3uof8_230 { count = 237; weight = __EVAL(0.389*237);};
class rhs_mag_3uof8_250 : rhs_mag_3uof8_230 { count = 250; weight = __EVAL(0.389*250);};
class rhs_mag_3uof8_305 : rhs_mag_3uof8_230 { count = 305; weight = __EVAL(0.389*305);};
class rhs_mag_3uof8_340 : rhs_mag_3uof8_230 { count = 340; weight = __EVAL(0.389*340);};

//ap
class rhs_mag_3ubr6_230 : rhs_mag_3uor6_230
{
	DISP_MAG_STR(3UBR6);
	ammo				= "rhs_ammo_3ubr6";
	nameSound			= "sabot";
	weight				= __EVAL(0.4*230);
	tracersEvery		= 3;
	rhs_magazineIndex	= 6;
};
class rhs_mag_3ubr6_100 : rhs_mag_3ubr6_230 { count = 100; weight = __EVAL(0.4*100);};
class rhs_mag_3ubr6_120 : rhs_mag_3ubr6_230 { count = 120; weight = __EVAL(0.4*120);};
class rhs_mag_3ubr6_125 : rhs_mag_3ubr6_230 { count = 125; weight = __EVAL(0.4*125);};
class rhs_mag_3ubr6_150 : rhs_mag_3ubr6_230 { count = 150; weight = __EVAL(0.4*150);};
class rhs_mag_3ubr6_160 : rhs_mag_3ubr6_230 { count = 160; weight = __EVAL(0.4*160);};
class rhs_mag_3ubr6_195 : rhs_mag_3ubr6_230 { count = 195; weight = __EVAL(0.4*195);};
class rhs_mag_3ubr6_227 : rhs_mag_3ubr6_230 { count = 227; weight = __EVAL(0.4*227);};
class rhs_mag_3ubr6_250 : rhs_mag_3ubr6_230 { count = 250; weight = __EVAL(0.4*250);};

class rhs_mag_3ubr8_230 : rhs_mag_3ubr6_230
{
	DISP_MAG_STR(3UBR8);
	ammo	= "rhs_ammo_3ubr8";
	weight	= __EVAL(0.3*230);
};
class rhs_mag_3ubr8_100 : rhs_mag_3ubr8_230 { count = 100; weight = __EVAL(0.4*100);};
class rhs_mag_3ubr8_120 : rhs_mag_3ubr8_230 { count = 120; weight = __EVAL(0.4*120);};
class rhs_mag_3ubr8_125 : rhs_mag_3ubr8_230 { count = 125; weight = __EVAL(0.3*125);};
class rhs_mag_3ubr8_150 : rhs_mag_3ubr8_230 { count = 150; weight = __EVAL(0.3*150);};
class rhs_mag_3ubr8_160 : rhs_mag_3ubr8_230 { count = 160; weight = __EVAL(0.3*160);};
class rhs_mag_3ubr8_195 : rhs_mag_3ubr8_230 { count = 195; weight = __EVAL(0.3*195);};
class rhs_mag_3ubr8_227 : rhs_mag_3ubr8_230 { count = 227; weight = __EVAL(0.3*227);};
class rhs_mag_3ubr8_250 : rhs_mag_3ubr8_230 { count = 250; weight = __EVAL(0.3*250);};

class rhs_mag_3ubr11_230 : rhs_mag_3ubr6_230
{
	DISP_MAG_STR(3UBR11);
	ammo	= "rhs_ammo_3ubr11";
	weight	= __EVAL(0.3*230);
};
class rhs_mag_3ubr11_100 : rhs_mag_3ubr11_230 { count = 100; weight = __EVAL(0.4*100);};
class rhs_mag_3ubr11_120 : rhs_mag_3ubr11_230 { count = 120; weight = __EVAL(0.4*120);};
class rhs_mag_3ubr11_125 : rhs_mag_3ubr11_230 { count = 125; weight = __EVAL(0.3*125);};
class rhs_mag_3ubr11_150 : rhs_mag_3ubr11_230 { count = 150; weight = __EVAL(0.3*150);};
class rhs_mag_3ubr11_160 : rhs_mag_3ubr11_230 { count = 160; weight = __EVAL(0.3*160);};
class rhs_mag_3ubr11_195 : rhs_mag_3ubr11_230 { count = 195; weight = __EVAL(0.3*195);};
class rhs_mag_3ubr11_227 : rhs_mag_3ubr11_230 { count = 227; weight = __EVAL(0.3*227);};
class rhs_mag_3ubr11_250 : rhs_mag_3ubr11_230 { count = 250; weight = __EVAL(0.3*250);};


class rhs_mag_AZP23_250 : VehicleMagazine
{
	scope			= public;
	displayName		= "$STR_RHS_AZP23_NAME";
	ammo			= "RHS_ammo_23mm_AA";
	count			= 250;
	initSpeed		= 980;
	maxLeadSpeed	= 650;
	nameSound		= "cannon";
	tracersEvery	= 1;
};
class rhs_mag_AZP23_250_mixed : rhs_mag_AZP23_250
{
	ammo			= "RHS_ammo_23mm_AA_mixed";
};
class rhs_mag_AZP23_250_ap : rhs_mag_AZP23_250
{
	ammo			= "rhs_ammo_bzt_23x115mm";
};
class rhs_mag_AZP23_2000 : rhs_mag_AZP23_250
{
	count 			= 2000;
};
class rhs_mag_AZP23_2000_mixed : rhs_mag_AZP23_2000
{
	ammo			= "RHS_ammo_23mm_AA_mixed";
};
class rhs_mag_AZP23_100 : rhs_mag_AZP23_250
{
	count = 100;
	muzzleImpulseFactor[] = {0.5,0.2};
};
class rhs_mag_AZP23_100_veh : rhs_mag_AZP23_100
{
	muzzleImpulseFactor[] = {0.3,1.2};
};
class rhs_mag_AZP23_100_ap : rhs_mag_AZP23_250_ap
{
	count = 100;
};
class rhs_mag_AZP23_100_ap_veh : rhs_mag_AZP23_100_ap
{
	muzzleImpulseFactor[] = {0.3,1.2};
};
class rhs_mag_AM23_500 : rhs_mag_AZP23_250
{
	initSpeed = 720;
	count = 500;
};


//GSh30 mags


class rhs_mag_gsh30_ofzt_750 : rhs_mag_3ubr6_230
{
	DISP_MAG_STR(OFZT30GSH);
	ammo = "rhs_ammo_3uof8";
	count = 750;
	tracersEvery = 1;
	initSpeed = 817;
	maxLeadSpeed = 300;
	//ammo = "rhs_ammo_127x108mm_x5";
	weight = 0.390*750;
};

class rhs_mag_gsh30_bt_750 : rhs_mag_3uor6_230
{
	DISP_MAG_STR(BT30GSH);
	ammo = "rhs_ammo_gsh30_bt";
	count = 750;
	weight = __EVAL(0.390*750);
	maxLeadSpeed = 300;
};

class rhs_mag_gsh30_ofzt_250 : rhs_mag_gsh30_ofzt_750
{
	count = 250;
	weight = __EVAL(0.390*250);
	maxLeadSpeed = 300;
	muzzleImpulseFactor[] = {0.5,1.2};
};

class rhs_mag_gsh30_bt_250 : rhs_mag_gsh30_bt_750
{
	count = 250;
	weight = __EVAL(0.390*250);
	maxLeadSpeed = 300;
	muzzleImpulseFactor[] = {0.5,1.2};
};
class rhs_mag_gsh30_bt_150 : rhs_mag_gsh30_bt_250 { count = 150; weight = __EVAL(0.390*150);};
class rhs_mag_gsh30_mixed_150: rhs_mag_gsh30_bt_150
{
	ammo = "rhs_ammo_gsh30_mixed";
};

class rhs_mag_762x54mm_100 : VehicleMagazine
{
	scope = public;
	DISP_MAG_STR(762X54MM);
	count = 100;
	ammo = "rhs_B_762x54_Ball";
	initSpeed = 855;
	tracersEvery = 4;
	nameSound = "mgun";
	rhs_magazineIndex=7;
};

class rhs_mag_762x54mm_250 : rhs_mag_762x54mm_100
{
	count = 250;
};

class rhs_mag_762x54mm_500 : rhs_mag_762x54mm_100
{
	count = 500;
};

class rhs_mag_762x54mm_1000 : rhs_mag_762x54mm_100
{
	count = 1000;
};

class rhs_mag_762x54mm_2000 : rhs_mag_762x54mm_100
{
	count = 2000;
};

class rhs_mag_127x108mm_50 : VehicleMagazine
{
	scope = public;
	DISP_MAG_STR(127X108MM);
	count = 50;
	ammo = "rhs_ammo_127x108mm";
	initSpeed = 817;
	tracersEvery = 4;
	nameSound = "mgun";
	weight = 0.13*50;
};

class rhs_mag_127x108mm_100 : rhs_mag_127x108mm_50 { count = 100; weight = __EVAL(0.13*100);};

class rhs_mag_127x108mm_150 : rhs_mag_127x108mm_50 { count = 150; weight = __EVAL(0.13*150);};
class rhs_mag_127x108mm_300 : rhs_mag_127x108mm_50 { count = 300; weight = __EVAL(0.13*300);};


class rhs_mag_127x108mm_1470 : rhs_mag_127x108mm_50
{
	ammo = "rhs_ammo_127x108mm_x5";
	tracersEvery =1;
	count = 1470;
	weight = __EVAL(0.13*1470);
	maxLeadSpeed = 300;
};

class rhs_mag_127x108mm_1slt_1470 : rhs_mag_127x108mm_1470
{
	ammo = "rhs_ammo_127x108mm_1SLT";
	DISP_MAG_STR(127X108MM_1SLT);
	tracersEvery	= 1;
	weight			= __EVAL(0.142*1470);
	initSpeed		= 735;
};

class rhs_mag_145x115mm_50 : VehicleMagazine
{
	DISP_MAG_STR(145X115MM);
	count			= 50;
	ammo			= "rhs_ammo_145x115mm";
	initSpeed		= 988;
	tracersEvery	= 4;
	nameSound		= "mgun";
};

class RHS_mag_VOG30_30 : VehicleMagazine
{
	DISP_MAG_STR(VOG30);
	count		= 30;
	ammo		= "rhs_ammo_VOG30";
	initSpeed	= 185;
	nameSound	= "handgrenade";
};

class RHS_mag_GPD30_30 : RHS_mag_VOG30_30
{
	DISP_MAG_STR(GPD30);
	ammo = "rhs_ammo_GPD30";
};

class RHS_mag_VOG17m_30 : RHS_mag_VOG30_30
{
	DISP_MAG_STR(VOG17m);
	ammo = "rhs_ammo_VOG17m";
};
