#define FILEMACRO(PREFIX,FILEPATH) \
class CfgSounds { \
	sounds[] = {}; \
	/**/ \
	class PREFIX##_boltSnap_m249 { \
		name = ##PREFIX##_boltSnap_m249; \
		sound[] = {##FILEPATH##\specific\m249\boltSnap, 1.53, 1, 110}; \
		titles[] = {}; \
	}; \
	class PREFIX##_boltSnap_m240 { \
		name = ##PREFIX##_boltSnap_m240; \
		sound[] = {##FILEPATH##\specific\m240\boltSnap, 1.63, 1, 110}; \
		titles[] = {}; \
	}; \
	/**/ \
	class PREFIX##_rattle_m249_1 { \
		name = PREFIX##_rattle_m249_1; \
		sound[] = {##FILEPATH##\specific\m249\rattle_1, 1.39, 1, 76}; \
		titles[] = {}; \
	}; \
	class PREFIX##_rattle_m249_2 { \
		name = PREFIX##_rattle_m249_2; \
		sound[] = {##FILEPATH##\specific\m249\rattle_2, 1.39, 1, 76}; \
		titles[] = {}; \
	}; \
	class PREFIX##_rattle_m249_3 { \
		name = PREFIX##_rattle_m249_3; \
		sound[] = {##FILEPATH##\specific\m249\rattle_3, 1.39, 1, 76}; \
		titles[] = {}; \
	}; \
	class PREFIX##_rattle_m249_4 { \
		name = PREFIX##_rattle_m249_4; \
		sound[] = {##FILEPATH##\specific\m249\rattle_4, 1.39, 1, 76}; \
		titles[] = {}; \
	}; \
	class PREFIX##_rattle_m249_5 { \
		name = PREFIX##_rattle_m249_5; \
		sound[] = {##FILEPATH##\specific\m249\rattle_5, 1.39, 1, 76}; \
		titles[] = {}; \
	}; \
	class PREFIX##_rattle_m249_6 { \
		name = PREFIX##_rattle_m249_6; \
		sound[] = {##FILEPATH##\specific\m249\rattle_6, 1.39, 1, 76}; \
		titles[] = {}; \
	}; \
}; 

/*************************************************************************************/
FILEMACRO(PREFIX,FILEPATH)
#undef FILEMACRO
/*************************************************************************************/
