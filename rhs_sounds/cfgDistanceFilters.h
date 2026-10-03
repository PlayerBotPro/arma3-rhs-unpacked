class cfgDistanceFilters
{
	class RHS_defaultDistanceFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 150;
		qFactor = 1;
		innerRange = 400;
		range = 2600;
		powerFactor = 32;
	};
	class RHS_rifleTailDistanceFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 150;
		qFactor = 1;
		innerRange = 350;
		range = 1800;
		powerFactor = 32;
	};
	class RHS_vehicletDistanceFilter {
		type = "lowPassFilter";
		minCutoffFrequency = 550;
		qFactor = 1.0;
		innerRange = 0;
		range = 2;
		powerFactor = 16;
	};
};