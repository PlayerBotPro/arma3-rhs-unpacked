class Wheels: Wheels
{
	class L1: L1
	{
		springStrength = 56624;
		springDamperRate = 18119;
	};
	class L2: L1
	{
		boneName="wheel_1_2_damper";
		steering=0;
		maxHandBrakeTorque=36000;
		center="wheel_1_2_axis";
		boundary="wheel_1_2_bound";
		suspForceAppPointOffset="wheel_1_2_axis";
		tireForceAppPointOffset="wheel_1_2_axis";
	};
	class L3: L1
	{
		boneName="wheel_1_3_damper";
		steering=0;
		maxHandBrakeTorque=36000;
		center="wheel_1_3_axis";
		boundary="wheel_1_3_bound";
		suspForceAppPointOffset="wheel_1_3_axis";
		tireForceAppPointOffset="wheel_1_3_axis";
	};
	class R1: L1
	{
		boneName="wheel_2_1_damper";
		center="wheel_2_1_axis";
		boundary="wheel_2_1_bound";
		suspForceAppPointOffset="wheel_2_1_axis";
		tireForceAppPointOffset="wheel_2_1_axis";
		suspTravelDirection[]	= SUSPTRAVELDIR_RIGHT;
		steering=1;
		side="right";
	};
	class R2: R1
	{
		boneName="wheel_2_2_damper";
		steering=0;
		maxHandBrakeTorque=36000;
		center="wheel_2_2_axis";
		boundary="wheel_2_2_bound";
		suspForceAppPointOffset="wheel_2_2_axis";
		tireForceAppPointOffset="wheel_2_2_axis";
	};
	class R3: R1
	{
		boneName="wheel_2_3_damper";
		steering=0;
		maxHandBrakeTorque=36000;
		center="wheel_2_3_axis";
		boundary="wheel_2_3_bound";
		suspForceAppPointOffset="wheel_2_3_axis";
		tireForceAppPointOffset="wheel_2_3_axis";
	};
};
/// End of PhysX