class cfgDistanceFilters {
	class RHSUSF_defaultDistanceFilter {
		type = "lowPassFilter";
		minCutoffFrequency = 150;
		qFactor = 1.3;
		innerRange = 400;
		range = 2600;
		powerFactor = 32;
	};
	class RHSUSF_rifleShotDistanceFilter {
		type = "lowPassFilter";
		minCutoffFrequency = 250;
		qFactor = 1.3;
		innerRange = 150;
		range = 1800;
		powerFactor = 32;
	};
	class RHSUSF_vehicletDistanceFilter {
		type = "lowPassFilter";
		minCutoffFrequency = 550;
		qFactor = 1.0;
		innerRange = 0;
		range = 2;
		powerFactor = 16;
	};
};