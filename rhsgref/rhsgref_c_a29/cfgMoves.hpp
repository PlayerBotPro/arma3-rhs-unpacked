class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_JST_A29_Pilot = "RHS_JST_A29_Pilot";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class RHS_JST_A29_Pilot: Crew
		{  
			file = "rhsgref\addons\rhsgref_c_a29\anims\JST_Pilot.rtm";
			interpolateTo[] = {"KIA_RHS_JST_A29_Pilot",1};
			speed=1;
			leaning="crewShake_half";
		};
		class KIA_RHS_JST_A29_Pilot: DefaultDie
		{
			actions="DeadActions";
			file = "rhsgref\addons\rhsgref_c_a29\anims\KIA_JST_Pilot.rtm";
			speed=1;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[] = {"Unconscious",0.1};
		};
	};
};