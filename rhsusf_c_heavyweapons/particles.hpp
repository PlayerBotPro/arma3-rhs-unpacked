
class CfgCloudlets
{
	class FireSparks;
	class RHS_FireSparks: FireSparks
	{
		emissiveColor[] = { { 500, 75, 35, 0 }, { 50, 7.5, 3.5, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } };
	};
	class Default;
	class HeavyGunCartridge1;

	class RHS_HeavyGunCartridge1: HeavyGunCartridge1
	{
		moveVelocity[] = {"-directionX * 3","- directionY * 3","- directionZ * 3"};
		particleShape = "\rhsusf\addons\rhsusf_c_heavyweapons\rhs_casing_30mm.p3d";
		size[] = {1};
	};
	class MachineGunCartridge2;
	class RHS_Tank_Catridge : MachineGunCartridge2
	{
		interval = 5.56;
		lifeTime = 60;
		size[] = { 2 };
		sizeVar = 0;
		position[] = { 0, 0, 0 };
		moveVelocity[] = { -3, -3, -6 };
		particleShape = "\rhsusf\addons\rhsusf_c_heavyweapons\rhs_casing_30mm.p3d";
	};

	// RHS Smoke generator
	class RHS_SmokeGenerator: Default
	{
		interval = 0.15;

		particleShape = "\A3\data_f\cl_basic.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		animationSpeed[] = { 0 };
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		emissiveColor[] = { { 0, 0, 0, 0 } };

		rotationVelocity = 0;
		rotationVelocityVar = 0;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;

		blockAIVisibility = 1;
	};
	// Countermeasure L8A3
	// Spark
	class RHSUSF_CM_L8A3_Spark_Base : Default
	{
		interval = 0.002;
		color[] = { { 1, 0.3, 0.1, -500 }, { 1, 0.3, 0.1, -500 } };
		colorCoef[] = { 1, 1, 1, 1 };
		emissiveColor[] = { { 250, 50, 25, 0 }, { 0, 0, 0, 0 } };
		lifeTime = 0.75;
		lifeTimeVar = 1.5;
		weight = 100;
		volume = 0.01;
		rubbing = 0.05;
		size[] = { 0.15, 0.075, 0 };
		sizeVar = 0.1;
		moveVelocity[] = { "inDirX * inSpeed * 0.35", "inDirY * inSpeed * 0.35", "inDirZ * inSpeed * 0.35" };
		moveVelocityVar[] = { 11, 11, 11 };
		bounceOnSurface = 0.25;
		bounceOnSurfaceVar = 0.1;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		rotationVelocity = 1;
		sizeCoef = 1;
		animationSpeed[] = { 1000 };
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		position[] = { 0, 0, 0 };
		positionVar[] = { 0.01, 0.01, 0.01 };
		rotationVelocityVar = 0;
		colorVar[] = { 0.05, 0.05, 0.05, 5 };
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RHSUSF_CM_L8A3_Spark_Tail : RHSUSF_CM_L8A3_Spark_Base
	{
		color[] = { { 1, 0.2, 0.1, -500 }, { 1, 0.2, 0.1, -500 } };
		emissiveColor[] = { { 5000, 750, 350, 0 }, { 0, 0, 0, 0 } };

		particleEffects = "RHSUSF_CM_L8A3_Spark_Tail_Subeffect";
	};
	class RHSUSF_CM_L8A3_Spark_Small : RHSUSF_CM_L8A3_Spark_Base
	{
		interval = 0.002;
		color[] = { { 1, 0.3, 0.1, -500 }, { 1, 0.3, 0.1, -500 } };
		emissiveColor[] = { { 250, 50, 25, 0 }, { 0, 0, 0, 0 } };
		lifeTime = 0.1;
		lifeTimeVar = 5;
		weight = 100;
		volume = 0.01;
		rubbing = 0.05;
		size[] = { 0.2, 0.1, 0 };
		sizeVar = 0.15;

		moveVelocity[] = { "inDirX * inSpeed * 0.25", "inDirY * inSpeed * 0.25", "inDirZ * inSpeed * 0.25" };
		moveVelocityVar[] = { 15, 15, 15 };
	};

