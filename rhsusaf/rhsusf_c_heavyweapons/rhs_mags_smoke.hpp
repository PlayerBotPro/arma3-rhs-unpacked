class SmokeLauncherMag;
class rhsusf_mag_L8A3_8 : SmokeLauncherMag
{
	count = 8;
	scope = 2;
	ammo = "rhsusf_ammo_L8A3";
	initSpeed = 50;
};
class rhsusf_mag_L8A3_12 : rhsusf_mag_L8A3_8 { count = 12; };
class rhsusf_mag_L8A3_16 : rhsusf_mag_L8A3_8 { count = 16; };
class rhsusf_mag_L8A3_48 : rhsusf_mag_L8A3_8 { count = 48; };
class rhsusf_mag_L8A3_L1_8 : rhsusf_mag_L8A3_8 { };
class rhsusf_mag_L8A3_L2_8 : rhsusf_mag_L8A3_8 { };
class rhsusf_mag_L8A3_L3_8 : rhsusf_mag_L8A3_8 { };
class rhsusf_mag_L8A3_R1_8 : rhsusf_mag_L8A3_8 { };
class rhsusf_mag_L8A3_R2_8 : rhsusf_mag_L8A3_8 { };
class rhsusf_mag_L8A3_R3_8 : rhsusf_mag_L8A3_8 { };

class rhs_mag_smokegen : SmokeLauncherMag
{
	scope				= 2;
	count				= 999;
	ammo				= rhs_ammo_smokegen;
	displayName			= $STR_RHSUSF_MAG_SMOKEGEN;
	displayNameShort	= $STR_RHSUSF_MAG_SMOKEGEN;
};

class rhsusf_mag_duke : SmokeLauncherMag
{
	count = 1;
	scope = 2;
	ammo = "rhsusf_ammo_duke";
	initSpeed = 10;
};
class rhsusf_mag_laneMarkerSystem : SmokeLauncherMag
{
	count = 50;
	scope = 2;
	ammo = "rhsusf_ammo_laneMarkerSystem";
	initSpeed = 10;
};


//ECM systems
class rhsusf_mag_LWIRCM: CA_Magazine
{
	count		= 120;
	ammo		= "rhs_ammo_LWIRCM";
	initSpeed	= 30;
	weight		= 0;
};
class rhsusf_mag_DIRCM : rhsusf_mag_LWIRCM
{
};
class 60Rnd_CMFlare_Chaff_Magazine;
class 30Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
{
	count = 30;
};

//Testing Dynamic CM mags
/*
Modular dispensers with square slots can take different size payloads
Max capacities for each dispenser type (e.g. "30rnd") are based on how many 1x1 cartridges fit each bucket
Chaff cartridges
	1x1 inch RR-170 (single slot, single payload)
	1x1 inch RR-180 (single slot, double payload)
Flare cartridges
	1x1 inch e.g. M206 (single slot)
	2x1 inch e.g. MJU-7, MJU-39, MJU-40, MJU-53 (dual slot)
	2x2.5 inch e.g. MJU-10 (roughly quad slot)
Special Material Decoys (oxidising compounds that generate heat)
	1x1 inch e.g. M211, MJU-50 (single slot)
	2x1 inch e.g. MJU-51 (dual slot)
*/
// M130 30rnd GPD (Helicopter dispenser, almost always 1x1 cartridges)
class rhsusf_M130_CMFlare_Chaff_Magazine: 30Rnd_CMFlare_Chaff_Magazine
{
	pylonweapon 	= "rhsusf_weap_CMDispenser_M130";
	displayname	= "1x30 M206 Flare/RR-170 Chaff";
	hardpoints[]	= {"RHSUSF_cm_M130"};
	count		= 15;
};
class rhsusf_M130_CMFlare_Chaff_Magazine_x2: rhsusf_M130_CMFlare_Chaff_Magazine
{
	displayname	= "2x30 M206 Flare/RR-170 Chaff";
	hardpoints[]	= {"RHSUSF_cm_M130_x2"};
	count		= 30;
};
class rhsusf_M130_CMFlare_Chaff_Magazine_x4: rhsusf_M130_CMFlare_Chaff_Magazine
{
	displayname	= "4x30 M206 Flare/RR-170 Chaff";
	hardpoints[]	= {"RHSUSF_cm_M130_x4"};
	count		= 60;
};
class rhsusf_M130_CMFlare_Chaff_Magazine_x8: rhsusf_M130_CMFlare_Chaff_Magazine
{
	displayname	= "8x30 M206 Flare/RR-170 Chaff";
	hardpoints[]	= {"RHSUSF_cm_M130_x8"};
	count		= 120;
};
class rhsusf_M130_CMFlare_Chaff_Magazine_x16: rhsusf_M130_CMFlare_Chaff_Magazine
{
	displayname	= "16x30 M206 Flare/RR-170 Chaff";
	hardpoints[]	= {"RHSUSF_cm_M130_x16"};
	count		= 240;
};

