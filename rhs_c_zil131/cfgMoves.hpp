
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_Zil131_Driver = "RHS_Zil131_Driver";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_RHS_Zil131_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsafrf\addons\rhs_c_zil131\anims\KIA_rhs_zil131_driver.rtm";
			speed = 1;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class RHS_Zil131_Driver: Crew
		{
			file = "\rhsafrf\addons\rhs_c_zil131\anims\rhs_zil131_driver.rtm";
			speed = 0.049917;
			interpolateTo[] = {"KIA_RHS_Zil131_Driver",1};
		};
	};
};