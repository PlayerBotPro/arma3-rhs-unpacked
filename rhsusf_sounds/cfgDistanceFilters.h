class cfgDistanceFilters
{
	class RHSUSF_defaultDistanceFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 150;
		qFactor = 1;
		innerRange = 400;
		range = 2600;
		powerFactor = 32;
	};
	class RHSUSF_rifleTailDistanceFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 150;
		qFactor = 1;
		innerRange = 350;
		range = 1800;
		powerFactor = 32;
	};
};