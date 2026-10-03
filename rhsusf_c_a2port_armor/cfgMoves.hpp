
class CfgMovesBasic
{
	class Default;
	class DefaultDie;
	class ManActions
	{
		RHS_M2A2_Commander = "RHS_M2A2_Commander";
		RHS_M2A2_CommanderOUT = "RHS_M2A2_CommanderOUT";

		RHS_M2A2_Driver = "RHS_M2A2_Driver";
		RHS_M2A2_DriverOUT = "RHS_M2A2_DriverOUT";

		RHS_M2A2_Gunner = "RHS_M2A2_Gunner";
		RHS_M2A2_GunnerOUT = "RHS_M2A2_GunnerOUT";

		RHS_M2A3_Commander = "RHS_M2A3_Commander";
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

		class RHS_M2A2_Commander: rhs_crew_in
		{
			file = \rhsusf\addons\rhsusf_a2port_armor\data\anim\M2A2_Commander.rtm;
			interpolateTo[] = {"RHS_M2A2_KIA_Commander",1};
		};
		class RHS_M2A2_CommanderOut: Crew
		{
			file = \rhsusf\addons\rhsusf_a2port_armor\data\anim\M2A2_CommanderOut.rtm;
			interpolateTo[] = {"RHS_M2A2_KIA_CommanderOut",1};
		};
		class RHS_M2A2_KIA_CommanderOut: DefaultDie
		{
			file = \rhsusf\addons\rhsusf_a2port_armor\data\anim\M2A2_KIA_CommanderOut;
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};	
		class RHS_M2A2_KIA_Commander: RHS_M2A2_KIA_CommanderOut
		{
			file = \rhsusf\addons\rhsusf_a2port_armor\data\anim\M2A2_Commander.rtm;
		};	

		#define AnimM(name,nameD) class RHS_KIA_##name##: RHS_M2A2_KIA_CommanderOut\
		{\
			file = \rhsusf\addons\rhsusf_a2port_armor\data\anim\##nameD##.rtm;\
		};\
		class RHS_##name##: Crew\
		{\
			file = \rhsusf\addons\rhsusf_a2port_armor\data\anim\##name##.rtm;\
			interpolateTo[] = {RHS_KIA_##name##,1};\
		};

		#define AnimM2(name,nameD) class RHS_KIA_##name##: RHS_M2A2_KIA_CommanderOut\
		{\
			file = \rhsusf\addons\rhsusf_a2port_armor\data\anim\##name##.rtm;\
		};\
		class RHS_##name##: rhs_crew_in\
		{\
			file = \rhsusf\addons\rhsusf_a2port_armor\data\anim\##name##.rtm;\
			interpolateTo[] = {RHS_KIA_##name##,1};\
		};


		AnimM2(M2A2_Gunner,M2A2_KIA_Gunner)
		AnimM(M2A2_GunnerOut,M2A2_KIA_GunnerOut)

		AnimM(M2A2_Driver,M2A2_KIA_Driver)
		AnimM(M2A2_DriverOut,M2A2_KIA_DriverOut)

		AnimM(M2A3_Commander,M2A3_Commander)

	};
};