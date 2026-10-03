class gatling_30mm;
class rhs_weap_M197 : gatling_30mm
{
	class manual;
	class close;
	class short;
	class medium;
	class far;
};
class rhs_weap_gi2_base : rhs_weap_M197
{
	aidispersioncoefx	=__EVAL(1*2);
	aidispersioncoefy	=__EVAL(2*2);
	class manual : manual
	{
		displayName = "GI-2";
		autoFire = 1;
		reloadTime = 0.08333;
		dispersion = 0.00125;

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
	class close : manual
	{
		showToPlayer = 0;
		soundBurst = 0;
		burst = 6;
		burstRangeMax = 12;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.7;
		midRange = 200;
		midRangeProbab = 0.95;
		maxRange = 500;
		maxRangeProbab = 0.6;
	};
	class short: close
	{
		burst = 6;
		burstRangeMax = 10;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 300;
		minRange = 300;
		minRangeProbab = 0.7;
		midRange = 600;
		midRangeProbab = 0.9;
		maxRange = 800;
		maxRangeProbab = 0.6;
	};
	class medium : close
	{
		burst = 3;
		burstRangeMax = 8;
		aiRateOfFire = 3;
		aiRateOfFireDistance = 600;
		minRange = 700;
		minRangeProbab = 0.7;
		midRange = 900;
		midRangeProbab = 0.85;
		maxRange = 1000;
		maxRangeProbab = 0.6;
	};
	class far : close
	{
		burst = 3;
		burstRangeMax = 6;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 1000;
		minRange = 1000;
		minRangeProbab = 0.3;
		midRange = 1200;
		midRangeProbab = 0.85;
		maxRange = 1400;
		maxRangeProbab = 0.6;
	};
};
class rhs_weap_gi2 : rhs_weap_M197
{
	displayName = "GI-2";

	class GunParticles
	{
		class Effect
		{
			effectName = "MachineGun2";
			positionName = "z_gun_muzzle";
			directionName = "z_gun_chamber";
		};
	};

	magazines[] = {};
	muzzles[] = { "HE", "AP" };

	class HE : rhs_weap_gi2_base
	{
		displayName = "GI-2 HE";
		magazines[] = { "rhs_mag_GI2_420_HE" };
	};
	class AP : rhs_weap_M197
	{
		displayName = "GI-2 AP";
		magazines[] = { "rhs_mag_GI2_420_AP" };
	};
};

class RHS_weap_zpl20 : gatling_30mm
{
	scope				= 2;
	aidispersioncoefx	= __EVAL(2*2);
	aidispersioncoefy	= __EVAL(2*2);
	canlock				= 2;
	cursor				= "mg";
	//cursoraim			= "EmptyCursor";
	cursorsize			= 0;
	displayname			= "ZPL-20 Plamen";
	initspeed			= 820;
	shotFromTurret		= 0;
	ballisticsComputer = __EVAL(4+8+16);
	class gunParticles
	{
		class effect2
		{
			directionname = "kulomet";
			positionname = "chamber_1";
			effectname = "MachineGun2";
		};
	};
	magazines[]=
	{
		rhs_mag_zpl20_hei,
		rhs_mag_zpl20_apit,
		rhs_mag_zpl20_mixed
	};
	namesound="cannon";
	soundcontinuous=1;
	flash = "gunfire";
	flashSize = 0.5;

	muzzles[] = { "this" };

	modes[]=
	{
		"manual",
		"manual_low",
		"close",
		"short",
		"medium",
		"far"
	};
	class manual : Mode_FullAuto
	{
		airateoffire=0.5;
		airateoffiredistance=50;
		autofire=1;
		sounds[] = {StandardSound};
 		class StandardSound
 		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] ={"A3\Sounds_F\weapons\30mm\30mm_st_02",0.69999999,1,1500};
			soundBegin[]={"begin1",1};
		};
		burst=2;
		dispersion=0.006;
		displayname="ZPL-20 HI";
		maxrange=3;
		maxrangeprobab=0.01;
		midrange=2;
		midrangeprobab=0.01;
		minrange=1;
		minrangeprobab=0.01;
		multiplier=1;
		reloadtime=0.023; //2600RPM
		flash = "gunfire";
		flashSize = 0.5;
		showtoplayer=1;
		sound[]=
		{
			"",
			10,
			1
		};
		soundburst=0;
		soundcontinuous=0;
	};
	class manual_low : manual
	{
		displayname="ZPL-20 LO";
		reloadtime=0.077; //780RPM
		textureType = "semi";
		burst=0;
	};
	class close: manual
	{
		airateoffire=0.001;
		airateoffiredistance=50;
		aiRateOfFireDispersion = 3;
		burst=1;
		maxrange=300;
		maxrangeprobab=0.04;
		midrange=100;
		midrangeprobab=0.88;
		minrange=0;
		minrangeprobab=0.5;
		showtoplayer=0;
		soundburst=0;
	};
	class short: close
	{
		aiRateOfFire = 0.25;
		airateoffiredistance=300;
		aiRateOfFireDispersion = 3;
		burst="10 + random 5";
		maxrange=800;
		midrange=500;
		minrange=200;
	};
	class medium: manual_low
	{
		airateoffire=3;
		airateoffiredistance=600;
		burst="7 + random 5";
		maxrangeprobab=0.04;
		midrangeprobab=0.88;
		minrangeprobab=0.5;
		maxrange=1000;
		midrange=800;
		minrange=600;
		showtoplayer=0;
	};
	class far: medium
	{
		airateoffire=4;
		airateoffiredistance=1000;
		aiRateOfFireDispersion = 3;
		burst="4 + random 5";
		maxrange=1250;
		maxrangeprobab=0.11;
		midrange=1050;
		midrangeprobab=0.4;
		minrange=850;
		minrangeprobab=0.15;
	};
};