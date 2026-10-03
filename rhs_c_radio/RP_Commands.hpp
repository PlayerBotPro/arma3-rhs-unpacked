
	class NormalCommand: NormalCommand
	{
		versions[]=
		{
			"version1",
			1
		};
		class version1
		{
			text="NormalCommand | 1:%1 | 2:%2 | 3:%3 | 4:%4 | 5:%5 | 6:%6 | 7:%7 | 8:%8 | 9:%9 | 10:%10 | 11:%11 | 12:%12 | 13:%13 | 14:%14 | 15:%15 | 16:%16";
			speech[]=
			{
				"%1",
				"%2",
				"%3",
				"%4",
				"%5",
				"%6",
				"%7",
				"%8",
				"%9",
				"%10",
				"%11",
				"%12",
				"%13",
				"%14",
				"%15",
				"%16"
			};
		};
	};
	class SentDetectedMine: NormalCommand
	{
		versions[]=
		{
			"Mine_detected_1",
			"1",
			"Mine_detected",
			"1",
			"Mine_detected3",
			"1",
			"Mine_detected2",
			"1"
		};
		class Mine_detected_1
		{
			textOrig="Mine detected";
			text="$STR_A3_Mine_detected";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"mine"
			};
			gesture="";
		};
		class Mine_detected
		{
			textOrig="Mine detected";
			text="$STR_A3_Mine_detected";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"DangerE",
				"mine"
			};
			gesture="";
		};
		class Mine_detected2
		{
			textOrig="Mine detected";
			text="$STR_A3_Mine_detected";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"mine"
			};
			gesture="";
		};
		class Mine_detected3
		{
			textOrig="Mine detected";
			text="$STR_A3_Mine_detected";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"beadvised",
				"mine"
			};
			gesture="";
		};
	};
	class SentConfirmSuppress : Report {
		versions[] = {"Copy_6", 0.2, "Copy_7", 0.2, "Suppressing", 0.3, "Suppressing", 0.3};
		class Copy_6 {
			textOrig = "Copy";
			text = "Copy";
			wordsClass = "Normal";
			speech[] = {"XMIT", "C_HangOnILLSuppressE"};
			gesture = "";
		};
		class Copy_7 {
			textOrig = "Copy";
			text = "Copy";
			wordsClass = "Normal";
			speech[] = {"XMIT", "C_OpenUpE"};
			gesture = "";
		};
		class Suppressing {
			textOrig = "Suppressing";
			text = "Suppressing";
			wordsClass = "Normal";
			speech[] = {"XMIT", "Suppressing"};
			gesture = "";
		};
		class Suppressing2 {
			textOrig = "Suppressing";
			text = "Suppressing";
			wordsClass = "Normal";
			speech[] = {"XMIT", "C_OpenUpE"};
			gesture = "";
		};
	};
	class SentCmdSuppress : NormalCommand {
		versions[] = {"Suppressive_fire_", 1};
		class Suppressive_fire_ {
			textOrig = "Suppressive fire!";
			text = "Suppressive fire";
			wordsClass = "Normal";
			speech[] = {"XMIT", "SuppressiveFire"};
			gesture = "";
		};
	};
	class SentNotifySuppress : NormalCommand {
		versions[] = {};
	};
	class SentSupportRequestRGCASHelicopter: NormalCommand
	{
		versions[]=
		{
			"Requesting_close_air_support_at_the_designated_location__Over__1",
			"Stealth",
			"Requesting_close_air_support_at_the_designated_location__Over_",
			"(1 - (Stealth))"
		};
		class Requesting_close_air_support_at_the_designated_location__Over__1
		{
			textOrig="Requesting close air support at the designated location. Over.";
			text="$STR_A3_Requesting_close_air_support_at_the_designated_location__Over_";
			wordsClass="Stealth";
			speech[]=
			{
				"XMIT",
				"SecOp_Tactical_Strike_Briefing_1"
			};
			gesture="";
		};
		class Requesting_close_air_support_at_the_designated_location__Over_
		{
			textOrig="Requesting close air support at the designated location. Over.";
			text="$STR_A3_Requesting_close_air_support_at_the_designated_location__Over_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"SecOp_Tactical_Strike_Briefing_2"
			};
			gesture="";
		};
	};
	class SentSupportRequestRGSupplyDrop: NormalCommand
	{
		versions[]=
		{
			"Requesting_supply_drop_at_the_transmitted_coordinates__Over__1",
			"Stealth",
			"Requesting_supply_drop_at_the_transmitted_coordinates__Over_",
			"(1 - (Stealth))"
		};
		class Requesting_supply_drop_at_the_transmitted_coordinates__Over__1
		{
			textOrig="Requesting supply drop at the transmitted coordinates. Over.";
			text="$STR_A3_Requesting_supply_drop_at_the_transmitted_coordinates__Over_";
			wordsClass="Stealth";
			speech[]=
			{
				"XMIT",
				"SupportRequestRGSupplyDrop"
			};
			gesture="";
		};
		class Requesting_supply_drop_at_the_transmitted_coordinates__Over_
		{
			textOrig="Requesting supply drop at the transmitted coordinates. Over.";
			text="$STR_A3_Requesting_supply_drop_at_the_transmitted_coordinates__Over_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"SupportRequestRGSupplyDrop"
			};
			gesture="";
		};
	};
	class SentSupportRequestRGUAV: NormalCommand
	{
		versions[]=
		{
			"Requesting_aerial_recon_at_the_transmitted_location__Over__1",
			"Stealth",
			"Requesting_aerial_recon_at_the_transmitted_location__Over_",
			"(1 - (Stealth))"
		};
		class Requesting_aerial_recon_at_the_transmitted_location__Over__1
		{
			textOrig="Requesting aerial recon at the transmitted location. Over.";
			text="$STR_A3_Requesting_aerial_recon_at_the_transmitted_location__Over_";
			wordsClass="Stealth";
			speech[]=
			{
				"XMIT",
				"SecOp_Aerial_Recon_Briefing_1"
			};
			gesture="";
		};
		class Requesting_aerial_recon_at_the_transmitted_location__Over_
		{
			textOrig="Requesting aerial recon at the transmitted location. Over.";
			text="$STR_A3_Requesting_aerial_recon_at_the_transmitted_location__Over_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"SecOp_Aerial_Recon_Briefing_2"
			};
			gesture="";
		};
	};
	class SentSupportRequestRGArty: NormalCommand
	{
		versions[]=
		{
			"Requesting_immediate_fire_support_at_the_designated_coordinates__Over__1",
			"Stealth",
			"Requesting_immediate_fire_support_at_the_designated_coordinates__Over_",
			"(1 - (Stealth))"
		};
		class Requesting_immediate_fire_support_at_the_designated_coordinates__Over__1
		{
			textOrig="Requesting immediate fire support at the designated coordinates. Over.";
			text="$STR_A3_Requesting_immediate_fire_support_at_the_designated_coordinates__Over_";
			wordsClass="Stealth";
			speech[]=
			{
				"XMIT",
				"SecOp_Artillery_Barrage_Request_1"
			};
			gesture="";
		};
		class Requesting_immediate_fire_support_at_the_designated_coordinates__Over_
		{
			textOrig="Requesting immediate fire support at the designated coordinates. Over.";
			text="$STR_A3_Requesting_immediate_fire_support_at_the_designated_coordinates__Over_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"SecOp_Artillery_Barrage_Request_2"
			};
			gesture="";
		};
	};
	class SentSupportRequestRGTransport: NormalCommand
	{
		versions[]=
		{
			"Requesting_airlift_at_the_designated_coordinates__Over__1",
			"Stealth",
			"Requesting_airlift_at_the_designated_coordinates__Over_",
			"(1 - (Stealth))"
		};
		class Requesting_airlift_at_the_designated_coordinates__Over__1
		{
			textOrig="Requesting airlift at the designated coordinates. Over.";
			text="$STR_A3_Requesting_airlift_at_the_designated_coordinates__Over_";
			wordsClass="Stealth";
			speech[]=
			{
				"XMIT",
				"SupportRequestRGTransport"
			};
			gesture="";
		};
		class Requesting_airlift_at_the_designated_coordinates__Over_
		{
			textOrig="Requesting airlift at the designated coordinates. Over.";
			text="$STR_A3_Requesting_airlift_at_the_designated_coordinates__Over_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"SupportRequestRGTransport"
			};
			gesture="";
		};
	};
	class SentRequestAcknowledgedSGCASBombing: NormalCommand
	{
		versions[]=
		{
			"Copy_that__strike_aircraft_on_the_way__Out_",
			1
		};
		class Copy_that__strike_aircraft_on_the_way__Out_
		{
			textOrig="Copy that, strike aircraft on the way. Out.";
			text="$STR_A3_Copy_that__strike_aircraft_on_the_way__Out_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"SecOp_Tactical_Strike_Briefing_Accepted"
			};
			gesture="";
		};
	};
	class SentRequestAcknowledgedSGCASHelicopter: NormalCommand
	{
		versions[]=
		{
			"Roger__coordinates_received__CAS_is_inbound__Out_",
			1
		};
		class Roger__coordinates_received__CAS_is_inbound__Out_
		{
			textOrig="Roger, coordinates received, CAS is inbound. Out.";
			text="$STR_A3_Roger__coordinates_received__CAS_is_inbound__Out_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"SecOp_Tactical_Strike_Briefing_Accepted"
			};
			gesture="";
		};
	};
	class SentRequestAcknowledgedSGSupplyDrop: NormalCommand
	{
		versions[]=
		{
			"Affirmative__supplies_en_route__Out_",
			1
		};
		class Affirmative__supplies_en_route__Out_
		{
			textOrig="Affirmative, supplies en route. Out.";
			text="$STR_A3_Affirmative__supplies_en_route__Out_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"RequestAcknowledgedSGSupplyDrop"
			};
			gesture="";
		};
	};
	class SentRequestAcknowledgedSGUAV: NormalCommand
	{
		versions[]=
		{
			"Acknowledged__dispatching_drone_to_the_designated_coordinates__Out_",
			1
		};
		class Acknowledged__dispatching_drone_to_the_designated_coordinates__Out_
		{
			textOrig="Acknowledged, dispatching drone to the designated coordinates. Out.";
			text="$STR_A3_Acknowledged__dispatching_drone_to_the_designated_coordinates__Out_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"SecOp_Aerial_Recon_Briefing_Accepted"
			};
			gesture="";
		};
	};
	class SentRequestAcknowledgedSGArty: NormalCommand
	{
		versions[]=
		{
			"Target_location_received__ordnance_is_inbound__Out_",
			1
		};
		class Target_location_received__ordnance_is_inbound__Out_
		{
			textOrig="Target location received, ordnance is inbound. Out.";
			text="$STR_A3_Target_location_received__ordnance_is_inbound__Out_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"SecOp_Artillery_Barrage_Response_1"
			};
			gesture="";
		};
	};
	class SentRequestAcknowledgedTransport: NormalCommand
	{
		versions[]=
		{
			"Roger__transport_dispatched_",
			1
		};
		class Roger__transport_dispatched_
		{
			textOrig="Roger, transport dispatched.";
			text="$STR_A3_Roger__transport_dispatched_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"RequestAcknowledgedTransport"
			};
			gesture="";
		};
	};
	class SentUnitDestroyedHQCASBombing: NormalCommand
	{
		versions[]=
		{
			"Be_advised__we_ve_lost_contact_with_the_aircraft__Out_",
			1
		};
		class Be_advised__we_ve_lost_contact_with_the_aircraft__Out_
		{
			textOrig="Be advised, we've lost contact with the aircraft. Out.";
			text="$STR_A3_Be_advised__we_ve_lost_contact_with_the_aircraft__Out_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"UnitDestroyedHQCASBombing"
			};
			gesture="";
		};
	};
	class SentUnitDestroyedHQCASHelicopter: NormalCommand
	{
		versions[]=
		{
			"Be_advised__we_just_lost_contact_with_the_chopper__Out_",
			1
		};
		class Be_advised__we_just_lost_contact_with_the_chopper__Out_
		{
			textOrig="Be advised, we just lost contact with the chopper. Out.";
			text="$STR_A3_Be_advised__we_just_lost_contact_with_the_chopper__Out_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"UnitDestroyedHQCASBombing"
			};
			gesture="";
		};
	};
	class SentUnitDestroyedHQSupplyDrop: NormalCommand
	{
		versions[]=
		{
			"Be_advised__support_aircraft_is_unresponsive__Out_",
			1
		};
		class Be_advised__support_aircraft_is_unresponsive__Out_
		{
			textOrig="Be advised, support aircraft is unresponsive. Out.";
			text="$STR_A3_Be_advised__support_aircraft_is_unresponsive__Out_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"UnitDestroyedHQSupplyDrop"
			};
			gesture="";
		};
	};
	class SentUnitDestroyedHQUAV: NormalCommand
	{
		versions[]=
		{
			"Be_advised__the_drone_has_dropped_off_the_grid__Out_",
			1
		};
		class Be_advised__the_drone_has_dropped_off_the_grid__Out_
		{
			textOrig="Be advised, the drone has dropped off the grid. Out.";
			text="$STR_A3_Be_advised__the_drone_has_dropped_off_the_grid__Out_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"UnitDestroyedHQUAV"
			};
			gesture="";
		};
	};
	class SentUnitDestroyedHQArty: NormalCommand
	{
		versions[]=
		{
			"Be_advised__the_artillery_is_not_responding__Out_",
			1
		};
		class Be_advised__the_artillery_is_not_responding__Out_
		{
			textOrig="Be advised, the artillery is not responding. Out.";
			text="$STR_A3_Be_advised__the_artillery_is_not_responding__Out_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"SecOp_Artillery_Barrage_Unavailable_1"
			};
			gesture="";
		};
	};
	class SentUnitDestroyedHQTransport: NormalCommand
	{
		versions[]=
		{
			"Be_advised__we_ve_lost_contact_with_the_aircraft__Out__1",
			1
		};
		class Be_advised__we_ve_lost_contact_with_the_aircraft__Out__1
		{
			textOrig="Be advised, we've lost contact with the aircraft. Out.";
			text="$STR_A3_Be_advised__we_ve_lost_contact_with_the_aircraft__Out_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"UnitDestroyedHQTransport"
			};
			gesture="";
		};
	};
	class SentRequestAccomplishedSGCASBombing: NormalCommand
	{
		versions[]=
		{
			"Payload_delivered__We_re_RTB__Out_",
			1
		};
		class Payload_delivered__We_re_RTB__Out_
		{
			textOrig="Payload delivered, We're RTB. Out.";
			text="$STR_A3_Payload_delivered__We_re_RTB__Out_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"SecOp_Tactical_Strike_Briefing_1"
			};
			gesture="";
		};
	};
	class SentRequestAccomplishedSGCASHelicopter: NormalCommand
	{
		versions[]=
		{
			"CAS_mission_complete__RTB__Out_",
			1
		};
		class CAS_mission_complete__RTB__Out_
		{
			textOrig="CAS mission complete. RTB. Out.";
			text="$STR_A3_CAS_mission_complete__RTB__Out_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"SecOp_Tactical_Strike_Briefing_2"
			};
			gesture="";
		};
	};
	class SentRequestAccomplishedSGSupplyDrop: NormalCommand
	{
		versions[]=
		{
			"The_supplies_have_been_dropped__Out_",
			1
		};
		class The_supplies_have_been_dropped__Out_
		{
			textOrig="The supplies have been dropped. Out.";
			text="$STR_A3_The_supplies_have_been_dropped__Out_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"RequestAccomplishedSGSupplyDrop"
			};
			gesture="";
		};
	};
	class SentRequestAccomplishedSGUAV: NormalCommand
	{
		versions[]=
		{
			"Drone_is_bingo_fuel_and_RTB__Out_",
			1
		};
		class Drone_is_bingo_fuel_and_RTB__Out_
		{
			textOrig="Drone is bingo fuel and RTB. Out.";
			text="$STR_A3_Drone_is_bingo_fuel_and_RTB__Out_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"RequestAccomplishedSGUAV"
			};
			gesture="";
		};
	};
	class SentRequestAccomplishedSGArty: NormalCommand
	{
		versions[]=
		{
			"Splash__Out_",
			1
		};
		class Splash__Out_
		{
			textOrig="Splash. Out.";
			text="$STR_A3_Splash__Out_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"SecOp_Artillery_Barrage_RoundsComplete"
			};
			gesture="";
		};
	};
	class SentRequestAccomplishedSGTransport: NormalCommand
	{
		versions[]=
		{
			"We_re_here__good_luck_out_there_",
			1
		};
		class We_re_here__good_luck_out_there_
		{
			textOrig="We're here, good luck out there.";
			text="$STR_A3_We_re_here__good_luck_out_there_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"RequestAccomplishedSGTransport"
			};
			gesture="";
		};
	};
	class SentSupportAddedDuringMission: NormalCommand
	{
		versions[]=
		{
			"Be_advised__support_units_are_now_on_standby__Out_",
			1
		};
		class Be_advised__support_units_are_now_on_standby__Out_
		{
			textOrig="Be advised, support units are now on standby. Out.";
			text="$STR_A3_Be_advised__support_units_are_now_on_standby__Out_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"NewSupportAvailable"
			};
			gesture="";
		};
	};
	class SentArtySGSupportRoundsComplete: NormalCommand
	{
		versions[]=
		{
			"Rounds_complete__Out_",
			1
		};
		class Rounds_complete__Out_
		{
			textOrig="Rounds complete. Out.";
			text="$STR_A3_Rounds_complete__Out_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"SecOp_Artillery_Barrage_RoundsComplete"
			};
			gesture="";
		};
	};
	class SentTransportSGWelcomeAboard: NormalCommand
	{
		versions[]=
		{
			"Everyone_in__Let_s_get_out_of_here_",
			1
		};
		class Everyone_in__Let_s_get_out_of_here_
		{
			textOrig="Everyone in? Let's get out of here.";
			text="$STR_A3_Everyone_in__Let_s_get_out_of_here_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"TransportSGWelcomeAboard"
			};
			gesture="";
		};
	};
	class SentTransportSGLZCoordinatesSelected: NormalCommand
	{
		versions[]=
		{
			"Copy__We_re_moving_out_",
			1
		};
		class Copy__We_re_moving_out_
		{
			textOrig="Copy. We're moving out.";
			text="$STR_A3_Copy__We_re_moving_out_";
			wordsClass="Normal";
			speech[]=
			{
				"XMIT",
				"TransportSGLZCoordinatesSelected"
			};
			gesture="";
		};
	};
	class SentSuppress
	{
		versions[]=
		{
			"Version1",
			0.5,
			"Version2",
			0.5
		};
		class Version1
		{
			text="$STR_SENT_UNIT_SUPPRESS_1";
			speech[]=
			{
				"%1.1",
				"C_SuppresiveFireE"
			};
		};
		class Version2
		{
			text="$STR_SENT_UNIT_SUPPRESS_2";
			speech[]=
			{
				"%1.1",
				"C_OpenUpE"
			};
		};
	};
	class SentAssemble
	{
		sentences[]=
		{
			"SentAssembleDefault"
		};
	};
	class SentAssembleDefault
	{
		versions[]=
		{
			"SentAssemble_1",
			1
		};
		class SentAssemble_1
		{
			text="$STR_EP1_SENTASSEMBLE_1";
			speech[]=
			{
				"%1",
				"AssembleThat",
				"%2"
			};
		};
	};
	class SentDisassemble
	{
		sentences[]=
		{
			"SentDisassembleDefault"
		};
	};
	class SentDisassembleDefault
	{
		versions[]=
		{
			"SentDisassemble_1",
			1
		};
		class SentDisassemble_1
		{
			text="$STR_EP1_SENTDISASSEMBLE_1";
			speech[]=
			{
				"%1",
				"DisassembleThat",
				"%2"
			};
		};
	};
	class SentCmdActionOpenBag
	{
		sentences[]=
		{
			"SentCmdActionOpenBagDefault"
		};
	};
	class SentCmdActionOpenBagDefault
	{
		versions[]=
		{
			"SentCmdActionOpenBag_1",
			1
		};
		class SentCmdActionOpenBag_1
		{
			text="$STR_EP1_SENTCMDACTIONOPENBAG_1";
			speech[]=
			{
				"NO_SPEECH"
			};
		};
	};
	class SentCmdActionDropBag
	{
		sentences[]=
		{
			"SentCmdActionDropBagDefault"
		};
	};
	class SentCmdActionDropBagDefault
	{
		versions[]=
		{
			"SentCmdActionDropBag_1",
			1
		};
		class SentCmdActionDropBag_1
		{
			text="$STR_EP1_SENTCMDACTIONDROPBAG_1";
			speech[]=
			{
				"NO_SPEECH"
			};
		};
	};
	class SentCmdActionTakeBag
	{
		sentences[]=
		{
			"SentCmdActionTakeBagDefault"
		};
	};
	class SentCmdActionTakeBagDefault
	{
		versions[]=
		{
			"SentCmdActionTakeBag_1",
			1
		};
		class SentCmdActionTakeBag_1
		{
			text="$STR_EP1_SENTCMDACTIONTAKEBAG_1";
			speech[]=
			{
				"NO_SPEECH"
			};
		};
	};
	class SentUnitKilled: SentUnitKilled
	{
		versions[]=
		{
			"Version1",
			0.2,
			"Version2",
			0.1,
			"Version3",
			0.1,
			"Version4",
			0.2
		};
		class Version1
		{
			text="$STR_A3___1_1___KIA";
			speech[]=
			{
				"%1.1",
				"IsDownE"
			};
		};
		class Version2
		{
			text="$STR_A3___1_1___KIA";
			speech[]=
			{
				"ShitE",
				"%1.1",
				"IsDownE"
			};
		};
		class Version3
		{
			text="$STR_A3___1_1___KIA";
			speech[]=
			{
				"ManDownE",
				"%1.1",
				"IsDownE"
			};
		};
		class Version4
		{
			text="$STR_A3___1_1___KIA";
			speech[]=
			{
				"GoddamnE",
				"%1.1",
				"IsDownE"
			};
		};
	};
	class SentSupportAskHeal: SentSupportAskHeal
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="Requesting support ? Grid: %1";
			speech[]=
			{
				"HQ",
				"WeNeedMedicalAssistanceAt",
				"%1",
				"Over1"
			};
		};
	};
	class SentSupportAskRepair: SentSupportAskRepair
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="Requesting support ? Grid: %1";
			speech[]=
			{
				"HQ",
				"RequestingRepairTeamAt",
				"%1",
				"Over1"
			};
		};
	};
	class SentSupportAskRefuel: SentSupportAskRefuel
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="Requesting support ? Grid: %1";
			speech[]=
			{
				"HQ",
				"WereRunningOnFumesNeedRefuelAt",
				"%1",
				"Over1"
			};
		};
	};
	class SentSupportAskRearm: SentSupportAskRearm
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="Requesting support ? Grid: %1";
			speech[]=
			{
				"HQ",
				"RequestingUrgentResupplyAt",
				"%1",
				"Over1"
			};
		};
	};
	class SentSupportConfirm: SentSupportConfirm
	{
		versions[]=
		{
			"Version1",
			0.4,
			"Version2",
			0.2,
			"Version3",
			0.4
		};
		class Version1
		{
			text="$STR_A3_Support_confirmed";
			speech[]=
			{
				"SolidCopy",
				"ProvidingSupportAt",
				"%2"
			};
		};
		class Version2
		{
			text="$STR_A3_Support_confirmed";
			speech[]=
			{
				"HoldOnGuysSupportsOnTheWayE"
			};
		};
		class Version3
		{
			text="$STR_A3_Support_confirmed";
			speech[]=
			{
				"Roger",
				"WereOnIt"
			};
		};
	};
	class SentSupportReady: SentSupportReady
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"ImAtGrid",
				"%2",
				"ProvidingSupportTo",
				"%1",
				"Out1"
			};
		};
	};
	class SentSupportDone: SentSupportDone
	{
		versions[]=
		{
			"Version1",
			0.7,
			"Version2",
			0.3
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"YoureGoodToGoE"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"SupportComplete",
				"GiveEmHellE"
			};
		};
	};
	class SentSupportNotAvailable: SentSupportNotAvailable
	{
		gesture="gestureNo";
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Negative";
			speech[]=
			{
				"NoSupportAvailableAtThisTime",
				"Out1"
			};
		};
	};
	class SentHealthCritical: SentHealthCritical
	{
		versions[]=
		{
			"Version1",
			0.2,
			"Version2",
			0.05,
			"Version3",
			0.1,
			"Version4",
			0.15,
			"Version5",
			0.1,
			"Version6",
			0.2,
			"Version7",
			0.2
		};
		class Version1
		{
			text="$STR_A3_Injured";
			speech[]=
			{
				"ImHitE"
			};
		};
		class Version2
		{
			text="$STR_A3_Injured";
			speech[]=
			{
				"ImBleedingE"
			};
		};
		class Version3
		{
			text="$STR_A3_Injured";
			speech[]=
			{
				"SomebodyHelpMeE"
			};
		};
		class Version4
		{
			text="$STR_A3_Injured";
			speech[]=
			{
				"TheyGotMeE"
			};
		};
		class Version5
		{
			text="$STR_A3_Injured";
			speech[]=
			{
				"NeedHelpE"
			};
		};
		class Version6
		{
			text="$STR_A3_Injured";
			speech[]=
			{
				"WoundedE"
			};
		};
		class Version7
		{
			text="$STR_A3_Injured";
			speech[]=
			{
				"CorpsmanE"
			};
		};
	};
	class SentDammageCritical: SentDammageCritical
	{
		versions[]=
		{
			"Version1",
			0.3,
			"Version2",
			0.1,
			"Version3",
			0.2,
			"Version4",
			0.4
		};
		class Version1
		{
			text="$STR_A3_Critical_damage";
			speech[]=
			{
				"StatusRedE"
			};
		};
		class Version2
		{
			text="$STR_A3_Critical_damage";
			speech[]=
			{
				"VehicleIsFUBARE"
			};
		};
		class Version3
		{
			text="$STR_A3_Critical_damage";
			speech[]=
			{
				"VehicleIsFUBARE"
			};
		};
		class Version4
		{
			text="$STR_A3_Critical_damage";
			speech[]=
			{
				"CriticalDamageE"
			};
		};
	};
	class SentFuelCritical: SentFuelCritical
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_No_fuel";
			speech[]=
			{
				"ImOutOfFuelE"
			};
		};
	};
	class SentFuelLow: SentFuelLow
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Low_fuel";
			speech[]=
			{
				"ImRunningOutOfFuel"
			};
		};
	};
	class SentAmmoCritical: SentAmmoCritical
	{
		versions[]=
		{
			"Version1",
			0.3,
			"Version2",
			0.4,
			"Version3",
			0.3
		};
		class Version1
		{
			text="$STR_A3_No_ammo";
			speech[]=
			{
				"GoddamnE",
				"OutOfAmmoE"
			};
		};
		class Version2
		{
			text="$STR_A3_No_ammo";
			speech[]=
			{
				"NoMoreAmmoE"
			};
		};
		class Version3
		{
			text="$STR_A3_No_ammo";
			speech[]=
			{
				"CantShootE",
				"OutOfAmmoE"
			};
		};
	};
	class SentAmmoLow: SentAmmoLow
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Low_ammo";
			speech[]=
			{
				"RunningOutOfAmmoE"
			};
		};
	};
	class SentReportPosition: Report
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="%2";
			speech[]=
			{
				"%1",
				"Grid",
				"%2",
				"Over1"
			};
		};
	};
	class SentIsLeader: SentIsLeader
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1___Taking_command";
			speech[]=
			{
				"%1",
				"IsNowInCommand"
			};
		};
	};
	class SentCommandCompleted: SentCommandCompleted
	{
		versions[]=
		{
			"Version1",
			0.3,
			"Version2",
			0.15,
			"Version3",
			0.15,
			"Version4",
			0.25
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"%1",
				"Ready"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"%1",
				"ReadyForOrders"
			};
		};
		class Version3
		{
			text="";
			speech[]=
			{
				"%1",
				"Waiting"
			};
		};
		class Version4
		{
			text="";
			speech[]=
			{
				"%1",
				"StandingBy"
			};
		};
	};
	class SentJoinCompleted: SentJoinCompleted
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"%1",
				"Waiting"
			};
		};
	};
	class SentFireReady: SentFireReady
	{
		versions[]=
		{
			"Version1",
			0.3,
			"Version2",
			0.05,
			"Version3",
			0.15
		};
		class Version1
		{
			text="$STR_A3_Ready_to_fire";
			speech[]=
			{
				"ReadyToFire",
				"%1"
			};
		};
		class Version2
		{
			text="$STR_A3_Ready_to_fire";
			speech[]=
			{
				"TargetInSight",
				"hc_waitingfororders",
				"%1"
			};
		};
		class Version3
		{
			text="$STR_A3_Ready_to_fire";
			speech[]=
			{
				"TargetInSight",
				"%1"
			};
		};
	};
	class SentFireNegative: SentFireNegative
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Negative";
			speech[]=
			{
				"UnableToFireE"
			};
		};
	};
	class SentCommandFailed: SentCommandFailed
	{
		gesture="gestureNo";
		versions[]=
		{
			"Version1",
			0.6,
			"Version2",
			0.4
		};
		class Version1
		{
			text="$STR_A3_Negative";
			speech[]=
			{
				"Negative"
			};
		};
		class Version2
		{
			text="$STR_A3_Negative";
			speech[]=
			{
				"ICant"
			};
		};
	};
	class SentDestinationUnreacheable: SentDestinationUnreacheable
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Negative";
			speech[]=
			{
				"DamnE",
				"ICantGetThere"
			};
		};
	};
	class SelectEnemyDetectedSentence: SelectEnemyDetectedSentence
	{
		sentences[]=
		{
			"SentEnemyDetectedGroupCoreRelative",
			1
		};
	};
	class SentEnemyDetectedGroupCoreRelative: SentEnemyDetectedGroupCoreRelative
	{
		versions[]=
		{
			"Version1",
			0.5,
			"Version2",
			0.5
		};
		class Version1
		{
			text="$STR_A3_Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102";
			speech[]=
			{
				"targetinsight",
				"%2",
				"Direction",
				"%6.102",
				"%5.101",
				"Receive1"
			};
		};
		class Version2
		{
			text="$STR_A3_Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_102";
			speech[]=
			{
				"ObservingHostile",
				"%2",
				"%6.101",
				"%5.101",
				"Receive3"
			};
		};
		class Version3
		{
			text="$STR_SENT_DETECTED_GROUP_8";
			speech[]=
			{
				"%8",
				"%2",
				"%9"
			};
		};
	};
	class SentEnemyDetectedOnGridReference: SentEnemyDetectedOnGridReference
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Contact____eTARGETS____eGRPDIS_ABS____eGRPDIR_CMPS";
			speech[]=
			{
				"Contact",
				"%3",
				"%4",
				"%2"
			};
		};
	};
	class SentEnemyDetectedLocationRelative: SentEnemyDetectedLocationRelative
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"%4",
				"%2",
				"%11.100",
				"%12.101",
				"of",
				"%14"
			};
		};
	};
	class SentEnemyDetectedUnitRelative: SentEnemyDetectedUnitRelative
	{
		versions[]=
		{
			"Version1",
			1,
			"Version2",
			1
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"%13",
				"BeAdvised",
				"%4",
				"%2",
				"%10.101",
				"fromyou",
				"%9.1"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"%13",
				"%4",
				"%2",
				"at",
				"%10.102",
				"fromyou",
				"%9.101"
			};
		};
	};
	class SentEnemyDetectedSenderRelative: SentEnemyDetectedSenderRelative
	{
		versions[]=
		{
			"Version1",
			1,
			"Version2",
			1
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"Contact",
				"%4",
				"%2",
				"%8.102",
				"fromus",
				"%7.1"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"Contact",
				"%4",
				"%2",
				"%7.1",
				"at",
				"%8.101",
				"fromus"
			};
		};
	};
	class SentObjectDestroyed: SentObjectDestroyed
	{
		versions[]=
		{
			"Version1",
			0.1,
			"Version2",
			0.1,
			"Version3",
			0.1,
			"Version4",
			0.1,
			"Version5",
			0.1
		};
		class Version1
		{
			text="$STR_A3___2___Neutralized";
			speech[]=
			{
				"TargetDestroyedE"
			};
		};
		class Version2
		{
			text="$STR_A3___2___Neutralized";
			speech[]=
			{
				"ScratchOneE"
			};
		};
		class Version3
		{
			text="$STR_A3___2___Neutralized";
			speech[]=
			{
				"TargetEliminated"
			};
		};
		class Version4
		{
			text="$STR_A3___2___Neutralized";
			speech[]=
			{
				"HesDownE"
			};
		};
		class Version5
		{
			text="$STR_A3___2___Neutralized";
			speech[]=
			{
				"IveGotHimE"
			};
		};
	};
	class SentObjectDestroyedUnknown: SentObjectDestroyedUnknown
	{
		versions[]=
		{
			"Version1",
			0.1,
			"Version2",
			0.1,
			"Version3",
			0.1,
			"Version4",
			0.1,
			"Version5",
			0.1
		};
		class Version1
		{
			text="$STR_A3_Target_neutralized";
			speech[]=
			{
				"TargetDestroyedE"
			};
		};
		class Version2
		{
			text="$STR_A3_Target_neutralized";
			speech[]=
			{
				"ScratchOneE"
			};
		};
		class Version3
		{
			text="$STR_A3_Target_neutralized";
			speech[]=
			{
				"TargetEliminated"
			};
		};
		class Version4
		{
			text="$STR_A3_Target_neutralized";
			speech[]=
			{
				"HesDownE"
			};
		};
		class Version5
		{
			text="$STR_A3_Target_neutralized";
			speech[]=
			{
				"IveGotHimE"
			};
		};
	};
	class SentContact: SentContact
	{
		versions[]=
		{
			"Version1",
			0.6,
			"Version2",
			0.1,
			"Version3",
			0.3
		};
		class Version1
		{
			text="$STR_A3_Contact";
			speech[]=
			{
				"ContactE"
			};
		};
		class Version2
		{
			text="$STR_A3_Contact";
			speech[]=
			{
				"EnemiesE"
			};
		};
		class Version3
		{
			text="$STR_A3_Contact";
			speech[]=
			{
				"HostilesE"
			};
		};
	};
	class SentCmdHealSomeone : UrgentCommand {
		versions[] = { "__1_1___Heal____2", "1"};
		class __1_1___Heal____2_1 {
			textOrig = "%1.1 — Heal — %2";
			text = "%1.1 - Heal - %2";
			wordsClass = "Stealth";
			speech[] = {"XMIT", "%1.1", "HealThatSoldier"};
			gesture = "";
		};
		class __1_1___Heal____2 {
			textOrig = "%1.1 — Heal — %2";
			text = "%1.1 - Heal - %2";
			wordsClass = "Normal";
			speech[] = {"XMIT", "%1.1", "HealThatSoldier"};
			gesture = "";
		};
	};
	class SentCmdHealSelf : NormalCommand {
		versions[] = {"__1_1___Patch_yourself_up", "Stealth"};
		class __1_1___Patch_yourself_up_1 {
			textOrig = "%1.1 — Patch yourself up";
			text = "%1.1 - Patch yourself up";
			wordsClass = "Stealth";
			speech[] = {"XMIT", "%1.1", "PatchYourself"};
			gesture = "";
		};
		class __1_1___Patch_yourself_up {
			textOrig = "%1.1 — Patch yourself up";
			text = "%1.1 - Patch yourself up";
			wordsClass = "Normal";
			speech[] = {"XMIT", "%1.1", "PatchYourself"};
			gesture = "";
		};
	};
	class SentUnderFire: SentUnderFire
	{
		versions[]=
		{
			"Version1",
			0.1,
			"Version2",
			0.1,
			"Version3",
			0.1,
			"Version4",
			0.1,
			"Version5",
			0.1,
			"Version6",
			0.1
		};
		class Version1
		{
			textOrig = "";
			text = "";
			speech[]=
			{
				"%1",
				"UnderFireE"
			};
		};
		class Version2
		{
			textOrig = "";
			text = "";
			speech[]=
			{
				"%1",
				"TheyreShootingAtUsE"
			};
		};
		class Version3
		{
			textOrig = "";
			text = "";
			speech[]=
			{
				"%1",
				"EnemyFireE"
			};
		};
		class Version4
		{
			textOrig = "";
			text = "";
			speech[]=
			{
				"%1",
				"BeingEngagedE"
			};
		};
		class Version5
		{
			textOrig = "";
			text = "";
			speech[]=
			{
				"%1",
				"FuckThatsCloseE"
			};
		};
		class Version6
		{
			textOrig = "";
			text = "";
			speech[]=
			{
				"%1",
				"IncomingE"
			};
		};
	};
	class SentClear: SentClear
	{
		gesture="gestureUp";
		versions[]=
		{
			"Version1",
			0.5,
			"Version2",
			0.4
		};
		class Version1
		{
			text="$STR_A3_Area_clear";
			speech[]=
			{
				"Clear"
			};
		};
		class Version2
		{
			text="$STR_A3_Area_clear";
			speech[]=
			{
				"AreaClear"
			};
		};
	};
	class SentRepeatCommand: SentRepeatCommand
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Repeat_command";
			speech[]=
			{
				"SayAgain",
				"Over1"
			};
		};
	};
	class SentWhereAreYou: SentWhereAreYou
	{
		versions[]=
		{
			"Version1",
			0.5,
			"Version2",
			0.5
		};
		class Version1
		{
			text="$STR_A3_Report_position";
			speech[]=
			{
				"WhatIsYourPositionQ",
				"Receive3"
			};
		};
		class Version2
		{
			text="$STR_A3_Report_position";
			speech[]=
			{
				"WhatIsYourPositionQ",
				"Receive1"
			};
		};
	};
	class SentReturnToFormation: SentReturnToFormation
	{
		gesture="GestureFollow";
		versions[]=
		{
			"Version1",
			0.1,
			"Version2",
			0.3,
			"Version3",
			0.1,
			"Version4",
			0.1,
			"Version5",
			0.2,
			"Version6",
			0.2
		};
		class Version1
		{
			text="$STR_A3___1___Regroup";
			speech[]=
			{
				"%1",
				"FallBackE"
			};
		};
		class Version2
		{
			text="$STR_A3___1___Regroup";
			speech[]=
			{
				"%1",
				"ReturnToFormationE"
			};
		};
		class Version3
		{
			text="$STR_A3___1___Regroup";
			speech[]=
			{
				"%1",
				"FormOnMeE"
			};
		};
		class Version4
		{
			text="$STR_A3___1___Regroup";
			speech[]=
			{
				"%1",
				"GetBackE"
			};
		};
		class Version5
		{
			text="$STR_A3___1___Regroup";
			speech[]=
			{
				"%1",
				"StayInFormationE"
			};
		};
		class Version6
		{
			text="$STR_A3___1___Regroup";
			speech[]=
			{
				"%1",
				"RegroupE"
			};
		};
	};
	class SentFormColumn: SentFormColumn
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Formation___Column";
			speech[]=
			{
				"FormationColumn"
			};
		};
	};
	class SentFormStaggeredColumn: SentFormStaggeredColumn
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Formation___Staggered_col_";
			speech[]=
			{
				"FormationStaggeredColumn"
			};
		};
	};
	class SentFormWedge: SentFormWedge
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Formation___Wedge";
			speech[]=
			{
				"FormationWedge"
			};
		};
	};
	class SentFormEcholonLeft: SentFormEcholonLeft
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Formation___Echelon_L_";
			speech[]=
			{
				"FormationEchelonLeft"
			};
		};
	};
	class SentFormEcholonRight: SentFormEcholonRight
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Formation___Echelon_R_";
			speech[]=
			{
				"FormationEchelonRight"
			};
		};
	};
	class SentFormVee: SentFormVee
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Formation___Vee";
			speech[]=
			{
				"FormationVee"
			};
		};
	};
	class SentFormLine: SentFormLine
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Formation___Line";
			speech[]=
			{
				"FormationLine"
			};
		};
	};
	class SentFormFile: SentFormFile
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Formation___File";
			speech[]=
			{
				"FormationFile"
			};
		};
	};
	class SentFormDiamond: SentFormDiamond
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Formation___Diamond";
			speech[]=
			{
				"FormationDiamond"
			};
		};
	};
	class SentBehaviourCareless: SentBehaviourCareless
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="";
			speech[]={};
		};
	};
	class SentBehaviourSafe: SentBehaviourSafe
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1___Relax";
			speech[]=
			{
				"%1",
				"AtEase"
			};
		};
	};
	class SentBehaviourAware: SentBehaviourAware
	{
		versions[]=
		{
			"Version1",
			0.25,
			"Version2",
			0.65
		};
		class Version1
		{
			text="$STR_A3___1___Aware";
			speech[]=
			{
				"%1",
				"StayFrosty"
			};
		};
		class Version2
		{
			text="$STR_A3___1___Aware";
			speech[]=
			{
				"%1",
				"StayAlert"
			};
		};
	};
	class SentBehaviourCombat: SentBehaviourCombat
	{
		versions[]=
		{
			"Version1",
			0.2,
			"Version2",
			0.1
		};
		class Version1
		{
			text="$STR_A3___1___Combat";
			speech[]=
			{
				"%1",
				"StandBy"
			};
		};
		class Version2
		{
			text="$STR_A3___1___Combat";
			speech[]=
			{
				"%1",
				"GetReadyToFightE"
			};
		};
	};
	class SentBehaviourStealth: SentBehaviourStealth
	{
		versions[]=
		{
			"Version1",
			0.2,
			"Version2",
			0.1,
			"Version2",
			0.1
		};
		class Version1
		{
			text="$STR_A3___1___Stealth";
			speech[]=
			{
				"%1",
				"Silence"
			};
		};
		class Version2
		{
			text="$STR_A3___1___Stealth";
			speech[]=
			{
				"%1",
				"Stealth"
			};
		};
		class Version3
		{
			text="$STR_A3___1___Stealth";
			speech[]=
			{
				"%1",
				"Stealth"
			};
		};
	};
	class SentOpenFire: SentOpenFire
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Open_fire";
			speech[]=
			{
				"%1.1",
				"FireAtWill"
			};
		};
	};
	class SentOpenFireInCombat: SentOpenFireInCombat
	{
		gesture="gestureAdvance";
		versions[]=
		{
			"Version1",
			0.2,
			"Version2",
			0.2
		};
		class Version1
		{
			text="$STR_A3___1_1___Open_fire";
			speech[]=
			{
				"%1.1",
				"OpenUpE"
			};
		};
		class Version2
		{
			text="$STR_A3___1_1___Open_fire";
			speech[]=
			{
				"%1.1",
				"GoGoGoE"
			};
		};
	};
	class SentHoldFire: SentHoldFire
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Hold_fire";
			speech[]=
			{
				"%1.1",
				"HoldFire"
			};
		};
	};
	class SentHoldFireInCombat: SentHoldFireInCombat
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Hold_fire";
			speech[]=
			{
				"%1.1",
				"HoldFireE"
			};
		};
	};
	class SentCeaseFireInsideGroup: SentCeaseFireInsideGroup
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Hold_fire";
			speech[]=
			{
				"%1.1",
				"CeaseFireGoddamnitE"
			};
		};
	};
	class SentCeaseFire: SentCeaseFire
	{
		versions[]=
		{
			"Version1",
			0.4,
			"Version2",
			0.3
		};
		class Version1
		{
			text="$STR_A3___2_1___Cease_fire";
			speech[]=
			{
				"%2.1",
				"CheckYourFireE"
			};
		};
		class Version2
		{
			text="$STR_A3___2_1___Cease_fire";
			speech[]=
			{
				"%2.1",
				"YoureFiringOnFriendliesE"
			};
		};
	};
	class SentLooseFormation: SentLooseFormation
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Free_to_engage";
			speech[]=
			{
				"%1.1",
				"EngageAtWill"
			};
		};
	};
	class SentKeepFormation: SentKeepFormation
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Disengage";
			speech[]=
			{
				"%1.1",
				"Disengage"
			};
		};
	};
	class SentUnitPosDown: SentUnitPosDown
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Prone";
			speech[]=
			{
				"%1.1",
				"GoProne"
			};
			gesture="gestureCover";
		};
	};
	class SentUnitPosMiddle: SentUnitPosMiddle
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Crouch";
			speech[]=
			{
				"%1.1",
				"stayCrouched"
			};
		};
	};
	class SentUnitPosUp: SentUnitPosUp
	{
		versions[]=
		{
			"Version1",
			0.4,
			"Version2",
			0.3
		};
		class Version1
		{
			text="$STR_A3___1_1___Stand";
			speech[]=
			{
				"%1.1",
				"StandUp"
			};
			gesture="gestureUp";
		};
		class Version2
		{
			text="$STR_A3___1_1___Stand";
			speech[]=
			{
				"%1.1",
				"OnYourFeet"
			};
			gesture="gestureUp";
		};
	};
	class SentUnitPosAuto: SentUnitPosAuto
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Copy_my_stance";
			speech[]=
			{
				"%1.1",
				"CopyMyStance"
			};
		};
	};
	class SentFormPosAdvance: SentFormPosAdvance
	{
		versions[]=
		{
			"Version1",
			0.8,
			"Version2",
			0.2
		};
		class Version1
		{
			text="$STR_A3___1_1___Advance";
			speech[]=
			{
				"%1.1",
				"Advance"
			};
		};
		class Version2
		{
			text="$STR_A3___1_1___Advance";
			speech[]=
			{
				"%1.1",
				"TakePoint"
			};
		};
	};
	class SentFormPosStayBack: SentFormPosStayBack
	{
		versions[]=
		{
			"Version1",
			0.8,
			"Version2",
			0.2
		};
		class Version1
		{
			text="$STR_A3___1_1___Stay_back";
			speech[]=
			{
				"%1.1",
				"StayBack"
			};
		};
		class Version2
		{
			text="$STR_A3___1_1___Stay_back";
			speech[]=
			{
				"%1.1",
				"CoverOurRear"
			};
		};
	};
	class SentFormPosFlankLeft: SentFormPosFlankLeft
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Flank_left";
			speech[]=
			{
				"%1.1",
				"FlankLeft"
			};
		};
	};
	class SentFormPosFlankRight: SentFormPosFlankRight
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Flank_right";
			speech[]=
			{
				"%1.1",
				"FlankRight"
			};
		};
	};
	class SentReportStatus: SentReportStatus
	{
		versions[]=
		{
			"Version1",
			0.5,
			"Version2",
			0.5
		};
		class Version1
		{
			text="$STR_A3___1_1___SITREP";
			speech[]=
			{
				"%1.1",
				"ReportStatus",
				"Receive1"
			};
		};
		class Version2
		{
			text="$STR_A3___1_1___SITREP";
			speech[]=
			{
				"%1.1",
				"WhatsYourStatusQ",
				"Receive3"
			};
		};
	};
	class SentTeam: SentTeam
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1____2";
			speech[]=
			{
				"%2"
			};
		};
	};
	class SentTeamPlural: SentTeamPlural
	{
		versions[]=
		{
			"Version2",
			1
		};
		class Version2
		{
			text="$STR_A3___1_1____2";
			speech[]=
			{
				"%2"
			};
		};
	};
	class SentWatchTgt: SentWatchTgt
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Watch____2";
			speech[]=
			{
				"%1.1",
				"direction",
				"%2"
			};
		};
	};
	class SentWatchDir: SentWatchDir
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Watch____2_CMPS";
			speech[]=
			{
				"%1.1",
				"direction",
				"%2"
			};
		};
	};
	class SentWatchPos: SentWatchPos
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Observe_position";
			speech[]=
			{
				"%1.1",
				"direction",
				"%2"
			};
		};
	};
	class SentWatchAround: SentWatchAround
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Scan_horizon";
			speech[]=
			{
				"%1.1",
				"ScanHorizon"
			};
		};
	};
	class SentNoTarget: SentNoTarget
	{
		versions[]=
		{
			"Version2",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___No_target";
			speech[]=
			{
				"%1.1",
				"NoMoreTarget"
			};
		};
		class Version2
		{
			text="$STR_A3___1_1___No_target";
			speech[]=
			{
				"%1.1",
				"CancelTarget"
			};
		};
	};
	class SentTarget: SentTarget
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1___Engage_____2____6";
			speech[]=
			{
				"%1",
				"obj_target",
				"%2"
			};
			gesture="gesturePoint";
		};
	};
	class SentEngage: SentEngage
	{
		gesture="gestureAttack";
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1___Engage_____2____6";
			speech[]=
			{
				"%1",
				"obj_target",
				"%2",
				"executeAction"
			};
		};
	};
	class SentFire: SentFire
	{
		gesture="GestureAttack";
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1___Engage";
			speech[]=
			{
				"%1",
				"obj_target",
				"%2",
				"fireatwill"
			};
		};
	};
	class SentEngageNoTarget: SentEngageNoTarget
	{
		gesture="gestureAdvance";
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1___Engage";
			speech[]=
			{
				"%1",
				"ExecuteAction"
			};
		};
	};
	class SentFireNoTarget: SentFireNoTarget
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1___Engage";
			speech[]=
			{
				"%1",
				"FireAtWill"
			};
		};
	};
	class SelectCmdMoveSentence: SelectCmdMoveSentence
	{
		sentences[]=
		{
			"SentCmdMoveGroupRelative",
			"GroupCompactness",
			"SentCmdMoveToGrid",
			"((DistanceToGroup factor [750,1000]) + (1 - GroupCompactness)/2) / 2"
		};
	};
	class SentCmdMoveGroupRelative: SentCmdMoveGroupRelative
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3__mUNIT___Move____mGRPDIS_ABS____mGRPDIR_CMPS";
			speech[]=
			{
				"%1.1",
				"Move",
				"On2",
				"%11"
			};
			gesture="gestureGo";
		};
	};
	class SentCmdMoveRecipientsRelative: SentCmdMoveRecipientsRelative
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3__mUNIT___Move____mGRPDIR_1";
			speech[]=
			{
				"%1.1",
				"MoveTo",
				"%11.101",
				"%10.101"
			};
			gesture="gestureGo";
		};
	};
	class SentCmdMoveToGrid: SentCmdMoveToGrid
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3__mUNIT___Move___Grid___mGRID";
			speech[]=
			{
				"%1.1",
				"MoveToPos",
				"%2"
			};
			gesture="gestureGoB";
		};
	};
	class SentCmdMoveToObject: SentCmdMoveToObject
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3__mUNIT___Move___Grid___mGRID";
			speech[]=
			{
				"%1.1",
				"%8",
				"%11",
				"Advance"
			};
			gesture="gestureGo";
		};
	};
	class SentCmdMoveLocationRelative: SentCmdMoveLocationRelative
	{
		versions[]=
		{
			"Version2",
			"InsideLocation",
			"Version1",
			"1 - InsideLocation"
		};
		class Version1
		{
			text="$STR_A3__mUNIT___Move___Grid___mGRID";
			speech[]=
			{
				"%1.1",
				"GoTo",
				"%7"
			};
		};
		class Version2
		{
			text="$STR_A3__mUNIT___Move___Grid___mGRID";
			speech[]=
			{
				"%1.1",
				"Move",
				"%5.101",
				"%6.102",
				"of",
				"%7"
			};
		};
	};
	class SentCmdMoveToTarget: SentCmdMoveToTarget
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3__mUNIT___Move___Grid___mGRID";
			speech[]=
			{
				"%1.1",
				"%2",
				"%4",
				"Advance"
			};
			gesture="gestureGo";
		};
		class Version2
		{
			text="$STR_A3__mUNIT___Move___Grid___mGRID";
			speech[]=
			{
				"%1.1",
				"GoTo",
				"%2",
				"%4.2"
			};
			gesture="gestureGo";
		};
		class Version3
		{
			text="$STR_A3__mUNIT___Move___Grid___mGRID";
			speech[]=
			{
				"%1.1",
				"GoTo",
				"%2",
				"%4.1"
			};
			gesture="gestureGoB";
		};
	};
	class SentCmdHeal: SentCmdHeal
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Go_to_medic____2____3";
			speech[]=
			{
				"%1.1",
				"HealAt",
				"That",
				"%2"
			};
		};
	};
	class SentCmdHealFar: SentCmdHealFar
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Go_to_medic____2____3";
			speech[]=
			{
				"%1.1",
				"HealAt",
				"That",
				"%2"
			};
		};
	};
	class SentCmdHealAt: SentCmdHealAt
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Go_to_medic___2_____3";
			speech[]=
			{
				"%1.1",
				"HealAt",
				"That",
				"%2"
			};
		};
	};
	class SentCmdRepair: SentCmdRepair
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Repair_vehicle____2____3";
			speech[]=
			{
				"%1.1",
				"RepairAt",
				"%2"
			};
		};
	};
	class SentCmdRepairFar: SentCmdRepairFar
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Repair_vehicle____2____3";
			speech[]=
			{
				"%1.1",
				"RepairAt",
				"%2"
			};
		};
	};
	class SentCmdRepairAt: SentCmdRepairAt
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Repair_vehicle___2_____3";
			speech[]=
			{
				"%1.1",
				"RepairAt",
				"%2"
			};
		};
	};
	class SentCmdRefuel: SentCmdRefuel
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Refuel_vehicle____2____3";
			speech[]=
			{
				"%1.1",
				"RefuelAt",
				"%2"
			};
		};
	};
	class SentCmdRefuelFar: SentCmdRefuelFar
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Refuel_vehicle___Grid___2";
			speech[]=
			{
				"%1.1",
				"RefuelAt",
				"%2"
			};
		};
	};
	class SentCmdRefuelAt: SentCmdRefuelAt
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Refuel_vehicle___2_____3";
			speech[]=
			{
				"%1.1",
				"RefuelAt",
				"%2"
			};
		};
	};
	class SentCmdRearm: SentCmdRearm
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Rearm____2____3";
			speech[]=
			{
				"%1.1",
				"RearmAt",
				"%2"
			};
		};
	};
	class SentCmdRearmFar: SentCmdRearmFar
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Rearm___Grid___2";
			speech[]=
			{
				"%1.1",
				"RearmAt",
				"%2"
			};
		};
	};
	class SentCmdRearmAt: SentCmdRearmAt
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Rearm___2_____3";
			speech[]=
			{
				"%1.1",
				"RearmAt",
				"%2"
			};
		};
	};
	class SentCmdSupport: SentCmdSupport
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Get_support____2____3";
			speech[]=
			{
				"%1.1",
				"SupportAt",
				"%2"
			};
		};
	};
	class SentCmdSupportFar: SentCmdSupportFar
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Get_support___Grid___2";
			speech[]=
			{
				"%1.1",
				"SupportAt",
				"%2"
			};
		};
	};
	class SentCmdSupportAt: SentCmdSupportAt
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Get_support___2_____3_CMPS";
			speech[]=
			{
				"%1.1",
				"SupportAt",
				"%2"
			};
		};
	};
	class SentCmdDropWeapon: SentCmdDropWeapon
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Drop_weapon____2";
			speech[]=
			{
				"%1.1",
				"Drop",
				"That",
				"%2"
			};
		};
	};
	class SentCmdDropMagazine: SentCmdDropMagazine
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Drop_magazine____2";
			speech[]=
			{
				"%1.1",
				"Drop",
				"That",
				"Magazine"
			};
		};
	};
	class SentCmdTakeWeapon: SentCmdTakeWeapon
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Take_weapon____2____3____4";
			speech[]=
			{
				"%1.1",
				"Take",
				"That",
				"%2"
			};
		};
	};
	class SentCmdTakeWeaponFar: SentCmdTakeWeaponFar
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Take_weapon____2___Grid___3";
			speech[]=
			{
				"%1.1",
				"Take",
				"That",
				"%2"
			};
		};
	};
	class SentCmdTakeWeaponAt: SentCmdTakeWeaponAt
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Take_weapon____3___2_____4";
			speech[]=
			{
				"%1.1",
				"Take",
				"That",
				"%2"
			};
		};
	};
	class SentCmdTakeMagazine: SentCmdTakeMagazine
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Take_magazine____2____3";
			speech[]=
			{
				"%1.1",
				"Take",
				"That",
				"Magazine"
			};
		};
	};
	class SentCmdTakeMagazineFar: SentCmdTakeMagazineFar
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Take_magazine___Grid___2";
			speech[]=
			{
				"%1.1",
				"Take",
				"That",
				"Magazine"
			};
		};
	};
	class SentCmdTakeMagazineAt: SentCmdTakeMagazineAt
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Take_magazine____2____3";
			speech[]=
			{
				"%1.1",
				"Take",
				"That",
				"Magazine"
			};
		};
	};
	class SentCmdAction: SentCmdAction
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_SENT_CMD_ACTION_1";
			speech[]={};
		};
	};
	class SentCmdActionNear: SentCmdActionNear
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_SENT_CMD_ACTION_NEAR_1";
			speech[]={};
		};
	};
	class SentCmdActionFar: SentCmdActionFar
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_SENT_CMD_ACTION_FAR_1";
			speech[]={};
		};
	};
	class SentCmdActionAt: SentCmdActionAt
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_SENT_CMD_ACTION_AT_1";
			speech[]={};
		};
	};
	class SentCmdTakeFlag: SentCmdTakeFlag
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_SENT_CMD_TAKE_FLAG_1";
			speech[]=
			{
				"%1.1",
				"TakeTheFlag",
				"At",
				"%2"
			};
		};
	};
	class SentCmdTakeFlagFar: SentCmdTakeFlagFar
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_SENT_CMD_TAKE_FLAG_1";
			speech[]=
			{
				"%1.1",
				"TakeTheFlag",
				"At",
				"%2"
			};
		};
	};
	class SentCmdTakeFlagAt: SentCmdTakeFlagAt
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_SENT_CMD_TAKE_FLAG_1";
			speech[]=
			{
				"%1.1",
				"TakeTheFlag",
				"At",
				"%2"
			};
		};
	};
	class SentCmdReturnFlag: SentCmdReturnFlag
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_SENT_CMD_RETURN_FLAG_1";
			speech[]=
			{
				"%1.1",
				"ReturnTheFlag",
				"At",
				"%2"
			};
		};
	};
	class SentCmdReturnFlagFar: SentCmdReturnFlagFar
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_SENT_CMD_RETURN_FLAG_1";
			speech[]=
			{
				"%1.1",
				"ReturnTheFlag",
				"At",
				"%2"
			};
		};
	};
	class SentCmdReturnFlagAt: SentCmdReturnFlagAt
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_SENT_CMD_RETURN_FLAG_1";
			speech[]=
			{
				"%1.1",
				"ReturnTheFlag",
				"At",
				"%2"
			};
		};
	};
	class SentCmdEject: SentCmdEject
	{
		versions[]=
		{
			"Version1",
			0.7,
			"Version2",
			0.3
		};
		class Version1
		{
			text="$STR_A3___1_1___Eject";
			speech[]=
			{
				"%1.1",
				"EjectE"
			};
		};
		class Version2
		{
			text="$STR_A3___1_1___Eject";
			speech[]=
			{
				"%1.1",
				"BailOutE"
			};
		};
	};
	class SentCmdPlaceCharge: SentCmdPlaceCharge
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Set_charge";
			speech[]=
			{
				"%1.1",
				"SetACharge"
			};
		};
	};
	class SentCmdDetonate: SentCmdDetonate
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Detonate_charge";
			speech[]=
			{
				"%1.1",
				"DetonateChargeNowE"
			};
		};
	};
	class SentCmdActivateTimer: SentCmdActivateTimer
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Set_timer";
			speech[]=
			{
				"%1.1",
				"SetTheTimer"
			};
		};
	};
	class SentCmdDeactivateBomb: SentCmdDeactivateBomb
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Deactivate_charge";
			speech[]=
			{
				"%1.1",
				"DeactivateThatCharge"
			};
		};
	};
	class SentCmdDeactivateMine: SentCmdDeactivateMine
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Disarm_mine";
			speech[]=
			{
				"%1.1",
				"DisarmThatMine"
			};
		};
	};
	class SentCmdTakeMine: SentCmdTakeMine
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Take_mine";
			speech[]=
			{
				"%1.1",
				"PickUpThatMine"
			};
		};
	};
	class SentCmdLightFire: SentCmdLightFire
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Light_fire";
			speech[]=
			{
				"GoAndLightThatFire"
			};
		};
	};
	class SentCmdLightFireFar: SentCmdLightFireFar
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Light_fire";
			speech[]=
			{
				"%1.1",
				"GoAndLightThatFire"
			};
		};
	};
	class SentCmdLightFireAt: SentCmdLightFireAt
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Light_fire";
			speech[]=
			{
				"%1.1",
				"GoAndLightThatFire"
			};
		};
	};
	class SentCmdPutOutFire: SentCmdPutOutFire
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_SENT_CMD_PUT_OUT_FIRE_1";
			speech[]=
			{
				"%1.1",
				"PutOutThatFire"
			};
		};
	};
	class SentCmdPutOutFireFar: SentCmdPutOutFireFar
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Extinguish_fire";
			speech[]=
			{
				"%1.1",
				"PutOutThatFire"
			};
		};
	};
	class SentCmdPutOutFireAt: SentCmdPutOutFireAt
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Extinguish_fire";
			speech[]=
			{
				"%1.1",
				"PutOutThatFire"
			};
		};
	};
	class SentCmdOpenDoor: SentCmdOpenDoor
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Open_door";
			speech[]=
			{
				"%1.1",
				"OpenThatDoor"
			};
		};
	};
	class SentCmdOpenDoorFar: SentCmdOpenDoorFar
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Open_door";
			speech[]=
			{
				"%1.1",
				"OpenThatDoor"
			};
		};
	};
	class SentCmdOpenDoorAt: SentCmdOpenDoorAt
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Open_door";
			speech[]=
			{
				"%1.1",
				"OpenThatDoor"
			};
		};
	};
	class SentCmdCloseDoor: SentCmdCloseDoor
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Close_door";
			speech[]=
			{
				"%1.1",
				"CloseThatDoor"
			};
		};
	};
	class SentCmdCloseDoorFar: SentCmdCloseDoorFar
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Close_door";
			speech[]=
			{
				"%1.1",
				"CloseThatDoor"
			};
		};
	};
	class SentCmdCloseDoorAt: SentCmdCloseDoorAt
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Close_door";
			speech[]=
			{
				"%1.1",
				"CloseThatDoor"
			};
		};
	};
	class SentCmdFollowMe: SentCmdFollowMe
	{
		gesture="GestureFollow";
		versions[]=
		{
			"Version1",
			0.1,
			"Version2",
			0.3,
			"Version3",
			0.1,
			"Version4",
			0.1,
			"Version5",
			0.2,
			"Version6",
			0.2
		};
		class Version1
		{
			text="$STR_A3___1___Regroup";
			speech[]=
			{
				"%1",
				"FallBackE"
			};
		};
		class Version2
		{
			text="$STR_A3___1___Regroup";
			speech[]=
			{
				"%1",
				"ReturnToFormationE"
			};
		};
		class Version3
		{
			text="$STR_A3___1___Regroup";
			speech[]=
			{
				"%1",
				"FormOnMeE"
			};
		};
		class Version4
		{
			text="$STR_A3___1___Regroup";
			speech[]=
			{
				"%1",
				"GetBackE"
			};
		};
		class Version5
		{
			text="$STR_A3___1___Regroup";
			speech[]=
			{
				"%1",
				"StayInFormationE"
			};
		};
		class Version6
		{
			text="$STR_A3___1___Regroup";
			speech[]=
			{
				"%1",
				"RegroupE"
			};
		};
	};
	class SentCmdFollow: SentCmdFollow
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Join_group____2_1";
			speech[]=
			{
				"%1.1",
				"Follow",
				"%2.1"
			};
		};
	};
	class SentCmdAttack: SentCmdAttack
	{
		gesture="GestureAttack";
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1___Engage";
			speech[]=
			{
				"%1.1",
				"obj_target",
				"%2",
				"ExecuteAction"
			};
		};
	};
	class SentAttackNoTarget: SentAttackNoTarget
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1___Engage";
			speech[]=
			{
				"%1.1",
				"AttackE"
			};
		};
	};
	class SentCmdFire: SentCmdFire
	{
		gesture="GestureAttack";
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1___Engage";
			speech[]=
			{
				"%1.1",
				"obj_target",
				"%2",
				"fireatwill"
			};
		};
	};
	class SentCmdGetIn: SentCmdGetIn
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Get_in";
			speech[]=
			{
				"%1.1",
				"GetIn",
				"%2"
			};
		};
	};
	class SentCmdGetInCommander: SentCmdGetInCommander
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Get_in___Commander";
			speech[]=
			{
				"%1.1",
				"%2",
				"Commander"
			};
		};
	};
	class SentCmdGetInDriver: SentCmdGetInDriver
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Get_in___Driver";
			speech[]=
			{
				"%1.1",
				"%2",
				"Driver"
			};
		};
	};
	class SentCmdGetInPilot: SentCmdGetInPilot
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Get_in___Pilot";
			speech[]=
			{
				"%1.1",
				"%2",
				"Pilot"
			};
		};
	};
	class SentCmdGetInGunner: SentCmdGetInGunner
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Get_in___Gunner";
			speech[]=
			{
				"%1.1",
				"%2",
				"Gunner"
			};
		};
	};
	class SentCmdGetInCargo: SentCmdGetInCargo
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Get_in___Passenger";
			speech[]=
			{
				"%1.1",
				"GetIn",
				"%2"
			};
		};
	};
	class SentCmdSwitchToDriver: SentCmdSwitchToDriver
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Switch_to_driver";
			speech[]={};
		};
	};
	class SentCmdSwitchToGunner: SentCmdSwitchToGunner
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Switch_to_gunner";
			speech[]={};
		};
	};
	class SentCmdSwitchToCommander: SentCmdSwitchToCommander
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Switch_to_commander";
			speech[]={};
		};
	};
	class SentCmdSwitchToCargo: SentCmdSwitchToCargo
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Switch_to_cargo";
			speech[]={};
		};
	};
	class SentCmdGetOut: SentCmdGetOut
	{
		versions[]=
		{
			"Version1",
			0.5,
			"Version2",
			0.5
		};
		class Version1
		{
			text="$STR_A3___1_1___Dismount";
			speech[]=
			{
				"%1.1",
				"Dismount"
			};
		};
		class Version2
		{
			text="$STR_A3___1_1___Dismount";
			speech[]=
			{
				"%1.1",
				"Disembark"
			};
		};
	};
	class SentCmdStop: SentCmdStop
	{
		versions[]=
		{
			"Version1",
			0.5,
			"Version2",
			0.5
		};
		class Version1
		{
			text="$STR_A3___1_1___Stop";
			speech[]=
			{
				"%1.1",
				"HaltE"
			};
			gesture="gestureFreeze";
		};
		class Version2
		{
			text="$STR_A3___1_1___Stop";
			speech[]=
			{
				"%1.1",
				"StopE"
			};
			gesture="gestureFreeze";
		};
	};
	class SentCmdExpect: SentCmdExpect
	{
		versions[]=
		{
			"Version1",
			0.5,
			"Version2",
			0.5
		};
		class Version1
		{
			text="$STR_A3___1_1___Stop";
			speech[]=
			{
				"%1.1",
				"StayThere"
			};
		};
		class Version2
		{
			text="$STR_A3___1_1___Stop";
			speech[]=
			{
				"%1.1",
				"WaitForMe"
			};
		};
	};
	class SentCmdHide: SentCmdHide
	{
		versions[]=
		{
			"Version1",
			0.5,
			"Version2",
			0.3,
			"Version3",
			0.2
		};
		class Version1
		{
			text="$STR_A3___1___Take_cover";
			speech[]=
			{
				"%1.1",
				"TakeCoverE"
			};
			gesture="gestureCover";
		};
		class Version2
		{
			text="$STR_A3___1___Take_cover";
			speech[]=
			{
				"%1.1",
				"HideE"
			};
			gesture="gestureCover";
		};
		class Version3
		{
			text="$STR_A3___1___Take_cover";
			speech[]=
			{
				"%1.1",
				"ConcealYourSelfE"
			};
			gesture="gestureCover";
		};
	};
	class SentCmdDismiss: SentCmdDismiss
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="";
			speech[]={};
		};
	};
	class SentNotifyAttack: SentNotifyAttack
	{
		versions[]=
		{
			"Version1",
			0.4,
			"Version2",
			0.6
		};
		class Version1
		{
			text="$STR_A3_Engaging____2";
			speech[]=
			{
				"Copy"
			};
		};
		class Version2
		{
			text="$STR_A3_Engaging____2";
			speech[]=
			{
				"IamAttackingTarget"
			};
		};
	};
	class SentNotifyAttackSubgroup: SentNotifyAttack
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___3_1___Engaging____2";
			speech[]=
			{
				"%3.1",
				"Copy"
			};
		};
	};
	class SentNotifySupport: SentNotifySupport
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3___1_1___Supporting";
			speech[]=
			{
				"%1.1",
				"Supporting"
			};
		};
	};
	class SentConfirmMove: SentConfirmMove
	{
		versions[]=
		{
			"Version1",
			0.3,
			"Version2",
			0.3,
			"Version3",
			0.2,
			"Version4",
			0.2
		};
		class Version1
		{
			text="$STR_A3_Copy";
			speech[]=
			{
				"HC_Affirmative"
			};
			gesture="gestureYes";
		};
		class Version2
		{
			text="$STR_A3_Copy";
			speech[]=
			{
				"Copy"
			};
		};
		class Version3
		{
			text="$STR_A3_Copy";
			speech[]=
			{
				"Understood"
			};
			gesture="gestureYes";
		};
		class Version4
		{
			text="$STR_A3_Copy";
			speech[]=
			{
				"ImOnIt"
			};
			gesture="gestureYes";
		};
	};
	class SentConfirmAttack: SentConfirmAttack
	{
		versions[]=
		{
			"Version1",
			0.2,
			"Version2",
			0.2,
			"Version3",
			0.2,
			"Version4",
			0.2,
			"Version5",
			0.2
		};
		class Version1
		{
			text="$STR_A3_Copy";
			speech[]=
			{
				"Roger"
			};
			gesture="gestureYes";
		};
		class Version2
		{
			text="$STR_A3_Copy";
			speech[]=
			{
				"ImOnIt"
			};
			gesture="gestureYes";
		};
		class Version3
		{
			text="$STR_A3_Copy";
			speech[]=
			{
				"Copy"
			};
			gesture="gestureYes";
		};
		class Version4
		{
			text="$STR_A3_Copy";
			speech[]=
			{
				"IAttack"
			};
			gesture="gestureYes";
		};
		class Version5
		{
			text="$STR_A3_Copy";
			speech[]=
			{
				"IamAttackingTarget"
			};
			gesture="gestureYes";
		};
	};
	class SentConfirmOther: SentConfirmOther
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Copy";
			speech[]=
			{
				"Roger"
			};
			gesture="gestureYes";
		};
	};
	class SelectVehicleMoveSentence: SelectVehicleMoveSentence
	{
		sentences[]=
		{
			"VehicleMoveRecipientsRelative",
			1
		};
	};
	class VehicleMoveGroupRelative: VehicleMoveGroupRelative
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3__mUNIT___Move____mGRPDIS_ABS____mGRPDIR_1";
			speech[]=
			{
				"XMIT",
				"Move",
				"%10",
				"%9.101"
			};
			gesture="gestureGo";
		};
	};
	class VehicleMoveRecipientsRelative: VehicleMoveRecipientsRelative
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3__mUNIT___Move____mGRPDIS_ABS____mGRPDIR_1";
			speech[]=
			{
				"XMIT",
				"Move",
				"%10",
				"%9.101"
			};
			gesture="gestureGo";
		};
	};
	class VehicleMoveToGrid: VehicleMoveToGrid
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3__mUNIT___Move___Grid___mGRID";
			speech[]=
			{
				"XMIT",
				"MoveToPos",
				"%1"
			};
			gesture="gestureGoB";
		};
		class Version2
		{
			text="$STR_A3__mUNIT___Move___Grid___mGRID";
			speech[]=
			{
				"XMIT",
				"grid",
				"%1",
				"Advance"
			};
			gesture="gestureGo";
		};
	};
	class VehicleMoveToObject: VehicleMoveToObject
	{
		versions[]=
		{
			"Version1",
			0.8,
			"Version2",
			0.2
		};
		class Version1
		{
			text="$STR_A3__mUNIT___Move___Grid___mGRID";
			speech[]=
			{
				"XMIT",
				"GoTo",
				"%7"
			};
			gesture="gestureGo";
		};
		class Version2
		{
			text="$STR_A3__mUNIT___Move___Grid___mGRID";
			speech[]=
			{
				"XMIT",
				"GoDir",
				"%7",
				"%8.2"
			};
			gesture="gestureGoB";
		};
	};
	class VehicleMoveLocationRelative: VehicleMoveLocationRelative
	{
		versions[]=
		{
			"Version1",
			"1 - InsideLocation",
			"Version2",
			"InsideLocation"
		};
		class Version1
		{
			text="$STR_A3__mUNIT___Move___Grid___mGRID";
			speech[]=
			{
				"XMIT",
				"Move",
				"%4.101",
				"%5",
				"of",
				"%6"
			};
		};
		class Version2
		{
			text="$STR_A3__mUNIT___Move___Grid___mGRID";
			speech[]=
			{
				"XMIT",
				"MoveTo",
				"%6"
			};
		};
	};
	class VehicleWatchTgt: VehicleWatchTgt
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Watch____1";
			speech[]=
			{
				"XMIT",
				"Watch",
				"%1"
			};
		};
	};
	class VehicleWatchPos: VehicleWatchPos
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Observe____1____2";
			speech[]=
			{
				"XMIT",
				"Watch",
				"%1",
				"%2"
			};
		};
	};
	class VehicleJoin: VehicleJoin
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Keep_formation";
			speech[]=
			{
				"XMIT",
				"StayInFormationE"
			};
		};
	};
	class VehicleFire: VehicleFire
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Engage____1____6_ABS____7_CLCK";
			speech[]=
			{
				"XMIT",
				"obj_target",
				"%1",
				"fireatwill"
			};
		};
	};
	class VehicleTarget: VehicleTarget
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Target____1____6_ABS____7_CLCK";
			speech[]=
			{
				"XMIT",
				"obj_target",
				"%1",
				"direction",
				"%2"
			};
		};
	};
	class VehicleNoTarget: VehicleNoTarget
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Cancel_target";
			speech[]=
			{
				"XMIT",
				"NoTarget"
			};
		};
	};
	class VehicleCeaseFire: VehicleCeaseFire
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Cease_fire";
			speech[]=
			{
				"XMIT",
				"CeaseFire"
			};
		};
	};
	class VehicleForward: VehicleForward
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Forward";
			speech[]=
			{
				"XMIT",
				"Forward"
			};
		};
	};
	class VehicleStop: VehicleStop
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Stop";
			speech[]=
			{
				"XMIT",
				"Halt"
			};
		};
	};
	class VehicleBackward: VehicleBackward
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Backward";
			speech[]=
			{
				"XMIT",
				"Reverse"
			};
		};
	};
	class VehicleFaster: VehicleFaster
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Fast";
			speech[]=
			{
				"XMIT",
				"Fast"
			};
		};
	};
	class VehicleSlower: VehicleSlower
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Slow";
			speech[]=
			{
				"XMIT",
				"Slow"
			};
		};
	};
	class VehicleLeft: VehicleLeft
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Left";
			speech[]=
			{
				"XMIT",
				"Left"
			};
		};
	};
	class VehicleRight: VehicleRight
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Right";
			speech[]=
			{
				"XMIT",
				"Right"
			};
		};
	};
	class VehicleManualFire: VehicleManualFire
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Manual_fire";
			speech[]=
			{
				"XMIT",
				"SwitchingtoManualFire"
			};
		};
	};
	class VehicleCancelManualFire: VehicleCancelManualFire
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Cancel_manual_fire";
			speech[]=
			{
				"XMIT",
				"DisablingManualFire"
			};
		};
	};
	class VehicleDirectFire: VehicleDirectFire
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Fire";
			speech[]=
			{
				"XMIT",
				"Fire"
			};
		};
	};
	class VehicleLoad: VehicleLoad
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Load____1";
			speech[]=
			{
				"%1"
			};
		};
	};
	class VehicleLoadMagazine: VehicleLoadMagazine
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Load____1";
			speech[]=
			{
				"%1"
			};
		};
	};
	class VehicleAzimut: VehicleAzimut
	{
		versions[]=
		{
			"Version1",
			1
		};
		class Version1
		{
			text="$STR_A3_Watch____1";
			speech[]=
			{
				"%1"
			};
		};
	};
	class VehicleFireFailed: VehicleFireFailed
	{
		versions[]=
		{
			"Version1",
			0.5,
			"Version2",
			0.5
		};
		class Version1
		{
			text="$STR_A3_Cannot_fire";
			speech[]=
			{
				"Negative"
			};
		};
		class Version2
		{
			text="$STR_A3_Cannot_fire";
			speech[]=
			{
				"CannotFire"
			};
		};
	};
	class ClausePosition: ClausePosition
	{
		text="$STR_SENT_CLAUSE_POSITION";
		speech[]=
		{
			"%1",
			"%2"
		};
	};
	class ClausePositionNear: ClausePositionNear
	{
		text="$STR_SENT_CLAUSE_POSITION_NEAR";
		speech[]=
		{
			"that",
			"%1",
			"at",
			"%2"
		};
	};
	class Report;
	class SentCovering: CombatShout
	{
		versions[]=
		{
			"Version1",
			0.25,
			"Version2",
			0.25,
			"Version3",
			0.05,
			"Version4",
			0.1,
			"Version5",
			0.1,
			"Version6",
			0.2
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"C_GoImCoveringE"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"C_GoILLCoverE"
			};
		};
		class Version3
		{
			text="";
			speech[]=
			{
				"C_CoveringFireE"
			};
		};
		class Version4
		{
			text="";
			speech[]=
			{
				"C_CoveringGoE"
			};
		};
		class Version5
		{
			text="";
			speech[]=
			{
				"C_MoveOutE"
			};
		};
		class Version6
		{
			text="";
			speech[]=
			{
				"C_GoE"
			};
		};
		class Version7
		{
			text="";
			speech[]=
			{
				"C_MoveE"
			};
		};
	};
	class SentCoverMe: CombatShout
	{
		versions[]=
		{
			"Version2",
			0.3,
			"Version3",
			0.2,
			"Version4",
			0.3,
			"Version5",
			0.2
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"C_EngagingE"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"C_CoverMeE"
			};
		};
		class Version3
		{
			text="";
			speech[]=
			{
				"C_OKLetsGo"
			};
		};
		class Version4
		{
			text="";
			speech[]=
			{
				"C_MovingE"
			};
		};
		class Version5
		{
			text="";
			speech[]=
			{
				"C_GoingE"
			};
		};
	};
	class SentSuppressing: CombatShout
	{
		versions[]=
		{
			"Version1",
			0.4,
			"Version2",
			0.15,
			"Version3",
			0.35,
			"Version4",
			0.1
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"C_SuppresiveFireE"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"C_HangOnILLSuppressE"
			};
		};
		class Version3
		{
			text="";
			speech[]=
			{
				"C_SuppressingE"
			};
		};
		class Version4
		{
			text="";
			speech[]=
			{
				"C_OpenUpE"
			};
		};
	};
	class SentReloading: CombatShout
	{
		versions[]=
		{
			"Version1",
			0.4,
			"Version2",
			0.3,
			"Version3",
			0.05,
			"Version4",
			0.25
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"C_ReloadingE"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"C_IgottaReloadE"
			};
		};
		class Version3
		{
			text="";
			speech[]=
			{
				"C_CoverMeWhileIReloadE"
			};
		};
		class Version4
		{
			text="";
			speech[]=
			{
				"C_ChangingMagsE"
			};
		};
	};
	class SentThrowingGrenade: CombatShout
	{
		versions[]=
		{
			"Version1",
			0.5,
			"Version2",
			0.3,
			"Version3",
			0.2
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"C_FireInTheHoleE"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"C_ThrowingFragE"
			};
		};
		class Version3
		{
			text="";
			speech[]=
			{
				"C_FragOutE"
			};
		};
	};
	class SentThrowingSmoke: CombatShout
	{
		versions[]=
		{
			"Version1",
			0.5,
			"Version2",
			0.5
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"C_ThrowingSmokeNowE"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"C_SmokeOutE"
			};
		};
	};
	class SentIncomingGrenade: CombatShout
	{
		versions[]=
		{
			"Version1",
			0.7,
			"Version2",
			0.3
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"C_GrenadeE"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"C_WatchForGrenadeE"
			};
		};
	};
	class SentEnemyContact: CombatShout
	{
		versions[]=
		{
			"Version1",
			0.25,
			"Version2",
			0.1,
			"Version3",
			0.05,
			"Version4",
			0.15,
			"Version5",
			0.1,
			"Version6",
			0.2,
			"Version7",
			0.1,
			"Version8",
			0.05
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"C_ContactE"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"C_DidYouSeeThatQ"
			};
		};
		class Version3
		{
			text="";
			speech[]=
			{
				"C_FuckSawThatQ"
			};
		};
		class Version4
		{
			text="";
			speech[]=
			{
				"C_TargetE"
			};
		};
		class Version5
		{
			text="";
			speech[]=
			{
				"C_GotATargetE"
			};
		};
		class Version6
		{
			text="";
			speech[]=
			{
				"C_HostilesE"
			};
		};
		class Version7
		{
			text="";
			speech[]=
			{
				"C_RightThereE"
			};
		};
		class Version8
		{
			text="";
			speech[]=
			{
				"C_TakeHimOutE"
			};
		};
	};
	class SentEndangered: CombatShout
	{
		versions[]=
		{
			"Version1",
			0.2,
			"Version2",
			0.15,
			"Version3",
			0.2,
			"Version4",
			0.15,
			"Version5",
			0.1,
			"Version6",
			0.05,
			"Version7",
			0.05,
			"Version8",
			0.1
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"C_TakeCoverE"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"C_ShitE"
			};
		};
		class Version3
		{
			text="";
			speech[]=
			{
				"C_GetDownE"
			};
		};
		class Version4
		{
			text="";
			speech[]=
			{
				"C_HitTheDeckE"
			};
		};
		class Version5
		{
			text="";
			speech[]=
			{
				"C_WhatTheFuckQ"
			};
		};
		class Version6
		{
			text="";
			speech[]=
			{
				"C_WhatTheHellQ"
			};
		};
		class Version7
		{
			text="";
			speech[]=
			{
				"C_WhatTheFuckWasThatQ"
			};
		};
		class Version8
		{
			text="";
			speech[]=
			{
				"C_CheckThatOut"
			};
		};
	};
	class SentRouted: CombatShout
	{
		versions[]=
		{
			"Version1",
			0.5,
			"Version2",
			0.5
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"C_HolyShitE"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"C_OhJesusE"
			};
		};
	};
	class SentWitnessDeadBody: CombatShout
	{
		versions[]=
		{
			"Version1",
			0.05,
			"Version2",
			0.3,
			"Version3",
			0.05,
			"Version4",
			0.2,
			"Version5",
			0.15,
			"Version6",
			0.15,
			"Version7",
			0.1
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"C_WhatAView"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"C_WhatAMess"
			};
		};
		class Version3
		{
			text="";
			speech[]=
			{
				"C_WishIHadntSeeThat"
			};
		};
		class Version4
		{
			text="";
			speech[]=
			{
				"C_ThatSucks"
			};
		};
		class Version5
		{
			text="";
			speech[]=
			{
				"C_MotherfuckerE"
			};
		};
		class Version6
		{
			text="";
			speech[]=
			{
				"C_SweetJesusE"
			};
		};
		class Version7
		{
			text="";
			speech[]=
			{
				"C_SeeThatQE"
			};
		};
	};
	class SentWitnessKilled: CombatShout
	{
		versions[]=
		{
			"Version1",
			0.2,
			"Version2",
			0.1,
			"Version3",
			0.1,
			"Version4",
			0.1,
			"Version5",
			0.05,
			"Version6",
			0.1,
			"Version7",
			0.1,
			"Version8",
			0.1,
			"Version9",
			0.15
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"C_ManDownE"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"C_FuckHesDownE"
			};
		};
		class Version3
		{
			text="";
			speech[]=
			{
				"C_HesDeadE"
			};
		};
		class Version4
		{
			text="";
			speech[]=
			{
				"C_HesGoneE"
			};
		};
		class Version5
		{
			text="";
			speech[]=
			{
				"C_WeLostHimE"
			};
		};
		class Version6
		{
			text="";
			speech[]=
			{
				"C_TheyGotHimE"
			};
		};
		class Version7
		{
			text="";
			speech[]=
			{
				"C_NoE"
			};
		};
		class Version8
		{
			text="";
			speech[]=
			{
				"C_FuckE"
			};
		};
		class Version9
		{
			text="";
			speech[]=
			{
				"C_ManHitE"
			};
		};
	};
	class SentCombatGeneric: CombatShout
	{
		versions[]=
		{
			"Version1",
			0.2,
			"Version2",
			0.15,
			"Version3",
			0.2,
			"Version4",
			0.15
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"C_ScanYourSector"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"C_CarefulJustBeCareful"
			};
		};
		class Version3
		{
			text="";
			speech[]=
			{
				"C_CheckSectors"
			};
		};
		class Version4
		{
			text="";
			speech[]=
			{
				"C_FocusE"
			};
		};
	};
	class SentCheering: CombatShout
	{
		versions[]=
		{
			"Version1",
			0.25,
			"Version2",
			0.25,
			"Version3",
			0.25,
			"Version4",
			0.25
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"C_woohoo1"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"C_woohoo2"
			};
		};
		class Version3
		{
			text="";
			speech[]=
			{
				"C_woohoo3"
			};
		};
		class Version4
		{
			text="";
			speech[]=
			{
				"C_woohoo4"
			};
		};
	};
	class SentScreaming: CombatShout
	{
		versions[]=
		{
			"Version1",
			0.2,
			"Version2",
			0.15,
			"Version3",
			0.2,
			"Version4",
			0.15
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"C_scream1"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"C_scream2"
			};
		};
		class Version3
		{
			text="";
			speech[]=
			{
				"C_scream3"
			};
		};
		class Version4
		{
			text="";
			speech[]=
			{
				"C_scream4"
			};
		};
	};
	class HC_Select
	{
		versions[]=
		{
			"Version1",
			0.33,
			"Version2",
			0.33,
			"Version3",
			0.34
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"Receive1"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"Receive2"
			};
		};
		class Version3
		{
			text="";
			speech[]=
			{
				"Receive3"
			};
		};
	};
	class HC_Move
	{
		versions[]=
		{
			"Version1",
			1,
			"Version2",
			1,
			"Version3",
			1,
			"Version4",
			1
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"HC_Advancing"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"HC_Affirmative"
			};
		};
		class Version3
		{
			text="";
			speech[]=
			{
				"HC_MovingToPosition"
			};
		};
		class Version4
		{
			text="";
			speech[]=
			{
				"HC_OrderReceived"
			};
		};
	};
	class HC_Attack
	{
		versions[]=
		{
			"Version1",
			1,
			"Version2",
			1,
			"Version3",
			1,
			"Version4",
			1,
			"Version5",
			1,
			"Version6",
			1
		};
		class Version1
		{
			text="";
			speech[]=
			{
				"HC_Advancing"
			};
		};
		class Version2
		{
			text="";
			speech[]=
			{
				"HC_Affirmative"
			};
		};
		class Version3
		{
			text="";
			speech[]=
			{
				"HC_OrderReceived"
			};
		};
		class Version4
		{
			text="";
			speech[]=
			{
				"HC_EngagingE"
			};
		};
		class Version5
		{
			text="";
			speech[]=
			{
				"HC_AssaultingEnemyPosition"
			};
		};
		class Version6
		{
			text="";
			speech[]=
			{
				"HC_AttackingE"
			};
		};
	};
	class Arguments: Arguments
	{
		class Direction: Direction
		{
			class Compass1
			{
				class 0
				{
					text="$STR_Q_NORTH";
					speech[]=
					{
						"North"
					};
				};
				class 45
				{
					text="$STR_Q_NORTH_EAST";
					speech[]=
					{
						"NorthEast"
					};
				};
				class 90
				{
					text="$STR_Q_EAST";
					speech[]=
					{
						"East"
					};
				};
				class 135
				{
					text="$STR_Q_SOUTH_EAST";
					speech[]=
					{
						"SouthEast"
					};
				};
				class 180
				{
					text="$STR_Q_SOUTH";
					speech[]=
					{
						"South"
					};
				};
				class 225
				{
					text="$STR_Q_SOUTH_WEST";
					speech[]=
					{
						"SouthWest"
					};
				};
				class 270
				{
					text="$STR_Q_WEST";
					speech[]=
					{
						"West"
					};
				};
				class 315
				{
					text="$STR_Q_NORTH_WEST";
					speech[]=
					{
						"NorthWest"
					};
				};
			};
			class Compass2
			{
				class 0
				{
					text="$STR_A3_Arguments_Direction_Compass2_0_0";
					speech[]=
					{
						"bearing000"
					};
				};
				class 15
				{
					text="$STR_A3_Arguments_Direction_Compass2_15_0";
					speech[]=
					{
						"bearing015"
					};
				};
				class 30
				{
					text="$STR_A3_Arguments_Direction_Compass2_30_0";
					speech[]=
					{
						"bearing030"
					};
				};
				class 45
				{
					text="$STR_A3_Arguments_Direction_Compass2_45_0";
					speech[]=
					{
						"bearing045"
					};
				};
				class 60
				{
					text="$STR_A3_Arguments_Direction_Compass2_60_0";
					speech[]=
					{
						"bearing060"
					};
				};
				class 75
				{
					text="$STR_A3_Arguments_Direction_Compass2_75_0";
					speech[]=
					{
						"bearing075"
					};
				};
				class 90
				{
					text="$STR_A3_Arguments_Direction_Compass2_90_0";
					speech[]=
					{
						"bearing090"
					};
				};
				class 105
				{
					text="$STR_A3_Arguments_Direction_Compass2_105_0";
					speech[]=
					{
						"bearing105"
					};
				};
				class 120
				{
					text="$STR_A3_Arguments_Direction_Compass2_120_0";
					speech[]=
					{
						"bearing120"
					};
				};
				class 135
				{
					text="$STR_A3_Arguments_Direction_Compass2_135_0";
					speech[]=
					{
						"bearing135"
					};
				};
				class 150
				{
					text="$STR_A3_Arguments_Direction_Compass2_150_0";
					speech[]=
					{
						"bearing150"
					};
				};
				class 165
				{
					text="$STR_A3_Arguments_Direction_Compass2_165_0";
					speech[]=
					{
						"bearing165"
					};
				};
				class 180
				{
					text="$STR_A3_Arguments_Direction_Compass2_180_0";
					speech[]=
					{
						"bearing180"
					};
				};
				class 195
				{
					text="$STR_A3_Arguments_Direction_Compass2_195_0";
					speech[]=
					{
						"bearing195"
					};
				};
				class 210
				{
					text="$STR_A3_Arguments_Direction_Compass2_210_0";
					speech[]=
					{
						"bearing210"
					};
				};
				class 225
				{
					text="$STR_A3_Arguments_Direction_Compass2_225_0";
					speech[]=
					{
						"bearing225"
					};
				};
				class 240
				{
					text="$STR_A3_Arguments_Direction_Compass2_240_0";
					speech[]=
					{
						"bearing240"
					};
				};
				class 255
				{
					text="$STR_A3_Arguments_Direction_Compass2_255_0";
					speech[]=
					{
						"bearing255"
					};
				};
				class 270
				{
					text="$STR_A3_Arguments_Direction_Compass2_270_0";
					speech[]=
					{
						"bearing270"
					};
				};
				class 285
				{
					text="$STR_A3_Arguments_Direction_Compass2_285_0";
					speech[]=
					{
						"bearing285"
					};
				};
				class 300
				{
					text="$STR_A3_Arguments_Direction_Compass2_300_0";
					speech[]=
					{
						"bearing300"
					};
				};
				class 315
				{
					text="$STR_A3_Arguments_Direction_Compass2_315_0";
					speech[]=
					{
						"bearing315"
					};
				};
				class 330
				{
					text="$STR_A3_Arguments_Direction_Compass2_330_0";
					speech[]=
					{
						"bearing330"
					};
				};
				class 345
				{
					text="$STR_A3_Arguments_Direction_Compass2_345_0";
					speech[]=
					{
						"bearing345"
					};
				};
				class 360
				{
					text="$STR_A3_Arguments_Direction_Compass2_360_0";
					speech[]=
					{
						"bearing360"
					};
				};
			};
			class Relative1
			{
				class 0
				{
					text="$STR_A3_Arguments_Direction_Relative1_0_0";
					speech[]=
					{
						"InFrontOf"
					};
				};
				class 90
				{
					text="$STR_A3_Arguments_Direction_Relative1_90_0";
					speech[]=
					{
						"RightOf"
					};
				};
				class 180
				{
					text="$STR_A3_Arguments_Direction_Relative1_270_0";
					speech[]=
					{
						"Behind"
					};
				};
				class 270
				{
					text="$STR_A3_Arguments_Direction_Relative1_180_0";
					speech[]=
					{
						"LeftOf"
					};
				};
			};
			class Relative2
			{
				class 0
				{
					text="$STR_A3_Arguments_Direction_Relative1_0_0";
					speech[]=
					{
						"Front"
					};
				};
				class 90
				{
					text="$STR_A3_Arguments_Direction_Relative1_90_0";
					speech[]=
					{
						"Right"
					};
				};
				class 180
				{
					text="$STR_A3_Arguments_Direction_Relative1_270_0";
					speech[]=
					{
						"Rear"
					};
				};
				class 270
				{
					text="$STR_A3_Arguments_Direction_Relative1_180_0";
					speech[]=
					{
						"Left"
					};
				};
			};
			class Relative3
			{
				class 0
				{
					text="$STR_A3_Arguments_Direction_Relative1_0_0";
					speech[]=
					{
						"Front"
					};
				};
				class 90
				{
					text="$STR_A3_Arguments_Direction_Relative1_90_0";
					speech[]=
					{
						"RightFlank"
					};
				};
				class 180
				{
					text="$STR_A3_Arguments_Direction_Relative1_270_0";
					speech[]=
					{
						"Rear"
					};
				};
				class 270
				{
					text="$STR_A3_Arguments_Direction_Relative1_180_0";
					speech[]=
					{
						"LeftFlank"
					};
				};
			};
		};
	};
	class CuratorWaypointPlaced
	{
		versions[]=
		{
			"Normal_OnTheWay",
			"(1 - Stealth) * 1",
			"Stealth_OnTheWay",
			"(Stealth) * 1",
			"Normal_Confirmation1",
			"(1 - Stealth) * 1",
			"Stealth_Confirmation1",
			"(Stealth) * 1",
			"Normal_Confirmation2",
			"(1 - Stealth) * 1",
			"Stealth_Confirmation2",
			"(Stealth) * 1"
		};
		class Normal_OnTheWay
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"OnTheWay"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_OnTheWay
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"OnTheWay"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_Confirmation1
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_MovingToPosition"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_Confirmation1
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_MovingToPosition"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_Confirmation2
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_Affirmative"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_Confirmation2
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_Affirmative"
			};
			text="";
			wordsClass="Stealth";
		};
	};
	class CuratorWaypointPlacedAttack
	{
		versions[]=
		{
			"Normal_CopyIAmOnHim",
			"(1 - Stealth) * 1",
			"Stealth_CopyIAmOnHim",
			"(Stealth) * 1",
			"Normal_LockAndLoad",
			"(1 - Stealth) * 1",
			"Stealth_LockAndLoad",
			"(Stealth) * 1",
			"Normal_TargetAcquired",
			"(1 - Stealth) * 1",
			"Stealth_TargetAcquired",
			"(Stealth) * 1",
			"Normal_TargetInSight",
			"(1 - Stealth) * 1",
			"Stealth_TargetInSight",
			"(Stealth) * 1"
		};
		class Normal_CopyIAmOnHim
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ImOnIt"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_CopyIAmOnHim
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ImOnIt"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_LockAndLoad
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_EngagingE"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_LockAndLoad
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_EngagingE"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_TargetAcquired
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"TargetAcquired"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_TargetAcquired
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"TargetAcquired"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_TargetInSight
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"TargetInSight"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_TargetInSight
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"TargetInSight"
			};
			text="";
			wordsClass="Stealth";
		};
	};
	class CuratorObjectPlaced
	{
		versions[]=
		{
			"Normal_AwaitingOrders",
			"(1 - Stealth) * 1",
			"Stealth_AwaitingOrders",
			"(Stealth) * 1",
			"Normal_IAmReady",
			"(1 - Stealth) * 1",
			"Stealth_IAmReady",
			"(Stealth) * 1",
			"Normal_ReadyForOrders",
			"(1 - Stealth) * 1",
			"Stealth_ReadyForOrders",
			"(Stealth) * 1",
			"Normal_StandingBy",
			"(1 - Stealth) * 1",
			"Stealth_StandingBy",
			"(Stealth) * 1",
			"Normal_Waiting",
			"(1 - Stealth) * 1",
			"Stealth_Waiting",
			"(Stealth) * 1"
		};
		class Normal_AwaitingOrders
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"AwaitingOrders"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_AwaitingOrders
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"AwaitingOrders"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_IAmReady
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ReadyForOrders"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_IAmReady
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ReadyForOrders"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_ReadyForOrders
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"Ready"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_ReadyForOrders
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"Ready"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_StandingBy
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"StandingBy"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_StandingBy
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"StandingBy"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_Waiting
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"Waiting"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_Waiting
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"Waiting"
			};
			text="";
			wordsClass="Stealth";
		};
	};
	class curatorObjectDestroyed
	{
		versions[]=
		{
			"Normal_ScreamingE",
			"(1 - Stealth) * 1",
			"Stealth_ScreamingE",
			"(Stealth) * 1"
		};
		class Normal_ScreamingE
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ScreamingE"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_ScreamingE
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ScreamingE"
			};
			text="";
			wordsClass="Stealth";
		};
	};
	class curatorModuleCAS
	{
		versions[]=
		{
			"Normal_RequestAcknowledgedSGCASBombing",
			"(1 - Stealth) * 1",
			"Stealth_RequestAcknowledgedSGCASBombing",
			"(Stealth) * 1",
			"Normal_RequestAcknowledgedSGCASHelicopter",
			"(1 - Stealth) * 1",
			"Stealth_RequestAcknowledgedSGCASHelicopter",
			"(Stealth) * 1"
		};
		class Normal_RequestAcknowledgedSGCASBombing
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"RequestAcknowledgedSGCASBombing"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_RequestAcknowledgedSGCASBombing
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"RequestAcknowledgedSGCASBombing"
			};
			text="";
			wordsClass="Stealth";
		};
		class Normal_RequestAcknowledgedSGCASHelicopter
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"RequestAcknowledgedSGCASHelicopter"
			};
			text="";
			wordsClass="Normal";
		};
		class Stealth_RequestAcknowledgedSGCASHelicopter
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"RequestAcknowledgedSGCASHelicopter"
			};
			text="";
			wordsClass="Stealth";
		};
	};
#include "alice.hpp"