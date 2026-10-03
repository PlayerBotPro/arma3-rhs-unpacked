class CfgAmmo
{
	class Default;
	class BulletCore;
	class BulletBase;
	class ShellBase;
	class MissileCore: Default {};
	class MissileBase: MissileCore 
	{
		class EventHandlers;
	};

	#include "rhs_ammo_shells.hpp"
	#include "rhs_ammo_rockets.hpp"
	#include "rhs_ammo_smoke.hpp"

	// Tweaks and fixes to vanilla ammo
	#include "rhs_ammo_vanilla.hpp"
};