	// Sabot pelets
	class RHS_120mm_Sabot_1_Eject : MachineGunCartridge2
	{
		particleShape = "rhsusf\addons\rhsusf_heavyweapons\120mm_sabot\rhsusf_120mm_petal";
		interval = 0.1;
		lifeTime = 60;
		size[] = { 1 };
		sizeVar = 0;
		position[] = { 0, 0, 0 };
		moveVelocity[] = { "speedX  * 0.06", "speedY  * 0.12", "speedZ  * 0.06" };
		forcedInitialOrientationDir[]	= {"3*speedX","3*speedY","3*speedZ"};
		rotationVelocity = 3;
		rotationVelocityVar = 1;
		bounceOnSurface = 0.5;
		bounceOnSurfaceVar = 0.15;
		randomDirectionPeriodVar = 0.4;
		randomDirectionIntensityVar = 1;
	};
	class RHS_120mm_Sabot_2_Eject : RHS_120mm_Sabot_1_Eject
	{
		moveVelocity[] = { "speedX  * 0.05", "speedY  * 0.06", "speedZ  * 0.06" };
	};
	class RHS_120mm_Sabot_3_Eject : RHS_120mm_Sabot_1_Eject
	{
		moveVelocity[] = { "speedX  * 0.07", "speedY  * 0.06", "speedZ  * 0.06" };
	};

	// Countermeasure L8A3
	// Smoke
	class RHSUSF_CM_L8A3_Smoke_Tail_Base : Default
	{
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		moveVelocity[] = { 0, 0, 0 };
		sizeCoef = 1;
		colorCoef[] = { 1, 1, 1, 1 };
		animationSpeed[] = { 1 };
		animationSpeedCoef = 1;
		onTimerScript = "";
		beforeDestroyScript = "";
		MoveVelocityVar[] = { 0, 0, 0 };
		emissiveColor[] = { { 0, 0, 0, 0 } };
		colorVar[] = { 0, 0, 0, 0 };
		lifeTime = 3;
		lifeTimeVar = 0.25;
		weight = 1.277;
		volume = "0.99 + randomValue / 40";
		rubbing = 0.075;
		sizeVar = 0.5;
		rotationVelocity = 0.75;
		rotationVelocityVar = 0.25;
		randomDirectionPeriod = 1.25;
		randomDirectionIntensity = 0.25;
		randomDirectionIntensityVar = 0.1;
		position[] = { 0, 0, 0 };
		positionVar[] = { 0.1, 0.1, 0.1 };
		blockAIVisibility = 0;

		color[] = { { 0.6, 0.6, 0.6, 0 }, { 0.5, 0.5, 0.5, 0.4 }, { 0.5, 0.5, 0.5, 0.5 }, { 0.5, 0.5, 0.5, 0.4 }, { 0.5, 0.5, 0.5, 0.3 }, { 0.8, 0.8, 0.8, 0.05 }, { 1, 1, 1, 0 } };
		size[] = { 3.515625, 7.03125, 9.84375};
		interval = 0.5;
	};
	class RHSUSF_CM_L8A3_Smoke_Tail_Small_0 : RHSUSF_CM_L8A3_Smoke_Tail_Base {};
	class RHSUSF_CM_L8A3_Smoke_Tail_Small_1 : RHSUSF_CM_L8A3_Smoke_Tail_Small_0
	{
		color[] = { { 0.6, 0.6, 0.6, 0 }, { 0.5, 0.5, 0.5, 0.3 }, { 0.5, 0.5, 0.5, 0.4 }, { 0.5, 0.5, 0.5, 0.3 }, { 0.5, 0.5, 0.5, 0.2 }, { 0.8, 0.8, 0.8, 0.05 }, { 1, 1, 1, 0 } };
		size[] = { 2.8125, 5.625, 7.875 };
		interval = 0.3;
	};
	class RHSUSF_CM_L8A3_Smoke_Tail_Small_2 : RHSUSF_CM_L8A3_Smoke_Tail_Small_0
	{
		color[] = { { 0.6, 0.6, 0.6, 0 }, { 0.5, 0.5, 0.5, 0.2 }, { 0.5, 0.5, 0.5, 0.25 }, { 0.5, 0.5, 0.5, 0.3 }, { 0.5, 0.5, 0.5, 0.1 }, { 0.8, 0.8, 0.8, 0.02 }, { 1, 1, 1, 0 } };
		size[] = { 1.875, 3.75, 5.25 };
		interval = 0.15;
	};

