class PKT: MGun
{
	scope = 1;
	//displayName = "$STR_DN_PKT";
	reloadTime = 0.075;
	autoFire = 1;
	soundContinuous = 0;
	dispersion = 0.003;
	minRange = 2;
	minRangeProbab = 0.1;
	midRange = 200;
	midRangeProbab = 0.7;
	maxRange = 600;
	maxRangeProbab = 0.01;
	aiDispersionCoefY = 7.0;
	aiDispersionCoefX = 7.0;
	magazineReloadTime = 7;
	maxLeadSpeed = 600;
	canLock = 0;
};

class rhs_weap_pkt : PKT
{
	type = 1;
	showAimCursorInternal = 1;
	scope = 1;
	displayName = WEAP_STR(PKT);
	magazines[] = {
		"rhs_mag_762x54mm_100",
		"rhs_mag_762x54mm_250",
		"rhs_mag_762x54mm_500",
		"rhs_mag_762x54mm_1000",
		"rhs_mag_762x54mm_2000"
	};

	aiDispersionCoefY = 10;
	aiDispersionCoefX = 8;
	initSpeed = 0;

	modes[] = {"manual","close","short","medium","far"};
	class manual: MGun
	{
		displayName = "$STR_RHS_WEAP_PKT";
		autoFire = 1;
		reloadTime = 0.075;
		dispersion = 0.00125;
		showToPlayer = 1;
		soundContinuous = 0;
		burst = 1;
		aiBurstTerminable = 1;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		minRange = 1;
		minRangeProbab = 0.01;
		midRange = 2;
		midRangeProbab = 0.01;
		maxRange = 3;
		maxRangeProbab = 0.01;
	};
	class close: manual
	{
		showToPlayer = 0;
		soundBurst = 0;
		burst = 12;
		aiRateOfFire = 1;
		aiRateOfFireDistance = 50;
		aiRateOfFireDispersion = 4;
		minRange = 0;
		minRangeProbab = 0.05;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 50;
		maxRangeProbab = 0.04;
	};
	class short: close
	{
		burst = 10;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 300;
		aiRateOfFireDispersion = 4;
		minRange = 50;
		minRangeProbab = 0.05;
		midRange = 200;
		midRangeProbab = 0.7;
		maxRange = 300;
		maxRangeProbab = 0.1;
	};
	class medium: close
	{
		burst = 7;
		aiRateOfFire = 4;
		aiRateOfFireDistance = 600;
		aiRateOfFireDispersion = 3;
		minRange = 200;
		minRangeProbab = 0.05;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 600;
		maxRangeProbab = 0.1;
	};
	class far: close
	{
		burst = 6;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 1000;
		aiRateOfFireDispersion = 3;
		minRange = 400;
		minRangeProbab = 0.05;
		midRange = 850;
		midRangeProbab = 0.4;
		maxRange = 1100;
		maxRangeProbab = 0.01;
	};
};

class rhs_weap_pktm : rhs_weap_pkt{

	displayName = WEAP_STR(PKTM);
	class manual: manual
	{
		displayName = WEAP_STR(PKTM);
	};
	reloadMagazineSound[] = {"a3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",1,1,10};
};
class rhs_weap_pkt_v1 : rhs_weap_pkt{};
class rhs_weap_pkt_v2 : rhs_weap_pkt{};
class rhs_weap_pkt_v3 : rhs_weap_pkt{};
class rhs_weap_pkt_bmd_coax : rhs_weap_pkt
{
	class gunParticles
	{
		class effect1
		{
			effectname = "MachineGunCloud";
			positionname = "Usti hlavne2";
			directionname = "Konec hlavne2";
		};
	};
};
class rhs_weap_pkt_2s3 : rhs_weap_pkt
{
	class gunParticles
	{
		class effect1
		{
			effectname = "MachineGunCloud";
			positionname = "Usti hlavne3";
			directionname = "Konec hlavne3";
		};
	};
};
class rhs_weap_pkt_bmd_bow1 : rhs_weap_pkt
{
	class gunParticles
	{
		class effect1
		{
			effectname = "MachineGunCloud";
			positionname = "muzzle2";
			directionname = "end2";
		};
	};

};
class rhs_weap_pkt_bmd_bow2 : rhs_weap_pkt
{
	class gunParticles
	{
		class effect1
		{
			effectname = "MachineGunCloud";
			positionname = "muzzle3";
			directionname = "end3";
		};
	};
};

