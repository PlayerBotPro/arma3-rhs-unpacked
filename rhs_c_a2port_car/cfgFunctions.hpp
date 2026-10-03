
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			class a2port_car_init
			{
				file = "\rhsafrf\addons\rhs_c_a2port_car\scripts\rhs_decal_init.sqf";
				description = "Decal init";
			};
			class gearSound
			{
				file = "\rhsafrf\addons\rhs_c_a2port_car\UAZ\gearSound.sqf";
				description = "Changing gears checker";
			};
			class gearChange
			{
				file = "\rhsafrf\addons\rhs_c_a2port_car\UAZ\gearChange.sqf";
				description = "Changing gears sound";
			};
			class fuelLeak
			{
				file = "\rhsafrf\addons\rhs_c_a2port_car\scripts\fuelLeak.sqf";
				description = "Fuel leak after hit";
			};
			class wipers
			{
				file = "\rhsafrf\addons\rhs_c_a2port_car\scripts\wipers.sqf";
				description = "Generic wipers function";
			};
		};
	};
};


class CfgSounds
{
	class RHS_Gear
	{
		name="Changing gear sound";
		sound[]=
		{
			"\rhsafrf\addons\rhs_a2port_car\sounds\Gear_Change.wss",
			db+64,
			1,
			2.4
		};
		titles[]={};
	};
	class rhs_rain
	{
		name = "Rain droplets sound inside car";
		sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss", db+74, 1,2.8};
		titles[] = {0, ""};
	};
};