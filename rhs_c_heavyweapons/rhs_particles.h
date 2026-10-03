

class CfgCloudlets
{
	class FireSparks;
	class RHS_FireSparks: FireSparks
	{
		emissiveColor[] = { { 500, 75, 35, 0 }, { 50, 7.5, 3.5, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } };
	};
	class Default;
	class MachineGunCartridge1;
	class SmallFireF;
	class RHS_YakB_Catridge : MachineGunCartridge1
	{
		interval = 0.06/10;
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
		particleShape = "\rhsafrf\addons\rhs_c_heavyweapons\rhs_casing_30mm.p3d";
	};
	class RHS_30mm_Catridge : MachineGunCartridge2
	{
		moveVelocity[] = { "-directionX * 3", "- directionY * 3", "- directionZ * 3" };
		particleShape = "\rhsafrf\addons\rhs_c_heavyweapons\rhs_casing_30mm.p3d";
		size[] = { 1 };
		sizeVar = 0;

		// EPE Particles
		damping = 0.05;
		externalAcceleration = 1.2;
		restitution = 0.4;
		dynamicFriction = 0.2;
		staticFriction = 0.2;
		collisionSize = 0.05;
		maxMotionDist = 4;
	};
	class RHS_145mm_Catridge : RHS_30mm_Catridge
	{
		size[] = { 0.85 };
	};
	class RHS_23mm_Catridge : RHS_30mm_Catridge
	{
		size[] = { 0.95 };
		MoveVelocityVar[] = {0.6,0.6,0.6};
	};
	class MachineGunEject;
	class RHS_23mm_AmmoBeltLink: MachineGunEject
	{
		lifeTime = 6;
		moveVelocity[] = {"-directionX*2","-directionY*2","-directionZ*2"};
		size[] = {4.6};
		MoveVelocityVar[] = {0.4,0.4,0.4};
	};
	class RHS_ATGM_Cap : RHS_30mm_Catridge
	{
		interval = 0.06;
		particleShape = "\rhsafrf\addons\rhs_bmd\rhs_berezhok_cover.p3d";
		size[] = { 1 };
		rotationVelocity = 3;
		rotationVelocityVar = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
	};
	class RHS_ATGM_Cap_x2 : RHS_ATGM_Cap
	{
		moveVelocity[] = { "-directionX * 6", "- directionY * 6", "- directionZ * 6" };
	};
	// Barrel effects
	// ATGM pusher
	class RHS_ATGM_Pusher_Eject : MachineGunCartridge2
	{
		interval = 0.95;
		lifeTime = 60;
		size[] = { 1 };
		sizeVar = 0;
		position[] = { 0, 0, 0 };
		moveVelocity[] = { "speedX  * 0.3", "speedY  * 0.3", "speedZ  * 0.3" };
		particleShape = "\rhsafrf\addons\rhs_heavyweapons\atgmpush\atgmpush.p3d";
	};
	// Sabot pelets
	class RHS_125mm_Sabot_1_Eject : MachineGunCartridge2
	{
		particleShape = "\rhsafrf\addons\rhs_heavyweapons\sabot\sabot.p3d";
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
	class RHS_125mm_Sabot_2_Eject : RHS_125mm_Sabot_1_Eject
	{
		moveVelocity[] = { "speedX  * 0.05", "speedY  * 0.06", "speedZ  * 0.06" };
	};
	class RHS_125mm_Sabot_3_Eject : RHS_125mm_Sabot_1_Eject
	{
		moveVelocity[] = { "speedX  * 0.07", "speedY  * 0.06", "speedZ  * 0.06" };
	};
	//nuke

	class RHS_NukeConeFire : Default
	{
		interval			= 0.01;
		CircleRadius		= 22.1;
		CircleVelocity[]	= {0,0.1,-0.55};

		particleShape			= "\a3\Data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth		= 16;
		particleFSIndex			= 4;
		particleFSFrameCount	= 16;
		particleFSLoop			= 1;

		angle			= 0;
		angleVar		= 0;
		animationName	= "";
		particleType	= "Billboard";
		timerPeriod		= 1 ;
		lifeTime		= 23.5;
		lifeTimeVar		= 0;
		weight			= 10;
		volume			= 7.65;
		rubbing			= 0.0;

		size[]		= {4.2, 3, 2};
		sizeVar		= 0.25;
		sizeCoef	= 1;

		animationSpeed[]	= {1};
		animationSpeedCoef	= 1;

		position[]			= {0,8,0};
		positionVar[]		= {0.25, 0.25, 0};
		positionVarConst[]	= {0, 0, 0};

		moveVelocity[]			= {0, 6, 0.0};
		moveVelocityVar[]		= {0.0, 0.175, 0};
		moveVelocityVarConst[]	= {0, 0, 0};

		rotationVelocity	= 0;
		rotationVelocityVar	= 0;

		color[]		= {{0.25, 0.25, 0.25, 0.35}, {0.25, 0.25, 0.25, 0.25}, {0.25, 0.25, 0.25, 0}};
		colorVar[]	= {0, 0, 0, 0};

		randomDirectionPeriodVar	= 0;
		randomDirectionIntensityVar	= 0;

		destroyOnWaterSurface = 0;
		destroyOnWaterSurfaceOffset = 0;

		onSurface			= false;
		keepOnSurface		= false;
		surfaceOffset		= 0;
		bounceOnSurface		= 0.6;
		bounceOnSurfaceVar	= 0.0;
		postEffects			= "";
		particleEffects		= "";

		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
	};
	class RHS_NukeConeSmokeBottom : Default
	{
		interval			= 0.005;
		CircleRadius		= 12;
		CircleVelocity[]	= {5,0.1,5};

		particleShape			= "\a3\Data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth		= 16;
		particleFSIndex			= 8;
		particleFSFrameCount	= 18;
		particleFSLoop			= 0;

		angle			= 0;
		angleVar		= 0;
		animationName	= "";
		particleType	= "Billboard";
		timerPeriod		= 1 ;
		lifeTime		= 24.5;
		lifeTimeVar		= 0;
		weight			= 10;
		volume			= 7.65;
		rubbing			= 0.0;

		size[]		= {7.2, 4, 1};
		sizeVar		= 0.25;
		sizeCoef	= 1;

		animationSpeed[]	= {1};
		animationSpeedCoef	= 1;

		position[] 			= {0,0,0};
		positionVar[]		= {0.25, 0.25, 0};
		positionVarConst[]	= {0, 0, 0};

		moveVelocity[]			= {0, 0, -0};
		moveVelocityVar[]		= {0.0, 0.175, 0};
		moveVelocityVarConst[]	= {0, 0, 0};

		rotationVelocity	= 0;
		rotationVelocityVar	= 0;

		color[]		= {{0.1, 0.1, 0.1, 1}, {0.25, 0.25, 0.25, 0.5}, {0.5, 0.5, 0.5, 0}};
		colorVar[]	= {0, 0, 0, 0};

		randomDirectionPeriodVar	= 0;
		randomDirectionIntensityVar	= 0;

		destroyOnWaterSurface = 0;
		destroyOnWaterSurfaceOffset = 0;

		onSurface			= false;
		keepOnSurface		= false;
		surfaceOffset		= 0;
		bounceOnSurface		= 0.6;
		bounceOnSurfaceVar	= 0.0;
		postEffects			= "";
		particleEffects		= "";

		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
	};
	class RHS_NukeConeSmokeTop : Default
	{
		interval			= 0.005;
		CircleRadius		= 22;
		CircleVelocity[]	= {0,0.0,-0.55};

		particleShape			= "\a3\Data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth		= 16;
		particleFSIndex			= 8;
		particleFSFrameCount	= 18;
		particleFSLoop			= 0;

		angle			= 0;
		angleVar		= 0;
		animationName	= "";
		particleType	= "Billboard";
		timerPeriod		= 1 ;
		lifeTime		= 24.5;
		lifeTimeVar		= 0;
		weight			= 10;
		volume			= 7.65;
		rubbing			= 0.0;