class rhs_weap_pkt_btr : rhs_weap_pkt
{
	class gunParticles
	{
		class effect1
		{
			effectname = "MachineGunCloud";
			positionname = "kulas";
			directionname = "kulas end";
		};
	};
};
class rhs_weap_pkt_btr80a : rhs_weap_pkt
{
	class gunParticles
	{
		class effect1
		{
			effectname = "MachineGunCloud";
			positionname = "kulas";
			directionname = "kulas end";
		};
		class effect2
		{
			effectName="MachineGunCartridge2";
			positionName="machinegun_eject_pos";
			directionName="machinegun_eject_dir";
		};
	};
};
class rhs_weap_pkt_zeroing : rhs_weap_pkt
{
	ballisticscomputer = 2; // Manual zeroing
};
class rhs_weap_pkt_t90m_RWS: rhs_weap_pkt
{
	ballisticsComputer = "2 + 16"; // Manual zeroing + FCS, Prediction based on laser distance and speed measurement; since Arma 3 1.70
};
class rhs_weap_pktm_t14_RWS: rhs_weap_pktm
{
	ballisticsComputer = "2 + 16"; // Manual zeroing + FCS, Prediction based on laser distance and speed measurement; since Arma 3 1.70
};




class LMG_RCWS : MGun {};
class rhs_weap_DSHKM: LMG_RCWS
{
	type = 1;
	initSpeed = 0;
	class GunParticles
	{
		class effect1
		{
			positionName="usti hlavne";
			directionName="konec hlavne";
			effectName="MachineGunCloud";
		};
		class effect2
		{
			positionName="machinegun_eject_pos";
			directionName="machinegun_eject_dir";
			effectName="MachineGunCartridge2";
		};
	};
	reloadMagazineSound[] = {"a3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",1,1,10};
	scope = 1;
	autoFire = 1;
	displayName = WEAP_STR(DSHKM);
	ballisticscomputer = 2; // Manual zeroing
	magazineReloadTime = 12;
	magazines[] = {
		"rhs_mag_127x108mm_50",
		"rhs_mag_127x108mm_150"
	};
	soundServo[] = {"",0.0001,1.0};
	reloadTime = 0.1;
	dispersion = 0.002;
	minRange = 1;
	minRangeProbab = 0.1;
	midRange = 400;
	midRangeProbab = 0.7;
	maxRange = 1200;
	maxRangeProbab = 0.04;
	aiDispersionCoefY = 7.0;
	aiDispersionCoefX = 9.0;
	aiRateOfFire = 0.3;
	aiRateOfFireDistance = 1500;
	maxLeadSpeed = 600;
	canLock = 0;