class rhsusf_M130_CMFlare_Magazine: rhsusf_M130_CMFlare_Chaff_Magazine
{
	displayname	= "1x30 M206 Flare";
	count		= 30;
	ammo		= "rhsusf_CMflare_Ammo";
};
class rhsusf_M130_CMFlare_Magazine_x2: rhsusf_M130_CMFlare_Magazine
{
	displayname	= "2x30 M206 Flare";
	hardpoints[]	= {"RHSUSF_cm_M130_x2"};
	count		= 60;
};
class rhsusf_M130_CMFlare_Magazine_x4: rhsusf_M130_CMFlare_Magazine
{
	displayname	= "4x30 M206 Flare";
	hardpoints[]	= {"RHSUSF_cm_M130_x4"};
	count		= 120;
};
class rhsusf_M130_CMFlare_Magazine_x8: rhsusf_M130_CMFlare_Magazine
{
	displayname	= "8x30 M206 Flare";
	hardpoints[]	= {"RHSUSF_cm_M130_x8"};
	count		= 240;
};
class rhsusf_M130_CMFlare_Magazine_x16: rhsusf_M130_CMFlare_Magazine
{
	displayname	= "16x30 M206 Flare";
	hardpoints[]	= {"RHSUSF_cm_M130_x16"};
	count		= 480;
};

// AN/ALE-39 30rnd 36mm CMDS (US Navy dispenser with round cartridges)
class rhsusf_ANALE39_CMFlare_Chaff_Magazine: rhsusf_M130_CMFlare_Chaff_Magazine
{
	pylonweapon 	= "rhsusf_weap_CMDispenser_ANALE39";
	displayname	= "1x30 MJU-32 Flare/RR-144 Chaff";
	hardpoints[]	= {"RHSUSF_cm_ANALE39"};
};
class rhsusf_ANALE39_CMFlare_Chaff_Magazine_x2: rhsusf_M130_CMFlare_Chaff_Magazine_x2
{
	pylonweapon 	= "rhsusf_weap_CMDispenser_ANALE39";
	displayname	= "2x30 MJU-32 Flare/RR-144 Chaff";
	hardpoints[]	= {"RHSUSF_cm_ANALE39_x2"};
};
class rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4: rhsusf_M130_CMFlare_Chaff_Magazine_x4
{
	pylonweapon 	= "rhsusf_weap_CMDispenser_ANALE39";
	displayname	= "4x30 MJU-32 Flare/RR-144 Chaff";
	hardpoints[]	= {"RHSUSF_cm_ANALE39_x4"};
};

class rhsusf_ANALE39_CMFlare_Magazine: rhsusf_M130_CMFlare_Magazine
{
	pylonweapon 	= "rhsusf_weap_CMDispenser_ANALE39";
	displayname	= "1x30 MJU-32 Flare";
	hardpoints[]	= {"RHSUSF_cm_ANALE39"};
};
class rhsusf_ANALE39_CMFlare_Magazine_x2: rhsusf_M130_CMFlare_Magazine_x2
{
	pylonweapon 	= "rhsusf_weap_CMDispenser_ANALE39";
	displayname	= "2x30 MJU-32 Flare";
	hardpoints[]	= {"RHSUSF_cm_ANALE39_x2"};
};
class rhsusf_ANALE39_CMFlare_Magazine_x4: rhsusf_M130_CMFlare_Magazine_x4
{
	pylonweapon 	= "rhsusf_weap_CMDispenser_ANALE39";
	displayname	= "4x30 MJU-32 Flare";
	hardpoints[]	= {"RHSUSF_cm_ANALE39_x4"};
};

// AN/ALE-40 30rnd CMDS (USAF fixed-wing dispenser)
class rhsusf_ANALE40_CMFlare_Chaff_Magazine: rhsusf_M130_CMFlare_Chaff_Magazine
{
	pylonweapon 	= "rhsusf_weap_CMDispenser_ANALE40";
	hardpoints[]	= {"RHSUSF_cm_ANALE40"};
};
class rhsusf_ANALE40_CMFlare_Chaff_Magazine_x2: rhsusf_M130_CMFlare_Chaff_Magazine_x2
{
	pylonweapon 	= "rhsusf_weap_CMDispenser_ANALE40";
	hardpoints[]	= {"RHSUSF_cm_ANALE40_x2"};
};
class rhsusf_ANALE40_CMFlare_Chaff_Magazine_x4: rhsusf_M130_CMFlare_Chaff_Magazine_x4
{
	pylonweapon 	= "rhsusf_weap_CMDispenser_ANALE40";
	hardpoints[]	= {"RHSUSF_cm_ANALE40_x4"};
};
class rhsusf_ANALE40_CMFlare_Chaff_Magazine_x8: rhsusf_M130_CMFlare_Chaff_Magazine_x8
{
	pylonweapon 	= "rhsusf_weap_CMDispenser_ANALE40";
	hardpoints[]	= {"RHSUSF_cm_ANALE40_x8"};
};
class rhsusf_ANALE40_CMFlare_Chaff_Magazine_x16: rhsusf_M130_CMFlare_Chaff_Magazine_x16
{
	pylonweapon 	= "rhsusf_weap_CMDispenser_ANALE40";
	hardpoints[]	= {"RHSUSF_cm_ANALE40_x16"};
};