		size[]		= {7.2, 4, 4};
		sizeVar		= 0.25;
		sizeCoef	= 1;

		animationSpeed[]	= {1};
		animationSpeedCoef	= 1;

		position[] 			= {0,8,0};
		positionVar[]		= {0.25, 0.25, 0};
		positionVarConst[]	= {0, 0, 0};

		moveVelocity[]			= {0, 6, 0.0};
		moveVelocityVar[]		= {0.0, 0.175, 0};
		moveVelocityVarConst[]	= {0, 0, 0};

		rotationVelocity	= 0;
		rotationVelocityVar	= 0;

		color[]		= {{0.1, 0.1, 0.1, 0.7}, {0.25, 0.25, 0.25, 0.45}, {0.5, 0.5, 0.5, 0}};
		colorVar[]	= {0, 0, 0, 0};

		randomDirectionPeriodVar	= 0;
		randomDirectionIntensityVar	= 0;

		destroyOnWaterSurface = 0;
		destroyOnWaterSurfaceOffset = 0;

		onSurface			= false;
		keepOnSurface		= false;
		surfaceOffset		= 0;
		bounceOnSurface		= 0.6;
		bounceOnSurfaceVar	= 0.0;
		postEffects			= "";
		particleEffects		= "";

		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
	};
	class RHS_NukeSmokeChimney : Default
	{
		interval			= 0.01;
		CircleRadius		= 0;
		CircleVelocity[]	= {0,0,0};

		particleShape			= "\a3\Data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth		= 16;
		particleFSIndex			= 8;
		particleFSFrameCount	= 16;
		particleFSLoop			= 1;

		angle			= 0;
		angleVar		= 0;
		animationName	= "";
		particleType	= "Billboard";
		timerPeriod		= 1 ;
		lifeTime		= 23.5;
		lifeTimeVar		= 0;
		weight			= 10;
		volume			= 7.75;
		rubbing			= 0.0;

		size[]		= {9, 8, 6, 1};
		sizeVar		= 0.25;
		sizeCoef	= 1;

		animationSpeed[]	= {1};
		animationSpeedCoef	= 1;

		position[] 			= {0,0,0};
		positionVar[]		= {0.25, 6.25, 0};
		positionVarConst[]	= {0, 0, 0};

		moveVelocity[]			= {0, 3, 0};
		moveVelocityVar[]		= {0.175, 2.175, 0};
		moveVelocityVarConst[]	= {0, 0, 0};

		rotationVelocity	= 0;
		rotationVelocityVar	= 0;

		color[]		= {{0.25, 0.25, 0.25, 0.7}, {0.15, 0.15, 0.15, 0.3}};
		colorVar[]	= {0, 0, 0, 0};

		randomDirectionPeriodVar	= 0;
		randomDirectionIntensityVar	= 0;

		destroyOnWaterSurface = 0;
		destroyOnWaterSurfaceOffset = 0;

		onSurface			= false;
		keepOnSurface		= false;
		surfaceOffset		= 0;
		bounceOnSurface		= 0.6;
		bounceOnSurfaceVar	= 0.0;
		postEffects			= "";
		particleEffects		= "";

		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
	};
	class MachineGun2;
	class RHS_MachineGun2: MachineGun2
	{
		color[] = {{0.58,0.58,0.49,0.08},{0.58,0.58,0.49,0.066},{0.58,0.58,0.49,0.012},{0.58,0.58,0.49,0.001}};
		size[] = {1.3,3,5,7};
		sizeCoef = 1;
		//color[] = {{0.85,0.85,0.85,0.08},{0.88,0.88,0.88,0.025},{0.9,0.9,0.9,0.015},{0.9,0.9,0.9,0.007},{0.9,0.9,0.9,0.004}};
	};
	class AutoCannonFired;
	class RHS_AutoCannon_Fired : AutoCannonFired
	{
		color[] = {{0.54,0.52,0.48,0.12},{0.54,0.52,0.48,0.066},{0.21,0.21,0.28,0.022},{0.21,0.21,0.2,0.001}};
		size[] = {3,6,9,10};
		sizeCoef = 1;
		//position[] = {"positionX + (directionLocalX * 1.3)","positionY + (directionLocalY * 1.3)","positionZ + (directionLocalZ * 1.3)"};
	};
	class RHS_2A42_Fired : AutoCannonFired
	{
		color[] = {{0.54,0.52,0.48,0.12},{0.54,0.52,0.48,0.036},{0.21,0.21,0.28,0.012},{0.21,0.21,0.2,0.001}};
		size[] = {0.1,3,6,4};
		sizeCoef = 1;
		lifeTime = 3.1;
		lifeTimeVar = 2.4;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.65;
		moveVelocity[] = {"17*directionX","17*directionY","17*directionZ"};
		position[] = {"positionX","positionY","positionZ"};
	};
	class RHS_KPVT_Flash : AutoCannonFired
	{
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 2;
		particleFSFrameCount = 32;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.135;
		position[] = { "positionX", "positionY", "positionZ" };
		moveVelocity[] = { "1*directionX", "2*directionY", "1*directionZ" };
		rotationVelocity = 0;
		weight = 10;
		volume = 0.5;
		rubbing = 0.075;
		size[] = { 0.35, 0.35 };
		color[] = { { 1, 1, 1, -2 }, { 1, 1, 1, -2 }, { 1, 1, 1, -1 }, { 1, 1, 1, -0 } };
		animationSpeed[] = { 3 };
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = { 0, 0, 0 };
		MoveVelocityVar[] = { 0, 0, 0 };
		rotationVelocityVar = 0;
		sizeVar = 0;
		colorVar[] = { 0, 0, 0, 0.1 };
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		angleVar = 0;
	};
	class ExhaustSmokeTank2;
	class RHS_ExhaustSmokeTankGas : ExhaustSmokeTank2
	{
		color[] = { { 0.86, 0.96, 0.96, 0.04 }, { 0.8, 0.8, 0.8, 0.05 }, { 0.83, 0.93, 0.93, 0.005 }, { 0.83, 0.93, 0.93, 0.001 } };
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


	// 3D17 smoke effects
	class RHS_3D17SparksBig : Default
	{
		interval = 0.002;
		color[] = { { 1, 0.3, 0.1, -500 }, { 1, 0.3, 0.1, -500 } };
		colorCoef[] = { 1, 1, 1, 1 };
		//emissiveColor[] = { { 100, 7, 4, 0 }, { 0, 0, 0, 0 } };
		emissiveColor[] = { { 250, 50, 25, 0 }, { 0, 0, 0, 0 } };
		lifeTime = 3;
		lifeTimeVar = 5;
		weight = 100;
		volume = 0.01;
		rubbing = 0.05;
		size[] = { 0.15, 0.075, 0 };
		sizeVar = 0.1;

		moveVelocity[] = { "inDirX * inSpeed * 0.35", "inDirY * inSpeed * 0.35", "inDirZ * inSpeed * 0.35" };
		moveVelocityVar[] = { 7, 7, 7 };

		bounceOnSurface = 0.5;
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
	class RHS_3D17SparksSlow : RHS_3D17SparksBig
	{
		interval = 0.003;
		weight = 1.277;
		volume = 0.8;
		emissiveColor[] = { { 50, 15, 10, 0 }, { 0, 0, 0, 0 } };

		moveVelocity[] = { "inDirX * inSpeed * 0.15", "inDirY * inSpeed * 0.15", "inDirZ * inSpeed * 0.15" };
		moveVelocityVar[] = { 2, 2, 2 };

		particleEffects = "RHS_3D17ParticleLight";
	};
	class RHS_3D17SparksTail : RHS_3D17SparksBig
	{
		interval = 0.0010;
		color[] = { { 1, 0.2, 0.1, -500 }, { 1, 0.2, 0.1, -500 } };
		emissiveColor[] = { { 50000, 7500, 3500, 0 }, { 0, 0, 0, 0 } };
		lifeTime = 3;
		lifeTimeVar = 5;
		weight = 100;
		volume = 0.01;
		rubbing = 0.01;
		size[] = { 0.15, 0.1, 0 };
		sizeVar = 0.1;

