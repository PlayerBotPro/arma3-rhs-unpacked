
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		rhsgref_canoe_driver = "rhsgref_canoe_driver";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class rhsgref_canoe_driver_KIA: DefaultDie
		{
			actions				= DeadActions;
			file				= "rhsgref\addons\rhsgref_c_canoe\anims\rhsgref_canoe_driver.rtm";
			connectTo[]			= {"Unconscious", 0.1};
		};
		class rhsgref_canoe_driver: Crew
		{
			file				= "rhsgref\addons\rhsgref_c_canoe\anims\rhsgref_canoe_driver.rtm";
			interpolateTo[]		= {"rhsgref_canoe_driver_KIA", 1};
		};
	};
};