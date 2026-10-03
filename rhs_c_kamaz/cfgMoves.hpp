
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_Kamaz_Cargo01 = "RHS_Kamaz_Cargo01";
		RHS_Kamaz_Turnout01 = "RHS_Kamaz_Turnout01";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_RHS_Kamaz_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_c_kamaz\anims\rhs_kamaz_cargo01_KIA.rtm";
			speed = 1;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class RHS_Kamaz_Cargo01: Crew
		{
			file = "\rhsafrf\addons\rhs_c_kamaz\anims\rhs_kamaz_cargo01.rtm";
			speed = 0.049917;
			interpolateTo[] = {"KIA_RHS_Kamaz_Cargo01",1};
		};
		class passenger_inside_7_Aim;
		class RHS_Kamaz_Turnout01: passenger_inside_7_Aim
		{
			actions = "passenger_inside_7Actions";
			file = "\A3\cargoposes_F_heli\anim\vehicle_passenger_stand_1aim_passenger_flatground_4aim.rtm";
			speed = -1.1;
			looped = 0;
			minplaytime = 0.95;
			InterpolateTo[] = {"passenger_inside_7_aim", 0.1};
			ConnectTo[] = {};
			variantsAI[] = {};
			variantsPlayer[] = {};
		};
	};
};