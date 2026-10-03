//dev branch door sounds thing
class CfgAnimationSourceSounds
{
	class RHS_HMMWV_Door
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 0;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_1",0.562341,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_2",0.562341,1,20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_3",0.562341,1,20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\MetalDoors\MetalDoorsSqueak_4",0.562341,1,20};
			sound[] = {"sound0",0.2,"sound1",0.2,"sound2",0.4,"sound3",0.2};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = {"\rhsusf\addons\rhsusf_a2port_car\sounds\hmmwv\hmmwv_open_door",db+6,1,20};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
			sound0[] = {"\rhsusf\addons\rhsusf_a2port_car\sounds\hmmwv\hmmwv_slam_door",db+6,1,20};
			sound[] = {"sound0",1};
		};
	};

	class RHSUSF_Truck_Door
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"\rhsusf\addons\rhsusf_a2port_car\sounds\truck\truck_ext_getout",db+12,1,60};
			sound1[] = {"\rhsusf\addons\rhsusf_a2port_car\sounds\truck\truck_int_getout",db+12,1,60};
			sound[] = {"sound0",0.5,"sound1",0.5};
		};
	};

	class RHS_Gearbox
	{
		class GearMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"\rhsusf\addons\rhsusf_a2port_car\sounds\Gear_Change",db+14,1,60};
			sound[] = {"sound0",1};
		};
	};
	class RHS_Wipers
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"\rhsusf\addons\rhsusf_a2port_car\sounds\wipers.wss",db+8,1,60};
			sound[] = {"sound0",1};
		};
	};
};