class rhs_group_nato_usmc_recon_wd_infantry
{
	name = "$STR_RHSUSF_VEHCLASS_INFANTRY_RECON";
	aliveCategory="Infantry";

	class rhs_group_nato_usmc_recon_wd_infantry_team
	{
		name = "$STR_RHSUSF_GROUPS_TEAM";
		faction = "rhs_faction_usmc_wd";
		side = 1;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

		class Unit0 // TL / Grenadier
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_teamleader";
			rank = "SERGEANT";
			position[] = {0,5,0};
		};
		class Unit1 // Ass TL / Marksman
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_marksman";
			rank = "SERGEANT";
			position[] = {-5,0,0};
		};
		class Unit2 // RTO
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_autorifleman";
			rank = "CORPORAL";
			position[] = {3,0,0};
		};
		class Unit3 // RTO Assistant
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_rifleman_at";
			rank = "CORPORAL";
			position[] = {5,0,0};
		};
		class Unit4 // Point Man
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_rifleman";
			rank = "CORPORAL";
			position[] = {7,0,0};
		};
		class Unit5 // Slackman / MG 
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_machinegunner_m249";
			rank = "CORPORAL";
			position[] = {9,0,0};
		};
	};

	class rhs_group_nato_usmc_recon_wd_infantry_team_MG
	{
		name = "$STR_RHSUSF_GROUPS_TEAM_MG";
		faction = "rhs_faction_usmc_wd";
		side = 1;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

		class Unit0 // TL / Grenadier
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_teamleader";
			rank = "SERGEANT";
			position[] = {0,5,0};
		};
		class Unit1 // Ass TL / Marksman
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_marksman";
			rank = "SERGEANT";
			position[] = {-5,0,0};
		};
		class Unit2 // RTO
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_autorifleman";
			rank = "CORPORAL";
			position[] = {3,0,0};
		};
		class Unit3 // RTO Assistant
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_rifleman_at";
			rank = "CORPORAL";
			position[] = {5,0,0};
		};
		class Unit4 // Point Man
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_rifleman";
			rank = "CORPORAL";
			position[] = {7,0,0};
		};
		class Unit5 // Slackman / MG 
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_machinegunner";
			rank = "CORPORAL";
			position[] = {9,0,0};
		};
	};

	class rhs_group_nato_usmc_recon_wd_infantry_team_support
	{
		name = "$STR_RHSUSF_GROUPS_TEAM_SUPPORT";
		faction = "rhs_faction_usmc_wd";
		side = 1;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";

		class Unit0 // TL / Grenadier
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_teamleader";
			rank = "SERGEANT";
			position[] = {0,5,0};
		};
		class Unit1 // Ass TL / Marksman
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_marksman";
			rank = "SERGEANT";
			position[] = {-5,0,0};
		};
		class Unit2 // RTO
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_autorifleman";
			rank = "CORPORAL";
			position[] = {3,0,0};
		};
		class Unit3 // SARC
		{
			side = 1;
			vehicle = "rhsusf_navy_sarc_w";
			rank = "CORPORAL";
			position[] = {5,0,0};
		};
		class Unit4 // Point Man
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_rifleman";
			rank = "CORPORAL";
			position[] = {7,0,0};
		};
		class Unit5 // Slackman / MG 
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_machinegunner_m249";
			rank = "CORPORAL";
			position[] = {9,0,0};
		};
	};

	class rhs_group_nato_usmc_recon_wd_infantry_team_lite
	{
		name = "$STR_RHSUSF_GROUPS_TEAM_LITE";
		faction = "rhs_faction_usmc_wd";
		side = 1;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

		class Unit0 // TL / Grenadier
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_teamleader_lite";
			rank = "SERGEANT";
			position[] = {0,5,0};
		};
		class Unit1 // Ass TL / Marksman
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_marksman_lite";
			rank = "SERGEANT";
			position[] = {-5,0,0};
		};
		class Unit2 // RTO
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_autorifleman_lite";
			rank = "CORPORAL";
			position[] = {3,0,0};
		};
		class Unit3 // RTO Assistant
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_rifleman_at_lite";
			rank = "CORPORAL";
			position[] = {5,0,0};
		};
		class Unit4 // Point Man
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_rifleman_lite";
			rank = "CORPORAL";
			position[] = {7,0,0};
		};
		class Unit5 // Slackman / MG 
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_machinegunner_m249_lite";
			rank = "CORPORAL";
			position[] = {9,0,0};
		};
	};

	class rhs_group_nato_usmc_recon_wd_infantry_team_fast
	{
		name = "$STR_RHSUSF_GROUPS_TEAM_FAST";
		faction = "rhs_faction_usmc_wd";
		side = 1;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

		class Unit0 // TL / Grenadier
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_teamleader_fast";
			rank = "SERGEANT";
			position[] = {0,5,0};
		};
		class Unit1 // Ass TL / Marksman
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_marksman_fast";
			rank = "SERGEANT";
			position[] = {-5,0,0};
		};
		class Unit2 // RTO
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_autorifleman_fast";
			rank = "CORPORAL";
			position[] = {3,0,0};
		};
		class Unit3 // RTO Assistant
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_rifleman_at_fast";
			rank = "CORPORAL";
			position[] = {5,0,0};
		};
		class Unit4 // Point Man
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_rifleman_fast";
			rank = "CORPORAL";
			position[] = {7,0,0};
		};
		class Unit5 // Slackman / MG 
		{
			side = 1;
			vehicle = "rhsusf_usmc_recon_marpat_wd_machinegunner_m249_fast";
			rank = "CORPORAL";
			position[] = {9,0,0};
		};
	};
};
				
			