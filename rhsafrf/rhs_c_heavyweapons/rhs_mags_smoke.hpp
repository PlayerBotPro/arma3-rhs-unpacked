class rhs_mag_902a : SmokeLauncherMag
{
	count=1;
	scope = 1;
	DISP_MAG_STR(902A);
	ammo = "rhs_ammo_902a";
};

class rhs_mag_3d17 : SmokeLauncherMag
{
	count = 8;
	scope = 1;
	initSpeed = 50;
	ammo = "rhs_ammo_3d17";
	DISP_MAG_STR(3D17);
};

class rhs_mag_3d17_4 : rhs_mag_3d17
{
	count = 4;
};

class rhs_mag_3d17_6 : rhs_mag_3d17
{
	count = 6;
};

class rhs_mag_3d17_12 : rhs_mag_3d17
{
	ammo = "rhs_ammo_3d17_902B";
	count = 12;
};

class rhs_mag_smokegen : SmokeLauncherMag
{
	count = 999;
	scope = 1;
	ammo = "rhs_ammo_smokegen";
	DISP_MAG_STR(SMOKEGEN);
};

class rhs_mag_dazzler : rhs_mag_smokegen
{
	count = 999;
	scope = 1;
	ammo = "rhs_ammo_dazzler";
};
class 60Rnd_CMFlare_Chaff_Magazine;
class rhs_128Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
{
	count = 128;
};
class rhs_60Rnd_CMFlare_Magazine: 60Rnd_CMFlare_Chaff_Magazine
{
	ammo = "rhs_CMflare_Ammo";
};
//Testing Dynamic CM mags
// ASO-2 32rnd 26mm
class rhs_ASO2_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
{
	pylonweapon 	= "rhs_weap_CMDispenser_ASO2";
	displayname	= "1x32 PPI-26 Flare/PPR-26 Chaff";
	hardpoints[]	= {"RHS_cm_ASO2"};
	count		= 16;
};
class rhs_ASO2_CMFlare_Chaff_Magazine_x2: rhs_ASO2_CMFlare_Chaff_Magazine
{
	displayname	= "2x32 PPI-26 Flare/PPR-26 Chaff";
	hardpoints[]	= {"RHS_cm_ASO2_x2"};
	count		= 32;
};
class rhs_ASO2_CMFlare_Chaff_Magazine_x4: rhs_ASO2_CMFlare_Chaff_Magazine
{
	displayname	= "4x32 PPI-26 Flare/PPR-26 Chaff";
	hardpoints[]	= {"RHS_cm_ASO2_x4"};
	count		= 64;
};
class rhs_ASO2_CMFlare_Chaff_Magazine_x6: rhs_ASO2_CMFlare_Chaff_Magazine
{
	displayname	= "6x32 PPI-26 Flare/PPR-26 Chaff";
	hardpoints[]	= {"RHS_cm_ASO2_x6"};
	count		= 96;
};
class rhs_ASO2_CMFlare_Magazine: rhs_ASO2_CMFlare_Chaff_Magazine
{
	displayname	= "1x32 PPI-26 Flare";
	count		= 32;
	ammo		= "rhs_CMflare_Ammo";
};
class rhs_ASO2_CMFlare_Magazine_x2: rhs_ASO2_CMFlare_Magazine
{
	displayname	= "2x32 PPI-26 Flare";
	hardpoints[]	= {"RHS_cm_ASO2_x2"};
	count		= 64;
};
class rhs_ASO2_CMFlare_Magazine_x4: rhs_ASO2_CMFlare_Magazine
{
	displayname	= "4x32 PPI-26 Flare";
	hardpoints[]	= {"RHS_cm_ASO2_x4"};
	count		= 128;
};
class rhs_ASO2_CMFlare_Magazine_x6: rhs_ASO2_CMFlare_Magazine
{
	displayname	= "6x32 PPI-26 Flare";
	hardpoints[]	= {"RHS_cm_ASO2_x6"};
	count		= 192;
};
// BVP-30-26 30Rnd 26mm
class rhs_BVP3026_CMFlare_Chaff_Magazine: rhs_ASO2_CMFlare_Chaff_Magazine
{
	pylonweapon 	= "rhs_weap_CMDispenser_BVP3026";
	hardpoints[]	= {"RHS_cm_BVP3026"};
	displayname	= "1x30 PPI-26 Flare/PPR-26 Chaff";
	count		= 15;
};
class rhs_BVP3026_CMFlare_Chaff_Magazine_x2: rhs_BVP3026_CMFlare_Chaff_Magazine
{
	hardpoints[]	= {"RHS_cm_BVP3026_x2"};
	displayname	= "2x30 PPI-26 Flare/PPR-26 Chaff";
	count		= 30;
};
class rhs_BVP3026_CMFlare_Magazine: rhs_BVP3026_CMFlare_Chaff_Magazine
{
	displayname	= "1x30 PPI-26 Flare";
	count		= 30;
	ammo		= "rhs_CMflare_Ammo";
};
class rhs_BVP3026_CMFlare_Magazine_x2: rhs_BVP3026_CMFlare_Magazine
{
	hardpoints[]	= {"RHS_cm_BVP3026_x2"};
	displayname	= "2x30 PPI-26 Flare";
	count		= 60;
};

// UV-26 32Rnd 26mm
class rhs_UV26_CMFlare_Chaff_Magazine: rhs_ASO2_CMFlare_Chaff_Magazine
{
	pylonweapon 	= "rhs_weap_CMDispenser_UV26";
	hardpoints[]	= {"RHS_cm_UV26"};
};
class rhs_UV26_CMFlare_Chaff_Magazine_x2: rhs_ASO2_CMFlare_Chaff_Magazine_x2
{
	pylonweapon 	= "rhs_weap_CMDispenser_UV26";
	hardpoints[]	= {"RHS_cm_UV26_x2"};
};
class rhs_UV26_CMFlare_Chaff_Magazine_x4: rhs_ASO2_CMFlare_Chaff_Magazine_x4
{
	pylonweapon 	= "rhs_weap_CMDispenser_UV26";
	hardpoints[]	= {"RHS_cm_UV26_x4"};
};
class rhs_UV26_CMFlare_Magazine: rhs_ASO2_CMFlare_Magazine
{
	pylonweapon 	= "rhs_weap_CMDispenser_UV26";
	hardpoints[]	= {"RHS_cm_UV26"};
};
class rhs_UV26_CMFlare_Magazine_x2: rhs_ASO2_CMFlare_Magazine_x2
{
	pylonweapon 	= "rhs_weap_CMDispenser_UV26";
	hardpoints[]	= {"RHS_cm_UV26_x2"};
};
class rhs_UV26_CMFlare_Magazine_x4: rhs_ASO2_CMFlare_Magazine_x4
{
	pylonweapon 	= "rhs_weap_CMDispenser_UV26";
	hardpoints[]	= {"RHS_cm_UV26_x4"};
};

//ECM systems
class rhs_mag_DIRCM_Vitebsk : CA_Magazine
{
	count		= 120;
	ammo		= "RHS_Ammo_DIRCM_Vitebsk";
	initSpeed	= 30;
	weight		= 0;
};

class rhs_mag_DIRCM_Lipa : rhs_mag_DIRCM_Vitebsk
{
	count = 80;
};
class rhs_mag_aps_afganit : rhs_mag_smokegen
{
	count = 1;
	scope = 1;
	ammo = "rhs_ammo_dazzler";
};