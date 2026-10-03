#define FILEMACRO(PREFIX,FILEPATH) \
class CfgSounds { \
	sounds[] = {}; \
	/**/ \
	class PREFIX##_boltSnap_pk { \
		name = ##PREFIX##_boltSnap_pk; \
		sound[] = {##FILEPATH##\specific\pk\boltSnap, 1.63, 1, 110}; \
		titles[] = {}; \
	}; \
	/**/ \
	class PREFIX##_rattle_pk_1 { \
		name = PREFIX##_rattle_pk_1; \
		sound[] = {##FILEPATH##\specific\pk\rattle_1, 1.39, 1, 76}; \
		titles[] = {}; \
	}; \
	class PREFIX##_rattle_pk_2 { \
		name = PREFIX##_rattle_pk_2; \
		sound[] = {##FILEPATH##\specific\pk\rattle_2, 1.39, 1, 76}; \
		titles[] = {}; \
	}; \
	class PREFIX##_rattle_pk_3 { \
		name = PREFIX##_rattle_pk_3; \
		sound[] = {##FILEPATH##\specific\pk\rattle_3, 1.39, 1, 76}; \
		titles[] = {}; \
	}; \
	class PREFIX##_rattle_pk_4 { \
		name = PREFIX##_rattle_pk_4; \
		sound[] = {##FILEPATH##\specific\pk\rattle_4, 1.39, 1, 76}; \
		titles[] = {}; \
	}; \
	class PREFIX##_rattle_pk_5 { \
		name = PREFIX##_rattle_pk_5; \
		sound[] = {##FILEPATH##\specific\pk\rattle_5, 1.39, 1, 76}; \
		titles[] = {}; \
	}; \
	class PREFIX##_rattle_pk_6 { \
		name = PREFIX##_rattle_pk_6; \
		sound[] = {##FILEPATH##\specific\pk\rattle_6, 1.39, 1, 76}; \
		titles[] = {}; \
	}; \
};

/*************************************************************************************/
FILEMACRO(PREFIX,FILEPATH)
#undef FILEMACRO
/*************************************************************************************/
