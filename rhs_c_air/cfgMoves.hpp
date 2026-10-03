
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_PAKFA_Pilot = "RHS_PAKFA_Pilot";
		RHS_PAKFA_Pilot_GetIn = "RHS_PAKFA_Pilot_GetIn";
		RHS_K36D_PilotEject = "rhs_k36d_PilotEject";
		RHS_TU95_Pilot = "rhs_tu95_pilot";
		RHS_TU95_RearGunner = "RHS_TU95_RearGunner";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class PreciseCrew;

		#define AnimP \rhsafrf\addons\rhs_c_air\anims
		class RHS_PAKFA_Pilot: Crew
		{
			file = AnimP\rhs_pakfa_pilot.rtm;
			interpolateTo[] = {"RHS_KIA_PAKFA_Pilot",1};

			speed = 0.066519;
			leaning="crewShake_half";
		};
		class RHS_PAKFA_Pilot_GetIn : PreciseCrew 
		{
			file = AnimP\rhs_pakfa_pilot_getin.rtm;
			speed = -8.2;
			looped = 0;
			connectTo[] = {};
			interpolateTo[] = {"RHS_PAKFA_Pilot", 0.2, "RHS_KIA_PAKFA_Pilot", 1};
			variantsAI[] = {};
			variantsPlayer[] = {};
			variantAfter[] = {2.7, 2.7, 2.7};
			useIdles = 0;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
			headBobMode = 1;
			headBobStrength = 0.8;
			soundOverride = "walk";
			soundEnabled = 1;
			soundEdge[] = {0.10869, 0.243478, 0.3826, 0.5, 0.613, 0.786, 0.873, 0.926, 0.991};
		};
		class RHS_KIA_PAKFA_Pilot: DefaultDie
		{
			actions = "DeadActions";
			file = AnimP\rhs_kia_pakfa_pilot.rtm;
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class RHS_K36D_PilotEject: Crew
		{
			file = AnimP\rhs_pakfa_pilot_eject.rtm;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftLegIKCurve[] = {1};
			rightLegIKCurve[] = {1};
			leaning = "empty";
			interpolateTo[] = {"RHS_KIA_PAKFA_Pilot",1};
		};
		class RHS_TU95_Pilot: Crew
		{
			file = AnimP\rhs_tu95_pilot.rtm;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			interpolateTo[] = {"RHS_KIA_PAKFA_Pilot",1};

			speed = 0.066519;
		};
		class RHS_TU95_RearGunner: Crew
		{
			file = AnimP\rhs_tu95_RearGunner.rtm;
			interpolateTo[] = {"RHS_KIA_PAKFA_Pilot",1};

			speed = 0.066519;
		};
	};
};