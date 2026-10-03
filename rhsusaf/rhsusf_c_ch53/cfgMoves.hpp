
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_Ch53_Pilot = "RHS_Ch53_Pilot";
		RHS_Ch53_Gunner_Ramp = "RHS_Ch53_Gunner_Ramp";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;

		#define AnimP rhsusf\addons\rhsusf_a2port_air\data\anim
		class RHS_Ch53_Pilot: Crew
		{
			file = rhsusf\addons\rhsusf_c_ch53\anims\rhs_CH53_Pilot.rtm;
			interpolateTo[] = {"RHS_KIA_UH60M_Pilot",1};
		};
		class RHS_Ch53_Gunner_Ramp: Crew
		{
			file = rhsusf\addons\rhsusf_c_ch53\anims\rhs_CH53_Gunner_Ramp.rtm;
			interpolateTo[] = {"KIA_RHS_Ch53_Gunner_Ramp",1};
		};
		class KIA_RHS_Ch53_Gunner_Ramp: DefaultDie
		{
			actions = "DeadActions";
			file = rhsusf\addons\rhsusf_c_ch53\anims\kia_rhs_CH53_Gunner_Ramp.rtm;
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",2};
		};
	};
};