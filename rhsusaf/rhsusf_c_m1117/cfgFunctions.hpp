
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			class m1117_turnOut
			{
				file = "\rhsusf\addons\rhsusf_c_m1117\script\rhs_m1117_turnOut.sqf";
				description = "M1117 hatch handler";
			};
			class m1117_hatch
			{
				file = "\rhsusf\addons\rhsusf_c_m1117\script\rhs_hatch.sqf";
				description = "M1117 hatch handler";
			};
			class duke_jammer
			{
				file = "\rhsusf\addons\rhsusf_c_m1117\script\rhs_duke.sqf";
				description = "DUKE jamming simulation";
			};
			class duke_destruction
			{
				file = "\rhsusf\addons\rhsusf_c_m1117\script\rhs_duke_destruction.sqf";
				description = "DUKE antenna destruction";
			};
			class duke_vg
			{
				file = "\rhsusf\addons\rhsusf_c_m1117\script\rhs_duke_vg.sqf";
				description = "DUKE Virtual Garage action";
			};
		};
	};
	class RHSUSF
	{
		tag = "RHSUSF";
		class functions
		{
			class fuelLeak
			{
				file = "\rhsusf\addons\rhsusf_c_m1117\script\fuelLeak.sqf";
				description = "Fuel leak script";
			};
		};
	};
};