	modes[] = {"manual","close","short","medium","far"};
	class manual: MGun
	{
		displayName = WEAP_STR(NSVT);
		autoFire = 1;
		reloadTime = 0.1;
		dispersion = 0.002;
		showToPlayer = 1;
		burst = 1;
		aiBurstTerminable = 1;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		minRange = 1;
		minRangeProbab = 0.01;
		midRange = 2;
		midRangeProbab = 0.01;
		maxRange = 3;
		maxRangeProbab = 0.01;
	};
	class close: manual
	{
		showToPlayer = 0;
		soundBurst = 0;
		burst = 10;
		burstRangeMax = 15;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.05;
		midRange = 20;
		midRangeProbab = 0.58;
		maxRange = 100;
		maxRangeProbab = 0.04;
	};
	class short: close
	{
		burst = 9;
		burstRangeMax = 15;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 300;
		aiRateOfFireDispersion = 5;
		minRange = 50;
		minRangeProbab = 0.05;
		midRange = 150;
		midRangeProbab = 0.58;
		maxRange = 300;
		maxRangeProbab = 0.04;
	};
	class medium: close
	{
		burst = 6;
		burstRangeMax = 10;
		aiRateOfFire = 4;
		aiRateOfFireDistance = 600;
		aiRateOfFireDispersion = 3;
		minRange = 200;
		minRangeProbab = 0.05;
		midRange = 500;
		midRangeProbab = 0.58;
		maxRange = 800;
		maxRangeProbab = 0.04;
	};
	class far: close
	{
		burst = 5;
		burstRangeMax = 9;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 1000;
		aiRateOfFireDispersion = 4;
		minRange = 400;
		minRangeProbab = 0.05;
		midRange = 800;
		midRangeProbab = 0.4;
		maxRange = 1100;
		maxRangeProbab = 0.01;
	};
};

class rhs_weap_dshkm_slow : rhs_weap_dshkm
{
	magazineReloadTime = 30;
};

class rhs_weap_nsvt : rhs_weap_DSHKM
{
	scope=1;
	displayName = WEAP_STR(NSVT);
	magazines[] = {
		"rhs_mag_127x108mm_50",
		"rhs_mag_127x108mm_100",
		"rhs_mag_127x108mm_150",
		"rhs_mag_127x108mm_300"
	};
	reloadTime = 0.1;
	magazineReloadTime = 10;

	flash = "gunfire";
	flashSize = 0.6;
	dispersion = 0.002;
	aiDispersionCoefY = 7.0;
	aiDispersionCoefX = 7.0;
	aiRateOfFire = 0.3;	// delay between shots at given distance
	aiRateOfFireDistance = 1500;

	class manual: MGun
	{
		displayName = WEAP_STR(NSVT);
		autoFire = 1;
		reloadTime = 0.086;
		dispersion = 0.002;
		showToPlayer = 1;
		burst = 1;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		minRange = 1;
		minRangeProbab = 0.01;
		midRange = 2;
		midRangeProbab = 0.01;
		maxRange = 3;
		maxRangeProbab = 0.01;
	};
	class close: manual
	{
		showToPlayer = 0;
		soundBurst = 0;
		burst = 10;
		burstRangeMax = 15;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.05;
		midRange = 20;
		midRangeProbab = 0.58;
		maxRange = 100;
		maxRangeProbab = 0.04;
	};
	class short: close
	{
		burst = 9;
		burstRangeMax = 15;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 300;
		aiRateOfFireDispersion = 5;
		minRange = 50;
		minRangeProbab = 0.05;
		midRange = 150;
		midRangeProbab = 0.58;
		maxRange = 300;
		maxRangeProbab = 0.04;
	};
	class medium: close
	{
		burst = 8;
		burstRangeMax = 12;
		aiRateOfFire = 4;
		aiRateOfFireDistance = 600;
		aiRateOfFireDispersion = 3;
		minRange = 200;
		minRangeProbab = 0.05;
		midRange = 500;
		midRangeProbab = 0.58;
		maxRange = 800;
		maxRangeProbab = 0.04;
	};
	class far: close
	{
		burst = 5;
		burstRangeMax = 8;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 1000;
		aiRateOfFireDispersion = 4;
		minRange = 400;
		minRangeProbab = 0.05;
		midRange = 800;
		midRangeProbab = 0.4;
		maxRange = 1100;
		maxRangeProbab = 0.01;
	};
	class GunParticles {};
};
class rhs_weap_nsvt_effects : rhs_weap_nsvt
{
	class GunParticles
	{
		class effect1a
		{
			effectname = "MachineGunCloud";
			positionname = "Usti hlavne";
			directionname = "Konec hlavne";
		};
		class effect1 {
			positionname = "nabojnicestart";
			directionname = "nabojniceend";
			effectname = "MachineGunEject";
		};
		class effect2
		{
			positionName="machinegun_eject_pos";
			directionName="machinegun_eject_dir";
			effectName="MachineGunCartridge2";
		};
	};
};
class rhs_weap_nsvt_t72_var1  : rhs_weap_nsvt_effects
{
};
class rhs_weap_nsvt_t72 : rhs_weap_nsvt_effects
{
	type = 1;
	class GunParticles: GunParticles
	{
		class effect1a
		{
			effectname = "MachineGunCloud";
			positionname = "mg_end";
			directionname = "mg_start";
		};
	};
};
class rhs_weap_nsvt_obj681 : rhs_weap_nsvt_effects
{
	class GunParticles
	{
		class effect1a
		{
			effectname = "MachineGunCloud";
			positionname = "nsvt_start";
			directionname = "nsvt_end";
		};
	};
	holdsterAnimValue = 1;
};
class rhs_weap_nsvt_t80 : rhs_weap_nsvt_effects
{
	class GunParticles: GunParticles
	{
		class effect1a
		{
			effectname = "MachineGunCloud";
			positionname = "Mgun_end";
			directionname = "Mgun_start";
		};
	};
};
class rhs_weap_nsvt_t90m_RWS: rhs_weap_nsvt_t72
{
	ballisticsComputer = "2 + 16"; // Manual zeroing + FCS, Prediction based on laser distance and speed measurement; since Arma 3 1.70
};

