
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class ViewOptics;
		class EventHandlers;
	};
	class rhs_rhino_trigger: StaticWeapon
	{
		scope	= 1;
		model	= \rhsusf\addons\rhsusf_matv\rhs_rhino_trigger;
		armor = 15;
		side	= 3;
		crew	= C_UAV_AI_F;
		class Turrets {};
		class Hitpoints {};
	};