		moveVelocity[] = { "inDirX * inSpeed * 0.35", "inDirY * inSpeed * 0.35", "inDirZ * inSpeed * 0.35" };
		moveVelocityVar[] = { 7, 7, 7 };

		bounceOnSurface = 0.4;
		bounceOnSurfaceVar = 0.1;

		particleEffects = "RHS_3D17ParticleTail";
	};
	class RHS_3D17SparksTail_902B : RHS_3D17SparksTail
	{
		interval = 0.0015;

		moveVelocity[] = { "inDirX * inSpeed * 0.45", "inDirY * inSpeed * 0.45", "inDirZ * inSpeed * 0.45" };
		moveVelocityVar[] = { 9, 9, 9 };

		bounceOnSurface = 0.65;
		bounceOnSurfaceVar = 0.1;

		particleEffects = "RHS_3D17ParticleTail_902B";
	};
	class RHS_3D17SparksSmall : RHS_3D17SparksBig
	{
		interval = 0.002;
		color[] = { { 1, 0.3, 0.1, -500 }, { 1, 0.3, 0.1, -500 } };
		emissiveColor[] = { { 250, 50, 25, 0 }, { 0, 0, 0, 0 } };
		lifeTime = 0.3;
		lifeTimeVar = 5;
		weight = 100;
		volume = 0.01;
		rubbing = 0.05;
		size[] = { 0.2, 0.1, 0 };
		sizeVar = 0.15;

		moveVelocity[] = { "inDirX * inSpeed * 0.15", "inDirY * inSpeed * 0.15", "inDirZ * inSpeed * 0.15" };
		moveVelocityVar[] = { 15, 15, 15 };
	};
	class RHS_3D17SparksBack : RHS_3D17SparksSmall
	{
		interval = 0.006;
		moveVelocity[] = { "inDirX * inSpeed * -0.25", "inDirY * inSpeed * -0.25", "inDirZ * inSpeed * -0.25" };
		moveVelocityVar[] = { 1, 1, 1 };
		lifeTime = 0.6;
		lifeTimeVar = 5;
	};

	class RHS_3D17TrailEffect : Default
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

		interval = 0.3;

		emissiveColor[] = { { 0.5, 0.5, 0.5, 0 }, { 0, 0, 0, 0 } };
		colorVar[] = { 0, 0, 0, 0 };
		lifeTime = 3.5;
		lifeTimeVar = 0.25;

		weight = 1.277;
		volume = "0.99 + randomValue / 40";

		rubbing = 0.075;
		size[] = { 2.8125, 5.625, 7.875 };
		sizeVar = 0.5;
		color[] = { { 0.6, 0.6, 0.6, 0 }, { 0.5, 0.5, 0.5, 0.3 }, { 0.5, 0.5, 0.5, 0.4 }, { 0.5, 0.5, 0.5, 0.3 }, { 0.5, 0.5, 0.5, 0.2 }, { 0.8, 0.8, 0.8, 0.05 }, { 1, 1, 1, 0 } };
		rotationVelocity = 0.75;
		rotationVelocityVar = 0.25;
		randomDirectionPeriod = 1.25;
		randomDirectionIntensity = 0.25;
		randomDirectionIntensityVar = 0.1;

		position[] = { 0, 0, 0 };
		positionVar[] = { 0.1, 0.1, 0.1 };

		blockAIVisibility = 0;
	};
	class RHS_3D17TrailEffect1 : RHS_3D17TrailEffect
	{
		color[] = { { 0.6, 0.6, 0.6, 0 }, { 0.5, 0.5, 0.5, 0.2 }, { 0.5, 0.5, 0.5, 0.25 }, { 0.5, 0.5, 0.5, 0.3 }, { 0.5, 0.5, 0.5, 0.1 }, { 0.8, 0.8, 0.8, 0.02 }, { 1, 1, 1, 0 } };
		size[] = { 1.875, 3.75, 5.25 };
		interval = 0.15;
	};
	class RHS_3D17TrailEffect2 : RHS_3D17TrailEffect
	{
		color[] = { { 0.6, 0.6, 0.6, 0 }, { 0.5, 0.5, 0.5, 0.12 }, { 0.5, 0.5, 0.5, 0.15 }, { 0.5, 0.5, 0.5, 0.2 }, { 0.5, 0.5, 0.5, 0.1 }, { 0.8, 0.8, 0.8, 0.02 }, { 1, 1, 1, 0 } };
		size[] = { 1.25, 2.5, 3.5 };
		interval = 0.075;
	};
	class RHS_3D17TrailEffectLong : RHS_3D17TrailEffect
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

		interval = 0.3;
		color[] = { { 0.8, 0.8, 0.8, 0.005 }, { 0.6, 0.6, 0.6, 0.6 }, { 0.6, 0.6, 0.6, 0.5 }, { 0.6, 0.6, 0.6, 0.3 }, { 0.6, 0.6, 0.6, 0.2 }, { 0.8, 0.8, 0.8, 0.05 }, { 1.0, 1.0, 1.0, 0 } };
		emissiveColor[] = { { 0.5, 0.5, 0.5, 0 }, { 0, 0, 0, 0 } };
		lifeTime = 22;
		lifeTimeVar = 1;

		size[] = { 4.5, 7.875, 14.625 };
		sizeVar = 0.5;

		weight = 1.277;
		volume = "0.99 + randomValue / 40";

		rotationVelocity = 1.25;
		rotationVelocityVar = 1;
		randomDirectionPeriod = 1.5;
		randomDirectionIntensity = 0.15;