class rhs_weap_kord : rhs_weap_nsvt_effects
{
	displayName = $STR_RHS_DN_KORD;
	class manual: manual
	{
		displayName = $STR_RHS_DN_KORD;
		reloadTime = 0.095;
		dispersion = 0.002;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		minRange = 1;
		minRangeProbab = 0.01;
		midRange = 2;
		midRangeProbab = 0.01;
		maxRange = 3;
		maxRangeProbab = 0.01;
	};
	class close: manual
	{
		showToPlayer = 0;
		soundBurst = 0;
		burst = 10;
		burstRangeMax = 16;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.05;
		midRange = 20;
		midRangeProbab = 0.58;
		maxRange = 100;
		maxRangeProbab = 0.04;
	};
	class short: close
	{
		burst = 9;
		burstRangeMax = 14;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 300;
		aiRateOfFireDispersion = 2;
		minRange = 50;
		minRangeProbab = 0.05;
		midRange = 150;
		midRangeProbab = 0.58;
		maxRange = 300;
		maxRangeProbab = 0.04;
	};
	class medium: close
	{
		burst = 8;
		burstRangeMax = 12;
		aiRateOfFire = 4;
		aiRateOfFireDistance = 600;
		aiRateOfFireDispersion = 3;
		minRange = 200;
		minRangeProbab = 0.05;
		midRange = 500;
		midRangeProbab = 0.58;
		maxRange = 800;
		maxRangeProbab = 0.04;
	};
	class far: close
	{
		burst = 5;
		burstRangeMax = 10;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 1000;
		aiRateOfFireDispersion = 4;
		minRange = 400;
		minRangeProbab = 0.05;
		midRange = 800;
		midRangeProbab = 0.4;
		maxRange = 1100;
		maxRangeProbab = 0.01;
	};
};

