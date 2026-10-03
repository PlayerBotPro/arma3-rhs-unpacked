class rhs_ammo_902a : SmokeLauncherAmmo {};

class rhs_ammo_3d17 : SmokeLauncherAmmo
{
	rhs_smokeShell		= "rhs_ammo_3d17_shell";
	muzzleEffect		= "";
	weaponLockSystem	= "1 + 2 + 4";
	simulation			= "shotCM";
	AIAmmoUsageFlags	= "4 + 8";
	hit					= 0;
	indirectHit			= 0;
	indirectHitRange	= 0;
	class EventHandlers
	{
		class RHS_CM
		{
			fired = "_this call RHS_fnc_effectFiredSmokeLauncher";
		};
	};
};
class rhs_ammo_3d17_902B : rhs_ammo_3d17
{
	rhs_smokeShell = "rhs_ammo_3d17_shell_902B";
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
class rhs_ammo_dazzler : rhs_ammo_smokegen
{
	muzzleEffect		= "";
	class EventHandlers
	{
		class RHS_CM
		{
			fired = "_this call RHS_fnc_effectFiredDazzler";
		};
	};
};
class Grenade;
class GrenadeHand;
class rhs_ammo_3d17_shell: Grenade
{
	simulation			= "shotShell";
	AIAmmoUsageFlags	= "4";

	hit						= 3;
	indirectHit				= 3;
	indirectHitRange		= 3;
	suppressionRadiusHit	= 60;
	typicalspeed			= 50;
	airFriction				= -0.012;
	deflecting				= 30;
	model					= "\rhsafrf\addons\rhs_heavyweapons\3d17\rhs_smokecan";
	visibleFire				= 0.5;
	audibleFire				= 0.05;
	visibleFireTime			= 1;
	fuseDistance			= 0;

	explosionEffects = "RHS_3D17Effect";
	CraterEffects = "";

	explosionTime = 0.7;
	timeToLive = 1;

	coefGravity = 2.5;
};
class rhs_ammo_3d17_shell_902B: rhs_ammo_3d17_shell
{
	explosionEffects = "RHS_3D17Effect_902B";
};
class RHS_Ammo_DIRCM_Vitebsk: Bulletbase
{
	cost					= 1;
	visibleFire				= 0;
	audibleFire				= 0;
	hit						= 1;
	indirectHit				= 0;
	indirectHitRange		= 0;
	timeToLive				= 2.1;
	thrustTime				= 2;
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
class CMflareAmmo;
class rhs_CMflare_Ammo: CMflareAmmo
{
	effectsSmoke = "rhs_CounterMeasureFlare";
};