
class CfgFunctions
{
	class RHSUSF
	{
		tag = "RHSUSF";
		class functions
		{
			class RF_M1
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_rf_m1.sqf";
				description = "FCS Script for M1 Abrams series";
			};
			class rf_M1_digit
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_rf_m1_digit.sqf";
				description = "FCS Digits showing Script for M1 Abrams series";
			};
			class rf_M1_elev
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_rf_m1_elev.sqf";
				description = "FCS Digits showing Script for M1 Abrams series";
			};
			class sight_m1_lead
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_lead_m1.sqf";
				description = "M1 Lead calculation";
			};
			class fireOnMove
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_fireOnMove.sqf";
				description = "Fire on move script";
			};
			class ccp_setRange
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\us_komp\setRange.sqf";
				description = "FCS Digits showing Script for M1 Abrams series";
			};
			class findAngle
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\RHS_findAngle.sqf";
				description = "FCS PLISSA for T-80UE-1";
			};
			class calcBalistic
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\RHS_calcBalistic.sqf";
				description = "FCS PLISSA for T-80UE-1";
			};
			class gunOffset
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\RHS_gunOffset.sqf";
				description = "Gun & view mem point offset fixer";
			};
			class uh1_Handler
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_uh1_Handler.sqf";
				description = "UH-1Y FLIR Observer Handler";
			};
			class uh1_obsHandler
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_uh1_obsHandler.sqf";
				description = "UH-1Y FLIR Observer Handler";
			};
			class announcer
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_announcer.sqf";
				description = "Announcer handler";
			};
			class incomingMissile
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_incomingMissle.sqf";
				description = "incoming missile voice announcer";
			};

			class pipHandler_m113
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_pipHandler_m113.sqf";
				description = "M113 Driver PiP Handler";
			};
			class pipHandler_m1117
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_pipHandler_m1117.sqf";
				description = "M1117 gunner feed Handler";
			};
			class m1117com
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_m1117com.sqf";
				description = "M1117 gunner feed";
			};
			class autoTrack
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\RHS_autoTrack.sqf";
				description = "Auto track target script";
			};
			class laserTarget
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_laserTarget.sqf";
				description = "Additional functionality and interaction for FCS laser range finders";
			};
			class ammoIndexing
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\RHS_ammoIndexing.sqf";
				description = "Indexing rounds in carousel";
			};


			class randomRadio
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_randomRadio.sqf";
				description = "Random Radio script";
			};
			class IBAS_handler
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_ibas_handler.sqf";
				description = "FCS handler for M2A3 IBAS sight (used on M2A2SA/M2A3/M2A3ECP1/M2A3ECP2)";
			};
			class IBAS_CIV_handler
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_ibas_civ_handler.sqf";
				description = "FCS handler for M2A3 CIV commander's sight (used on M2A2SA/M2A3/M2A3ECP1/M2A3ECP2)";
			};
			class ISU_handler
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_isu_handler.sqf";
				description = "FCS handler for M2 ISU sight (used on M2/M2A1/M2A2)";
			};
			class ODS_ISU_handler
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_ods_isu_handler.sqf";
				description = "FCS handler for M2A2ODS ISU sight (used on M2A2ODS)";
			};
			class A10A_tvm_screen
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_a10a_tvm_screen.sqf";
				description = "FCS handler for A-10A TVM targeting screen";
			};
			class CWSS_handler
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_cwss_handler.sqf";
				description = "FCS handler for M1A1 CWSS commander's sight";
			};
			class LRAS3_handler
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_LRAS3_handler.sqf";
				description = "FCS handler for LRAS3 optic";
			};
			class ITAS_handler
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_ITAS_handler.sqf";
				description = "FCS handler for ITAS sight";
			};
			class MITAS_handler
			{
				file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_MITAS_handler.sqf";
				description = "FCS handler for MITAS sight";
			};


			class stryker_m151_loader {file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_stryker_m151_loader.sqf";};
			class stryker_m151_handler {file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_stryker_m151_handler.sqf";};
			class stryker_unitInfo {file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_stryker_unitInfo.sqf";};
			class stryker_unitInfo_m1134 {file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_stryker_unitInfo_m1134.sqf";};
			
			class matv_unitInfo {file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_matv_unitInfo.sqf";};

			class CROWS_M153_loader {file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_CROWS_M153_loader.sqf";};
			class CROWS_M153_handler {file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_CROWS_M153_handler.sqf";};
			class BFT_Update {file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_bft_update.sqf";};


			class turret_gunnerAdjust 				{file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_turret_gunnerAdjust.sqf";};
			class turret_gunnerAdjust_turnIn 		{file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_turret_gunnerAdjust_turnIn.sqf";};
			class turret_gunnerAdjust_AI_hit 		{file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_turret_gunnerAdjust_AI_hit.sqf";};
			class turret_gunnerAdjust_AI_engine 	{file = "\rhsusf\addons\rhsusf_optics\scripts\rhs_turret_gunnerAdjust_AI_engine.sqf";};
		};
	};
};