class rhs_weap_kpvt : MGun
{
	type = 1;
	autoFire			= 1;
	reloadTime			= 0.1;
	magazineReloadTime	= 12;
	shotFromTurret		= 1;
	canLock				= 0;
	initSpeed			= 0;
	class gunParticles
	{
		class effect1
		{
			//effectname = "RHS_KPVT_Effect";
			effectname = "MachineGunCloud";
			positionname = "Usti hlavne";
			directionname = "Konec hlavne";
		};
		class effect2 {
			effectname = "RHS_145mm_Catridge";
			positionname = "machinegun_eject_pos";
			directionname = "machinegun_eject_dir";
		};
	};
	scope = 1;
	displayName = WEAP_STR(KPVT);
	magazines[] = {
		"rhs_mag_145x115mm_50"
	};
	aiDispersionCoefY = 10;
	aiDispersionCoefX = 8;
	selectionFireAnim = "zasleh3";
	reloadMagazineSound[] = {"a3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",1,1,10};

	modes[] = {"manual","close","short","medium","far"};
	class manual: MGun
	{
		displayName = "$STR_RHS_WEAP_KPVT";
		autoFire = 1;
		reloadTime = 0.1;
		dispersion = 0.0007;
		showToPlayer = 1;
		burst = 1;
		aiBurstTerminable = 1;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		minRange = 1;
		minRangeProbab = 0.01;
		midRange = 2;
		midRangeProbab = 0.01;
		maxRange = 3;
		maxRangeProbab = 0.01;
	};
	class close: manual
	{
		showToPlayer = 0;
		soundBurst = 0;
		burst = 8;
		burstRangeMax = 15;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.05;
		midRange = 100;
		midRangeProbab = 0.58;
		maxRange = 300;
		maxRangeProbab = 0.04;
	};
	class short: close
	{
		burst = 6;
		burstRangeMax = 14;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 300;
		aiRateOfFireDispersion = 2;
		minRange = 200;
		minRangeProbab = 0.05;
		midRange = 600;
		midRangeProbab = 0.58;
		maxRange = 1000;
		maxRangeProbab = 0.04;
	};
	class medium: close
	{
		burst = 4;
		burstRangeMax = 9;
		aiRateOfFire = 3;
		aiRateOfFireDistance = 600;
		aiRateOfFireDispersion = 3;
		minRange = 800;
		minRangeProbab = 0.05;
		midRange = 1000;
		midRangeProbab = 0.58;
		maxRange = 1200;
		maxRangeProbab = 0.04;
	};
	class far: close
	{
		burst = 5;
		burstRangeMax = 9;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 1000;
		aiRateOfFireDispersion = 4;
		minRange = 1000;
		minRangeProbab = 0.05;
		midRange = 1200;
		midRangeProbab = 0.4;
		maxRange = 1500;
		maxRangeProbab = 0.01;
	};
};
class gatling_30mm;
class rhs_weap_yakB : gatling_30mm
{
	scope = 2;
	aidispersioncoefx = 1.6;
	aidispersioncoefy = 3;
	ballisticscomputer = 0;
	canlock = 0;
	cursor = "";
	cursoraim = "";
	displayname = "$STR_RHS_YAKBYU_NAME";
	firespreadangle = "0.5f";
	flash = "gunfire";
	flashsize = 0.1;
	magazines[] = {"rhs_mag_127x108mm_1470","rhs_mag_127x108mm_1SLT_1470"};

	muzzles[]={"this"};
	modes[] = {"manual", "close", "short", "medium", "far"};
	recoil = "Empty";
	showaimcursorinternal = 1;
	soundcontinuous = 0;
	class gunParticles
	{
		class effect1 {
			effectname = "RHS_YakB_Catridge";
			positionname = "machinegun_eject_pos";
			directionname = "machinegun_eject_dir";
		};
		class effect2
		{
			directionname = "muzzle_1_dir";
			positionname = "muzzle_1";
			effectname = "AutoCannonFired";
		};
	};

