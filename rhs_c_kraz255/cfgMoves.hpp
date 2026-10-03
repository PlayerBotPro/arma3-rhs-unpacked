
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_kraz255_driver = "RHS_kraz255_driver";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_RHS_kraz255_driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_c_kraz255\anims\rhs_kraz255_driver_KIA.rtm";
			speed = 1;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class RHS_kraz255_driver: Crew
		{
			file = "\rhsafrf\addons\rhs_c_kraz255\anims\rhs_kraz255_driver.rtm";
			speed = 0.049917;
			interpolateTo[] = {"KIA_RHS_kraz255_driver",1};
		};
	};
};