class CfgVehicles
{
	class Lamps_base_F;
	class RHS_Dazzler : Lamps_base_F
	{
		scope = 2;
		scopeCurator = 0;
		displayName = "Shtora Dazzler";
		timeToLive = 30;
		gravityFactor = 0;
		model = "\rhsafrf\addons\rhs_aps\data\rhs_shtora";
		armor = 5000;
		aggregateReflectors[] =
		{
			{ "light" }
		};
		armorLights = 0.05;
		class Reflectors
		{
			class Light
			{
				color[] = { 50, 5, 5 };
				ambient[] = { 5, 1, 1 };
				intensity = 6;

				size = 1;
				innerAngle = 3;
				outerAngle = 90;
				coneFadeCoef = 6;

				position = "light";
				direction = "light_dir";
				hitpoint = "light";
				selection = "light";

				activeLight = 1;
				dayLight = 1;
				drawLight = 0;

				useFlare = 1;
				flareSize = 5;
				flareMaxDistance = 400;

				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 0;
					hardLimitEnd = 60;
				};
			};
			class Beam : Light
			{
				intensity = 70;

				innerAngle = 3;
				outerAngle = 8;
				coneFadeCoef = 12;

				flareSize = 17;
				flareMaxDistance = 2500;

				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.1;
					hardLimitStart = 50;
					hardLimitEnd = 300;
				};
			};
		};
	};
	class All
	{
		//class EventHandlers;
	};
	class LaserTarget: All
	{
		class EventHandlers
		{
			class RHS_APS_EH
			{
				init = "";
			};
		};
	};
};