	class manual:  Mode_FullAuto
	{
		airateoffire = 0.5;
		airateoffiredistance = 50;
		autofire = 1;
		burst = 1;
		dispersion = 0.009;
		displayname = "$STR_RHS_YAKBYU_NAME";
		maxrange = 3;
		maxrangeprobab = 0.01;
		midrange = 2;
		midrangeprobab = 0.01;
		minrange = 1;
		minrangeprobab = 0.01;
		multiplier = 2;
		WEAPON_RPM(2000)
		showtoplayer = 1;
		soundburst = 0;
		soundcontinuous = 1;
	};
	class close: manual {
		airateoffire = 1;
		aiRateOfFireDispersion = 0;
		airateoffiredistance = 50;
		burst = 10;
		burstRangeMax = 19;
		maxrange = 500;
		maxrangeprobab = 0.04;
		midrange = 200;
		midrangeprobab = 0.88;
		minrange = 0;
		minrangeprobab = 0.05;
		showtoplayer = 0;
	};
	class short: close {
		airateoffire = 1.2;
		aiRateOfFireDispersion = 1;
		airateoffiredistance = 300;
		burst = 14;
		burstRangeMax = 20;
		maxrange = 800;
		maxrangeprobab = 0.04;
		midrange = 500;
		midrangeprobab = 0.88;
		minrange = 200;
		minrangeprobab = 0.05;
	};
	class medium: close {
		airateoffire = 2.3;
		aiRateOfFireDispersion = 1;
		airateoffiredistance = 300;
		burst = 14;
		burstRangeMax = 18;
		maxrange = 1000;
		maxrangeprobab = 0.04;
		midrange = 800;
		midrangeprobab = 0.68;
		minrange = 600;
		minrangeprobab = 0.05;
	};
	class far: close {
		airateoffire = 4;
		aiRateOfFireDispersion = 1;
		airateoffiredistance = 800;
		burst = 12;
		burstRangeMax = 16;
		maxrange = 1200;
		maxrangeprobab = 0.01;
		midrange = 1000;
		midrangeprobab = 0.4;
		minrange = 800;
		minrangeprobab = 0.05;
	};
};

class GMG_F;
class GMG_20mm;
class RHS_weap_Ags30: GMG_20mm
{
	type = 1;
	ballisticsComputer = 2; // Manual zeroing
	scope = 1;
	displayName = "AGS-30";
	magazines[] =
	{
		"RHS_mag_VOG30_30",
		"RHS_mag_GPD30_30",
		"RHS_mag_VOG17m_30"
	};
	class GunParticles
	{
		class effect1
		{
			positionName = "usti hlavne";
			directionName = "konec hlavne";
			effectName = "GrenadeLauncherCloud";
		};
	};
	autoreload = 1;
	canlock = 0;

