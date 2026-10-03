
class CfgMovesBasic
{
	class Default;
	class DefaultDie;
	class ManActions
	{
		RHS_M1A1_Commander = "RHS_M1A1_Commander";
		RHS_M1A1_Gunner = "RHS_M1A1_Gunner";
		RHS_M1A1_Loader = "RHS_M1A1_Loader";
		RHS_M1A2_Commander = "RHS_M1A2_Commander";
		RHS_M1A2_CommanderOUT = "RHS_M1A2_CommanderOUT";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class rhs_crew_in: Default
		{
			actions = "CargoActions";
			aiming = "aimingNo";
			aimingBody = "aimingNo";
			legs = "legsNo";
			head = "headNo";
			disableWeapons = 1;
			interpolationRestart = 1;
			soundEdge[] = {0.45};
			file = "\rhsusf\addons\rhsusf_c_m1a2\anims\KIA_RHS_M1A2_Commander.rtm";
			//seems that bounding Sphere is crucial to hit detection
			boundingSphere = 2.5;
			canPullTrigger = 0;
			leaning = "crewShake";
			rightHandIKCurve[] = {1};
			leftHandIKCurve[] = {1};
			rightLegIKCurve[] = {1};
			leftLegIKCurve[] = {1};
			ConnectTo[] = {};
			InterpolateTo[] = {"Unconscious",0.1};
		};
		class KIA_RHS_M1A2_Commander: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_c_m1a2\anims\KIA_RHS_M1A2_Commander.rtm";
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
			speed = 0.5;
			looped = 0;
		};
		class KIA_RHS_M1A2_CommanderOut: KIA_RHS_M1A2_Commander
		{
			file = "\rhsusf\addons\rhsusf_c_m1a2\anims\KIA_RHS_M1A2_CommanderOut.rtm";
		};
		class KIA_RHS_M1A1_Gunner: KIA_RHS_M1A2_Commander
		{
			file = "\rhsusf\addons\rhsusf_c_m1a2\anims\RHS_M1A1_Gunner.rtm";
		};
		class KIA_RHS_M1A1_Loader: KIA_RHS_M1A2_Commander
		{
			file = "\rhsusf\addons\rhsusf_c_m1a2\anims\RHS_M1A1_Loader.rtm";
		};
		class KIA_RHS_M1A1_Commander: KIA_RHS_M1A2_Commander
		{
			file = "\rhsusf\addons\rhsusf_c_m1a2\anims\RHS_M1A1_Commander.rtm";
		};
		class RHS_M1A2_Commander: rhs_crew_in
		{
			file = "\rhsusf\addons\rhsusf_c_m1a2\anims\RHS_M1A2_Commander.rtm";
			interpolateTo[] = {"KIA_RHS_M1A2_Commander",1};
		};
		class RHS_M1A2_CommanderOut: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_m1a2\anims\RHS_M1A2_CommanderOut.rtm";
			interpolateTo[] = {"KIA_RHS_M1A2_CommanderOut",1};
		};
		class RHS_M1A1_Gunner: rhs_crew_in
		{
			file = "\rhsusf\addons\rhsusf_c_m1a2\anims\RHS_M1A1_Gunner.rtm";
			interpolateTo[] = {"KIA_RHS_M1A1_Gunner",1};
		};
		class RHS_M1A1_Loader: rhs_crew_in
		{
			file = "\rhsusf\addons\rhsusf_c_m1a2\anims\RHS_M1A1_Loader.rtm";
			interpolateTo[] = {"KIA_RHS_M1A1_Loader",1};
		};
		class RHS_M1A1_Commander: rhs_crew_in
		{
			file = "\rhsusf\addons\rhsusf_c_m1a2\anims\RHS_M1A1_Commander.rtm";
			interpolateTo[] = {"KIA_RHS_M1A1_Commander",1};
		};
	};
};