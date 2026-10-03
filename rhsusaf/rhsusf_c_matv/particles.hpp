
class CfgCloudlets
{
	class Default;
	class MachineGunCartridge2;
	class rhs_rhino_dst_01 : MachineGunCartridge2
	{
		interval = 5.56;
		lifeTime = 25;
		size[] = { 1 };
		sizeVar = 0;
		position[] = { 0, 0, 0 };
		moveVelocity[] = { 0, 2, 0 };
		rotationVelocity = 1;
		rotationVelocityVar = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		particleShape = "\rhsusf\addons\rhsusf_matv\rhs_rhino_dst_part1.p3d";
	};
	class rhs_rhino_dst_02 : rhs_rhino_dst_01 { particleShape = "\rhsusf\addons\rhsusf_matv\rhs_rhino_dst_part2.p3d";};
	class rhs_rhino_dst_03 : rhs_rhino_dst_01 { particleShape = "\rhsusf\addons\rhsusf_matv\rhs_rhino_dst_part3.p3d";};
};
