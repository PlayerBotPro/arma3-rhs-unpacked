
#define CDF_NGD_BLUFOR_MACRO \
	faction = rhsgref_faction_cdf_ng_b; \
	side = 1; \
	author=$STR_RHS_AUTHOR_FULL;\
	scope = 2;\
	scopeCurator = 2;
#define CDF_NGD_BLUFOR_HIDE_MACRO \
	faction = rhsgref_faction_cdf_ng_b; \
	side = 1; \
	author=$STR_RHS_AUTHOR_FULL;\
	scope = 1;\
	scopeCurator = 1;

//- CDF (National Guard)
class rhsgref_cdf_b_ngd_rifleman : rhsgref_cdf_ngd_rifleman {CDF_NGD_BLUFOR_MACRO};
class rhsgref_cdf_b_ngd_rifleman_rpg75: rhsgref_cdf_ngd_rifleman_rpg75 {CDF_NGD_BLUFOR_MACRO};
class rhsgref_cdf_b_ngd_rifleman_m92 : rhsgref_cdf_ngd_rifleman_m92 {CDF_NGD_BLUFOR_HIDE_MACRO};
class rhsgref_cdf_b_ngd_rifleman_ak74 : rhsgref_cdf_ngd_rifleman_ak74 {CDF_NGD_BLUFOR_MACRO};
class rhsgref_cdf_b_ngd_rifleman_lite : rhsgref_cdf_ngd_rifleman_lite {CDF_NGD_BLUFOR_MACRO};
class rhsgref_cdf_b_ngd_grenadier : rhsgref_cdf_ngd_grenadier {CDF_NGD_BLUFOR_MACRO};
class rhsgref_cdf_b_ngd_machinegunner : rhsgref_cdf_ngd_machinegunner {CDF_NGD_BLUFOR_MACRO};
class rhsgref_cdf_b_ngd_officer : rhsgref_cdf_ngd_officer {CDF_NGD_BLUFOR_MACRO};
class rhsgref_cdf_b_ngd_squadleader : rhsgref_cdf_ngd_squadleader {CDF_NGD_BLUFOR_MACRO};
class rhsgref_cdf_b_ngd_grenadier_rpg : rhsgref_cdf_ngd_grenadier_rpg {CDF_NGD_BLUFOR_MACRO};
class rhsgref_cdf_b_ngd_medic : rhsgref_cdf_ngd_medic {CDF_NGD_BLUFOR_MACRO};
class rhsgref_cdf_b_ngd_engineer : rhsgref_cdf_ngd_engineer {CDF_NGD_BLUFOR_MACRO};
class rhsgref_cdf_b_ngd_crew : rhsgref_cdf_ngd_crew {CDF_NGD_BLUFOR_MACRO};
