
#define CDF_REG_BLUFOR_MACRO \
	faction = rhsgref_faction_cdf_ground_b; \
	side = 1; \
	author=$STR_RHS_AUTHOR_FULL;\
	scope = 2;\
	scopeCurator = 2;

#define CDF_REG_BLUFOR_HIDE_MACRO \
	faction = rhsgref_faction_cdf_ng_b; \
	side = 1; \
	author=$STR_RHS_AUTHOR_FULL;\
	scope = 1;\
	scopeCurator = 1;

#define CDF_REG_AIR_BLUFOR_MACRO \
	faction = rhsgref_faction_cdf_air_b; \
	side = 1; \
	author=$STR_RHS_AUTHOR_FULL;\
	scope = 2;\
	scopeCurator = 2;

//- CDF (Regular)
class rhsgref_cdf_b_reg_arifleman_rpk : rhsgref_cdf_reg_arifleman_rpk {CDF_REG_BLUFOR_MACRO};
class rhsgref_cdf_b_reg_rifleman : rhsgref_cdf_reg_rifleman {CDF_REG_BLUFOR_MACRO};
class rhsgref_cdf_b_reg_rifleman_rpg75: rhsgref_cdf_reg_rifleman_rpg75 {CDF_REG_BLUFOR_MACRO};
class rhsgref_cdf_b_reg_rifleman_m70 : rhsgref_cdf_reg_rifleman_m70 {CDF_REG_BLUFOR_HIDE_MACRO};
class rhsgref_cdf_b_reg_rifleman_aks74 : rhsgref_cdf_reg_rifleman_aks74 {CDF_REG_BLUFOR_MACRO};
class rhsgref_cdf_b_reg_rifleman_akm : rhsgref_cdf_reg_rifleman_akm {CDF_REG_BLUFOR_MACRO};
class rhsgref_cdf_b_reg_rifleman_lite : rhsgref_cdf_reg_rifleman_lite {CDF_REG_BLUFOR_MACRO};
class rhsgref_cdf_b_reg_grenadier : rhsgref_cdf_reg_grenadier {CDF_REG_BLUFOR_MACRO};
class rhsgref_cdf_b_reg_machinegunner : rhsgref_cdf_reg_machinegunner {CDF_REG_BLUFOR_MACRO};
class rhsgref_cdf_b_reg_marksman : rhsgref_cdf_reg_marksman {CDF_REG_BLUFOR_MACRO};
class rhsgref_cdf_b_reg_general : rhsgref_cdf_reg_general {CDF_REG_BLUFOR_MACRO};
class rhsgref_cdf_b_reg_officer : rhsgref_cdf_reg_officer {CDF_REG_BLUFOR_MACRO};
class rhsgref_cdf_b_reg_squadleader : rhsgref_cdf_reg_squadleader {CDF_REG_BLUFOR_MACRO};
class rhsgref_cdf_b_reg_grenadier_rpg : rhsgref_cdf_reg_grenadier_rpg {CDF_REG_BLUFOR_MACRO};
class rhsgref_cdf_b_reg_specialist_aa : rhsgref_cdf_reg_specialist_aa {CDF_REG_BLUFOR_MACRO};
class rhsgref_cdf_b_reg_medic : rhsgref_cdf_reg_medic {CDF_REG_BLUFOR_MACRO};
class rhsgref_cdf_b_reg_engineer : rhsgref_cdf_reg_engineer {CDF_REG_BLUFOR_MACRO};
class rhsgref_cdf_b_reg_crew : rhsgref_cdf_reg_crew {CDF_REG_BLUFOR_MACRO};
class rhsgref_cdf_b_reg_crew_commander : rhsgref_cdf_reg_crew_commander {CDF_REG_BLUFOR_MACRO};


//- CDF (Air Force)
class rhsgref_cdf_b_air_pilot : rhsgref_cdf_air_pilot {CDF_REG_AIR_BLUFOR_MACRO};
