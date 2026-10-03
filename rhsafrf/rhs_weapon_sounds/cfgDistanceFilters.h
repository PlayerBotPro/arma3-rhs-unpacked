class cfgDistanceFilters {
	class RHS_defaultDistanceFilter {
		type = "lowPassFilter";
		minCutoffFrequency = 150;
		qFactor = 1.3;
		innerRange = 400;
		range = 2600;
		powerFactor = 32;
	};
	class RHS_rifleShotDistanceFilter {
		type = "lowPassFilter";
		minCutoffFrequency = 250;
		qFactor = 1.3;
		innerRange = 150;
		range = 1800;
		powerFactor = 32;
	};
};