class rhsusf_ANALE40_CMFlare_Magazine: rhsusf_M130_CMFlare_Magazine
{
	pylonweapon 	= "rhsusf_weap_CMDispenser_ANALE40";
	hardpoints[]	= {"RHSUSF_cm_ANALE40"};
};
class rhsusf_ANALE40_CMFlare_Magazine_x2: rhsusf_M130_CMFlare_Magazine_x2
{
	pylonweapon 	= "rhsusf_weap_CMDispenser_ANALE40";
	hardpoints[]	= {"RHSUSF_cm_ANALE40_x2"};
};
class rhsusf_ANALE40_CMFlare_Magazine_x4: rhsusf_M130_CMFlare_Magazine_x4
{
	pylonweapon 	= "rhsusf_weap_CMDispenser_ANALE40";
	hardpoints[]	= {"RHSUSF_cm_ANALE40_x4"};
};
class rhsusf_ANALE40_CMFlare_Magazine_x8: rhsusf_M130_CMFlare_Magazine_x8
{
	pylonweapon 	= "rhsusf_weap_CMDispenser_ANALE40";
	hardpoints[]	= {"RHSUSF_cm_ANALE40_x8"};
};
class rhsusf_ANALE40_CMFlare_Magazine_x16: rhsusf_M130_CMFlare_Magazine_x16
{
	pylonweapon 	= "rhsusf_weap_CMDispenser_ANALE40";
	hardpoints[]	= {"RHSUSF_cm_ANALE40_x16"};
};

// AN/ALE-52 24rnd CMDS for F-22 (Typically uses 2x1 inch MJU-7/39/40 type flares that take up two slots)
class rhsusf_ANALE52_CMFlare_Chaff_Magazine: 30Rnd_CMFlare_Chaff_Magazine
{
	pylonweapon 	= "rhsusf_weap_CMDispenser_ANALE52";
	displayname	= "1x12 MJU-39 Flare/12 RR-170 Chaff";
	hardpoints[]	= {"RHSUSF_cm_ANALE52"};
	count		= 12;
};
class rhsusf_ANALE52_CMFlare_Chaff_Magazine_x2: rhsusf_ANALE52_CMFlare_Chaff_Magazine
{
	displayname	= "2x12 MJU-39 Flare/24 RR-170 Chaff";
	hardpoints[]	= {"RHSUSF_cm_ANALE52_x2"};
	count		= 24;
};
class rhsusf_ANALE52_CMFlare_Chaff_Magazine_x4: rhsusf_ANALE52_CMFlare_Chaff_Magazine
{
	displayname	= "4x12 MJU-39 Flare/2x24 RR-170 Chaff";
	hardpoints[]	= {"RHSUSF_cm_ANALE52_x4"};
	count		= 48;
};

class rhsusf_ANALE52_CMFlare_Magazine: rhsusf_ANALE52_CMFlare_Chaff_Magazine
{
	displayname	= "1x12 MJU-39 Flare";
	count		= 12;
	ammo		= "rhsusf_CMflare_Ammo";
};
class rhsusf_ANALE52_CMFlare_Magazine_x2: rhsusf_ANALE52_CMFlare_Magazine
{
	displayname	= "2x12 MJU-39 Flare";
	hardpoints[]	= {"RHSUSF_cm_ANALE52_x2"};
	count		= 24;
};
class rhsusf_ANALE52_CMFlare_Magazine_x4: rhsusf_ANALE52_CMFlare_Magazine
{
	displayname	= "4x12 MJU-39 Flare";
	hardpoints[]	= {"RHSUSF_cm_ANALE52_x4"};
	count		= 48;
};
class rhsusf_ANALE52_CMFlare_Magazine_x6: rhsusf_ANALE52_CMFlare_Magazine
{
	displayname	= "6x12 MJU-39 Flare";
	hardpoints[]	= {"RHSUSF_cm_ANALE52_x6"};
	count		= 72;
};