#define FILEMACRO(PREFIX,FILEPATH) \
class cfgDistanceFilters { \
	class PREFIX##_defaultDistanceFilter { \
		type = "lowPassFilter"; \
		minCutoffFrequency = 150; \
		qFactor = 1.3; \
		innerRange = 10; \
		range = 2600; \
		powerFactor = 32; \
	}; \
	class PREFIX##_rifleShotDistanceFilter { \
		type = "lowPassFilter"; \
		minCutoffFrequency = 200; \
		qFactor = 1.3; \
		innerRange = 10; \
		range = 2000; \
		powerFactor = 32; \
	}; \
};

/*************************************************************************************/
FILEMACRO(PREFIX,FILEPATH)
#undef FILEMACRO
/*************************************************************************************/
 