		bounceOnSurface = -1;
		bounceOnSurfaceVar = 0;
		blockAIVisibility = 1;
	};
	class RHS_3D17TrailEffectLong1 : RHS_3D17TrailEffectLong
	{
		color[] = { { 0.8, 0.8, 0.8, 0.005 }, { 0.6, 0.6, 0.6, 0.45 }, { 0.6, 0.6, 0.6, 0.4 }, { 0.6, 0.6, 0.6, 0.25 }, { 0.6, 0.6, 0.6, 0.1 }, { 0.8, 0.8, 0.8, 0.02 }, { 1.0, 1.0, 1.0, 0 } };
		size[] = { 3, 5.25, 9.75 };
		interval = 0.15;
	};
	class RHS_3D17TrailEffectLong2 : RHS_3D17TrailEffectLong
	{
		color[] = { { 0.8, 0.8, 0.8, 0.005 }, { 0.6, 0.6, 0.6, 0.35 }, { 0.6, 0.6, 0.6, 0.4 }, { 0.6, 0.6, 0.6, 0.15 }, { 0.6, 0.6, 0.6, 0.05 }, { 0.8, 0.8, 0.8, 0.02 }, { 1.0, 1.0, 1.0, 0 } };
		size[] = { 3, 5.25, 9.75 };
		interval = 0.125;
	};
	class RHS_3D17ExplosionCloud : RHS_3D17TrailEffect
	{
		moveVelocity[] = { 0, 0, 0.1 };
		size[] = { 2.8125, 5.625, 7.875 };
		weight = 1.277;
		volume = "1.25 + randomValue / 30";
		randomDirectionPeriod = 1.5;
		randomDirectionIntensity = 0.25;
		interval = 0.02;
		lifeTime = 4;
		lifeTimeVar = 0.25;
		color[] = { { 0.03, 0.03, 0.03, 0.6 }, { 0.03, 0.03, 0.03, 0.5 }, { 0.03, 0.03, 0.03, 0.4 }, { 0.03, 0.03, 0.03, 0.2 }, { 0.03, 0.03, 0.03, 0.05 }, { 0.03, 0.03, 0.03, 0.01 }, { 1, 1, 1, 0 } };
	};
	class RHS_D832DUSparksTail : RHS_3D17SparksTail
	{
		particleEffects = "RHS_D832DUParticleTail";
		moveVelocityVar[] = { 17, 17, 17 };
	};
	class RHS_D832DUTrailEffect: RHS_3D17TrailEffect {sizeCoef = 2;};
	class RHS_D832DUTrailEffect1: RHS_3D17TrailEffect1 {sizeCoef = 2;};
	class RHS_D832DUTrailEffect2: RHS_3D17TrailEffect2 {sizeCoef = 2;};
	class RHS_D832DUTrailEffectLong: RHS_3D17TrailEffectLong {sizeCoef = 2;};
	class RHS_D832DUTrailEffectLong1: RHS_3D17TrailEffectLong1 {sizeCoef = 2;};
	class RHS_D832DUTrailEffectLong2: RHS_3D17TrailEffectLong2 {sizeCoef = 2;};
	class RHS_D832DUExplosionCloud : RHS_3D17ExplosionCloud
	{
		sizeCoef = 2;
	};
	class ExhaustSmokeRefractHeliBig;
	class ExhaustSmokeRefractGasTurbine: ExhaustSmokeRefractHeliBig
	{
		interval = "0.002/(intensity + 0.001)/(vehicleSpeedSize interpolate [0,70,1,20])";
		moveVelocity[] = {"speedX * 0.98","speedY * 0.98","speedZ * 0.98"};
		lifeTime = "0.4/(vehicleSpeedSize interpolate [0,70,1,10])";
		sizeCoef = "(vehicleSpeedSize interpolate [0,80,1,3])";
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
	class RHS_RPS_K37_800_Smoke: RHS_ERA_Smoke
	{
		interval = 0.005;
		lifeTime = 7;
		size[] = { 2, 2, 2};
	};
	class RHS_RPS_K37_800_Fire: RHS_ERA_Flash
	{
		interval = 0.05;
		timerPeriod = 1;
		lifeTime = 0.25;
		weight = 1.277;
		volume = 1;
		rubbing = 0.1;
		size[] = { 0.3, 0.4, 1.2};
		color[] = { { 1, 1, 1, -6 }, { 1, 0.5, 0.5, 0 } };
		animationSpeed[] = { 1 };
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		position[] = { 0, 0, 0 };
		positionVar[] = { 0, 0, 0 };
		MoveVelocityVar[] = { 0.2, 0.5, 0.2 };
		rotationVelocityVar = 1;
	};
	class RHS_InternalFire: SmallFireF
	{
		coreIntensity		= 800;
		coreDistance		= 0.4;
		damageTime			= 0.1;
		constantDistance	= 0.02;
		damageType			= "Fire";
	};
	class RHS_Incendiary_Fire: SmallFireF
	{
		coreIntensity		= 300;
		coreDistance		= 0.9;
		damageTime			= 1.1;
		constantDistance	= 0.02;
		damageType			= "Fire";
	};
	class RHS_SmokeWP_Fire2: SmallFireF
	{
		coreIntensity		= 3;
	};
	class RHS_SmokeWP_Fire: SmallFireF
	{
		interval			=  0.01;
		CircleRadius		= 0;
		CircleVelocity[]	= {0,0,0};

		particleShape			= "\a3\Data_f\ParticleEffects\Universal\SparksDot.p3d";
		particleFSNtieth		= 1;
		particleFSIndex			= 1;
		particleFSFrameCount	= 8;
		particleFSLoop			= 0;

		angle			= 0;
		angleVar		= 0;
		animationName	= "";
		particleType	= "SpaceObject";
		timerPeriod		= 1 ;
		lifeTime		= 0.5;
		lifeTimeVar		= 0;
		weight			= 10;
		volume			= 7.8;
		rubbing			= 1.075;

		size[]		= {0.1, 0.01};
		sizeVar		= 0.25;
		sizeCoef	= 1;

		animationSpeed[]	= {0.08};
		animationSpeedCoef	= 1;

		position[]			= {0, 0, 0};
		positionVar[]		= {0.1, 0.1, 0};
		positionVarConst[]	= {0, 0, 0};

		moveVelocity[]			= {0, 0.75, 0};
		moveVelocityVar[]		= {0.175, 0, 0.175};
		moveVelocityVarConst[]	= {0, 0, 0};

		rotationVelocity	= 0;
		rotationVelocityVar	= 0;

		color[]		= {{0.1, 0.1, 0.1, 1}, {0.25, 0.25, 0.25, 0.5}, {0.5, 0.5, 0.5, 0}};
		colorVar[]	= {0, 0, 0, 0};
		colorCoef[]	= {0,0,0,0.1};

		emissiveColor[] = { { 500, 75, 35, 0 }, { 50, 7.5, 3.5, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } };

		randomDirectionPeriodVar	= 0;
		randomDirectionIntensityVar	= 0;

		destroyOnWaterSurface = 0;
		destroyOnWaterSurfaceOffset = 0;

		onSurface			= true;
		keepOnSurface		= false;
		surfaceOffset		= 0;
		bounceOnSurface		= 0.6;
		bounceOnSurfaceVar	= 0.0;
		postEffects			= "";
		particleEffects		= "";
		
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
	};
	class RHS_Incendiary_FireSparks : Default
	{
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = \A3\data_f\ParticleEffects\Universal\Universal;
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;

