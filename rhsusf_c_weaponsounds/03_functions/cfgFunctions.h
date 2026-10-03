#define FILEMACRO(PREFIX,SCRIPTPATH) \
class CfgFunctions { \
	class PREFIX## { \
		tag = ##PREFIX##; \
		class functions { \
			class boltSnap { \
				file = ##SCRIPTPATH##\03_functions\boltSnap.sqf; \
				description = Handles the sound of the initial forward-snapping of weapons that operate from an open bolt; \
			}; \
			class beltRattle { \
				file = ##SCRIPTPATH##\03_functions\beltRattle.sqf; \
				description = Handles the belt rattling sounds.; \
			}; \
			class openBolt { \
				file = ##SCRIPTPATH##\03_functions\openBolt.sqf; \
				description = ""; \
			}; \
		}; \
	}; \
};

/*************************************************************************************/
FILEMACRO(PREFIX,SCRIPTPATH)
#undef FILEMACRO
/*************************************************************************************/
