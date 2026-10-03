#define FILEMACRO(PREFIX,FILEPATH) \
class cfgDistanceFilters { \
	class PREFIX##_defaultDistanceFilter { \
		type = "lowPassFilter"; \
		minCutoffFrequency = 250; \
		qFactor = 1.25; \
		innerRange = 10; \
		range = 2300; \
		powerFactor = 26; \
	}; \
	class PREFIX##_rifleShotDistanceFilter { \
		type = "lowPassFilter"; \
		minCutoffFrequency = 250; \
		qFactor = 1.25; \
		innerRange = 10; \
		range = 2300; \
		powerFactor = 26; \
	}; \
	class PREFIX##_exploLargeDistanceFilter { \
		type = "lowPassFilter"; \
		minCutoffFrequency = 250; \
		qFactor = 1.25; \
		innerRange = 100; \
		range = 4000; \
		powerFactor = 26; \
	}; \
	class PREFIX##_exploSmallDistanceFilter { \
		type = "lowPassFilter"; \
		minCutoffFrequency = 250; \
		qFactor = 1.25; \
		innerRange = 50; \
		range = 3300; \
		powerFactor = 26; \
	}; \
};

/*************************************************************************************/
FILEMACRO(PREFIX,FILEPATH)
#undef FILEMACRO
/*************************************************************************************/