	class RHSUSF_CM_L8A3_Smoke_Tail_Big_0 : RHSUSF_CM_L8A3_Smoke_Tail_Base
	{
		particleShape = "\A3\data_f\cl_basic.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		animationSpeed[] = { 0 };
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		lifeTime = 44;
		lifeTimeVar = 1;
		weight = 1.277;
		volume = "0.985 + randomValue / 60";
		rubbing = 0.1;
		rotationVelocity = 1.5;
		rotationVelocityVar = 1.5;
		randomDirectionPeriod = 0.4;
		randomDirectionIntensity = 0.1;
		bounceOnSurface = -1;
		bounceOnSurfaceVar = 0;
		blockAIVisibility = 1;

		color[] = { { 0.8, 0.8, 0.8, 0.005 }, { 0.6, 0.6, 0.6, 0.6 }, { 0.6, 0.6, 0.6, 0.5 }, { 0.6, 0.6, 0.6, 0.3 }, { 0.6, 0.6, 0.6, 0.2 }, { 0.8, 0.8, 0.8, 0.05 }, { 1.0, 1.0, 1.0, 0 } };
		size[] = { 4.5, 7.875, 14.625 };
		interval = 0.4;
	};
	class RHSUSF_CM_L8A3_Smoke_Tail_Big_1 : RHSUSF_CM_L8A3_Smoke_Tail_Big_0
	{
		color[] = { { 0.8, 0.8, 0.8, 0.005 }, { 0.6, 0.6, 0.6, 0.45 }, { 0.6, 0.6, 0.6, 0.4 }, { 0.6, 0.6, 0.6, 0.25 }, { 0.6, 0.6, 0.6, 0.1 }, { 0.8, 0.8, 0.8, 0.02 }, { 1.0, 1.0, 1.0, 0 } };
		size[] = { 3, 5.25, 9.75 };
		interval = 0.2;
	};
	class RHSUSF_CM_L8A3_Smoke_Tail_Big_2 : RHSUSF_CM_L8A3_Smoke_Tail_Big_0
	{
		color[] = { { 0.8, 0.8, 0.8, 0.005 }, { 0.6, 0.6, 0.6, 0.35 }, { 0.6, 0.6, 0.6, 0.4 }, { 0.6, 0.6, 0.6, 0.15 }, { 0.6, 0.6, 0.6, 0.05 }, { 0.8, 0.8, 0.8, 0.02 }, { 1.0, 1.0, 1.0, 0 } };
		size[] = { 3, 5.25, 9.75 };
		interval = 0.1;
	};

	class ExhaustSmokeRefractHeliBig;
	class ExhaustSmokeRefractGasTurbine: ExhaustSmokeRefractHeliBig
	{
		interval = "0.002/(intensity + 0.001)/(vehicleSpeedSize interpolate [0,70,1,20])";
		moveVelocity[] = {"speedX * 0.98","speedY * 0.98","speedZ * 0.98"};
		lifeTime = "0.4/(vehicleSpeedSize interpolate [0,70,1,10])";
		sizeCoef = "(vehicleSpeedSize interpolate [0,80,1,3])";
	};

