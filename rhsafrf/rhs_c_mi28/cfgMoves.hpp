class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		rhs_mi28_pilot = "rhs_mi28_pilot";
		rhs_mi28_gunner = "rhs_mi28_gunner";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;

		#define AnimMi28 \rhsafrf\addons\rhs_c_mi28\anims
		#define AnimKa52 \rhsafrf\addons\rhs_a2port_air\anim
				
		class rhs_kia_mi28_pilot : DefaultDie
		{
			file = AnimKa52\KIA_Ka52_Pilot.rtm;
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		
		class rhs_mi28_pilot : Crew
		{
			file = AnimMi28\mi28_pilot2.rtm;
			interpolateTo[] = {"rhs_kia_mi28_pilot",1};

			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
		};
		class rhs_mi28_gunner : Crew
		{
			file = AnimMi28\rhs_mi28_gunner.rtm;
			interpolateTo[] = {"rhs_kia_mi28_pilot",1};
		};
	};
};