
class CfgCloudlets
{
	class Default;
	class RocketBackfireRPGNT;
	class RocketBacksmokeRPGNT;
	class RHS_RocketBackfireRPGNT : RocketBackfireRPGNT
	{

	};
	class RHS_Fired_M80 : RHS_RocketBackfireRPGNT
	{
		interval = 0.265;
		lifeTime = 0.001;
		lifeTimeVar = 0;
		beforeDestroyScript = "rhssaf\addons\rhssaf_c_weapons\scripts\rhs_eh_m80.sqf";
	};
};

class Script;
class RHS_Fired_M136HEAT;
class RHS_Fired_M80 : RHS_Fired_M136HEAT
{
	class Script : Script
	{
		type = "RHS_Fired_M80";
	};
};
