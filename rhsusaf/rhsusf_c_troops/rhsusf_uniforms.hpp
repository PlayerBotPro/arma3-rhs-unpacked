
#define INVENTORY_CATEGORY uniform
	///! UNIFORMS
	class Uniform_Base;

	class rhs_uniform_g3_mc : Uniform_Base
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_g3_mc)

		dlc = "RHS_USAF";

		scope = 2;

		displayName = "G3 Uniform (Multicam)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_socom_mc_uniform";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_g3_m81 : Uniform_Base
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_g3_m81)

		dlc = "RHS_USAF";

		scope = 2;

		displayName = "G3 Uniform (M81)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_socom_g3_m81_uniform";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_g3_aor2 : Uniform_Base
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_g3_aor2)

		dlc = "RHS_USAF";

		scope = 2;

		displayName = "G3 Uniform (AOR2)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_socom_g3_aor2_uniform";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_g3_tan : Uniform_Base
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_g3_tan)

		dlc = "RHS_USAF";

		scope = 2;

		displayName = "G3 Uniform (Tan)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_socom_g3_tan_uniform";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_g3_rgr : Uniform_Base
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_g3_rgr)

		dlc = "RHS_USAF";

		scope = 2;

		displayName = "G3 Uniform (Ranger Green)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_socom_g3_rgr_uniform";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_g3_blk : Uniform_Base
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_g3_blk)

		dlc = "RHS_USAF";

		scope = 2;

		displayName = "G3 Uniform (Black)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_socom_g3_blk_uniform";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_cu_ocp : Uniform_Base
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_cu_ocp)

		dlc = "RHS_USAF";

		scope = 2;
		///! TODO: Put name in stringtable and add picture
		displayName = "Combat Uniform OCP";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_army_ocp_crewman";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class rhs_uniform_cu_ucp : rhs_uniform_cu_ocp
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_cu_ucp)

		///! TODO: Put name in stringtable and add picture
		displayName = "Combat Uniform UCP";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_army_ucp_crewman";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_cu_ocp_1stcav : rhs_uniform_cu_ocp
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_cu_ocp_1stcav)

		///! TODO: Put name in stringtable and add picture
		displayName = "Combat Uniform OCP (1st Cavalry Div.)";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_army_ocp_rifleman_1stcav";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_cu_ucp_1stcav : rhs_uniform_cu_ucp
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_cu_ucp_1stcav)

		///! TODO: Put name in stringtable and add picture
		displayName = "Combat Uniform UCP (1st Cavalry Div.)";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_army_ucp_rifleman_1stcav";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_cu_ocp_82nd : rhs_uniform_cu_ocp
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_cu_ocp_82nd)

		///! TODO: Put name in stringtable and add picture
		displayName = "Combat Uniform OCP (82nd Airborne Div.)";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_army_ocp_rifleman_82nd";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_cu_ucp_82nd : rhs_uniform_cu_ucp
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_cu_ucp_82nd)

		///! TODO: Put name in stringtable and add picture
		displayName = "Combat Uniform UCP (82nd Airborne Div.)";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_army_ucp_rifleman_82nd";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_cu_ocp_101st : rhs_uniform_cu_ocp
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_cu_ocp_101st)

		///! TODO: Put name in stringtable and add picture
		displayName = "Combat Uniform OCP (101st Airborne Div.)";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_army_ocp_rifleman_101st";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_cu_ucp_101st : rhs_uniform_cu_ucp
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_cu_ucp_101st)

		///! TODO: Put name in stringtable and add picture
		displayName = "Combat Uniform UCP (101st Airborne Div.)";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_army_ucp_rifleman_101st";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_cu_ocp_10th : rhs_uniform_cu_ocp
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_cu_ocp_10th)

		///! TODO: Put name in stringtable and add picture
		displayName = "Combat Uniform OCP (10th Mountain Div.)";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_army_ocp_rifleman_10th";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_cu_ucp_10th : rhs_uniform_cu_ucp
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_cu_ucp_10th)

		///! TODO: Put name in stringtable and add picture
		displayName = "Combat Uniform UCP (10th Mountain Div.)";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_army_ucp_rifleman_10th";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	// Patchless kept for compatibility sake
	class rhs_uniform_cu_ucp_patchless : rhs_uniform_cu_ocp
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_cu_ucp_patchless)

		scope = 1;
	};
	class rhs_uniform_cu_ocp_patchless : rhs_uniform_cu_ucp
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_cu_ocp_patchless)

		scope = 1;
	};

	class rhs_uniform_FROG01_d : rhs_uniform_cu_ocp
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_FROG01_d)

		displayName = "FROG MARPAT-D";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_usmc_marpat_d_crewman";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class rhs_uniform_FROG01_wd : rhs_uniform_FROG01_d
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_FROG01_wd)

		scope = 2;
		displayName = "FROG MARPAT-WD";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_usmc_marpat_wd_rifleman";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class rhs_uniform_FROG01_m81 : rhs_uniform_g3_m81
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_FROG01_m81)

		scope = 1;
		displayName = "FROG M81";
	};

	class rhs_uniform_acu_ucp : Uniform_Base
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_acu_ucp)

		dlc = "RHS_USAF";

		scope = 2;

		displayName = "Army Combat Uniform (UCP)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_army_acu_uniform";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	
	class rhs_uniform_acu_ucp2 : rhs_uniform_acu_ucp
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_acu_ucp)

		dlc = "RHS_USAF";

		scope = 2;

		displayName = "Army Combat Uniform IR Flag (UCP)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_army_acu2_uniform";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_acu_ucpd : rhs_uniform_acu_ucp
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_acu_ucpd)

		dlc = "RHS_USAF";

		scope = 2;

		displayName = "Army Combat Uniform (UCP-D)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_army_acu_ucpd_uniform";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_acu_oefcp : rhs_uniform_acu_ucp
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_acu_oefcp)

		dlc = "RHS_USAF";

		scope = 2;

		displayName = "Army Combat Uniform (OEF-CP)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_army_acu_oefcp_uniform";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	//Placeholder for testing. Needs 2nd gen ACU model...
	class rhs_uniform_acu_ocp : rhs_uniform_acu_ucp
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_acu_ocp)

		dlc = "RHS_USAF";

		scope = 2;

		displayName = "Army Combat Uniform (OCP)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_army_acu_ocp_uniform";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_abu : Uniform_Base
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_abu)

		dlc = "RHS_USAF";

		scope = 2;

		displayName = "Airman Battle Uniform";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_airforce_abu_uniform";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_bdu_erdl : Uniform_Base
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_bdu_erdl)

		dlc = "RHS_USAF";

		scope = 2;

		displayName = "Battle Dress Uniform (ERDL)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhsusf_army_bdu_erdl_uniform";
			containerClass = "Supply40";
			mass = 40;
		};
	};
