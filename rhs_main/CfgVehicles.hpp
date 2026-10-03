
//class DefaultEventhandlers {
//};

class CfgVehicles
{
	class All;
	class AllVehicles;
	class Air;
	class Helicopter;
	class Plane;
	class Land;
	class Man;
	class CAManBase;
	class LandVehicle;
	class Tank;
	class Tank_F;
	class Car;
	class Car_F;
	class Ship;
	class Ship_F;

	class FlagCarrier;
	class rhs_Flag_Russia_F: FlagCarrier
	{
		author = "Red Hammer Studio";
		scope = 2;
		displayName = "$STR_RHS_FLAGRUSSIANFEDERATION_NAME";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_main\data\Flag_rus_CO.paa'";
		};
		scopeCurator = 2;
	};
	class rhs_Flag_DNR_F: rhs_Flag_Russia_F
	{
		author = "Red Hammer Studio";
		scope = 2;
		displayName = "$STR_RHS_FLAGDNR_NAME";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_main\data\Flag_dnr_CO.paa'";
		};
	};
	class rhs_Flag_LNR_F: rhs_Flag_Russia_F
	{
		author = "Red Hammer Studio";
		scope = 2;
		displayName = "$STR_RHS_FLAGLNR_NAME";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_main\data\Flag_lnr_CO.paa'";
		};
	};
	class rhs_Flag_vdv_F: rhs_Flag_Russia_F
	{
		author = "Red Hammer Studio";
		scope = 2;
		displayName = "$STR_RHS_FLAGVDV_NAME";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_main\data\Flag_vdv_CO.paa'";
		};
	};
	class rhs_Flag_vmf_F: rhs_Flag_Russia_F
	{
		author = "Red Hammer Studio";
		scope = 2;
		displayName = "$STR_RHS_FLAGVMF_NAME";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_main\data\Flag_vmf_CO.paa'";
		};
	};
	class rhs_Flag_Che_F: rhs_Flag_Russia_F
	{
		author = "Red Hammer Studio";
		scope = 2;
		displayName = "$STR_RHS_FLAGCHECHENREPUBLIC_NAME";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_main\data\Flag_che_CO.paa'";
		};
	};
	class rhs_Flag_abk_F: rhs_Flag_Russia_F
	{
		author = "Red Hammer Studio";
		scope = 2;
		displayName = "$STR_RHS_FLAGABKHAZIA_NAME";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_main\data\Flag_abk_CO.paa'";
		};
	};
	class rhs_Flag_Ose_F: rhs_Flag_Russia_F
	{
		author = "Red Hammer Studio";
		scope = 2;
		displayName = "$STR_RHS_FLAGOSSETIA_NAME";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_main\data\Flag_ose_CO.paa'";
		};
	};
	class rhs_Flag_TRN_F: rhs_Flag_Russia_F
	{
		author = "Red Hammer Studio";
		scope = 2;
		displayName = "$STR_RHS_FLAGTRANSNISTRIA_NAME";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\rhsafrf\addons\rhs_main\data\Flag_trn_CO.paa'";
		};
	};
	/*
	class Module_F;
	class ModuleSpawnAI_F: Module_F
	{
		author = "Bohemia Interactive";
		scope = 2;
		isGlobal = 0;
		isTriggerActivated = 1;
		displayName = "Spawn AI";
		function = "bis_fnc_moduleSpawnAI";
		functionPriority = 12;
		icon = "\a3\Modules_F\Data\iconStrategicMapOpen_ca.paa";
		isDisposable = 0;
		class Arguments
		{
			class Faction
			{
				displayName = "Faction";
				description = "Faction of groups spawned at the point.";
				class values
				{
					class RHS_MSV
					{
						name = "MSV (OPFOR)";
						value = "rhs_faction_msv";
					};
					class RHS_VDV
					{
						name = "VDV (OPFOR)";
						value = "rhs_faction_vdv";
					};
					class RHS_VMF
					{
						name = "VMF (OPFOR)";
						value = "rhs_faction_vmf";
					};
					class RHS_VV
					{
						name = "VV (OPFOR)";
						value = "rhs_faction_vv";
					};
					class RHS_TV
					{
						name = "TV (OPFOR)";
						value = "rhs_faction_tv";
					};
					class RHS_VPVO
					{
						name = "VPVO (OPFOR)";
						value = "rhs_faction_vpvo";
					};
					class RHS_VVS
					{
						name = "VVS (OPFOR)";
						value = "rhs_faction_vvs";
					};
					class RHS_VVS_C
					{
						name = "VVS Camo (OPFOR)";
						value = "rhs_faction_vvs_c";
					};
					class RHS_RVA
					{
						name = "RVA (OPFOR)";
						value = "rhs_faction_rva";
					};
				};
			};
		};
	};
	*/
};
