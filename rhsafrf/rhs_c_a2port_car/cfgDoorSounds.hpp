//dev branch door sounds thing
class CfgAnimationSourceSounds
{
	class RHS_UAZ_Door
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak1",db+6,1,60};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak2",db+6,1,60};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak3",db+6,1,60};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak4",db+6,1,60};
			sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = {"\rhsafrf\addons\rhs_vehiclesounds\sounds\shared\rhs_uaz_door_open",db+12,1,60};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
			sound0[] = {"\rhsafrf\addons\rhs_vehiclesounds\sounds\shared\rhs_uaz_door_close",db+12,1,60};
			sound[] = {"sound0",1};
		};
	};

	class RHS_Ural_Door
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak1",db+6,1,60};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak2",db+6,1,60};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak3",db+6,1,60};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak4",db+6,1,60};
			sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = {"\rhsafrf\addons\rhs_vehiclesounds\sounds\shared\rhs_ural_door_open",db+12,1,60};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
			sound0[] = {"\rhsafrf\addons\rhs_vehiclesounds\sounds\shared\rhs_ural_door_close",db+12,1,60};
			sound[] = {"sound0",1};
		};
	};
	class RHS_Gearbox
	{
		class GearMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"\rhsafrf\addons\rhs_a2port_car\sounds\Gear_Change",db+14,1,60};
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
			sound0[] = {"\rhsafrf\addons\rhs_gaz66\data\sounds\wipers.wss",db+8,1,60};
			sound[] = {"sound0",1};
		};
	};
};