		angleVar = 360;

		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 3.5;
		moveVelocity[] = {0, 0.5, 0};
		rotationVelocity = 1;
		weight = 1.85;
		volume = 1;
		rubbing = 0.17;
		size[] = {0.1,0.1,0.1,0.1,0.1,0.08,0.08,0.08,0.08,0};
		color[] = {{1,0.3,0.3,-6.5},{1,0.3,0.3,-6},{1,0.3,0.3,-5.5},{1,0.3,0.3,-4.5}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.5;
		randomDirectionIntensity = 0.55;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = false;

		lifeTimeVar = 2.5;
		positionVar[] = {0, 0.2, 0};
		MoveVelocityVar[] = {0.2, 1, 0.2};
		rotationVelocityVar = 2;
		sizeVar = 0.04;
		colorVar[] = {0, 0.15, 0.15, 0};
		randomDirectionPeriodVar = 0.3;
		randomDirectionIntensityVar = 0.15;

		coreIntensity		= 0.1;
		coreDistance		= 4.5;
		damageTime			= 1.1;
		constantDistance	= 0.02;
		damageType			= "Fire";
	};
	class RHS_Rocket_Fired: Default
	{
		interval = "0.003";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		angleVar = 1;
		particleFSLoop = 0;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 7;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.8;
		rubbing = 0.00;
		size[] = {3,9};
		color[] = {{0.0,0.0,0.0,0.15},{0.05,0.05,0.05,0.1},{0.1,0.1,0.1,0.02}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		lifeTimeVar = 3;
		positionVar[] = {0.6,0.6,0.6};
		MoveVelocityVar[] = {0.8,0.8,0.8};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RocketBackfireRPGNT;
	class RHS_Rocket_Init_Fire: Default
	{
		interval = 0.0009;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};

		angleVar = 1;
		particleShape = \A3\data_f\ParticleEffects\Universal\Universal;
		particleFSNtieth = 16;
		particleFSIndex = 3;
		particleFSFrameCount = 1;
		particleFSLoop = 0;

		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.18;
		moveVelocity[] = {"-0.16 * speedX + parentSpeedX", "-0.16 * speedY + parentSpeedY", "-0.16 * speedZ + parentSpeedZ"};
		rotationVelocity = 1;
		weight = 441.275;
		volume = 381;
		rubbing = 0.0;
		size[] = {0.1, 0.5, 1.5, 1.8, 1, 0};
		sizeCoef = 1;
		color[] = {{0.4,0.4,0.4,0.4},{0.45,0.45,0.45,0.35},{0.5,0.5,0.5,0.16},{0.55,0.55,0.55,0.12},{0.6,0.6,0.6,0.02}};
		colorCoef[] = {1.2,1.2,1.2,0.9};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.5;
		onTimerScript = "";
		beforeDestroyScript = "";

		lifeTimeVar = 0.3;
		positionVar[] = {0, 0, 0};
		MoveVelocityVar[] = {0.5, 0.1, 0.5};
		rotationVelocityVar = 30;
		position[] = {0,0,-1.0};

		sizeVar = 0.15;
		colorVar[] = {0, 0, 0, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class PylonBacksmoke;
	class RHS_Rocket_Init_Smoke: PylonBacksmoke
	{
		interval = 0.001;
		lifeTime = 7;
		rubbing = 0.0;
		rotationVelocityVar = 4;
		sizeCoef = 2;
		colorCoef[] = {0,0,0,0.2};
		randomDirectionIntensity = 0.4;
		moveVelocity[] = {"-0.25 * speedX + parentSpeedX", "-0.25 * speedY + parentSpeedY", "-0.25 * speedZ + parentSpeedZ"};
		positionVar[] = {1, 1, 1};
		position[] = {0, 0, -1.2};
	};
	class ExhaustSmoke1PlaneHP;
	class RHS_ExhaustSmoke1PlaneHP: Default
	{
		interval = "0.001 * (engineDamage interpolate [0,2.5,2,8]) * (vehicleSpeedSize interpolate [0,200,10,1])";
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
		lifeTime = "0.3 * (engineDamage interpolate [0,1,3,12])";
		moveVelocity[] = {"speedX","speedY","speedZ"};
		rotationVelocity = 1;
		weight = 1.4;
		volume = 1;
		rubbing = 0.1;
		size[] = {0.3,3};
		sizeCoef = "1.4 * (engineDamage interpolate [0,1,2,6])";
		color[] = {{0.06,0.06,0.06,0.12},{0.1,0.1,0.1,0.04},{0.2,0.2,0.2,0.001},{0.3,0.3,0.3,0.0001}};
		colorCoef[] = {"15","15","15","((intensity*1.4)/2 * (engineDamage interpolate [0.0,0.4,1.5,6])) * (vehicleSpeedSize interpolate [0,200,0.51,1])"};
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
		MoveVelocityVar[] = {"1 * (engineDamage interpolate [0,1,1,2.5])","1 * (engineDamage interpolate [0,1,2,2.5])","1 * (engineDamage interpolate [0,1,1,2.5])"};
		rotationVelocityVar = 20;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RHS_HeavyBombSmk1: Default
	{
		interval = 0.007;
		circleRadius = 9;
		circleVelocity[] = {0.9, 0, 0.9};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 26;
		moveVelocity[] = {0, 12, 0};
		rotationVelocity = 1;
		weight = 1.1;
		volume = 1;
		rubbing = 0.15;
		size[] = {6, 40};
		color[] = {{0.5, 0.5, 0.5, 0.4}, {0.5, 0.5, 0.5, 0.22}, {0.6, 0.6, 0.6, 0.15}, {0.8, 0.8, 0.8, 0.05}};
		animationSpeed[] = {1.5, 0.5, 0.25, 0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1.5;
		positionVar[] = {0.2, 5.2, 0.2};
		MoveVelocityVar[] = {0.5, 22, 0.5};
		rotationVelocityVar = 20;
		sizeVar = 0.3;
		colorVar[] = {0, 0, 0, 0.3};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
	};
	class RHS_HeavyBombSmk2: RHS_HeavyBombSmk1
	{
		interval = 0.005;
		circleRadius = 6.5;
		circleVelocity[] = {8, 0, 8};
		lifeTime = 29;
		moveVelocity[] = {0, 6, 0};
		rotationVelocity = 1;
		weight = 1.175;
		volume = 1;
		rubbing = 0.15;
		size[] = {12, 26};
		color[] = {{0.5, 0.5, 0.5, 0.4}, {0.5, 0.5, 0.5, 0.22}, {0.6, 0.6, 0.6, 0.09}, {0.8, 0.8, 0.8, 0.01}};
		animationSpeed[] = {1.5, 0.5, 0.25, 0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.1;
		lifeTimeVar = 0.5;
		positionVar[] = {0.2, 0.2, 0.2};
		MoveVelocityVar[] = {0.1, 0.1, 0.1};
		rotationVelocityVar = 20;
		sizeVar = 1;
		colorVar[] = {0, 0, 0, 0};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
	};
	class RHS_HeavyBombSmk3: RHS_HeavyBombSmk1
	{
		interval = 0.02;
		circleRadius = 7;
		circleVelocity[] = {7, 0, 7};
		lifeTime = 32;
		moveVelocity[] = {0, 2, 0};
		rotationVelocity = 1;
		weight = 1.275;
		volume = 1;
		rubbing = 0.15;
		size[] = {18, 25};
		color[] = {{0.5, 0.5, 0.5, 0.4}, {0.6, 0.6, 0.6, 0.15}, {0.7, 0.7, 0.7, 0.06}, {1, 1, 1, 0.01}};
		animationSpeed[] = {0.5};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.1;
		lifeTimeVar = 2;
		positionVar[] = {3, 1, 3};
		MoveVelocityVar[] = {7, 0.5, 7};
		rotationVelocityVar = 20;
		sizeVar = 0.3;
		colorVar[] = {0, 0, 0, 0.3};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
	};
	class RHS_BombExp1: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 2;
		particleFSFrameCount = 80;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = {0, 2.5, 0};
		rotationVelocity = 0;
		weight = 2;
		volume = 1;
		rubbing = 0.1;
		size[] = {25, 38};
		color[] = {{1, 1, 1, -20}, {1, 1, 1, -15}, {1, 1, 1, -10}, {1, 1, 1, -6}, {1, 1, 1, -2}};
		animationSpeed[] = {0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.3;
		positionVar[] = {5, 6, 5};
		MoveVelocityVar[] = {2, 2, 2};
		rotationVelocityVar = 25;
		sizeVar = 0.4;
		colorVar[] = {0, 0, 0, 0.3};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
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
	class RHS_2A28_Fired: AutoCannonFired
	{
		interval = 0.003;
		angleVar = 0.5;
		lifeTime = 4.1;
		moveVelocity[] = {"25*directionX","25*directionY","25*directionZ"};
		size[] = {0.3,0.7,1,1.2,1.4,1.6,1.8};
		color[] = {{0.9,0.9,0.9,0.08},{0.9,0.9,0.9,0.036},{0.9,0.9,0.9,0.012},{0.9,0.9,0.9,0.001}};
		animationSpeed[] = {1.2};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		sizeCoef = 3.9;
		position[] = {"positionX + 0.12 * directionLocalX","positionY + 0.12 * directionLocalY","positionZ + 0.12 * directionLocalZ"};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {11,11,11};
		rotationVelocityVar = 15;
		sizeVar = 0;
	};
	class CannonFired3;
	class RHS_2A28_Fired2: CannonFired3
	{
		moveVelocity[] = {"directionX * 4.2","directionY * 4.2","directionZ * 4.2"};
		color[] = {{0.8,0.8,0.8,0.04},{0.8,0.8,0.8,0.03},{0.8,0.8,0.8,0.05},{0.8,0.8,0.8,0.01}};
	};
};

class CfgLights
{
	class RHS_LightNuke
	{
		diffuse[] = { 0.4, 0.28, 0.15 };
		color[] = { 1500, 1200, 1000 };
		ambient[] = { 1500, 1200, 1000 };
		brightness = 10000000;
		size = 1;
		intensity = 450000;
		daylight = 1;
		drawLight = 0;
		blinking = 1;
		class Attenuation
		{
			start = 0.5;
			constant = 0;
			linear = 0;
			quadratic = 0.3;
			hardLimitStart = 1500;
			hardLimitEnd = 3000;
		};
		position[] = { 0, 0, 0 };
	};
	class RHS_KPVT_Light
	{
		diffuse[] = { 0.4, 0.28, 0.15 };
		color[] = { 1, 0.5, 0.2 };
		ambient[] = { 0.8, 0.6, 0.2 };
		brightness = 0.02;
		size = 1;
		intensity = 45;
		drawLight = 0;
		blinking = 1;
		class Attenuation
		{
			start = 0.5;
			constant = 0;
			linear = 0;
			quadratic = 0.3;
			hardLimitStart = 15;
			hardLimitEnd = 30;
		};
		position[] = { 0, 0, 0 };
	};

	class RHS_SmokeWPLight
	{
		diffuse[]	= { 0.996,0.784,0.569 };
		color[]		= { 0.996,0.784,0.569 };
		ambient[]	= { 0.996,0.784,0.569 };
		brightness = "1110 + random 40";
		size = 1;
		intensity = 1100;
		drawLight = 1;
		blinking = 1;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 1;
			hardLimitStart = 40;
			hardLimitEnd = 80;
		};
		position[] = { 0, 0, 0 };
	};
	class RHS_3D17SparksLight
	{
		diffuse[] = { 0.937, 0.8, 0.7 };
		color[] = { 0.937, 0.8, 0.7 };
		ambient[] = { 0.937, 0.8, 0.7 };
		brightness = "10 + random 40";
		size = 1;
		intensity = 100;
		drawLight = 0;
		blinking = 1;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 1;
			hardLimitStart = 40;
			hardLimitEnd = 80;
		};
		position[] = { 0, 0, 0 };
	};
	class RHS_3D17ExplosionLight
	{
		lifetime = 0.2;
		diffuse[] = { 0.937, 0.7, 0.6 };
		color[] = { 0.937, 0.7, 0.6 };
		ambient[] = { 0.937, 0.7, 0.6 };
		brightness = 1000;
		size = 1;
		intensity = 80000;
		drawLight = 0;
		blinking = 1;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 2.2;
			hardLimitStart = 500;
			hardLimitEnd = 1000;
		};
		position[] = { 0, 0, 0 };
	};
};

class RHS_KPVT_Effect
{
	class Light1
	{
		simulation = "light";
		type = "FiredLightSmall";
		position[] = { 0, 0, 0 };
		intensity = 0;
		interval = 1;
		lifeTime = 0.08;
	};
	class RHS_KPVT_Flash
	{
		simulation = "particles";
		type = "RHS_KPVT_Flash";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class MachineGunCloud1
	{
		simulation = "particles";
		type = "MachineGunCloud1";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class MachineGunDust1
	{
		simulation = "particles";
		type = "MachineGunDust1";
		position[] = { 0, 0, 0 };
		enabled = "(humidity interpolate [0.2,0.20001,1,0]) * isWaterSurface";
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};

class RHS_Tank_Catridge
{
	class RHS_Tank_Catridge
	{
		simulation = "particles";
		type = "RHS_Tank_Catridge";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 5;
		lifeTime = 0.05;
		qualityLevel = 2;
	};
	class RHS_Tank_CatridgeMed
	{
		simulation = "particles";
		type = "RHS_Tank_Catridge";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 1;
	};
};

class RHS_30mm_Catridge
{
	class RHS_30mm_Catridge
	{
		simulation = "particles";
		type = "RHS_30mm_Catridge";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 2;
	};
	class RHS_30mm_CatridgeMed
	{
		simulation = "particles";
		type = "RHS_30mm_Catridge";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 1;
	};
};
class RHS_30mm_Catridge_Simulated
{
	class RHS_30mm_Catridge
	{
		simulation = "epeparticles";
		type = "RHS_30mm_Catridge";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};

class RHS_23mm_Catridge
{
	class RHS_30mm_Catridge
	{
		simulation = "particles";
		type = "RHS_23mm_Catridge";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 2;
	};
	class RHS_30mm_CatridgeMed
	{
		simulation = "particles";
		type = "RHS_23mm_Catridge";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 1;
	};
};

class RHS_145mm_Catridge
{
	class RHS_30mm_Catridge
	{
		simulation = "particles";
		type = "RHS_145mm_Catridge";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 2;
	};
	class RHS_30mm_CatridgeMed
	{
		simulation = "particles";
		type = "RHS_145mm_Catridge";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 1;
	};
};

class RHS_23mm_AmmoBeltLink
{
	class MachineGunEject1
	{
		simulation = "particles";
		type = "RHS_23mm_AmmoBeltLink";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};

class RHS_ATGM_Cap
{
	class RHS_30mm_Catridge
	{
		simulation = "particles";
		type = "RHS_ATGM_Cap";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 2;
	};
	class RHS_30mm_CatridgeMed
	{
		simulation = "particles";
		type = "RHS_ATGM_Cap";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 1;
	};
};
class RHS_ATGM_Cap_x2
{
	class RHS_30mm_Catridge
	{
		simulation = "particles";
		type = "RHS_ATGM_Cap_x2";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 2;
	};
	class RHS_30mm_CatridgeMed
	{
		simulation = "particles";
		type = "RHS_ATGM_Cap_x2";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 1;
	};
};

class RHS_NukeExplosion5
{
	class Cone
	{
		simulation	= "particles";
		type		= "RHS_NukeConeFire";
		position[]	= {0,0,0};
		intensity	= 1;
		interval	= 1;
		lifeTime	= 5;
	};
	class SmokeBottom
	{
		simulation	= "particles";
		type		= "RHS_NukeConeSmokeBottom";
		position[]	= {0,0,0};
		intensity	= 1;
		interval	= 1;
		lifeTime	= 17;
	};
	class SmokeTop
	{
		simulation	= "particles";
		type		= "RHS_NukeConeSmokeTop";
		position[]	= {0,0,0};
		intensity	= 1;
		interval	= 1;
		lifeTime	= 6;
	};
	class Smoke
	{
		simulation	= "particles";
		type		= "RHS_NukeSmokeChimney";
		position[]	= {0,0,0};
		intensity	= 1;
		interval	= 1;
		lifeTime	= 7;
	};
	class Light
	{
		simulation	= "light";
		type		= "RHS_LightNuke";
		position[]	= { 0, 0, 0 };
		intensity	= 0.1;
		interval	= 1;
		lifeTime	= 4;
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
		position[] = { 0, 0, 0 };
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class MortarExp1
	{
		simulation = "particles";
		type = "MortarExp";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class MortarSmoke1
	{
		simulation = "particles";
		type = "CloudSmallLight";
		//type = "CloudMedDark";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class RHS_3D17ParticleTail
{
	class RHS_3D17TrailEffect
	{
		simulation = "particles";
		type = "RHS_3D17TrailEffect";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = "2.4 + random 0.5";
		qualityLevel = 0;
	};
	class RHS_3D17TrailEffect1 : RHS_3D17TrailEffect
	{
		type = "RHS_3D17TrailEffect1";
		qualityLevel = 1;
	};
	class RHS_3D17TrailEffect2 : RHS_3D17TrailEffect
	{
		type = "RHS_3D17TrailEffect2";
		qualityLevel = 2;
	};
	class RHS_3D17TrailEffectLong
	{
		simulation = "particles";
		type = "RHS_3D17TrailEffectLong";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = "2.4 + random 0.5";
		qualityLevel = 0;
	};
	class RHS_3D17TrailEffectLong1 : RHS_3D17TrailEffectLong
	{
		type = "RHS_3D17TrailEffectLong1";
		qualityLevel = 1;
	};
	class RHS_3D17TrailEffectLong2 : RHS_3D17TrailEffectLong
	{
		type = "RHS_3D17TrailEffectLong2";
		qualityLevel = 2;
	};
	class RHS_3D17SparksLight
	{
		simulation = "light";
		type = "RHS_3D17SparksLight";
		position[] = { 0, 0, 0 };
		intensity = 0.001;
		interval = 1;
		lifeTime = "0 + random 3";
		qualityLevel = 1;
	};
	class RHS_3D17SparksLight2 : RHS_3D17SparksLight
	{
		qualityLevel = 2;
	};
};

class RHS_3D17ParticleTail_902B : RHS_3D17ParticleTail
{
	class RHS_3D17TrailEffect
	{
		simulation = "particles";
		type = "RHS_3D17TrailEffect";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = "2 + random 0.5";
		qualityLevel = 0;
	};
	class RHS_3D17TrailEffect1 : RHS_3D17TrailEffect
	{
		type = "RHS_3D17TrailEffect1";
		qualityLevel = 1;
	};
	class RHS_3D17TrailEffect2 : RHS_3D17TrailEffect
	{
		type = "RHS_3D17TrailEffect2";
		qualityLevel = 2;
	};
	class RHS_3D17TrailEffectLong
	{
		simulation = "particles";
		type = "RHS_3D17TrailEffectLong";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = "2 + random 0.5";
		qualityLevel = 0;
	};
	class RHS_3D17TrailEffectLong1 : RHS_3D17TrailEffectLong
	{
		type = "RHS_3D17TrailEffectLong1";
		qualityLevel = 1;
	};
	class RHS_3D17TrailEffectLong2 : RHS_3D17TrailEffectLong
	{
		type = "RHS_3D17TrailEffectLong2";
		qualityLevel = 2;
	};
	class RHS_3D17SparksLight
	{
		simulation = "light";
		type = "RHS_3D17SparksLight";
		position[] = { 0, 0, 0 };
		intensity = 0.001;
		interval = 1;
		lifeTime = "0 + random 3";
		qualityLevel = 1;
	};
};

class RHS_3D17ParticleLight
{
	class RHS_3D17SparksLight
	{
		simulation = "light";
		type = "RHS_3D17SparksLight";
		position[] = { 0, 0, 0 };
		intensity = 0.001;
		interval = 1;
		lifeTime = "1 + random 2";
	};
};

class RHS_3D17Effect
{
	class ExplosionLight
	{
		simulation = "light";
		type = "RHS_3D17ExplosionLight";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ExplosionSparksBig
	{
		simulation = "particles";
		type = "RHS_3D17SparksBig";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
		qualityLevel = 2;
	};
	class ExplosionSparksSlow
	{
		simulation = "particles";
		type = "RHS_3D17SparksSlow";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
		qualityLevel = 2;
	};
	class ExplosionSparksTail
	{
		simulation = "particles";
		type = "RHS_3D17SparksTail";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ExplosionSparksSmall
	{
		simulation = "particles";
		type = "RHS_3D17SparksSmall";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 0;
	};
	class ExplosionSparksSmall1 : ExplosionSparksSmall
	{
		lifeTime = 0.075;
		qualityLevel = 1;
	};
	class ExplosionSparksSmall2 : ExplosionSparksSmall
	{
		lifeTime = 0.1;
		qualityLevel = 2;
	};
	class ExplosionSparksBack
	{
		simulation = "particles";
		type = "RHS_3D17SparksBack";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class ExplosionCloud
	{
		simulation = "particles";
		type = "RHS_3D17ExplosionCloud";
		position[] = { 0, 0, 0.5 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class GrenadeExp1
	{
		simulation = "particles";
		type = "GrenadeExp";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
};
class RHS_3D17Effect_902B
{
	class ExplosionLight
	{
		simulation = "light";
		type = "RHS_3D17ExplosionLight";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ExplosionSparksBig
	{
		simulation = "particles";
		type = "RHS_3D17SparksBig";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
		qualityLevel = 2;
	};
	class ExplosionSparksSlow
	{
		simulation = "particles";
		type = "RHS_3D17SparksSlow";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
		qualityLevel = 2;
	};
	class ExplosionSparksTail
	{
		simulation = "particles";
		type = "RHS_3D17SparksTail_902B";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ExplosionSparksSmall
	{
		simulation = "particles";
		type = "RHS_3D17SparksSmall";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 0;
	};
	class ExplosionSparksBack
	{
		simulation = "particles";
		type = "RHS_3D17SparksBack";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class ExplosionSparksSmall1 : ExplosionSparksSmall
	{
		lifeTime = 0.075;
		qualityLevel = 1;
	};
	class ExplosionSparksSmall2 : ExplosionSparksSmall
	{
		lifeTime = 0.1;
		qualityLevel = 2;
	};
	class ExplosionCloud
	{
		simulation = "particles";
		type = "RHS_3D17ExplosionCloud";
		position[] = { 0, 0, 0.5 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class GrenadeExp1
	{
		simulation = "particles";
		type = "GrenadeExp";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
};

class RHS_D832DUParticleTail
{
	class RHS_D832DUTrailEffect
	{
		simulation = "particles";
		type = "RHS_D832DUTrailEffect";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = "2.4 + random 0.5";
		qualityLevel = 0;
	};
	class RHS_D832DUTrailEffect1 : RHS_D832DUTrailEffect
	{
		type = "RHS_D832DUTrailEffect1";
		qualityLevel = 1;
	};
	class RHS_D832DUTrailEffect2 : RHS_D832DUTrailEffect
	{
		type = "RHS_D832DUTrailEffect2";
		qualityLevel = 2;
	};
	class RHS_D832DUTrailEffectLong
	{
		simulation = "particles";
		type = "RHS_D832DUTrailEffectLong";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = "2.4 + random 0.5";
		qualityLevel = 0;
	};
	class RHS_D832DUTrailEffectLong1 : RHS_D832DUTrailEffectLong
	{
		type = "RHS_D832DUTrailEffectLong1";
		qualityLevel = 1;
	};
	class RHS_D832DUTrailEffectLong2 : RHS_D832DUTrailEffectLong
	{
		type = "RHS_D832DUTrailEffectLong2";
		qualityLevel = 2;
	};
	class RHS_3D17SparksLight
	{
		simulation = "light";
		type = "RHS_3D17SparksLight";
		position[] = { 0, 0, 0 };
		intensity = 0.001;
		interval = 1;
		lifeTime = "0 + random 3";
		qualityLevel = 1;
	};
	class RHS_3D17SparksLight2 : RHS_3D17SparksLight
	{
		qualityLevel = 2;
	};
};

class RHS_D832DUEffect
{
	class ExplosionLight
	{
		simulation = "light";
		type = "RHS_3D17ExplosionLight";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ExplosionSparksBig
	{
		simulation = "particles";
		type = "RHS_3D17SparksBig";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
		qualityLevel = 2;
	};
	class ExplosionSparksSlow
	{
		simulation = "particles";
		type = "RHS_3D17SparksSlow";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
		qualityLevel = 2;
	};
	class ExplosionSparksTail
	{
		simulation = "particles";
		type = "RHS_D832DUSparksTail";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ExplosionSparksSmall
	{
		simulation = "particles";
		type = "RHS_3D17SparksSmall";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 0;
	};
	class ExplosionSparksSmall1 : ExplosionSparksSmall
	{
		lifeTime = 0.075;
		qualityLevel = 1;
	};
	class ExplosionSparksSmall2 : ExplosionSparksSmall
	{
		lifeTime = 0.1;
		qualityLevel = 2;
	};
	class ExplosionSparksBack
	{
		simulation = "particles";
		type = "RHS_3D17SparksBack";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class ExplosionCloud
	{
		simulation = "particles";
		type = "RHS_D832DUExplosionCloud";
		position[] = { 0, 0, 0.5 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class GrenadeExp1
	{
		simulation = "particles";
		type = "GrenadeExp";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
};

class RHS_D832DUBurnEffect
{
	class SmokeShellWhite
	{
		simulation = "particles";
		type = "SmokeShellWhiteSmall";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class Flare1
	{
		simulation = "particles";
		type = "FlareShell";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 60;
	};
	class Light1
	{
		simulation = "light";
		type = "RHS_SmokeWPLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 60;
	};
	class Fire
	{
		simulation = "particles";
		type = "RHS_SmokeWP_Fire";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 60;
	};
	class Fire2
	{
		simulation = "particles";
		type = "RHS_SmokeWP_Fire2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 60;
	};
	class FireSparks
	{
		simulation = "particles";
		type = "RHS_Incendiary_FireSparks";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 60;
	};
};
class RHS_Airburst_Explosion
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = { 0, 1.5, 0 };
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "VehExplosionParticles";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Explosion2
	{
		simulation = "particles";
		type = "FireBallBright";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Smoke1
	{
		simulation = "particles";
		type = "VehExpSmoke";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "VehExpSmoke2";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class RHS_D30_Fired
{
	class CannonFired3
	{
		simulation = "particles";
		type = "CannonFired3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 2;
	};
	class CannonFired3Med
	{
		simulation = "particles";
		type = "CannonFired3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 1;
	};
	class CannonFiredDust1
	{
		simulation = "particles";
		type = "CircleDustTankBig";
		enabled = "(distToSurface interpolate [10.099,10.1,1,-1])";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class CannonFiredDust2
	{
		simulation = "particles";
		type = "CircleDustTankSmall";
		enabled = "(distToSurface interpolate [10.099,10.1,1,-1])";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class CannonFiredDust3
	{
		simulation = "particles";
		type = "CircleDustTankLong";
		enabled = "(distToSurface interpolate [10.099,10.1,1,-1])";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};
class RHS_AutoCannonFired
{
	class MachineGun2
	{
		simulation = "particles";
		type = "RHS_MachineGun2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class Light1
	{
		simulation = "light";
		type = "FiredLightSmall";
		position[] = {0,0,0};
		intensity = 0;
		interval = 1;
		lifeTime = 0.08;
	};
	class AutoCannonFired
	{
		simulation = "particles";
		type = "RHS_AutoCannon_Fired";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class RHS_2A28_Fired
{
	class MachineGun2
	{
		simulation = "particles";
		type = "RHS_MachineGun2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class Light1
	{
		simulation = "light";
		type = "FiredLightSmall";
		position[] = {0,0,0};
		intensity = 0;
		interval = 1;
		lifeTime = 0.08;
	};
	class AutoCannonFired
	{
		simulation = "particles";
		type = "RHS_2A28_Fired";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class CannonFired3
	{
		simulation = "particles";
		type = "RHS_2A28_Fired2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.4;
		qualityLevel = 2;
	};
};
class RHS_2A42_Fired
{
	class Light1
	{
		simulation = "light";
		type = "FiredLightSmall";
		position[] = {0,0,0};
		intensity = 0;
		interval = 1;
		lifeTime = 0.08;
	};
	class AutoCannonFired
	{
		simulation = "particles";
		type = "RHS_2A42_Fired";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class RHS_YakB_Catridge
{
	class MachineGunCartridge1
	{
		simulation = "particles";
		type = "RHS_YakB_Catridge";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 2;
	};
	class MachineGunCartridge1Med
	{
		simulation = "particles";
		type = "RHS_YakB_Catridge";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 1;
	};
};
class RHS_HeavyBombCrater
{
	class BombSmk1		//top part of smoke
	{
		simulation = "particles";
		type = "RHS_HeavyBombSmk1";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1.7;
	};
	class BombSmk2		//smoke circle around the explosion
	{
		simulation = "particles";
		type = "RHS_HeavyBombSmk2";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1.7;
	};
	class BombSmk3	//center smoke
	{
		simulation = "particles";
		type = "RHS_HeavyBombSmk3";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 6;
	};
	class BombDust
	{
		simulation = "particles";
		type = "BombDust";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 3;
	};
};
class RHS_HeavyBombExplosion
{
	class ExpSparksBig
	{
		simulation = "particles";
		type = "ExpSparks";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class ShardsBig
	{
		simulation = "particles";
		type = "ObjectDestructionShards";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShardsBig1
	{
		simulation = "particles";
		type = "ObjectDestructionShards1";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShardsBig2
	{
		simulation = "particles";
		type = "ObjectDestructionShards2";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShardsBig3
	{
		simulation = "particles";
		type = "ObjectDestructionShards3";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShardsBigBurn
	{
		simulation = "particles";
		type = "ObjectDestructionShardsBurning";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShardsBigBurn1
	{
		simulation = "particles";
		type = "ObjectDestructionShardsBurning1";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShardsBigBurn2
	{
		simulation = "particles";
		type = "ObjectDestructionShardsBurning2";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShardsBigBurn3
	{
		simulation = "particles";
		type = "ObjectDestructionShardsBurning3";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class LightExpBig
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,1.5,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion1Big
	{
		simulation = "particles";
		type = "VehExplosionParticles";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class BombExp1
	{
		simulation = "particles";
		type = "RHS_BombExp1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke1Big
	{
		simulation = "particles";
		type = "VehExpSmoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke1Big
	{
		simulation = "particles";
		type = "VehExpSmoke2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class RHS_MissileExplosion
{
	class ExpSparksBig
	{
		simulation = "particles";
		type = "ExpSparks";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class ShardsBig
	{
		simulation = "particles";
		type = "ObjectDestructionShards";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShardsBig1
	{
		simulation = "particles";
		type = "ObjectDestructionShards1";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShardsBig2
	{
		simulation = "particles";
		type = "ObjectDestructionShards2";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShardsBig3
	{
		simulation = "particles";
		type = "ObjectDestructionShards3";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShardsBigBurn
	{
		simulation = "particles";
		type = "ObjectDestructionShardsBurning";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShardsBigBurn1
	{
		simulation = "particles";
		type = "ObjectDestructionShardsBurning1";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShardsBigBurn2
	{
		simulation = "particles";
		type = "ObjectDestructionShardsBurning2";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShardsBigBurn3
	{
		simulation = "particles";
		type = "ObjectDestructionShardsBurning3";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class LightExpBig
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,1.5,0};
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion1Big
	{
		simulation = "particles";
		type = "VehExplosionParticles";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Explosion2Big
	{
		simulation = "particles";
		type = "FireBallBright";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class BombExp1
	{
		simulation = "particles";
		type = "RHS_BombExp1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke1Big
	{
		simulation = "particles";
		type = "VehExpSmoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke1Big
	{
		simulation = "particles";
		type = "VehExpSmoke2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class RHS_CounterMeasureFlare
{
	class Cmeasures1
	{
		simulation = "particles";
		type = "Cmeasures1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 4.5;
		qualityLevel = 2;
	};
	class Cmeasures1M
	{
		simulation = "particles";
		type = "Cmeasures1M";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 4.5;
		qualityLevel = 1;
	};
	class Cmeasures1L
	{
		simulation = "particles";
		type = "Cmeasures1L";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 4.5;
		qualityLevel = 0;
	};
	class Cmeasures2
	{
		simulation = "particles";
		type = "Cmeasures2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 3.2;
	};
	class Light1
	{
		simulation = "light";
		type = "CmeasuresLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 3;
	};
};
class RHS_Incendiary_Bomb
{
	class Flare1
	{
		simulation = "particles";
		type = "Flare1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShell
	{
		simulation = "particles";
		type = "SmokeShellWhite";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class Fire
	{
		simulation = "particles";
		type = "RHS_Incendiary_Fire";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class FireSparks
	{
		simulation = "particles";
		type = "RHS_Incendiary_FireSparks";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
class RHS_Rocket_Fired
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
	class Missile
	{
		simulation = "particles";
		type = "RHS_Rocket_Fired";
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
class RHS_Rocket_Init
{
	class RocketBackfire1
	{
		simulation = "particles";
		type = "RHS_Rocket_Init_Fire";
		start = 1;
	};
	class MissileDARSmoke: RocketBackfire1
	{
		simulation = "particles";
		type = "RHS_Rocket_Init_Smoke";
	};
};
class RHS_ExhaustsEffectPlaneHP
{
	class ExhaustsEffect01
	{
		simulation = "particles";
		type = "RHS_ExhaustSmoke1PlaneHP";
	};
	class ExhaustsEffectRefract01
	{
		simulation = "particles";
		type = "ExhaustSmokeRefractPlane";
	};
};
class RHS_ATGM_Pusher_Eject
{
	class ATGM_Pusher
	{
		simulation	= "particles";
		type		= "RHS_ATGM_Pusher_Eject";
		start = 1;
	};
};
class RHS_125mm_Sabot_Eject
{
	class FX_1
	{
		simulation	= "particles";
		type		= "RHS_125mm_Sabot_1_Eject";
		position[]	= {0,0,0};
		intensity	= 1;
		interval	= 1;
		lifeTime	= 1;
		enabled		= "flyTime interpolate [0,0.2,1,-1]";
	};
	class FX_2: FX_1
	{
		type		= "RHS_125mm_Sabot_2_Eject";
	};
	class FX_3: FX_1
	{
		type		= "RHS_125mm_Sabot_3_Eject";
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