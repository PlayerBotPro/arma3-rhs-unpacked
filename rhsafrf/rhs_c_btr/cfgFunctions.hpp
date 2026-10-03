
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class BTR
		{
			name = "BTR Functions";
			description = "BTR Init & FX thing";
			class btr_init
			{
				file = "\rhsafrf\addons\rhs_c_btr\scripts\rhs_btr_init.sqf";
				description = "btr's init";
			};
			class btr_habar
			{
				file = "\rhsafrf\addons\rhs_c_btr\scripts\bgr_btr_habar.sqf";
				description = "random habar";
			};
			class btr_handleHatch
			{
				file = "\rhsafrf\addons\rhs_c_btr\scripts\handleHatch.sqf";
				description = "handle hatch";
			};
			class btr_hatch
			{
				file = "\rhsafrf\addons\rhs_c_btr\scripts\rhs_btr_hatch.sqf";
				description = "handle hatch";
			};
			class btr_turnOut
			{
				file = "\rhsafrf\addons\rhs_c_btr\scripts\rhs_btr_turnOut.sqf";
				description = "BTRs turn out handling";
			};
			class activeTirePressure
			{
				file = "\rhsafrf\addons\rhs_c_btr\scripts\bgr_podkachka.sqf";
				description = "Active Tire Pressure script";
			};
		};
	};
};

