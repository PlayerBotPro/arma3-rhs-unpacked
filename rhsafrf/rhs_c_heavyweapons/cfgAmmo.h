class CfgAmmo
{
	class SmokeLauncherAmmo;
	class SubmunitionCore;
	class SubmunitionBase;
	class SubmunitionBullet;
	class Default;
	class BulletCore;
	class BulletBase;
	class ShellBase;
	class SmokeShell;
	class MissileCore: Default {};
	class MissileBase: MissileCore 
	{
		class EventHandlers;
	};

	#include "rhs_ammo_smoke.hpp"
	#include "rhs_ammo_shells.hpp"
	#include "rhs_ammo_atgm.hpp"
	#include "rhs_ammo_rockets.hpp"
	#include "rhs_ammo_bullets.hpp"

	// Tweaks and fixes to vanilla ammo
	#include "rhs_ammo_vanilla.hpp"
};