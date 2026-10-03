class CfgSound3DProcessors{
	class RHSGREF_Default_3DProcessingType {
		type = panner;
		innerRange = 10;
		rangeCurve = "LinearCurve";
		range = 1800;
	};
	/*
	class RHSGREF_Shot_3DProcessingType {
		type = panner;
		innerRange = 1.5;
		rangeCurve = "InverseSquare4Curve";
		range = 20;
	};
	*/
	class RHSGREF_Shot_light_3DProcessingType {
		type = "panner";
		innerRange = 0;
		range = 5;
		rangeCurve = "Smooth1Curve";
	};
	class RHSGREF_Shot_medium_3DProcessingType {
		type = "panner";
		innerRange = 0;
		range = 5;
		rangeCurve = "LinearCurve";
	};
	/*
	class RHSGREF_Tail_3DProcessingType {
		type = panner;
		innerRange = 10;
		rangeCurve = "InverseSquare2Curve";
		range = 1200;
	};
	*/
	class RHSGREF_Tail_3DProcessingType {
		type = "panner";
		innerRange = 5;
		range = 190;
		rangeCurve = "InverseSquare2Curve";
	};
};