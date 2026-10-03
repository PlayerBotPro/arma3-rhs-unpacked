
#define INVENTORY_CATEGORY uniform
	///! UNIFORMS
	class Uniform_Base;

	class rhs_uniform_flora: Uniform_Base
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_flora)
		dlc = "RHS_AFRF";
		scope = 2;
		displayName = "$STR_RHS_FLORAMSV_NAME";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhs_msv_rifleman";
			containerClass = "Supply40";
			mass = 40;
		};
	};

	class rhs_uniform_df15: rhs_uniform_flora
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_df15)
		displayName = "$STR_RHS_DF152_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_pilot_base";
		};
	};

	class rhs_uniform_df15_tan: rhs_uniform_df15
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_df15_tan)
		displayName = "$STR_RHS_DF152_TAN_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_pilot_tan_base";
		};
	};

	class rhs_uniform_msv_emr: rhs_uniform_flora
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_msv_emr)
		displayName = "$STR_RHS_EMRSUMMERMSV_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_msv_emr_rifleman";
		};
		scope = 1;
	};

/* 	class rhs_uniform_msv_emr_alt: rhs_uniform_msv_emr
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_msv_emr_alt)
		displayName = "$STR_RHS_EMRALT_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_uniform_msv_emr_alt";
		};
	}; */

	class rhs_uniform_mvd_izlom: rhs_uniform_flora
	{
		author = "tema";
		INVENTORY_PICTURE(rhs_uniform_mvd_izlom)
		displayName = "$STR_RHS_IZLOM_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_mvd_izlom_rifleman";
		};
	};

	class rhs_uniform_vdv_emr: rhs_uniform_flora
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_vdv_emr)
		displayName = "$STR_RHS_EMRSUMMERVDV_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_vdv_emr_patchless";
		};
	};

	class rhs_uniform_vdv_emr_des: rhs_uniform_flora
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_vdv_emr_des)
		displayName = "$STR_RHS_EMRDESERTVDV_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_vdv_des_rifleman";
		};
	};

	class rhs_uniform_vdv_flora: rhs_uniform_flora
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_vdv_flora)
		displayName = "$STR_RHS_FLORAVDV_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_vdv_flora_rifleman";
		};
	};

	class rhs_uniform_vmf_flora: rhs_uniform_flora
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_vmf_flora)
		displayName = "$STR_RHS_FLORAVMF_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_vmf_flora_rifleman";
		};
	};
	class rhs_uniform_vmf_flora_subdued: rhs_uniform_vmf_flora
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_vmf_flora_subdued)
		displayName = "$STR_RHS_FLORAVMF_SUBDUED_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_vmf_flora_rifleman_subdued";
		};
	};
	class rhs_uniform_rva_flora: rhs_uniform_flora
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_rva_flora)
		displayName = "$STR_RHS_FLORARVA_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_rva_crew";
		};
	};

	class rhs_uniform_vdv_mflora: rhs_uniform_flora
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_vdv_mflora)
		displayName = "$STR_RHS_MOUNTAINFLORAVDV_NAME";
		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_vdv_mflora_rifleman";
		};
	};

	class rhs_uniform_mflora_patchless: rhs_uniform_flora
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_mflora_patchless)
		displayName = "$STR_RHS_MOUNTAINFLORA_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_msv_mflora_rifleman_patchless";
		};
	};

	class rhs_uniform_emr_des_patchless: rhs_uniform_flora
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_emr_des_patchless)
		displayName = "$STR_RHS_EMRDESERT_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_emr_des_rifleman_patchless";
		};
	};

	class rhs_uniform_flora_patchless: rhs_uniform_flora
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_flora_patchless)
		displayName = "$STR_RHS_FLORA_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_msv_rifleman_patchless";
		};
	};

	class rhs_uniform_flora_patchless_alt: rhs_uniform_flora
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_flora_patchless_alt)
		displayName = "$STR_RHS_FLORA_ALT_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_msv_rifleman_patchless_alt";
		};
	};

	class rhs_uniform_emr_patchless: rhs_uniform_flora
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_emr_patchless)
		displayName = "$STR_RHS_EMRSUMMER_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_msv_emr_rifleman_patchless";
		};
	};

	class rhs_uniform_m88_patchless: rhs_uniform_flora
	{
		scope = 1;
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_m88_patchless)
		displayName = "$STR_RHS_M88_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_msv_rifleman_m88_patchless";
		};
	};

	class rhs_uniform_gorka_r_y: rhs_uniform_flora
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_gorka_r_y)
		displayName = "$STR_RHS_GORKARY_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_vdv_gorka_r_y_rifleman";
		};
	};

	class rhs_uniform_gorka_r_g: rhs_uniform_gorka_r_y
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_gorka_r_g)
		displayName = "$STR_RHS_GORKARG_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_vdv_gorka_r_g_rifleman";
		};
	};
	class rhs_uniform_gorka_r_y_gloves: rhs_uniform_gorka_r_y
	{
		AUTHOR_MACRO
		displayName = "$STR_RHS_GORKARY_GLOVES_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_vdv_gorka_r_y_gloves_rifleman";
		};
	};

	class rhs_uniform_gorka_r_g_gloves: rhs_uniform_gorka_r_g
	{
		AUTHOR_MACRO
		displayName = "$STR_RHS_GORKARG_GLOVES_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_vdv_gorka_r_g_gloves_rifleman";
		};
	};

	class rhs_uniform_gorka_1_a: rhs_uniform_flora
	{
		scope = 2; // Change to 2 and it will be visible in Arsenal
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_gorka_1_a)
		displayName = "Gorka 1 (Afghanka)"; //Strings will go here

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_vdv_gorka_1_a_rifleman";
		};
	};
	class rhs_uniform_gorka_1_b: rhs_uniform_gorka_1_a
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_gorka_1_b)
		displayName = "Gorka 1 (Berezka)"; //Strings will go here

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_vdv_gorka_1_b_rifleman";
		};
	};

	class rhs_uniform_invisible: rhs_uniform_gorka_r_y
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_invisible)
		displayName = "Invisibru";
		scope = 1;

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_invisible_man";
		};
	};
	
	//Lodu Uniforms
	//Afghanka
	class rhs_uniform_afghanka: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka)
		displayName = "M88";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_base";
		};
	};
	class rhs_uniform_afghanka_boots: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_boots)
		displayName = "M88 Sapogi";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_boots_base";
		};
	};
	class rhs_uniform_afghanka_ttsko: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_ttsko)
		displayName = "M88 (TTsKO)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_ttsko_base";
		};
	};
	class rhs_uniform_afghanka_boots_ttsko: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_boots_ttsko)
		displayName = "M88 Sapogi (TTsKO)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_boots_ttsko_base";
		};
	};
	class rhs_uniform_afghanka_ttsko_2: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_ttsko_2)
		displayName = "M88 (TTsKO/Alt)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_ttsko_2_base";
		};
	};
	class rhs_uniform_afghanka_boots_ttsko_2: rhs_uniform_flora
	{
		scope = 0;													//NEED BOOT PANTS TEXTURE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_boots_ttsko_2)
		displayName = "M88 Sapogi (TTsKO/Alt)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_boots_ttsko_2_base";
		};
	};
	class rhs_uniform_afghanka_klmk: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_klmk)
		displayName = "M88 (KLMK)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_klmk_base";
		};
	};
	class rhs_uniform_afghanka_boots_klmk: rhs_uniform_flora
	{
		scope = 0;													//NEED BOOT PANTS TEXTURE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_boots_klmk)
		displayName = "M88 Sapogi (KLMK)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_boots_klmk_base";
		};
	};
	class rhs_uniform_afghanka_spetsodezhda: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_spetsodezhda)
		displayName = "M88 (Spetsodezhda)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_spetsodezhda_base";
		};
	};
	class rhs_uniform_afghanka_boots_spetsodezhda: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_boots_spetsodezhda)
		displayName = "M88 Sapogi (Spetsodezhda)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_boots_spetsodezhda_base";
		};
	};
	class rhs_uniform_afghanka_grey: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_grey)
		displayName = "M88 (Grey)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_grey_base";
		};
	};
	class rhs_uniform_afghanka_boots_grey: rhs_uniform_flora
	{
		scope = 0;													//NEED BOOT PANTS TEXTURE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_boots_grey)
		displayName = "M88 Sapogi (Grey)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_boots_grey_base";
		};
	};
	class rhs_uniform_afghanka_wdl: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_wdl)
		displayName = "M88 (Woodland)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_wdl_base";
		};
	};
	class rhs_uniform_afghanka_boots_wdl: rhs_uniform_flora
	{
		scope = 0;													//NEED BOOT PANTS TEXTURE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_boots_wdl)
		displayName = "M88 Sapogi (Woodland)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_boots_wdl_base";
		};
	};
	class rhs_uniform_afghanka_moldovan_ttsko_cold: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_moldovan_ttsko_cold)
		displayName = "M88 (Moldovan TTsKO Cold)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_moldovan_ttsko_cold_base";
		};
	};
	class rhs_uniform_afghanka_boots_moldovan_ttsko_cold: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_boots_moldovan_ttsko_cold)
		displayName = "M88 Sapogi (Moldovan TTsKO Cold)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_boots_moldovan_ttsko_cold_base";
		};
	};
	class rhs_uniform_afghanka_moldovan_ttsko_hot: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_moldovan_ttsko_hot)
		displayName = "M88 (Moldovan TTsKO Hot)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_moldovan_ttsko_hot_base";
		};
	};
	class rhs_uniform_afghanka_boots_moldovan_ttsko_hot: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_boots_moldovan_ttsko_hot)
		displayName = "M88 Sapogi (Moldovan TTsKO Hot)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_boots_moldovan_ttsko_hot_base";
		};
	};
	class rhs_uniform_afghanka_moldovan_ttsko_desat: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_moldovan_ttsko_desat)
		displayName = "M88 (Moldovan TTsKO Desaturated)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_moldovan_ttsko_desat_base";
		};
	};
	class rhs_uniform_afghanka_boots_moldovan_ttsko_desat: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_boots_moldovan_ttsko_desat)
		displayName = "M88 Sapogi (Moldovan TTsKO Desaturated)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_boots_moldovan_ttsko_desat_base";
		};
	};
	class rhs_uniform_afghanka_moldovan_ttsko_blue: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_moldovan_ttsko_blue)
		displayName = "M88 (Moldovan TTsKO Blue)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_moldovan_ttsko_blue_base";
		};
	};
	class rhs_uniform_afghanka_boots_moldovan_ttsko_blue: rhs_uniform_flora
	{
		scope = 0;													//NEED BOOT PANTS TEXTURE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_boots_moldovan_ttsko_blue)
		displayName = "M88 Sapogi (Moldovan TTsKO Blue)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_boots_moldovan_ttsko_blue_base";
		};
	};
	class rhs_uniform_afghanka_vsr_1: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_vsr_1)
		displayName = "M88 (VSR 1)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_vsr_1_base";
		};
	};
	class rhs_uniform_afghanka_boots_vsr_1: rhs_uniform_flora
	{
		scope = 0;													//NEED BOOT PANTS TEXTURE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_boots_vsr_1)
		displayName = "M88 Sapogi (VSR 1)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_boots_vsr_1_base";
		};
	};
	class rhs_uniform_afghanka_vsr_2: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_vsr_2)
		displayName = "M88 (VSR 2)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_vsr_2_base";
		};
	};
	class rhs_uniform_afghanka_boots_vsr_2: rhs_uniform_flora
	{
		scope = 0;													//NEED BOOT PANTS TEXTURE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_boots_vsr_2)
		displayName = "M88 Sapogi (VSR 2)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_boots_vsr_2_base";
		};
	};
	class rhs_uniform_afghanka_vsr_3: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_vsr_3)
		displayName = "M88 (VSR 3)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_vsr_3_base";
		};
	};
	class rhs_uniform_afghanka_boots_vsr_3: rhs_uniform_flora
	{
		scope = 0;													//NEED BOOT PANTS TEXTURE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_boots_vsr_3)
		displayName = "M88 Sapogi (VSR 3)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_boots_vsr_3_base";
		};
	};
	
	//Winter Afghanka
	class rhs_uniform_afghanka_winter: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_winter)
		displayName = "M88 Winter";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_winter_base";
		};
	};
	class rhs_uniform_afghanka_winter_boots: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_winter_boots)
		displayName = "M88 Winter Sapogi";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_winter_boots_base";
		};
	};
	class rhs_uniform_afghanka_winter_ttsko: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_winter_ttsko)
		displayName = "M88 Winter (TTsKO)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_winter_ttsko_base";
		};
	};
	class rhs_uniform_afghanka_winter_boots_ttsko: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_winter_boots_ttsko)
		displayName = "M88 Winter Sapogi (TTsKO)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_winter_boots_ttsko_base";
		};
	};
	class rhs_uniform_afghanka_winter_vsr: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_winter_vsr)
		displayName = "M88 Winter (VSR 1)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_winter_vsr_base";
		};
	};
	class rhs_uniform_afghanka_winter_boots_vsr: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_winter_boots_vsr)
		displayName = "M88 Winter Sapogi (VSR 1)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_winter_boots_vsr_base";
		};
	};
	class rhs_uniform_afghanka_winter_vsr_2: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_winter_vsr_2)
		displayName = "M88 Winter (VSR 2)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_winter_vsr_2_base";
		};
	};
	class rhs_uniform_afghanka_winter_boots_vsr_2: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_winter_boots_vsr_2)
		displayName = "M88 Winter Sapogi (VSR 2)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_winter_boots_vsr_2_base";
		};
	};
	class rhs_uniform_afghanka_winter_vsr_3: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_winter_vsr_3)
		displayName = "M88 Winter (VSR 3)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_winter_vsr_3_base";
		};
	};
	class rhs_uniform_afghanka_winter_boots_vsr_3: rhs_uniform_flora
	{
		scope = 0;														//NEED BOOT PANTS TEXTURE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_winter_boots_vsr_3)
		displayName = "M88 Winter Sapogi (VSR 3)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_winter_boots_vsr_3_base";
		};
	};
	class rhs_uniform_afghanka_winter_moldovan_ttsko: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_winter_moldovan_ttsko)
		displayName = "M88 Winter (Moldovan TTsKO)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_winter_moldovan_ttsko_base";
		};
	};
	class rhs_uniform_afghanka_winter_boots_moldovan_ttsko: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_winter_boots_moldovan_ttsko)
		displayName = "M88 Winter Sapogi (Moldovan TTsKO)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_winter_boots_moldovan_ttsko_base";
		};
	};
	class rhs_uniform_afghanka_winter_spetsodezhda: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_winter_spetsodezhda)
		displayName = "M88 Winter (Spetsodezhda)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_winter_spetsodezhda_base";
		};
	};
	class rhs_uniform_afghanka_winter_boots_spetsodezhda: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_winter_boots_spetsodezhda)
		displayName = "M88 Winter Sapogi (Spetsodezhda)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_winter_boots_spetsodezhda_base";
		};
	};
	
	//Para Afghanka
	class rhs_uniform_afghanka_para: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_para)
		displayName = "M88 VDV";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_para_base";
		};
	};
	class rhs_uniform_afghanka_para_ttsko: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_para_ttsko)
		displayName = "M88 VDV (TTsKO Airborne)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_para_ttsko_base";
		};
	};
	class rhs_uniform_afghanka_para_ttsko_2: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_para_ttsko_2)
		displayName = "M88 VDV (TTsKO)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_para_ttsko_2_base";
		};
	};
	class rhs_uniform_afghanka_para_vsr: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_para_vsr)
		displayName = "M88 VDV (VSR 1)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_para_vsr_base";
		};
	};
	class rhs_uniform_afghanka_para_vsr_2: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_afghanka_para_vsr_2)
		displayName = "M88 VDV (VSR 2)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_afghanka_para_vsr_2_base";
		};
	};
	
	//Omon uniform
	class rhs_uniform_omon: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_omon)
		displayName = "Omon Uniform";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_omon_base";
		};
	};
	
	//Cossack uniform
	class rhs_uniform_cossack: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_cossack)
		displayName = "Cossack Uniform";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_cossack_base";
		};
	};
	
	//KLMK Oversuit
	class rhs_uniform_klmk_oversuit: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_klmk_oversuit)
		displayName = "KLMK Oversuit";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_klmk_oversuit_base";
		};
	};
	
	///---Lodu Ratnik Gear---///
	class rhs_uniform_vkpo: rhs_uniform_flora
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_vkpo)
		displayName = "$STR_RHS_VKPO_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_vkpo_base";
		};
	};
	class rhs_uniform_vkpo_alt: rhs_uniform_vkpo
	{
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_vkpo_alt)
		displayName = "$STR_RHS_VKPO_ALT_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_vkpo_alt_base";
		};
	};

	class rhs_uniform_vkpo_gloves: rhs_uniform_vkpo
	{
		LODU_SCOPE
		AUTHOR_MACRO
		//INVENTORY_PICTURE(rhs_uniform_vkpo_gloves)
		displayName = "$STR_RHS_VKPO_GLOVES_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_vkpo_gloves_base";
		};
	};

	class rhs_uniform_vkpo_gloves_alt: rhs_uniform_vkpo_alt
	{
		AUTHOR_MACRO
		//INVENTORY_PICTURE(rhs_uniform_vkpo_gloves_alt)
		displayName = "$STR_RHS_VKPO_GLOVES_ALT_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_vkpo_gloves_alt_base";
		};
	};

	class rhs_uniform_6sh122_v1: rhs_uniform_vkpo
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_6sh122_v1)
		displayName = "$STR_RHS_6Sh122_V1_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_6sh122_v1_base";
		};
	};
	class rhs_uniform_6sh122_v2: rhs_uniform_6sh122_v1
	{
		LODU_SCOPE
		AUTHOR_MACRO
		INVENTORY_PICTURE(rhs_uniform_6sh122_v2)
		displayName = "$STR_RHS_6Sh122_V2_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_6sh122_v2_base";
		};
	};
	class rhs_uniform_6sh122_gloves_v1: rhs_uniform_6sh122_v1
	{
		LODU_SCOPE
		AUTHOR_MACRO
		//INVENTORY_PICTURE(rhs_uniform_6sh122_gloves_v1)
		displayName = "$STR_RHS_6Sh122_GLOVES_V1_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_6sh122_gloves_v1_base";
		};
	};
	class rhs_uniform_6sh122_gloves_v2: rhs_uniform_6sh122_v2
	{
		LODU_SCOPE
		AUTHOR_MACRO
		//INVENTORY_PICTURE(rhs_uniform_6sh122_gloves_v2)
		displayName = "$STR_RHS_6Sh122_GLOVES_V2_NAME";

		class ItemInfo: ItemInfo
		{
			uniformClass = "rhs_6sh122_gloves_v2_base";
		};
	};
	
	