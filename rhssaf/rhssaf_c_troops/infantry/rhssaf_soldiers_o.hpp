
#define SAF_AIRFORCE_OPFOR_MACRO \
	faction = rhssaf_faction_airforce_opfor; \
	side = 0; \
	author=$STR_RHS_AUTHOR_FULL;\
	scope = 2;\
	scopeCurator = 2;

#define SSAF_AIRFORCE_OPFOR_HIDE_MACRO \
	faction = rhssaf_faction_airforce_opfor; \
	side = 0; \
	author=$STR_RHS_AUTHOR_FULL;\
	scope = 1;\
	scopeCurator = 1;

//- SAF (KOV)
class rhssaf_airforce_o_pilot_transport_heli : rhssaf_airforce_pilot_transport_heli {SAF_AIRFORCE_OPFOR_MACRO};
class rhssaf_airforce_o_pilot_mig29: rhssaf_airforce_pilot_mig29 {SAF_AIRFORCE_OPFOR_MACRO};
