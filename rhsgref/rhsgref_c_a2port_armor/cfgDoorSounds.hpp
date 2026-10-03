//dev branch door sounds thing
class CfgAnimationSourceSounds
{
	class ServoRampSound_2;
	class RHS_BRDM2_9P148
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"rhsgref\addons\rhsgref_c_a2port_armor\data\rhs_brdm2_9p148_sound.wav",db+6,1,60};
			sound[] = {"sound0",1};
		};
		class DoorMovementDone1
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.98,0.99])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsSlam_1",1.16228,1,60};
			sound[] = {"sound0",1};
		};
		class DoorMovementDone2
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.02,0.01])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\RollDoors\RollDoorsSlam_2",1.16228,1,60};
			sound[] = {"sound0",1};
		};
	};
	class RHS_BRDM2_9P148_turret_servo: ServoRampSound_2
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\vehicles\armor\noises\servo_tank_turret_02",db+6,1,60};
			sound[] = {"sound0",1};
		};
	};

};