	// ERA destruction effects
	class RHS_ERA_Flash: Default
	{
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 0;
		particleFSFrameCount = 32;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.15; //[HEAT: reduce to < 0.1]
		moveVelocity[] = { 0, 1, 0 };
		rotationVelocity = 1;
		weight = 1.277;
		volume = 1;
		rubbing = 0.1;
		size[] = { 0.3, 1.4, 1.8}; //basic: 0.3, 1.4, 1.8 [HEAT: increase first size ~20]
		color[] = { { 1, 1, 1, -6 }, { 1, 0.5, 0.5, 0 } };
		animationSpeed[] = { 1 };
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		position[] = { 0, 0, 0 };
		positionVar[] = { 0, 0, 0 };
		MoveVelocityVar[] = { 0.2, 0.5, 0.2 };
		rotationVelocityVar = 1;
		sizeVar = 0.6;
		colorVar[] = { 0, 0, 0, 0 };
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RHS_ERA_Smoke: Default
	{
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 3; //orig 3.5
		moveVelocity[] = { 0, 2.5, 0 }; //orig 0,3.8,0
		rotationVelocity = 0;
		weight = 0.061; //0.06 is right around the "mushroom-cloud" threshold (at least for the current "moveVelocity.Y" and "size")
		volume = 0.045;
		rubbing = 0.2;
		size[] = { 3, 4, 7}; //balloons out to help form mushroom cloud top [HEAT: much bigger smoke]
		color[] = { { 0.9, 0.8, 0.8, 0.7 }, { 0.8, 0.8, 0.8, 0.2}, { 1, 1, 1, 0} }; //[HEAT: darker smoke]
		animationSpeed[] = { 1.5, 0.5, 0.2};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.7; //orig 2
		position[] = { 0, 0, 0 };
		positionVar[] = { 0, 0, 0 };
		MoveVelocityVar[] = { 1.5, 0.5, 1.5 };
		rotationVelocityVar = 2; //orig 10
		sizeVar = 0.5;
		colorVar[] = { 0, 0, 0, 0 };
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RHS_ERA_Shard : Default
	{
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Shard\shard.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 1;
		lifeTime = 40;
		moveVelocity[] = { 0, 2, 0 };
		rotationVelocity = 3;
		weight = 40;
		volume = 7.9;
		rubbing = 0.05;
		size[] = { 0.3 };
		color[] = { { 1, 0.8, 0.4, -10 }, { 1, 1, 1, 1 } };
		animationSpeed[] = { 1 };
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		bounceOnSurface = 0.04;
		bounceOnSurfaceVar = 0.02;
		blockAIVisibility = 0;
		lifeTimeVar = 10;
		positionVar[] = { 0.1, 0.1, 0.1 };
		MoveVelocityVar[] = { 10, 12, 10 };
		rotationVelocityVar = 2.5;
		sizeVar = 0.25;
		colorVar[] = { 0, 0, 0, 0 };
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class rhs_MLRSFired1: Default
	{
		interval = 0.0003;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 5;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.22;
		volume = 1;
		rubbing = 0.4;
		size[] = {1,8};
		color[] = {{0.5,0.5,0.5,0.22},{0.5,0.5,0.5,0.12},{0.5,0.5,0.5,0.08},{0.5,0.5,0.5,0.05},{0.5,0.5,0.5,0.01}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		animationSpeedCoef = 1;
		colorCoef[] = {1,1,1,1};
		sizeCoef = 1;
		position[] = {0,0,0};
		lifeTimeVar = 1;
		positionVar[] = {0.5,0.5,0.5};
		MoveVelocityVar[] = {3.5,3.5,3.5};
		rotationVelocityVar = 10;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class rhs_MLRSFired1M: rhs_MLRSFired1
	{
		interval = 0.0006;
		lifeTime = 4;
		size[] = {1.2,9};
		lifeTimeVar = 0.6;
	};
	class rhs_MLRSFired1L: rhs_MLRSFired1
	{
		interval = 0.0015;
		lifeTime = 2.5;
		size[] = {1.2,9};
		lifeTimeVar = 0.5;
	};
	class CircleDustTank;
	class CircleDustTankL;
	class rhs_CircleDustTank: CircleDustTank
	{
		interval = 0.005;
		color[] = {{0.205,0.185,0.15,0.04},{0.205,0.185,0.15,0.02},{0.205,0.185,0.15,0.005}};
		weight = 0.051;
		MoveVelocityVar[] = {3.5, 0.5, 3.5};
		lifeTime = 27.8;
	};
	class rhs_CircleDustTankL: CircleDustTankL
	{
		interval = 0.008;
	};
	class rhs_MissileExhaustRefract: Default
	{
		interval					= 0.01;
		circleRadius				= 0;
		circleVelocity[]			= { 0, 0, 0 };
		particleShape				= "\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth			= 1;
		particleFSIndex				= 0;
		particleFSFrameCount		= 1;
		particleFSLoop				= 0;
		angleVar					= 1;
		animationName				= "";
		particleType				= "Billboard";
		timerPeriod					= 1.1;
		lifeTime					= 14;
		rotationVelocity			= 1;
		weight						= 1.265;
		volume						= 1;
		rubbing						= 0.07;
		size[]						= { 0.8, 2.12 };
		color[]						= { { 0.06, 0.06, 0.06, 0.20 }, { 0.3, 0.3, 0.3, 0.17 }, { 0.3, 0.3, 0.3, 0.14 }, { 0.3, 0.3, 0.3, 0.11 }, { 0.3, 0.3, 0.3, 0.05 } };
		colorCoef[]					= { 1, 1, 1, 1 };
		animationSpeed[]			= { 2, 1 };
		randomDirectionPeriod		= 0.1;
		randomDirectionIntensity	= 0.02;
		onTimerScript				= "";
		beforeDestroyScript			= "";
		destroyOnWaterSurface		= 1;
		blockAIVisibility			= 0;
		sizeCoef					= 1.5;
		animationSpeedCoef			= 1;
		lifeTimeVar					= 0.5;
		positionVar[]				= { 0, 0, 0 };
		MoveVelocityVar[]			= { 0, 0, 0 };
		rotationVelocityVar			= 5;
		sizeVar						= 0.05;
		colorVar[]					= { 0, 0, 0, 0 };
		randomDirectionPeriodVar	= 0;
		randomDirectionIntensityVar	= 0;
	};
	class RHS_ExhaustSmoke1AirPlaneHP: Default
	{
		interval = "0.001 * (engineDamage interpolate [0,2.5,1,8])";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "0.3 * (engineDamage interpolate [0,1,1,12])";
		moveVelocity[] = {"speedX","speedY","speedZ"};
		rotationVelocity = 1;
		weight = 1.4;
		volume = 1;
		rubbing = 0.1;
		size[] = {0.3,3};
		sizeCoef = "1.4 * (engineDamage interpolate [0,1,1,6])";
		color[] = {{0.06,0.06,0.06,0.12},{0.1,0.1,0.1,0.04},{0.2,0.2,0.2,0.01},{0.3,0.3,0.3,0.001}};
		colorCoef[] = {"15","15","15","intensity/2 * (engineDamage interpolate [0.3,0.4,0.05,6]))"};
		animationSpeed[] = {2,1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.25;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.1;
		lifeTimeVar = "0.15 * (engineDamage interpolate [0,1,1,4])";
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.2,0.2,0.2};
		MoveVelocityVar[] = {"1 * (engineDamage interpolate [0,1,1,2.5])","1 * (engineDamage interpolate [0,1,1,2.5])","1 * (engineDamage interpolate [0,1,1,2.5])"};
		rotationVelocityVar = 20;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};

class RHSUSF_CM_L8A3_Spark_Tail_Subeffect
{
	class RHSUSF_CM_L8A3_Smoke_Tail_Small_0
	{
		simulation = "particles";
		type = "RHSUSF_CM_L8A3_Smoke_Tail_Small_0";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = "1 + random 0.25";
		qualityLevel = 0;
	};
	class RHSUSF_CM_L8A3_Smoke_Tail_Small_1 : RHSUSF_CM_L8A3_Smoke_Tail_Small_0
	{
		type = "RHSUSF_CM_L8A3_Smoke_Tail_Small_1";
		qualityLevel = 1;
	};
	class RHSUSF_CM_L8A3_Smoke_Tail_Small_2 : RHSUSF_CM_L8A3_Smoke_Tail_Small_0
	{
		type = "RHSUSF_CM_L8A3_Smoke_Tail_Small_2";
		qualityLevel = 2;
	};

	class RHSUSF_CM_L8A3_Smoke_Tail_Big_0
	{
		simulation = "particles";
		type = "RHSUSF_CM_L8A3_Smoke_Tail_Big_0";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = "1.5 + random 0.25";
		qualityLevel = 0;
	};
	class RHSUSF_CM_L8A3_Smoke_Tail_Big_1 : RHSUSF_CM_L8A3_Smoke_Tail_Big_0
	{
		type = "RHSUSF_CM_L8A3_Smoke_Tail_Big_1";
		qualityLevel = 1;
	};
	class RHSUSF_CM_L8A3_Smoke_Tail_Big_2 : RHSUSF_CM_L8A3_Smoke_Tail_Big_0
	{
		type = "RHSUSF_CM_L8A3_Smoke_Tail_Big_2";
		qualityLevel = 2;
	};
};

class RHSUSF_CM_L8A3_Effect
{
	class Explosion
	{
		simulation = "particles";
		type = "GrenadeExp";
		position[] = { 0, 0, 0 };
		intensity = 0.5;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion_Light
	{
		simulation = "light";
		type = "GrenadeExploLight";
		position[] = { 0, 0, 0 };
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class RHSUSF_CM_L8A3_Spark_Tail
	{
		simulation = "particles";
		type = "RHSUSF_CM_L8A3_Spark_Tail";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class RHSUSF_CM_L8A3_Spark_Small_0
	{
		simulation = "particles";
		type = "RHSUSF_CM_L8A3_Spark_Small";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.01;
		qualityLevel = 0;
	};
	class RHSUSF_CM_L8A3_Spark_Small_1 : RHSUSF_CM_L8A3_Spark_Small_0
	{
		lifeTime = 0.02;
		qualityLevel = 1;
	};
	class RHSUSF_CM_L8A3_Spark_Small_2 : RHSUSF_CM_L8A3_Spark_Small_0
	{
		lifeTime = 0.03;
		qualityLevel = 2;
	};
};

class RHS_HeavyGunCartridge1
{
	class RHS_30mm_Catridge
	{
		simulation = "particles";
		type = "RHS_HeavyGunCartridge1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 2;
	};
	class RHS_30mm_CatridgeMed
	{
		simulation = "particles";
		type = "RHS_HeavyGunCartridge1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 1;
	};
};


class RHS_ExhaustEffectTankGasBack
{
	class ExhaustsEffect01
	{
		simulation = "particles";
		type = "ExhaustSmoke1HeliBig";
	};
	class ExhaustsEffectRefract01
	{
		simulation = "particles";
		type = "ExhaustSmokeRefractGasTurbine";
	};
	class ExhaustsEffectWater01
	{
		simulation = "particles";
		type = "ExhaustSmokeBigWater1";
		qualityLevel = 2;
	};
	class ExhaustsEffectWater01Med
	{
		simulation = "particles";
		type = "ExhaustSmokeBigWater1";
		qualityLevel = 1;
	};
	class ExhaustsEffectWater02
	{
		simulation = "particles";
		type = "ExhaustSmokeBigWater2";
		qualityLevel = 2;
	};
	class ExhaustsEffectWater02Med
	{
		simulation = "particles";
		type = "ExhaustSmokeBigWater2";
		qualityLevel = 1;
	};
};


class RHS_FAE_Explosion
{
	class Light1
	{
		simulation = "light";
		type = "GrenadeExploLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class MortarExp1
	{
		simulation = "particles";
		type = "MortarExp";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class MortarSmoke1
	{
		simulation = "particles";
		type = "CloudSmallLight";
		//type = "CloudMedDark";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class RHS_120mm_Sabot_Eject
{
	class FX_1
	{
		simulation	= "particles";
		type		= "RHS_120mm_Sabot_1_Eject";
		position[]	= {0,0,0};
		intensity	= 1;
		interval	= 1;
		lifeTime	= 1;
		enabled		= "flyTime interpolate [0,0.2,1,-1]";
	};
	class FX_2: FX_1
	{
		type		= "RHS_120mm_Sabot_2_Eject";
	};
	class FX_3: FX_1
	{
		type		= "RHS_120mm_Sabot_3_Eject";
	};
};


// Missile effects with refraction

class RHS_Missile0
{
	class Light1
	{
		simulation = "light";
		type = "FiredLightMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = -1;
	};
	class MissileEffects1
	{
		simulation = "particles";
		type = "Missile0";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = -1;
	};
	class Refract
	{
		simulation = "particles";
		type = "rhs_MissileExhaustRefract";
	};
};
class RHS_Missile1
{
	class Light1
	{
		simulation = "light";
		type = "RocketLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class MissileEffects1
	{
		simulation = "particles";
		type = "Missile1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Refract
	{
		simulation = "particles";
		type = "rhs_MissileExhaustRefract";
	};
};
class RHS_Missile2
{
	class Light1
	{
		simulation = "light";
		type = "RocketLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class Missile2
	{
		simulation = "particles";
		type = "Missile2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 2;
	};
	class Missile2Med
	{
		simulation = "particles";
		type = "Missile2Med";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 1;
	};
	class Refract
	{
		simulation = "particles";
		type = "rhs_MissileExhaustRefract";
	};
};
class RHS_Missile3
{
	class Light1
	{
		simulation = "light";
		type = "RocketLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class Missile3
	{
		simulation = "particles";
		type = "Missile3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 2;
	};
	class Missile3Med
	{
		simulation = "particles";
		type = "Missile3Med";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 1;
	};
	class Refract
	{
		simulation = "particles";
		type = "rhs_MissileExhaustRefract";
	};
};
class RHS_Missile4
{
	class Light1
	{
		simulation = "light";
		type = "RocketLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class Missile4
	{
		simulation = "particles";
		type = "Missile4";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Refract
	{
		simulation = "particles";
		type = "rhs_MissileExhaustRefract";
	};
};
class RHS_Missile5
{
	class Light1
	{
		simulation = "light";
		type = "RocketLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class Missile5
	{
		simulation = "particles";
		type = "Missile5";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Refract
	{
		simulation = "particles";
		type = "rhs_MissileExhaustRefract";
	};
};
class RHS_EngineEffectAirPlaneHP
{
	class ExhaustsEffect01
	{
		simulation = "particles";
		type = "RHS_ExhaustSmoke1AirPlaneHP";
	};
	class ExhaustsEffectRefract01
	{
		simulation = "particles";
		type = "ExhaustSmokeRefractPlane";
	};
};