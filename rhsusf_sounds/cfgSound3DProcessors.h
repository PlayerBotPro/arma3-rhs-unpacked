class CfgSound3DProcessors
{
	class RHSUSF_Sniper_crackling_3DProcessingType
	{
		type = "panner";
		innerRange = 60;
		range = 370;
		// rangeCurve = "InverseSquare2Curve";
		rangeCurve[] = {{0,1},{370,0}};
	};
	class RHSUSF_Cannon_3DProcessingType
	{
		type = "panner";
		innerRange = 100;
		range = 100;
		rangeCurve = "InverseSquare2Curve";
		//rangeCurve[] = {{0,1},{770,0}};
	};
};