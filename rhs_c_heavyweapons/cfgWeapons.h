class Mode_FullAuto;
class CfgWeapons
{
	class Default;
	class SmokeLauncher;
	class MGun;

	class rhs_weap_MASTERSAFE: Default {
		scope =1;
		displayName = "MASTERSAFE";
		descriptionShort = "MASTERSAFE";
		showToPlayer = 0;
		modes[]={"this"};
		magazines[] = {};
		minRange=0;minRangeProbab=0.001;
		midRange=0.001;midRangeProbab=0.001;
		maxRange=0.001;maxRangeProbab=0.001;
	};
	class rhs_weap_MASTERSAFE_Holdster15: rhs_weap_MASTERSAFE {
		holdsterAnimValue = 1.502;
	};
	#include "rhs_weap_smoke.hpp"

	#include "rhs_weap_mgun.hpp"

	#include "rhs_weap_cannon.hpp"

	#include "rhs_weap_mortar.hpp"

	#include "rhs_weap_launcher.hpp"

};