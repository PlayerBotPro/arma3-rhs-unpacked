
// Rockets

	class Rocket_04_HE_F;

	class rhs_ammo_Hydra_HE_Heli: Rocket_04_HE_F
	{
		maverickweapon		= 0;

		hit					= 220;
		indirectHit			= 50;
		indirectHitRange	= 10;

		cost				= 75;

		maxSpeed			= 740;
		thrustTime			= 1.1;
		thrust				= 800;
		//lower the sideAirFriction is, the bigger drop there is
		sideAirFriction	= 0.004;
		timeToLive		= 60;
		fuseDistance	= 40;
		whistleDist		= 24;
	};

	class rhs_ammo_FFAR_M151: rhs_ammo_Hydra_HE_Heli
	{
		maverickweapon				= 1;
		maverickWeaponIndexOffset	= 0;
		model						= "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M151_FFAR_fly";
		proxyShape					= "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M151";
	};

	class rhs_ammo_Hydra_M151: rhs_ammo_Hydra_HE_Heli
	{
		maverickweapon				= 1;
		maverickWeaponIndexOffset	= 0;
		model						= "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M151_fly";
		proxyShape					= "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M151";
	};

	class rhs_ammo_Hydra_M229: rhs_ammo_Hydra_M151
	{
		model				= "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M229_fly";
		proxyShape			= "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M229";
		indirecthitrange	= 15;
	};
	class rhs_ammo_Hydra_M257: rhs_ammo_Hydra_M151
	{
		model						= "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M257_fly";
		proxyShape					= "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_r_M257";
		explosive					= 0;
		hit							= 10;
		indirectHit					= 8;
		indirecthitrange			= 1;
		triggerTime					= 8;
		airFriction					= __EVAL(0.09*2.5);
		submunitionAmmo[]			= {"rhs_ammo_flare_M257",1};
		submunitionConeType[]		= {"random", 1};
		submunitionConeAngle		= 5;
		submunitionParentSpeedCoef	= 0.1;
	};
	class F_40mm_White;
	class rhs_ammo_flare_M257: F_40mm_White
	{
		triggerTime					= 2;
		model						= "rhsusf\addons\rhsusf_airweapons\submunitions\rhsusf_r_m257_drogue";
		brightness					= 10000;
		lightColor[]				= {100, 100, 100, 100};
		timeToLive					= 120;
		intensity					= 100000;
		flareSize					= 90;
		flareMaxDistance			= 3000;
		affectedByWind				= 1;
	};
