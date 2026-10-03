/**
 * @class CfgFactionClasses
 * @brief Injection point of factions.
 */
class CfgFactionClasses
{
	/**
	 * @class rhs_faction_msv
	 * @brief MSV
	 * @ingroup factions
	 */
	class rhs_faction_msv
	{
		displayName = STR_FAC(MSV);
		priority = -9;
		side = 0;
		icon = "\rhsafrf\addons\rhs_main\data\icons\msv.paa";
		flag = "\rhsafrf\addons\rhs_main\data\flag_rus_co.paa";
		backpack_tf_faction_radio_api = "tf_bussole";
	};

	/**
	 * @class rhs_faction_vdv
	 * @brief VDV
	 * @ingroup factions
	 */
	class rhs_faction_vdv: rhs_faction_msv
	{
		displayName = STR_FAC(VDV);
		priority = -8;
		icon = "\rhsafrf\addons\rhs_main\data\icons\vdv.paa";
	};

	class rhs_faction_vdv_45: rhs_faction_msv
	{
		displayName = STR_FAC(VDV_45);
		priority = -8;
		icon = "\rhsafrf\addons\rhs_main\data\icons\vdv.paa";
	};

	/**
	 * @class rhs_faction_vmf
	 * @brief VMF
	 * @ingroup factions
	 */
	class rhs_faction_vmf: rhs_faction_msv
	{
		displayName = STR_FAC(VMF);
		priority = -7;
		icon = "\rhsafrf\addons\rhs_main\data\icons\vmf.paa";
	};

	/**
	 * @class rhs_faction_vv
	 * @brief VV
	 * @ingroup factions
	 */
	class rhs_faction_vv: rhs_faction_msv
	{
		displayName = STR_FAC(VV);
		priority = -6;
		icon = "\rhsafrf\addons\rhs_main\data\icons\vv.paa";
	};

	/**
	 * @class rhs_faction_tv
	 * @brief TV
	 * @ingroup factions
	 */
	class rhs_faction_tv: rhs_faction_msv
	{
		displayName = STR_FAC(TV);
		priority = -5;
		icon = "\rhsafrf\addons\rhs_main\data\icons\tv.paa";
	};

	/**
	 * @class rhs_faction_vpvo
	 * @brief VPVO
	 * @ingroup factions
	 */
	class rhs_faction_vpvo: rhs_faction_msv
	{
		displayName = STR_FAC(VPVO);
		priority = -4;
		icon = "\rhsafrf\addons\rhs_main\data\icons\vpvo.paa";
	};

	/**
	 * @class rhs_faction_vvs
	 * @brief VVS
	 * @ingroup factions
	 */
	class rhs_faction_vvs: rhs_faction_msv
	{
		displayName = STR_FAC(VVS);
		priority = -3;
		icon = "\rhsafrf\addons\rhs_main\data\icons\vvs_g.paa";
	};

	/**
	 * @class rhs_faction_vvs_c
	 * @brief VVS Camo
	 * @ingroup factions
	 */
	class rhs_faction_vvs_c: rhs_faction_msv
	{
		displayName = STR_FAC(VVS_C);
		priority = -2;
		icon = "\rhsafrf\addons\rhs_main\data\icons\vvs_c.paa";
	};

	/**
	 * @class rhs_faction_rva
	 * @brief RVA
	 * @ingroup factions
	 */
	class rhs_faction_rva: rhs_faction_msv
	{
		displayName = STR_FAC(RVA);
		priority = -1;
		icon = "\rhsafrf\addons\rhs_main\data\icons\rva.paa";
	};
};