class SmokeLauncher;
class rhsusf_weap_M259 : SmokeLauncher
{
	scope = 2;
	magazines[] = {
		"rhsusf_mag_L8A3_8"
	};
	reloadTime = 0.04;
	magazineReloadTime = 60;
	autoReload = 0;
	showToPlayer = true;
	autoFire = true;
	minRange = 0;
	maxRange = 10000;
	soundBurst = 0;
	burst = 8;
	class EventHandlers
	{
		class RHS_CM
		{
			fired = "_this call RHSUSF_fnc_effectFiredSmokeLauncher";
		};
	};
};
class rhsusf_weap_M257 : SmokeLauncher
{
	magazines[] = {
		"rhsusf_mag_L8A3_16"
	};
	modes[] = { "Double", "Volley" };
	class Double : rhsusf_weap_M259
	{
		reloadTime = 0.099;
		burst = 8;
		showToPlayer = true;
		multiplier = 1;
		minRange = 0;
		maxRange = 10000;
		soundBurst = 0;
		autoFire = true;
		displayName = "M257 (8)";
	};
	class Volley : Double
	{
		burst = 16;
		displayName = "M257 (16)";
	};
	class EventHandlers
	{
		class RHS_CM
		{
			fired = "_this call RHSUSF_fnc_effectFiredSmokeLauncher";
		};
	};
};
class rhsusf_weap_M6 : rhsusf_weap_M257
{
	class Double : Double
	{
		displayName = "M6 (8)";
	};
	class Volley : Volley
	{
		displayName = "M6 (16)";
	};
};
class rhsusf_weap_M7 : rhsusf_weap_M257
{
	class Double : Double
	{
		displayName = "M7 (8)";
	};
	class Volley : Volley
	{
		displayName = "M7 (16)";
	};
	class EventHandlers { class RHS_CM { fired = "(_this + [['smoke_','_pos','_dir']]) call RHSUSF_fnc_effectFiredSmokeLauncher"; };};
};
// M1127 Stryker smoke grenades contrlled via Grenade Launcher Unit Assembly
class rhsusf_weap_M6_GLUA: rhsusf_weap_M257
{
	modes[] = { "Double" };
	class Double : Double
	{
		reloadTime = 1;
		burst		= 1;
		displayName	= "M6 (4)";
		class StandardSound
		{
			soundSetShot[] = {"UGL_InteriorTail_SoundSet"};
		};
	};
	class EventHandlers { class RHS_CM { fired = "_this spawn rhs_fnc_stryker_m1127_fireSmoke"; };};
	magazines[] = {"rhsusf_mag_L8A3_48"};
};
class rhsusf_weap_M6_L1 : rhsusf_weap_M6_GLUA
{
	class Double : Double
	{
		reloadTime 		= 0.01;
		burst			= 4;
		showToPlayer	= 0;
		class StandardSound
		{
			soundSetShot[] = {"UGL_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
		};
	};
	class EventHandlers { class RHS_CM { fired = "(_this + [['smoke_L1_','_pos','_dir']]) call RHSUSF_fnc_effectFiredSmokeLauncher"; };};
	magazines[] = {"rhsusf_mag_L8A3_L1_8"};
};
class rhsusf_weap_M6_L2 : rhsusf_weap_M6_L1
{
	magazines[] = {"rhsusf_mag_L8A3_L2_8"};
	class EventHandlers { class RHS_CM { fired = "(_this + [['smoke_L2_','_pos','_dir']]) call RHSUSF_fnc_effectFiredSmokeLauncher"; };};
};
class rhsusf_weap_M6_L3 : rhsusf_weap_M6_L1
{
	magazines[] = {"rhsusf_mag_L8A3_L3_8"};
	class EventHandlers { class RHS_CM { fired = "(_this + [['smoke_L3_','_pos','_dir']]) call RHSUSF_fnc_effectFiredSmokeLauncher"; };};
};
class rhsusf_weap_M6_R1 : rhsusf_weap_M6_L1
{
	magazines[] = {"rhsusf_mag_L8A3_R1_8"};
	class EventHandlers { class RHS_CM { fired = "(_this + [['smoke_R1_','_pos','_dir']]) call RHSUSF_fnc_effectFiredSmokeLauncher"; };};
};
class rhsusf_weap_M6_R2 : rhsusf_weap_M6_L1
{
	magazines[] = {"rhsusf_mag_L8A3_R2_8"};
	class EventHandlers {class RHS_CM { fired = "(_this + [['smoke_R2_','_pos','_dir']]) call RHSUSF_fnc_effectFiredSmokeLauncher"; };};
};
class rhsusf_weap_M6_R3 : rhsusf_weap_M6_L1
{
	magazines[] = {"rhsusf_mag_L8A3_R3_8"};
	class EventHandlers { class RHS_CM { fired = "(_this + [['smoke_R3_','_pos','_dir']]) call RHSUSF_fnc_effectFiredSmokeLauncher"; };};
};
class rhsusf_weap_M257_8 : SmokeLauncher
{
	magazines[] =
	{
		"rhsusf_mag_L8A3_8"
	};
	modes[] = { "Double", "Volley" };
	class Double : rhsusf_weap_M259
	{
		reloadTime = 0.099;
		burst = 4;
		showToPlayer = true;
		multiplier = 1;
		minRange = 0;
		maxRange = 10000;
		soundBurst = 0;
		autoFire = true;
		displayName = "M257 (4)";
	};
	class Volley : Double
	{
		burst = 8;
		displayName = "M257 (8)";
	};
	class EventHandlers
	{
		class RHS_CM
		{
			fired = "_this call RHSUSF_fnc_effectFiredSmokeLauncher";
		};
	};
};
class rhsusf_weap_M250 : SmokeLauncher
{
	magazines[] = {
		"rhsusf_mag_L8A3_12"
	};
	modes[] = { "Double", "Volley" };
	class Double : rhsusf_weap_M259
	{
		reloadTime = 0.099;
		burst = 6;
		showToPlayer = true;
		multiplier = 1;
		minRange = 0;
		maxRange = 10000;
		soundBurst = 0;
		autoFire = true;
		displayName = "M250 (6)";
	};
	class Volley : Double
	{
		burst = 12;
		displayName = "M250 (12)";
	};
	class EventHandlers
	{
		class RHS_CM
		{
			fired = "_this call RHSUSF_fnc_effectFiredSmokeLauncher";
		};
	};
};


class CMFlareLauncher : SmokeLauncher
{
	class Single;
	class Burst;
};
class rhsusf_weap_CMFlareLauncher : CMFlareLauncher
{
	magazines[] =
	{
		"60Rnd_CMFlareMagazine", "120Rnd_CMFlareMagazine", "240Rnd_CMFlareMagazine",
		"30Rnd_CMFlare_Chaff_Magazine","60Rnd_CMFlare_Chaff_Magazine", "120Rnd_CMFlare_Chaff_Magazine", "240Rnd_CMFlare_Chaff_Magazine", "192Rnd_CMFlare_Chaff_Magazine", "168Rnd_CMFlare_Chaff_Magazine", "300Rnd_CMFlare_Chaff_Magazine"
	};
	modes[] = {"Burst", "AIBurst", "Timed", "AITimed", "LongTimed"};
	class Timed : Single
	{
		displayName = "Timed";
		burst = 8;
		reloadTime = 1.3;
	};
	class AITimed : Timed
	{
		showToPlayer = 0;
		minRange = 0;
		maxRange = 3000;
	};
	class LongTimed : Single
	{
		displayName = "Timed 16f/4s";
		burst = 8;
		reloadTime = 4;
	};
};
class rhsusf_weap_CMDispenser_M130: rhsusf_weap_CMFlareLauncher
{
	magazines[] = {
		"rhsusf_M130_CMFlare_Magazine","rhsusf_M130_CMFlare_Magazine_x2","rhsusf_M130_CMFlare_Magazine_x4","rhsusf_M130_CMFlare_Magazine_x8","rhsusf_M130_CMFlare_Magazine_x16",
		"rhsusf_M130_CMFlare_Chaff_Magazine","rhsusf_M130_CMFlare_Chaff_Magazine_x2","rhsusf_M130_CMFlare_Chaff_Magazine_x4","rhsusf_M130_CMFlare_Chaff_Magazine_x8","rhsusf_M130_CMFlare_Chaff_Magazine_x16"
	};
};
class rhsusf_weap_CMDispenser_ANALE39: rhsusf_weap_CMFlareLauncher
{
	magazines[] = {
		"rhsusf_ANALE39_CMFlare_Magazine","rhsusf_ANALE39_CMFlare_Magazine_x2","rhsusf_ANALE39_CMFlare_Magazine_x4",
		"rhsusf_ANALE39_CMFlare_Chaff_Magazine","rhsusf_ANALE39_CMFlare_Chaff_Magazine_x2","rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4"
	};
};
class rhsusf_weap_CMDispenser_ANALE40: rhsusf_weap_CMFlareLauncher
{
	magazines[] = {
		"rhsusf_ANALE40_CMFlare_Magazine","rhsusf_ANALE40_CMFlare_Magazine_x2","rhsusf_ANALE40_CMFlare_Magazine_x4","rhsusf_ANALE40_CMFlare_Magazine_x8","rhsusf_ANALE40_CMFlare_Magazine_x16",
		"rhsusf_ANALE40_CMFlare_Chaff_Magazine","rhsusf_ANALE40_CMFlare_Chaff_Magazine_x2","rhsusf_ANALE40_CMFlare_Chaff_Magazine_x4","rhsusf_ANALE40_CMFlare_Chaff_Magazine_x8","rhsusf_ANALE40_CMFlare_Chaff_Magazine_x16"
	};
};
class rhsusf_weap_CMDispenser_ANALE52: rhsusf_weap_CMFlareLauncher
{
	magazines[] = {
		"rhsusf_ANALE52_CMFlare_Magazine","rhsusf_ANALE52_CMFlare_Magazine_x2","rhsusf_ANALE52_CMFlare_Magazine_x4","rhsusf_ANALE52_CMFlare_Magazine_x6",
		"rhsusf_ANALE52_CMFlare_Chaff_Magazine","rhsusf_ANALE52_CMFlare_Chaff_Magazine_x2","rhsusf_ANALE52_CMFlare_Chaff_Magazine_x4"
	};
};
class rhs_weap_smokegen : Default
{
	scope = 2;
	magazines[] = {
		"rhs_mag_smokegen"
	};
	simulation = "cmlauncher";
	reloadTime = 8;
	modes[] = { "Single","Continuos" };
	class Single : Mode_SemiAuto
	{
		cursor = "EmptyCursor";
		displayName	= $STR_RHSUSF_WEAP_SMOKEGEN;
		showToPlayer = true;
		autoFire = true;
		burst = 1;
		reloadTime = 8;
		minRange = 0;
		maxRange = 1000;
		sounds[] = { "StandardSound" };
		class StandardSound
		{
			begin1[] = {};
			soundBegin[] = {};
			weaponSoundEffect = "";
		};
	};
	class Continuos : Single
	{
		displayName = "$STR_RHSUSF_WEAP_SMOKEGEN_CONT";
		burst = 999;
		reloadTime = 8;
	};
};
class rhsusf_weap_duke : SmokeLauncher
{
	displayName = "DUKE offline";
	displayNameShort = "DUKE offline";
	scope = 2;
	magazines[] = {
		"rhsusf_mag_duke"
	};
	sounds[] = {};
	reloadTime = 0.04;
	magazineReloadTime = 0;
	showToPlayer = 1;
	autoFire = 1;
	minRange = 0;
	maxRange = 10000;
	soundBurst = 0;
	burst = 1;
};
class rhsusf_weap_duke_on : rhsusf_weap_duke
{
	displayName = "DUKE online";
	displayNameShort = "DUKE online";
};

class rhsusf_weap_LWIRCM: MGun
{
	scope					= 2;
	displayName				= "LWIRCM";
	magazines[]				= {rhsusf_mag_LWIRCM};
	magazineReloadTime		= 60;
	simulation				= "cmlauncher";
	modes[]					= {"Burst1","Burst2"};
	reloadMagazineSound[]	= {"A3\sounds_f\dummysound",2,1,5};
	class Burst1: Mode_Burst
	{
		displayName = "LWIRCM";
		reloadTime = 0.25;
		burst = 120;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"rhsusf\addons\rhsusf_melb\Sound\ircm_on1",2,1,5};
			begin2[] = {"rhsusf\addons\rhsusf_melb\Sound\ircm_on2",2,1,5};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			weaponSoundEffect = "";
		};
		showToPlayer = 1;
		multiplier = 1;
		minRange = 0;
		maxRange = 200;
		soundContinuos = 0;
	};
	class Burst2: Burst1 {};
};
class rhsusf_weap_ANALQ144: MGun
{
	scope = 2;
	displayName = "LWIRCM";
	magazines[] = {"rhsusf_mag_LWIRCM","rhsusf_mag_DIRCM"};
	magazineReloadTime = 60;
	simulation = "cmlauncher";
	modes[] = {"Burst1"};
	reloadMagazineSound[] = {"A3\sounds_f\dummysound",2,1,5};
	class Burst1: Mode_Burst
	{
		displayName = "AN/ALQ-144";
		reloadTime = 0.5;
		burst = 120;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"rhsafrf\addons\rhs_c_heavyweapons\Sound\ircm_on1",2,1,5};
			begin2[] = {"rhsafrf\addons\rhs_c_heavyweapons\Sound\ircm_on2",2,1,5};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			weaponSoundEffect = "";
		};
		showToPlayer = 1;
		multiplier = 1;
		minRange = 0;
		maxRange = 200;
		soundContinuos = 0;
	};
};
class rhsusf_weap_ANALQ157: rhsusf_weap_ANALQ144
{
	displayName = "AN/ALQ-157";
	class Burst1: Burst1
	{
		displayName = "AN/ALQ-157";
	};
};
class rhsusf_weap_ANALQ212: rhsusf_weap_ANALQ144
{
	displayName = "AN/ALQ-212";
	class Burst1: Burst1
	{
		displayName = "AN/ALQ-212";
	};
};
class rhsusf_weap_ANAAQ24: rhsusf_weap_ANALQ144
{
	displayName = "AN/AAQ-24";
	class Burst1: Burst1
	{
		displayName = "AN/AAQ-24";
	};
};
class rhsusf_weap_laneMarkerSystem : SmokeLauncher
{
	displayName = "Lane Marking";
	displayNameShort = "Lane Marking";
	scope = 2;
	magazines[] = {
		"rhsusf_mag_laneMarkerSystem"
	};
	sounds[] = {};
	reloadTime = 1;
	magazineReloadTime = 0;
	showToPlayer = 1;
	autoFire = 1;
	minRange = 0;
	maxRange = 10000;
	soundBurst = 0;
	burst = 1;
};