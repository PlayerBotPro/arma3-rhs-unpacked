#define FILEMACRO(PREFIX,FILEPATH) \
class CfgSound3DProcessors { \
	class PREFIX##_vehicleRain_3DProcessingType { \
		type = "panner"; \
		innerRange = 3; \
		range = 10; \
		rangeCurve = "InverseSquare2Curve"; \
	}; \
	class PREFIX##_PlaneExt_3DProcessingType { \
		type = "emitter"; \
		innerRange = 13; \
		range = 25; \
		radius = 7; \
	}; \
	class PREFIX##_HeliExt_3DProcessingType { \
		type = "panner"; \
		innerRange = 10; \
		range = 25; \
		rangeCurve = "InverseSquare3Curve"; \
	}; \
	class PREFIX##_HeliReverb_3DProcessingType { \
		type = "panner"; \
		innerRange = 400; \
		range = 700; \
		rangeCurve = "InverseSquare2Curve"; \
	}; \
	class PREFIX##_PlaneExt_Middle_3DProcessingType { \
		type = "panner"; \
		innerRange = 0; \
		range = 350; \
		rangeCurve = "InverseSquare2Curve"; \
	}; \
	class PREFIX##_PlaneExt_Distant_3DProcessingType { \
		type = "panner"; \
		innerRange = 0; \
		range = 1400; \
		rangeCurve = "InverseSquare3Curve"; \
	}; \
};

/*************************************************************************************/
FILEMACRO(PREFIX,FILEPATH)
#undef FILEMACRO
/*************************************************************************************/
