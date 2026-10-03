class CfgAmmo
{
	class Default
	{
		class EventHandlers;
	};
	class MissileCore: Default {};
	class MissileBase: MissileCore
	{
		class EventHandlers: EventHandlers
		{
			class RHS_APS_FiredEH
			{
				fired = "_this spawn rhs_fnc_aps_missileFired";
			};
		};
	};
	class RocketCore: Default {};
	class RocketBase: RocketCore
	{
		class EventHandlers: EventHandlers
		{
			class RHS_APS_FiredEH
			{
				fired = "_this spawn rhs_fnc_aps_missileFired";
			};
		};
	};
};