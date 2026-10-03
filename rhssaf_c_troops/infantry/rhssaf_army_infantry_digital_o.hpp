
#define SAF_ARMY_OPFOR_MACRO \
	faction = rhssaf_faction_army_opfor; \
	side = 0; \
	author=$STR_RHS_AUTHOR_FULL;\
	scope = 2;\
	scopeCurator = 2;

#define SAF_ARMY_OPFOR_HIDE_MACRO \
	faction = rhssaf_faction_army_opfor; \
	side = 0; \
	author=$STR_RHS_AUTHOR_FULL;\
	scope = 1;\
	scopeCurator = 1;

//- SAF (Digital)
class rhssaf_army_o_m10_digital_rifleman_m21 : rhssaf_army_m10_digital_rifleman_m21 {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_rifleman_m70: rhssaf_army_m10_digital_rifleman_m70 {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_rifleman_ammo : rhssaf_army_m10_digital_rifleman_ammo {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_gl : rhssaf_army_m10_digital_gl {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_mgun_m84 : rhssaf_army_m10_digital_mgun_m84 {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_asst_mgun : rhssaf_army_m10_digital_asst_mgun {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_sq_lead : rhssaf_army_m10_digital_sq_lead {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_ft_lead : rhssaf_army_m10_digital_ft_lead {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_sniper_m76 : rhssaf_army_m10_digital_sniper_m76 {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_spotter : rhssaf_army_m10_digital_spotter {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_rifleman_at : rhssaf_army_m10_digital_rifleman_at {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_spec_at : rhssaf_army_m10_digital_spec_at {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_spec_aa : rhssaf_army_m10_digital_spec_aa {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_asst_spec_at : rhssaf_army_m10_digital_asst_spec_at {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_asst_spec_aa : rhssaf_army_m10_digital_asst_spec_aa {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_medic : rhssaf_army_m10_digital_medic {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_repair : rhssaf_army_m10_digital_repair {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_exp : rhssaf_army_m10_digital_exp {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_engineer : rhssaf_army_m10_digital_engineer {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_crew : rhssaf_army_m10_digital_crew {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_crew_armored : rhssaf_army_m10_digital_crew_armored {SAF_ARMY_OPFOR_MACRO};
class rhssaf_army_o_m10_digital_officer : rhssaf_army_m10_digital_officer {SAF_ARMY_OPFOR_MACRO};