	dispersion = 0.006;
	aiDispersionCoefY=7.0;
	aiDispersionCoefX=6.0;
	magazinereloadtime = 6;
	reloadtime = 0.15; //rof 400
	modes[] = {"manual","close","short","medium","far"};
	class manual: GMG_F
	{
		displayname = "AGS-30 Grenade Launcher";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			soundSetShot[] = {"GMG20mm_Shot_SoundSet","GMG20mm_Tail_SoundSet"};
		};
		soundBurst = 0;
		aiBurstTerminable = 1;
		minRange = 1;
		minRangeProbab = 0.01;
		midRange = 2;
		midRangeProbab = 0.01;
		maxRange = 3;
		maxRangeProbab = 0.01;
		reloadtime = 0.15; //rof 400
	};
	class close : manual {
		burst = 3;
		burstRangeMax = 8;
		aiRateOfFire = 1;
		aiRateOfFireDispersion = 1;
		aiRateOfFireDistance = 50;
		minRange = 8;
		minRangeProbab = 0.05;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 50;
		maxRangeProbab = 0.1;
		showToPlayer = 0;

	};
	class short : close {
		burst = 4;
		burstRangeMax = 8;
		aiRateOfFire = 1;
		aiRateOfFireDispersion = 2;
		aiRateOfFireDistance = 300;
		minRange = 50;
		minRangeProbab = 0.05;
		midRange = 150;
		midRangeProbab = 0.7;
		maxRange = 300;
		maxRangeProbab = 0.1;
	};
	class medium : close {
		burst = 2;
		burstRangeMax = 6;
		aiRateOfFire = 2;
		aiRateOfFireDispersion = 2;
		aiRateOfFireDistance = 600;
		minRange = 200;
		minRangeProbab = 0.05;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 600;
		maxRangeProbab = 0.1;
	};
	class far : close {
		burst = 2;
		burstRangeMax = 6;
		aiRateOfFire = 2;
		aiRateOfFireDispersion = 3;
		aiRateOfFireDistance = 1000;
		minRange = 400;
		minRangeProbab = 0.05;
		midRange = 750;
		midRangeProbab = 0.4;
		maxRange = 1000;
		maxRangeProbab = 0.01;
	};
};
class rhs_weap_pkm_tigr : rhs_weap_pkt
{
	ballisticscomputer = 2;
	magazineReloadTime = 5;
	displayName = $STR_RHS_WEAP_PKM;
	class GunParticles
	{
		class effect1
		{
			positionName="weapon_pkm_end";
			directionName="weapon_pkm_start";
			effectName="MachineGunCloud";
		};
		class effect2
		{
			positionName="weapon_pkm_eject_pos";
			directionName="weapon_pkm_eject_dir";
			effectName="MachineGunCartridge2";
		};
		class SecondEffect
		{
			positionName="weapon_pkm_eject_pos";
			directionName="weapon_pkm_eject_dir";
			effectName = "RifleAssaultCloud";
		};
		class RHS_BarrelRefract
		{
			positionName="weapon_pkm_end";
			directionName="weapon_pkm_end_up";
			effectName = "RHS_BarrelRefract";
		};
	};
	aiDispersionCoefY			= 14;
	aiDispersionCoefX			= 8;
	modes[] = {"manual","close","short","medium","far"};
	class manual: manual
	{
		displayName = $STR_RHS_WEAP_PKM;
		autoFire = 1;
		reloadTime = 0.075;
		dispersion = 0.00125;
		showToPlayer = 1;
		soundContinuous = 0;
		burst = 1;
		aiBurstTerminable = 1;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		minRange = 1;
		minRangeProbab = 0.01;
		midRange = 2;
		midRangeProbab = 0.01;
		maxRange = 3;
		maxRangeProbab = 0.01;
	};
	class close: manual
	{
		showToPlayer = 0;
		soundBurst = 0;
		burst = 12;
		burstRangeMax = 16;
		aiRateOfFire = 1;
		aiRateOfFireDistance = 50;
		aiRateOfFireDispersion = 4;
		minRange = 0;
		minRangeProbab = 0.05;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 50;
		maxRangeProbab = 0.04;
	};
	class short: close
	{
		burst = 10;
		burstRangeMax = 14;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 300;
		aiRateOfFireDispersion = 4;
		minRange = 50;
		minRangeProbab = 0.05;
		midRange = 200;
		midRangeProbab = 0.7;
		maxRange = 300;
		maxRangeProbab = 0.1;
	};
	class medium: close
	{
		burst = 7;
		burstRangeMax = 11;
		aiRateOfFire = 4;
		aiRateOfFireDistance = 600;
		aiRateOfFireDispersion = 3;
		minRange = 200;
		minRangeProbab = 0.05;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 600;
		maxRangeProbab = 0.1;
	};
	class far: close
	{
		burst = 6;
		burstRangeMax = 10;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 1000;
		aiRateOfFireDispersion = 3;
		minRange = 400;
		minRangeProbab = 0.05;
		midRange = 850;
		midRangeProbab = 0.4;
		maxRange = 1100;
		maxRangeProbab = 0.01;
	};
};
class RHS_weap_Ags30_tigr: RHS_weap_Ags30
{
	class GunParticles
	{
		class effect1
		{
			positionName = "weapon_ags_end";
			directionName = "weapon_ags_start";
			effectName = "GrenadeLauncherCloud";
		};
	};
};