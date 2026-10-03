class Mode_FullAuto;
class CfgWeapons
{
	class Default;
	class SmokeLauncher;
	class MissileLauncher;
	class MGun;

	#include "rhs_weap_launcher.hpp"
	#include "rhs_weap_bomb.hpp"

	class rhs_weap_DummyLauncher : MissileLauncher
	{
		showToPlayer = 0;
		magazines[] =
		{
			"rhs_mag_ptb1500"
		};
	};

	class Put: Default
	{
		muzzles[] += {Rhs_SmallMine_Muzzle};
		class PutMuzzle: Default {};
		class Rhs_SmallMine_Muzzle: PutMuzzle
		{
			magazines[] = {"rhs_mag_mine_pfm1","rhs_mag_mine_ptm1"};
		};
	};
};