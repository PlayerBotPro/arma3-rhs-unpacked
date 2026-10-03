#define FILEMACRO(PREFIX,FILEPATH) \
class CfgSound3DProcessors{ \
	class PREFIX##_Default_3DProcessingType { \
		type = panner; \
		innerRange = 10; \
		rangeCurve = "LinearCurve"; \
		range = 1800; \
	}; \
	class PREFIX##_Shot_light_3DProcessingType { \
		type = panner; \
		innerRange = 1; \
		range = 25; \
		rangeCurve = "InverseSquare2Curve"; \
	}; \
	class PREFIX##_Shot_medium_3DProcessingType { \
		type = panner; \
		innerRange = 1; \
		range = 32; \
		rangeCurve = "InverseSquare2Curve"; \
	}; \
	class PREFIX##_rifleBulletCrack_3DProcessingType { \
		type = "panner"; \
		innerRange = 1; \
		range = 7; \
		rangeCurve = "LinearCurve"; \
	}; \
	class PREFIX##_Shot_internalMG_3DProcessingType { \
		type = panner; \
		innerRange = 2; \
		range = 26; \
		rangeCurve = "InverseSquare2Curve"; \
	}; \
	class PREFIX##_Shot_internalCannon_3DProcessingType { \
		type = panner; \
		innerRange = 5; \
		range = 50; \
		rangeCurve = "InverseSquare2Curve"; \
	}; \
	class PREFIX##_Tail_3DProcessingType { \
		type = panner; \
		innerRange = 10; \
		range = 990; \
		rangeCurve = "InverseSquare3Curve"; \
	}; \
	class PREFIX##_cannonTail_3DProcessingType { \
		type = panner; \
		innerRange = 20; \
		range = 1290; \
		rangeCurve = "InverseSquare3Curve"; \
	}; \
	class PREFIX##_katyusha_3DProcessingType { \
		type = panner; \
		innerRange = 20; \
		range = 400; \
		rangeCurve = "InverseSquare3Curve"; \
	}; \
};

/*************************************************************************************/
FILEMACRO(PREFIX,FILEPATH)
#undef FILEMACRO
/*************************************************************************************/

