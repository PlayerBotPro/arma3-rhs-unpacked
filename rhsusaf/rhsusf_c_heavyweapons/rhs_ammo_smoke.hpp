class SmokeLauncherAmmo;
class rhsusf_ammo_L8A3 : SmokeLauncherAmmo
{
	rhs_smokeShell = "rhsusf_ammo_L8A3_shell";
	muzzleEffect = "";
	weaponLockSystem = "1";
	simulation = "shotCM";
	AIAmmoUsageFlags = "4 + 8";
	hit = 0;
	indirectHit = 0;
	indirectHitRange = 0;
};
class rhsusf_ammo_duke : SmokeLauncherAmmo
{
	muzzleEffect = "";
	weaponLockSystem = "1";
	simulation = "shotCM";
	AIAmmoUsageFlags = "0";
	hit = 0;
	indirectHit = 0;
	indirectHitRange = 0;
	class EventHandlers
	{
		class RHS_CM
		{
			fired = "_this call RHSUSF_fnc_effectFiredDuke";
		};
	};
};
class rhsusf_ammo_laneMarkerSystem : SmokeLauncherAmmo
{
	muzzleEffect = "";
	weaponLockSystem = "0";
	simulation = "shotCM";
	AIAmmoUsageFlags = "0";
	hit = 0;
	indirectHit = 0;
	indirectHitRange = 0;
	class EventHandlers
	{
		class RHS_CM
		{
			fired = "_this call rhs_fnc_laneMarkerSystem";
		};
	};
};

class rhs_ammo_smokegen : SmokeLauncherAmmo
{
	muzzleEffect		= "";
	weaponLockSystem	= "2";
	simulation			= "shotCM";
	AIAmmoUsageFlags	= "4";
	hit					= 0;
	indirectHit			= 0;
	indirectHitRange	= 0;
	class EventHandlers
	{
		class RHS_CM
		{
			fired = "_this call RHS_fnc_effectFiredSmokeGenerator";
		};
	};
};

class rhs_ammo_LWIRCM: Bulletbase
{
	cost					= 1;
	visibleFire				= 0;
	audibleFire				= 0;
	hit						= 1;
	indirectHit				= 0;
	indirectHitRange		= 0;
	timeToLive				= 2.25;
	thrustTime				= 3;
	airFriction				= -0.01;
	simulation				= "shotCM";
	weaponLockSystem		= "2";
	model					= "\A3\weapons_f\empty";
	maxControlRange			= -1;
	initTime				= 0;
	aiAmmoUsageFlags		= 8;
	soundFly[]				= {"A3\sounds_f\dummysound",0.1,1};
	supersonicCrackNear[]	= {"A3\sounds_f\dummysound",0,1,0};
	supersonicCrackFar[]	= {"A3\sounds_f\dummysound",0,1,0};
	effectsSmoke			= "EmptyEffect";
};
class Grenade;
class GrenadeHand;
class rhsusf_ammo_L8A3_shell : Grenade
{
	simulation = "shotShell";
	AIAmmoUsageFlags = "4";

	hit = 3;
	indirectHit = 1;
	indirectHitRange = 2;
	suppressionRadiusHit = 15;
	typicalspeed = 50;
	airFriction = -0.012;
	model = "rhsusf\addons\rhsusf_heavyweapons\galix\galix_proj";
	visibleFireTime = 1;
	fuseDistance = 0;

	soundHit1[] = { "A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_01", 1.5, 1, 750 };
	soundHit2[] = { "A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_02", 1.5, 1, 750 };
	soundHit3[] = { "A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_03", 1.5, 1, 750 };
	soundHit4[] = { "A3\Sounds_F\arsenal\explosives\grenades\Explosion_HE_grenade_04", 1.5, 1, 750 };
	multiSoundHit[] = { "soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25 };

	explosionEffects = "RHSUSF_CM_L8A3_Effect";
	CraterEffects = "EmptyEffect";

	explosionTime = 0.7;
	timeToLive = 1;

	coefGravity = 2.5;
};

class CMflareAmmo;
class rhsusf_CMflare_Ammo: CMflareAmmo
{
	effectsSmoke = "CounterMeasureFlare";
};