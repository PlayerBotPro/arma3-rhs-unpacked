class TransportPylonsComponent
{
	UIPicture = "\rhsafrf\addons\rhs_a2port_car\data\loadouts\RHS_BM21_EDEN_CA.paa";
	class pylons
	{
		class pylon1
		{
			hardpoints[]		= {"RHS_HP_BM21"};
			priority			= 1;
			maxweight			= 200;
			UIposition[]		= {0.12,0.1};
			bay					= 1;
			attachment			= "rhs_mag_m21of_1";
			turret[] 			= {0};
			hitpoint 			= HitLauncher;
		};
		class pylon2: pylon1 	{priority = 2;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.1/2.5)};};
		class pylon3: pylon1 	{priority = 3;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.2/2.5)};};
		class pylon4: pylon1 	{priority = 4;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.3/2.5)};};
		class pylon5: pylon1 	{priority = 5;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.4/2.5)};};
		class pylon6: pylon1 	{priority = 6;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.5/2.5)};};
		class pylon7: pylon1 	{priority = 7;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.6/2.5)};};
		class pylon8: pylon1 	{priority = 8;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.7/2.5)};};
		class pylon9: pylon1 	{priority = 9;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.8/2.5)};};
		class pylon10: pylon1 	{priority = 10;	UIposition[] = {__EVAL(0.12+0.19*0),__EVAL(0.1+0.9/2.5)};};
		class pylon11: pylon1 	{priority = 11;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.0/2.5)};};
		class pylon12: pylon1 	{priority = 12;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.1/2.5)};};
		class pylon13: pylon1 	{priority = 13;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.2/2.5)};};
		class pylon14: pylon1 	{priority = 14;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.3/2.5)};};
		class pylon15: pylon1 	{priority = 15;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.4/2.5)};};
		class pylon16: pylon1 	{priority = 16;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.5/2.5)};};
		class pylon17: pylon1 	{priority = 17;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.6/2.5)};};
		class pylon18: pylon1 	{priority = 18;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.7/2.5)};};
		class pylon19: pylon1 	{priority = 19;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.8/2.5)};};
		class pylon20: pylon1 	{priority = 20;	UIposition[] = {__EVAL(0.12+0.19*1),__EVAL(0.1+0.9/2.5)};};
		class pylon21: pylon1 	{priority = 21;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.0/2.5)};};
		class pylon22: pylon1 	{priority = 22;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.1/2.5)};};
		class pylon23: pylon1 	{priority = 23;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.2/2.5)};};
		class pylon24: pylon1 	{priority = 24;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.3/2.5)};};
		class pylon25: pylon1 	{priority = 25;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.4/2.5)};};
		class pylon26: pylon1 	{priority = 26;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.5/2.5)};};
		class pylon27: pylon1 	{priority = 27;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.6/2.5)};};
		class pylon28: pylon1 	{priority = 28;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.7/2.5)};};
		class pylon29: pylon1 	{priority = 29;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.8/2.5)};};
		class pylon30: pylon1 	{priority = 30;	UIposition[] = {__EVAL(0.12+0.19*2),__EVAL(0.1+0.9/2.5)};};
		class pylon31: pylon1 	{priority = 31;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.0/2.5)};};
		class pylon32: pylon1 	{priority = 32;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.1/2.5)};};
		class pylon33: pylon1 	{priority = 33;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.2/2.5)};};
		class pylon34: pylon1 	{priority = 34;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.3/2.5)};};
		class pylon35: pylon1 	{priority = 35;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.4/2.5)};};
		class pylon36: pylon1 	{priority = 36;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.5/2.5)};};
		class pylon37: pylon1 	{priority = 37;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.6/2.5)};};
		class pylon38: pylon1 	{priority = 38;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.7/2.5)};};
		class pylon39: pylon1 	{priority = 39;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.8/2.5)};};
		class pylon40: pylon1 	{priority = 40;	UIposition[] = {__EVAL(0.12+0.19*3),__EVAL(0.1+0.9/2.5)};};
	};
	#define PRESET_MACRO(rocketType) attachment[] = {mag_10(rocketType),mag_10(rocketType),mag_10(rocketType),mag_10(rocketType)};
	class Presets
	{
		class M21OF
		{
			PRESET_MACRO(rhs_mag_m21of_1)
			displayname = "M-21OF High Explosive";
		};
		class 9M28F
		{
			PRESET_MACRO(rhs_mag_9m28f_1)
			displayname = "9M28 High Explosive Fragmentation";
		};
		class 9M28K
		{
			PRESET_MACRO(rhs_mag_9m28k_1)
			displayname = "9M28K Cluster Anti Tank Mines";
		};
		class 9M218
		{
			PRESET_MACRO(rhs_mag_9m218_1)
			displayname = "9M218 Cluster HEAT";
		};
		class 9M521
		{
			PRESET_MACRO(rhs_mag_9m521_1)
			displayname = "9M521 High Explosive Extended Range";
		};
		class 9M522
		{
			PRESET_MACRO(rhs_mag_9m522_1)
			displayname = "9M522 High Explosive Fragmentation Extended Range";
		};
	};
	class Bays
	{
		class MainBay
		{
			bayOpenTime					= 5.5;
			openBayWhenWeaponSelected	= 0.5;
			autoCloseWhenEmptyDelay		= 1;
		};
	};
};