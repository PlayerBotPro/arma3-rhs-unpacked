
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		rhs_M1117_Driver = "rhs_M1117_Driver";
		rhs_M1117_Gunner = "rhs_M1117_Gunner";
		rhs_M1117_Commander = "rhs_M1117_Commander";
		rhs_M1117_Driver_out = "rhs_M1117_Driver_out";
		rhs_M1117_Gunner_out = "rhs_M1117_Gunner_out";
		rhs_M1117_Commander_out = "rhs_M1117_Commander_out";
		rhs_M1117_passenger = "rhs_M1117_passenger";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_rhs_M1117_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "rhsusf\addons\rhsusf_m1117\data\anim\kia_M1117_driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class rhs_M1117_Driver: Crew
		{
			file = "rhsusf\addons\rhsusf_m1117\data\Anim\M1117_driver.rtm";
			interpolateTo[] = {"KIA_rhs_M1117_Driver",1};
		};
		class rhs_M1117_Driver_out: Crew
		{
			file = "rhsusf\addons\rhsusf_m1117\data\Anim\M1117_driver_out.rtm";
			interpolateTo[] = {"KIA_rhs_M1117_Driver",1};
		};
		class KIA_rhs_M1117_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "rhsusf\addons\rhsusf_m1117\data\anim\kia_M1117_Gunner.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class rhs_M1117_Gunner: Crew
		{
			file = "rhsusf\addons\rhsusf_m1117\data\Anim\M1117_Gunner.rtm";
			interpolateTo[] = {"KIA_rhs_M1117_Gunner",1};
		};
		class rhs_M1117_Gunner_out: Crew
		{
			file = "rhsusf\addons\rhsusf_m1117\data\Anim\M1117_gunner_out.rtm";
			interpolateTo[] = {"KIA_rhs_M1117_Gunner",1};
		};
		class KIA_rhs_M1117_commander: DefaultDie
		{
			actions = "DeadActions";
			file = "rhsusf\addons\rhsusf_m1117\data\anim\kia_M1117_commander.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class rhs_M1117_commander: Crew
		{
			file = "rhsusf\addons\rhsusf_m1117\data\Anim\M1117_commander.rtm";
			interpolateTo[] = {"KIA_rhs_M1117_commander",1};
		};
		class rhs_M1117_commander_out: Crew
		{
			file = "rhsusf\addons\rhsusf_m1117\data\Anim\M1117_commander_out.rtm";
			interpolateTo[] = {"KIA_rhs_M1117_commander",1};
		};
		class rhs_M1117_passenger: Crew
		{
			file = "rhsusf\addons\rhsusf_m1117\data\Anim\M1117_passenger.rtm";
			interpolateTo[] = {"KIA_rhs_M1117_passenger",1};
		};
		class KIA_rhs_M1117_passenger: DefaultDie
		{
			actions = "DeadActions";
			file = "rhsusf\addons\rhsusf_m1117\data\anim\kia_M1117_passenger.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};

	};
};
