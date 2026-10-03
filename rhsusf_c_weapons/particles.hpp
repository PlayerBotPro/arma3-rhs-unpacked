
class CfgCloudlets
{
	class Default;
	class FlareShell;
	class RocketBackfireRPGNT;
	class RocketBacksmokeRPGNT;
	class RHS_RocketBackfireRPGNT : RocketBackfireRPGNT
	{

	};
	class RHS_Fired_M136HEAT : RHS_RocketBackfireRPGNT
	{
		interval = 0.265;
		lifeTime = 0.001;
		lifeTimeVar = 0;
		beforeDestroyScript = "rhsusf\addons\rhsusf_c_weapons\scripts\rhs_eh_m136heat.sqf";
	};
	class RHS_Fired_M136HEDP : RHS_Fired_M136HEAT
	{
		beforeDestroyScript = "rhsusf\addons\rhsusf_c_weapons\scripts\rhs_eh_m136hedp.sqf";
	};
	class RHS_Fired_M136HP : RHS_Fired_M136HEAT
	{
		beforeDestroyScript = "rhsusf\addons\rhsusf_c_weapons\scripts\rhs_eh_m136hp.sqf";
	};
	class RHS_Fired_M72A7 : RHS_RocketBackfireRPGNT
	{
		interval = 0.265;
		lifeTime = 0.001;
		lifeTimeVar = 0;
		beforeDestroyScript = "rhsusf\addons\rhsusf_c_weapons\scripts\rhs_eh_m72a7.sqf";
	};

	class RHS_CS_Gas : Default
	{
		interval = 0.265;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		angle = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		lifeTime = 0.05;
		moveVelocity[] = { 0, 0, 0 };
		rotationVelocity = 0;
		animationSpeed[] = { 1000 };
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 1;

		timerPeriod = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "rhsusf\addons\rhsusf_c_weapons\scripts\rhs_cs_gas.sqf";

		lifeTimeVar = 0;
		positionVar[] = { 0, 0, 0 };
		MoveVelocityVar[] = { 0, 0, 0 };
		rotationVelocityVar = 0;
		sizeVar = 0;
	};
	/*
	another copy in rhsafrf!
	*/
	class RHSUSF_flashbang_10 : Default
	{
		interval = 0.265;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		angle = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		lifeTime = 0.05;
		moveVelocity[] = { 0, 0, 0 };
		rotationVelocity = 0;
		animationSpeed[] = { 1000 };
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 1;

		timerPeriod = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "rhsusf\addons\rhsusf_c_weapons\scripts\rhs_flashbang_10m.sqf";

		lifeTimeVar = 0;
		positionVar[] = { 0, 0, 0 };
		MoveVelocityVar[] = { 0, 0, 0 };
		rotationVelocityVar = 0;
		sizeVar = 0;
	};
	class RHSUSF_flashbang_15 : RHSUSF_flashbang_10
	{
		beforeDestroyScript = "rhsusf\addons\rhsusf_c_weapons\scripts\rhs_flashbang_15m.sqf";
	};
	class RHSUSF_flashbang_20 : RHSUSF_flashbang_10
	{
		beforeDestroyScript = "rhsusf\addons\rhsusf_c_weapons\scripts\rhs_flashbang_20m.sqf";
	};
	class RHS_M397_Effect : RHSUSF_flashbang_10
	{
		beforeDestroyScript = "rhsusf\addons\rhsusf_c_weapons\scripts\rhs_m397_effect.sqf";
	};
	class RHSUSF_flashbang_smoke : Default
	{
        sizeCoef = 1;
        position[] = {0,0,0};
        interval = 0.03;
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 7;
        particleFSFrameCount = 48;
        particleFSLoop = 1;
        angleVar = 0.1;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 10;
        moveVelocity[] = {0.2,0.9,0.2};
        rotationVelocity = 1;
        weight = 1.2757;
        volume = 1;
        rubbing = 0.05;
        size[] = {1.9,2,9};
        color[] = {{1,1,1,0.4},{1,1,1,0.5},{0.6,0.6,0.6,0}};
        animationSpeed[] = {1.5,0.5};
        randomDirectionPeriod = 1;
        randomDirectionIntensity = 0.04;
        onTimerScript = "";
        beforeDestroyScript = "";
        destroyOnWaterSurface = 1;
        destroyOnWaterSurfaceOffset = -0.6;
        lifeTimeVar = 2;
        positionVar[] = {0,0,0};
        MoveVelocityVar[] = {0.45,1.05,0.45};
        rotationVelocityVar = 20;
        sizeVar = 0.5;
        colorVar[] = {0,0,0,0.35};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
        blockAIVisibility = 1;
	};
	class RHSUSF_40mmPractice_Smoke : Default
	{
		interval = 0.004;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 9;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = { 0, 1.5, 0 };
		rotationVelocity = 0;
		weight = 0.0522;
		volume = 0.04;
		rubbing = 0.24;
		size[] = { "0.013 * intensity + 3", "0.0125 * intensity + 6", "0.013 * intensity + 8", "0.013 * intensity + 10" };
		color[] = { { 0.86, 0.53, 0.52, 0.62 }, { 0.86, 0.53, 0.52, 0.48 }, { 0.86, 0.53, 0.52, 0.38 }, { 0.86, 0.53, 0.52, 0.24 }, { 0.86, 0.53, 0.52, 0.10 }, { 0.86, 0.53, 0.52, 0.01 } };
		animationSpeed[] = { 1000 };
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -1;
		lifeTimeVar = 1;
		positionVar[] = { 0.8, 0.2, 0.8 };
		MoveVelocityVar[] = { 2.5, 3.5, 2.5 };
		rotationVelocityVar = 3;
		sizeVar = 0.4;
		colorVar[] = { 0, 0, 0, 0 };
		randomDirectionPeriodVar = 0.5;
		randomDirectionIntensityVar = 0.02;
	};
	class RHSUSF_40mmPractice_SmokeCrater : Default
	{
		interval = 0.008;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4.5;
		moveVelocity[] = { 0.2, 0.1, 0 };
		rotationVelocity = 4;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.24;
		size[] = { "0.013 * intensity + 0.3", "0.0125 * intensity + 1.5", "0.013 * intensity + 3.5", "0.013 * intensity + 6.5" };
		color[] = { { 0.86, 0.53, 0.52, 0.62 }, { 0.86, 0.53, 0.52, 0.48 }, { 0.86, 0.53, 0.52, 0.38 }, { 0.86, 0.53, 0.52, 0.24 }, { 0.86, 0.53, 0.52, 0.10 }, { 0.86, 0.53, 0.52, 0.01 } };
		animationSpeed[] = { 0 };
		randomDirectionPeriod = 0.3;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.1;
		lifeTimeVar = 1.5;
		positionVar[] = { 0.1, 0, 0.1 };
		MoveVelocityVar[] = { 0, 0.1, 0 };
		rotationVelocityVar = 1.5;
		sizeVar = 0.2;
		colorVar[] = { 0, 0, 0, 0 };
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.1;
	};
	class RHSUSF_HeatHaze : Default
	{
		interval = 0.07;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1.1;
		lifeTime = 2;
		moveVelocity[] = { "-0.001*directionX", "-0.001*directionY", "-0.001*directionZ" };
		rotationVelocity = 1;
		weight = 1.265;
		volume = 1;
		rubbing = 0.07;
		size[] = { 0.05, 0.12 };
		color[] = { { 0.06, 0.06, 0.06, 0.20 }, { 0.3, 0.3, 0.3, 0.17 }, { 0.3, 0.3, 0.3, 0.14 }, { 0.3, 0.3, 0.3, 0.11 }, { 0.3, 0.3, 0.3, 0.05 } };
		colorCoef[] = { 1, 1, 1, 1 };
		animationSpeed[] = { 2, 1 };
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.02;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		blockAIVisibility = 0;
		sizeCoef = 0.5;
		animationSpeedCoef = 1;
		position[] = { "positionX", "positionY", "positionZ" };
		lifeTimeVar = 0.5;
		positionVar[] = { 0, 0, 0 };
		MoveVelocityVar[] = { 0, 0, 0 };
		rotationVelocityVar = 5;
		sizeVar = 0.05;
		colorVar[] = { 0, 0, 0, 0 };
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RHSUSF_HeatHaze1 : RHSUSF_HeatHaze
	{
		interval = 0.006;
		lifeTime = 2;
		lifeTimeVar = 0.5;
		weight = 1.255;
		moveVelocity[] = { "-0.002*directionX", "-0.002*directionY", "-0.002*directionZ" };
		size[] = { 0.05, 0.12 };
		sizeVar = 0.2;
		color[] = { { 0.06, 0.06, 0.06, 0.23 }, { 0.3, 0.3, 0.3, 0.20 }, { 0.3, 0.3, 0.3, 0.17 }, { 0.3, 0.3, 0.3, 0.14 }, { 0.3, 0.3, 0.3, 0.05 } };
		randomDirectionIntensity = 0.03;
	};
	class RHSUSF_12gExplo_Smoke : Default
	{
		interval = 0.004;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 1;
		moveVelocity[] = { "surfNormalX * 10", "surfNormalY * 10", "surfNormalZ * 10" };
		rotationVelocity = 1;
		weight = 1.28;
		volume = 1;
		rubbing = 0.5;
		size[] = { 0.7, 0.9 };
		sizeCoef = 1;
		color[] = { { 0.3, 0.3, 0.3, 0.5 }, { 0.4, 0.4, 0.4, 0.25 }, { 0.5, 0.5, 0.5, 0.15 }, { 0.6, 0.6, 0.6, 0.07 }, { 0.8, 0.8, 0.8, 0 } };
		colorCoef[] = { 1, 1, 1, 1 };
		animationSpeed[] = { 1 };
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		position[] = { 0, 0, 0 };
		positionVar[] = { 0.4, 0.4, 0.4 };
		moveVelocityVar[] = { 1.5, 1.5, 1.5 };
		rotationVelocityVar = 2;
		sizeVar = 0.2;
		colorVar[] = { 0.05, 0.05, 0.05, 0.3 };
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class MachineGunCartridge;
	class MachineGunCartridge2;
	class RHSUSF_762Cartridge : MachineGunCartridge2
	{
		interval = 0.08;
		lifeTime = 2;
		particleShape = "\A3\weapons_f\ammo\cartridge_762.p3d";
		size[] = { 1 };
		moveVelocity[] = { "-directionX * 4", "-directionY * 4", "-directionZ * 4" };
		MoveVelocityVar[] = { 0.2, 0.2, 0.2 };
		bounceOnSurface = 0;
	};
	class RHSUSF_556Cartridge : RHSUSF_762Cartridge
	{
		interval = 0.075;
		size[] = { 0.73 };
		moveVelocity[] = { "-directionX * 5", "-directionY * 5", "-directionZ * 5" };
		MoveVelocityVar[] = { 0.25, 0.25, 0.25 };
	};

	class RHSUSF_ANM14_Starter_SparksBurst : Default
	{
		interval = 0.0001;
		color[] = { { 1, 0.3, 0.1, -500 }, { 1, 0.3, 0.1, -500 } };
		emissiveColor[] = { { 250, 50, 25, 0 }, { 0, 0, 0, 0 } };
		lifeTime = 0.015;
		lifeTimeVar = 1;
		weight = 1000;
		volume = 0.01;
		rubbing = 0.15;
		size[] = { 0.075, 0.015, 0 };
		sizeVar = 0.5;
		moveVelocity[] = { 1, 10, 1 };
		moveVelocityVar[] = { 3, 4, 3 };
		bounceOnSurface = 0.05;
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
		colorCoef[] = { 1, 1, 1, 1 };
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
	class RHSUSF_ANM14_Starter_SparksStream : RHSUSF_ANM14_Starter_SparksBurst
	{
		interval = 0.001;
		lifeTime = 0.15;
		lifeTimeVar = 5;
		moveVelocity[] = { 1, 5, 1 };
		moveVelocityVar[] = { 2, 5, 2 };
		bounceOnSurface = 0.1;
		bounceOnSurfaceVar = 0.1;
	};
	class RHSUSF_ANM14_Starter_SparksOmni : RHSUSF_ANM14_Starter_SparksBurst
	{
		interval = 0.008;
		lifeTime = 0.05;
		lifeTimeVar = 4;
		moveVelocity[] = { 1, 1, 1 };
		moveVelocityVar[] = { 5, 5, 5 };
		bounceOnSurface = 0.1;
		bounceOnSurfaceVar = 0.1;
	};
	class RHSUSF_ANM14_Starter_SparksOmniSparkle : RHSUSF_ANM14_Starter_SparksOmni
	{
		interval = 0.5;
		size[] = { 0.15, 0.05, 0 };
		moveVelocityVar[] = { 6, 6, 6 };
		postEffects = "RHSUSF_ANM14_SparksSparkleEffect";
	};
	class RHSUSF_ANM14_Starter_SparksOmniSparklings : RHSUSF_ANM14_Starter_SparksBurst
	{
		interval = 0.0002;
		lifeTime = 0.003;
		lifeTimeVar = 1;
		moveVelocity[] = { 1, 1, 1 };
		moveVelocityVar[] = { 6, 6, 6};
	};
	class RHSUSF_ANM14_Starter_SparksDrop : RHSUSF_ANM14_Starter_SparksBurst
	{
		interval = 0.012;
		lifeTime = 0.05;
		lifeTimeVar = 4;
		moveVelocity[] = { 0.1, -1, 0.1 };
		moveVelocityVar[] = { 1, 0, 1 };
		bounceOnSurface = 0.0;
		bounceOnSurfaceVar = 0.0;
	};
	class RHSUSF_ANM14_Starter_SparksDropLightFire : RHSUSF_ANM14_Starter_SparksBurst
	{
		interval = 0.3;
		lifeTime = 1;
		lifeTimeVar = 2;
		size[] = { 0.25, 0.10, 0 };
		sizeVar = 0.5;
		moveVelocity[] = { 1, 0, 1 };
		moveVelocityVar[] = { 1, 0, 1 };
		bounceOnSurface = -1;
		bounceOnSurfaceVar = 0.0;
		particleEffects = "RHSUSF_ANM14_SparksLightFireEffect";
	};
	class RHSUSF_ANM14_Starter_SmokeStream : Default
	{
		animationSpeedCoef = 1;
		sizeCoef = 1;
		position[] = { 0, 0, 0 };
		interval = 0.025;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 5;
		lifeTimeVar = 2;
		moveVelocity[] = { 0, 3, 0 };
		rotationVelocity = 1;
		weight = 1.272;
		volume = 1;
		rubbing = 0.25;
		size[] = { 0.5, 1.5, 4 };
		color[] = { { 1.0, 1.0, 1.0, 0.15 }, { 1.0, 1.0, 1.0, 0.05 }, { 1.0, 1.0, 1.0, 0 } };
		colorVar[] = { 0, 0, 0, 0.15 };
		colorCoef[] = { 1, 1, 1, 1 };
		animationSpeed[] = { 1.5, 0.5 };
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0.04;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.6;
		positionVar[] = { 0, 0, 0 };
		MoveVelocityVar[] = { 0.25, 0.5, 0.25 };
		rotationVelocityVar = 10;
		sizeVar = 0.5;
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RHSUSF_ANM14_SmokeStream : RHSUSF_ANM14_Starter_SmokeStream
	{
		interval = 0.05;
		moveVelocity[] = { 0, 2, 0 };
		color[] = { { 1.0, 1.0, 1.0, 0.20 }, { 1.0, 1.0, 1.0, 0.1 }, { 1.0, 1.0, 1.0, 0 } };
		size[] = { 0.5, 2, 6 };
	};
	class RHSUSF_ANM14_Cloud : Default
	{
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 4;
		particleFSLoop = 0;
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
		interval = 0.5;
		colorVar[] = { 0, 0, 0, 0 };
		lifeTime = 3;
		lifeTimeVar = 0.5;
		weight = 1.276;
		volume = 1;
		rubbing = 0.1;
		size[] = { 0.1, 2, 4 };
		sizeVar = 0.5;
		color[] = { { 0.6, 0.6, 0.6, 0 }, { 0.5, 0.5, 0.5, 0.05 }, { 0.5, 0.5, 0.5, 0.1 }, { 0.5, 0.5, 0.5, 0.07 }, { 0.5, 0.5, 0.5, 0.05 }, { 0.8, 0.8, 0.8, 0.01 }, { 1, 1, 1, 0 } };
		emissiveColor[] = { { 5, 2, 1, 0 }, { 0, 0, 0, 0 } };
		rotationVelocity = 0.75;
		rotationVelocityVar = 0.5;
		randomDirectionPeriod = 1.25;
		randomDirectionIntensity = 0.25;
		randomDirectionIntensityVar = 0.1;
		position[] = { 0, 0, 0 };
		positionVar[] = { 0.1, 0.1, 0.1 };
		blockAIVisibility = 0;
	};
	class RHSUSF_ANM14_Fire : Default
	{
		interval = 0.1;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleFSNtieth = 16;
		particleFSIndex = 10;
		particleFSFrameCount = 32;
		particleFSLoop = 1;
		angleVar = 0.1;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.2;
		moveVelocity[] = { 0, 1.5, 0 };
		rotationVelocity = 0;
		weight = 0.045;
		volume = 0.04;
		rubbing = 0.1;
		size[] = { 0.2, 0.02 };
		color[] = { { 1, 1, 1, -1 } };
		animationSpeed[] = { 0.5, 1 };
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.3;
		positionVar[] = { 0.1, 0.3, 0.1 };
		moveVelocityVar[] = { 0.3, 0.5, 0.3 };
		rotationVelocityVar = 10;
		sizeVar = 0.5;
		colorVar[] = { 0.1, 0.1, 0.1, 0 };
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		coreIntensity = 1800;
		coreDistance = 0.4;
		damageTime = 0.1;
		constantDistance = 1.5;
		damageType = "Fire";
	};
	class RHSUSF_ANM14_SparksFire : RHSUSF_ANM14_Fire
	{
		interval = 0.1;
		lifeTime = 0.2;
		weight = 1.276;
		size[] = { 0.1, 0.02 };
		volume = 1;
		rubbing = 0;
		coreIntensity = 2;
		coreDistance = 1;
	};
	class RHSUSF_ANM14_Light : RHSUSF_flashbang_smoke
	{
		color[] = { { 0, 0, 0, 0 } };
		size[] = { 0 };
		interval = 10;
		lifeTime = 0.0001;
		timerPeriod = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "rhsusf\addons\rhsusf_c_weapons\scripts\rhs_anm14_effect.sqf";
	};

	// SMAW
	// Author: TF47 blackpixel
	class RHSUSF_SMAW_CircleDust : RocketBacksmokeRPGNT
	{
		interval = 0.01;
		lifeTime = 2.5;
		moveVelocity[] = { "0.8", "0.8", "0.8" };
		rotationVelocity = 1;
		weight = 0.1275;
		volume = 0.1;
		rubbing = 0.4;
		size[] = { 0.2, 0.8, 1.2, 1.4, 1.53 };
		sizeCoef = 1;
		colorCoef[] = { 0.65, 0.65, 0.65, 0.18 };
		animationSpeed[] = { 5 };
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.3;
		randomDirectionIntensity = 0.04;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.8;
		position[] = { "0", "0", "0" };
		positionVar[] = { 0.1, 0.1, 0.1 };
		MoveVelocityVar[] = { 0.2, 0.2, 0.2 };
		rotationVelocityVar = 20;
		sizeVar = 0.15;
	};

	class RHSUSF_SMAW_RocketBacksmoke : Default
	{
		interval = 5e-005;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0.5;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = { "-speedX/25", "-speedY/25", "-speedZ/25" };
		rotationVelocity = 0.5;
		weight = 0.1275;
		volume = 0.1;
		rubbing = 0.4;
		size[] = { 0.2, 2, 3.2, 3.9, 4.5, 5.4 };
		sizeCoef = 1;
		color[] = { { 0.7, 0.7, 0.7, 0.32 }, { 0.7, 0.7, 0.7, 0.18 }, { 0.7, 0.7, 0.7, 0.1 }, { 0.7, 0.7, 0.7, 0.06 }, { 0.7, 0.7, 0.7, 0.02 }, { 0.7, 0.7, 0.7, 0.01 }, { 0.7, 0.7, 0.7, 0.001 } };
		colorCoef[] = { 1, 1, 1, 0.4 };
		animationSpeed[] = { 0.8, 0.3, 0.25 };
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.3;
		randomDirectionIntensity = 0.04;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		position[] = { 0, 0, -3 };
		positionVar[] = { 0.2, 0.2, 0.2 };
		MoveVelocityVar[] = { 4, 4, 4 };
		rotationVelocityVar = 4;
		sizeVar = 0.3;
		colorVar[] = { 0, 0, 0, 0.06 };
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};

	class RHSUSF_SMAW_RocketFrontsmoke : Default
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 0.5;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = { "speedX/180", "speedY/180", "speedZ/180" };
		rotationVelocity = 0.5;
		weight = 0.1275;
		volume = 0.1;
		rubbing = 0.4;
		size[] = { 0.2, 0.8, 1.2, 1.4, 1.53 };
		sizeCoef = 2;
		color[] = { { 1, 1, 1, 0.5 }, { 1, 1, 1, 0.4 }, { 1, 1, 1, 0.32 }, { 1, 1, 1, 0.24 }, { 1, 1, 1, 0.16 }, { 1, 1, 1, 0.08 }, { 1, 1, 1, 0.01 } };
		colorCoef[] = { 0.65, 0.65, 0.65, 0.18 };
		animationSpeed[] = { 5 };
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.3;
		randomDirectionIntensity = 0.04;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.8;
		position[] = { 0, 0, 0 };
		positionVar[] = { 0.2, 0.2, 0.2 };
		MoveVelocityVar[] = { 1, 1, 1 };
		rotationVelocityVar = 4;
		sizeVar = 0.3;
		colorVar[] = { 0, 0, 0, 0.06 };
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};

	class RHSUSF_SMAW_RocketCirclesmoke : Default
	{
		interval = 5e-005;
		circleRadius = 0;
		circleVelocity[] = { 0.3, 0.3, 0.3 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0.5;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 3;
		moveVelocity[] = { "-speedX/100", "-speedY/100", "-speedZ/100" };
		rotationVelocity = 0.5;
		weight = 0.1275;
		volume = 0.1;
		rubbing = 0.4;
		size[] = { 0.5, 2, 3.2, 3.9, 4.5, 5.4 };
		sizeCoef = 1;
		color[] = { { 0.205, 0.185, 0.15, 0.09 }, { 0.205, 0.185, 0.15, 0.04 }, { 0.205, 0.185, 0.15, 0.01 } };
		colorCoef[] = { 1, 1, 1, 1 };
		animationSpeed[] = { 0.8, 0.3, 0.25 };
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.3;
		randomDirectionIntensity = 0.04;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		position[] = { 0, -1.45, -2.2 };
		positionVar[] = { 0.2, 0.2, 0.2 };
		MoveVelocityVar[] = { 4, 4, 4 };
		rotationVelocityVar = 4;
		sizeVar = 0.3;
		colorVar[] = { 0, 0, 0, 0.06 };
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RHSUSF_SMAW_RocketBackfire : Default
	{
		interval = 0.0001;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 3;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 0.5;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.4;
		moveVelocity[] = { "-speedX/45", "-speedY/45", "-speedZ/45" };
		rotationVelocity = 1;
		weight = 1.275;
		volume = 1;
		rubbing = 0;
		size[] = { 0.25, 5 };
		sizeCoef = 1;
		color[] = { { 0.4, 0.4, 0.4, -2 }, { 0.4, 0.4, 0.4, -1 }, { 0.4, 0.4, 0.4, -0.6 }, { 0.4, 0.4, 0.4, -0.1 }, { 0.4, 0.4, 0.4, 0 } };
		colorCoef[] = { 1, 1, 1, 1 };
		animationSpeed[] = { 1000 };
		animationSpeedCoef = 1;
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		lifeTimeVar = 0.1;
		position[] = { 0, 0, -2.5 };
		positionVar[] = { 0.04, 0.04, 0 };
		MoveVelocityVar[] = { 0.5, 0.5, 0.05 };
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = { 0, 0, 0, 0 };
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RHSUSF_SMAW_RocketBackHeat : Default
	{
		interval = 5e-005;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0.5;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = { "-speedX/35", "-speedY/35", "-speedZ/35" };
		rotationVelocity = 0.5;
		weight = 0.1275;
		volume = 0.1;
		rubbing = 0.4;
		size[] = { 0.2, 1, 1.5, 2, 3, 3.4 };
		sizeCoef = 1;
		color[] = { { 0.7, 0.7, 0.7, 0.32 }, { 0.7, 0.7, 0.7, 0.18 }, { 0.7, 0.7, 0.7, 0.1 }, { 0.7, 0.7, 0.7, 0.06 }, { 0.7, 0.7, 0.7, 0.02 }, { 0.7, 0.7, 0.7, 0.01 }, { 0.7, 0.7, 0.7, 0.001 } };
		colorCoef[] = { 1, 1, 1, 0.4 };
		animationSpeed[] = { 0.8, 0.3, 0.25 };
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.3;
		randomDirectionIntensity = 0.04;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		position[] = { 0, 0, -3 };
		positionVar[] = { 0.2, 0.2, 0.2 };
		MoveVelocityVar[] = { 4, 4, 4 };
		rotationVelocityVar = 4;
		sizeVar = 0.3;
		colorVar[] = { 0, 0, 0, 0.06 };
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RHSUSF_SMAW_Cartridge : Default
	{
		interval = 0.5;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\weapons_f\ammo\cartridge_762.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 0;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 1;
		lifeTime = 20;
		moveVelocity[] = { "0", "3.1", "0" };
		rotationVelocity = 1;
		weight = 6;
		volume = 1;
		rubbing = 0.0;
		size[] = { 1.1 };
		color[] = { { 0.9, 0.9, 0.9, 1 } };
		animationSpeed[] = { 1000 };
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		bounceOnSurface = 0.25;
		bounceOnSurfaceVar = 0.2;
		blockAIVisibility = 0;
		sizeCoef = 1;
		colorCoef[] = { 1, 1, 1, 1 };
		animationSpeedCoef = 1;
		position[] = { "0.08", "0", "-0.32" };
		lifeTimeVar = 0;
		positionVar[] = { 0, 0, 0 };
		MoveVelocityVar[] = { 0.2, 0.2, 0.2 };
		rotationVelocityVar = 3;
		sizeVar = 0;
		colorVar[] = { 0, 0, 0, 0 };
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RHSUSF_SMAW_AmmoCloud : Default
	{
		interval = 0.3;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 1;
		angleVar = 0.5;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = { "0", "0.18", "0" };
		rotationVelocity = 1;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.1;
		size[] = { 0.15, 0.9 };
		color[] = { { 0.1, 0.1, 0.1, 0.6 }, { 0.1, 0.1, 0.1, 0.3 }, { 0.1, 0.1, 0.1, 0.12 }, { 0.1, 0.1, 0.1, 0.01 } };
		animationSpeed[] = { 1.2 };
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.08;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		blockAIVisibility = 0;
		sizeCoef = 0.3;
		colorCoef[] = { 1, 1, 1, 0.6 };
		animationSpeedCoef = 1;
		position[] = { "0.08", "0.02", "-0.32" };
		lifeTimeVar = 0;
		positionVar[] = { 0, 0, 0 };
		MoveVelocityVar[] = { 0.03, 0.03, 0.03 };
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = { 0, 0, 0, 0 };
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RHSUSF_SMAW_MissileTrail : Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 1;
		angleVar = 0.5;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.5;
		moveVelocity[] = { "0", "0", "0" };
		rotationVelocity = 1;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.1;
		size[] = { 0.15, 1.2 };
		color[] = { { 0.1, 0.1, 0.1, 0.2 }, { 0.1, 0.1, 0.1, 0.1 }, { 0.1, 0.1, 0.1, 0.001 }, { 0.1, 0.1, 0.1, 0.0002 } };
		animationSpeed[] = { 1.2 };
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.08;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		blockAIVisibility = 0;
		sizeCoef = 0.8;
		colorCoef[] = { 1, 1, 1, 0.6 };
		animationSpeedCoef = 1;
		position[] = { "0", "0", "0" };
		lifeTimeVar = 0;
		positionVar[] = { 0, 0, 0 };
		MoveVelocityVar[] = { 0.03, 0.03, 0.03 };
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = { 0, 0, 0, 0 };
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};

	class rhs_Effect3: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 3; //2.1
		moveVelocity[] = {"directionX * 1","directionY * 1","directionZ * 1"};
		rotationVelocity = 1;
		weight = 0.1285;
		volume = 0.1;
		rubbing = 0.01;
		size[] = {0.25,1,10};
		sizeCoef = "1.5 * (vehicleSpeedSize interpolate [1.5,18,1,2])";
		color[] = {{ 0.8,0.8,0.8,0.2 },{ 0.8,0.8,0.8,0.15 },{ 0.8 ,0.8,0.8,0.025 },{ 0.8,0.8,0.8,0.005 }};
		colorCoef[] = {1,1,1,"0.3 * (vehicleSpeedSize interpolate [1.5,18,2,1])"};
		animationSpeed[] = {2,1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.1;
		lifeTimeVar = 0.5;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.05,0.05,0.05};
		MoveVelocityVar[] = {0.05,0.05,0.05};
		rotationVelocityVar = 20;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class rhs_Effect5: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 3; //2.1
		moveVelocity[] = {"directionX * 5","directionY * 5","directionZ * 5"};
		rotationVelocity = 1;
		weight = 0.1285;
		volume = 0.1;
		rubbing = 0.01;
		size[] = {0.25,1,10};
		sizeCoef = "1.5 * (vehicleSpeedSize interpolate [1.5,18,1,2])";
		color[] = {{ 0.8,0.8,0.8,0.2 },{ 0.8,0.8,0.8,0.15 },{ 0.8 ,0.8,0.8,0.025 },{ 0.8,0.8,0.8,0.005 }};
		colorCoef[] = {1,1,1,"0.3 * (vehicleSpeedSize interpolate [1.5,18,2,1])"};
		animationSpeed[] = {2,1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.5;
		randomDirectionIntensity = 0.25;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.1;
		lifeTimeVar = 0.5;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.05,0.05,0.05};
		MoveVelocityVar[] = {0.05,0.05,0.05};
		rotationVelocityVar = 20;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class rhs_Dust3: Default
	{
		interval = "0.002 * isWaterSurface";
		circleRadius = 0;
		circleVelocity[] = {0,-0.2,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = {"0.2*directionX","0.2*directionY",0};
		rotationVelocity = 0;
		weight = 0.0533;
		volume = 0.04;
		rubbing = 0.3;
		size[] = {1,1};
		color[] = {{ 0.805,0.785,0.65,0.16 },{ 0.805,0.785,0.65,0.06 },{ 0.805,0.785,0.65,0.01 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.25;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 2;
		positionVar[] = {1,0.5,1};
		MoveVelocityVar[] = {1,0.5,1};
		rotationVelocityVar = 30;
		sizeCoef = 1;
		colorCoef[] = {1,1,1,0.75};
		animationSpeedCoef = 1;
		position[] = {"positionX + (directionLocalX * 3)","positionY + (directionLocalY * 3)","positionZ + (directionLocalZ * 3)"};
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class rhs_BackFire: Default
	{
		interval = 0.003;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 3;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 0.5;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.08;
		moveVelocity[] = {"directionX * 10","directionY * 10","directionZ * 10"};
		rotationVelocity = 1;
		weight = 1.275;
		volume = 1;
		rubbing = 0;
		size[] = {0.3,0.8};
		sizeCoef = 1;
		color[] = {{ 0.4,0.4,0.4,-2 },{ 0.4,0.4,0.4,-1 },{ 0.4,0.4,0.4,-0.6 },{ 0.4,0.4,0.4,-0.4 },{ 0.4,0.4,0.4,0 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		lifeTimeVar = 0.1;
		position[] = {"positionX + directionLocalX * 0.5","positionY + directionLocalY * 0.5","positionZ + directionLocalZ * 0.5"};
		positionVar[] = {0.08,0.08,0.08};
		MoveVelocityVar[] = {0.3,0.3,0.3};
		rotationVelocityVar = 20;
		sizeVar = 1.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class rhs_FrontSmoke: RocketBacksmokeRPGNT
	{
		interval = 0.01;
		lifeTime = 1.5;
		moveVelocity[] = {"- directionX * 0.8","- directionY * 0.8","- directionZ * 0.8"};
		rotationVelocity = 1;
		weight = 0.1275;
		volume = 0.1;
		rubbing = 0.4;
		size[] = {0.2,0.8,1.2,1.4,1.53};
		sizeCoef = 1;
		colorCoef[] = {0.65,0.65,0.65,0.18};
		animationSpeed[] = {5};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.3;
		randomDirectionIntensity = 0.04;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.8;
		position[] = {"positionX - directionLocalX * 0.9","positionY - directionLocalY * 0.9","positionZ - directionLocalZ * 0.9"};
		positionVar[] = {0.1,0.1,0.1};
		MoveVelocityVar[] = {0.2,0.2,0.2};
		rotationVelocityVar = 20;
		sizeVar = 0.15;
	};
	class rhs_CircleDust: Default
	{
		interval = "0.005 * isWaterSurface";
		circleRadius = 0.01;
		circleVelocity[] = {0.15,0,0.15};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 3;
		moveVelocity[] = {0,0.1,0};
		rotationVelocity = 0;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.02;
		size[] = {1.5,2.5};
		color[] = {{ 0.205,0.185,0.15,0.2 },{ 0.205,0.185,0.15,0.14 },{ 0.205,0.185,0.15,0.01 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.3;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {0.1,0.1,0.1};
		rotationVelocityVar = 20;
		sizeCoef = 1;
		colorCoef[] = {1,1,1,1};
		animationSpeedCoef = 1;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};

	class rhs_m3maawsExhaustSmoke: Default
	{
		interval = "0.0012";
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
		lifeTime = 1.1;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.8;
		rubbing = 0.5;
		size[] = {1.5,3};
		color[] = {{ 0.3,0.3,0.3,0.05 },{ 1,1,1,0 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		lifeTimeVar = 0.5;
		positionVar[] = {0.3,0.3,0.3};
		MoveVelocityVar[] = {0.4,0.4,0.4};
		rotationVelocityVar = 20;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class rhs_m3maawsExhaustSmokeRefract: Default
	{
		interval = 0.001;
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
		lifeTime = 2;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.8;
		rubbing = 0.5;
		size[] = {1,2,2.8};
		color[] = {{ 0.3,0.3,0.3,0.03 },{ 0.4,0.4,0.4,0.02 },{ 0.5,0.5,0.5,0.01}};
		animationSpeed[] = {5};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		lifeTimeVar = 0.2;
		positionVar[] = {0.3,0.3,0.3};
		MoveVelocityVar[] = {0.4,0.4,0.4};
		rotationVelocityVar = 20;
		sizeVar = 0.15;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};

	class rhs_m3maawsExhaustSmokeRefract2: Default
	{
		interval = "0.001";	// "0.001/(intensity + 0.001)";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.5;
		moveVelocity[] = {"0.7","0.7","0.7"};
		rotationVelocity = 1;
		weight = 1.1;
		volume = 1.5;
		rubbing = 0.1;
		size[] = {0.3,1};
		sizeCoef = 1;
		color[] = {{ 0.06,0.06,0.06,0.8 },{ 0.3,0.3,0.3,0.6 },{ 0.3,0.3,0.3,0.1 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {2,1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.1;
		lifeTimeVar = 0;
		position[] = {"positionX + directionLocalX * 0.5","positionY + directionLocalY * 0.5","positionZ + directionLocalZ * 0.5"};
		positionVar[] = {0.3,0.3,0.3};
		MoveVelocityVar[] = {0.35,0.35,0.35};
		rotationVelocityVar = 20;
		sizeVar = 0.05;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class rhs_m3maawsExhaustSmokeRefractMed: Default
	{
		interval = "0.001";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.7;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.2;
		volume = 1;
		rubbing = 0.1;
		size[] = {0.3,1.4};
		sizeCoef = 1;
		color[] = {{ 0.06,0.06,0.06,0.26 },{ 0.7,0.7,0.7,0.16 },{ 0.8,0.8,0.8,0.02 }};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {2,1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.1;
		lifeTimeVar = 0.1;
		position[]={0,0,0};
		positionVar[] = {0.15,0,0.15};
		MoveVelocityVar[] = {0.15,0.15,0.15};
		rotationVelocityVar = 20;
		sizeVar = 0.05;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};

	class rhs_m3maawsfakeparticle: Default
	{
		interval = "2";
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
		lifeTime = 0.01;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.8;
		rubbing = 0.5;
		size[] = {1.5,3};
		color[] = {{ 0.3,0.3,0.3,0.0 },{ 1,1,1,0 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "\tf47_launchers\m3maaws\scripts\m3maaws_smoke.sqf";
		blockAIVisibility = 0;
		lifeTimeVar = 0.5;
		position[] = {"0","0","0.5"};
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 20;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};

	class rhs_m3maawsfakeparticleIllum: rhs_m3maawsfakeparticle
	{
		beforeDestroyScript = "\tf47_launchers\m3maaws\scripts\m3maaws_illum.sqf";
	};

	class rhs_m3maawssmokeshell: Default
	{
		animationSpeedCoef = 1;
		colorCoef[] = {"colorR","colorG","colorB","colorA"};
		sizeCoef = 1;
		position[] = {0,0,0};
		interval = 0.2;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 45;
		moveVelocity[] = {0,2,0};
		rotationVelocity = 1;
		weight = 1.2777;
		volume = 2;
		rubbing = 0.05;
		size[] = {0.2,6,10};
		color[] = {{ 0.6,0.6,0.6,0.2 },{ 0.6,0.6,0.6,0.05 },{ 0.6,0.6,0.6,0 }};
		animationSpeed[] = {1.5,0.5};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0.25;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.6;
		lifeTimeVar = 2;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.25,0.25,0.25};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0.35};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class rhs_m3maawssmokeshell2: rhs_m3maawssmokeshell
	{
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 4;
		particleFSLoop = 0;
		color[] = {{ 0.6,0.6,0.6,1 },{ 0.6,0.6,0.6,0.5 },{ 0.6,0.6,0.6,0 }};
	};
	class RHS_FIM92_Fired: Default
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
		lifeTime = 15;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.8;
		rubbing = 0.5;
		size[] = {2,6};
		color[] = {{0.1,0.1,0.1,0.2},{0.05,0.05,0.05,0.1},{0.1,0.1,0.1,0.05}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		lifeTimeVar = 3;
		positionVar[] = {0.3,0.3,0.3};
		MoveVelocityVar[] = {0.4,0.4,0.4};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RHS_ExploSmallAmmoSmoke: Default
	{
		interval = "0.013 * interval + 0.009";
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = \A3\data_f\ParticleEffects\Universal\Universal;
		particleFSNtieth = 16;
		particleFSIndex = 9;
		particleFSFrameCount = 1;
		particleFSLoop = 0;

		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4.5;
		moveVelocity[] = {"(- inDirX * 2 + surfNormalX / 2) * inSpeed / 900","( - inDirY * 2 + surfNormalY / 2) * inSpeed / 900","( - inDirZ * 2 + surfNormalZ / 2) * inSpeed / 900"};
		rotationVelocity = 0;
		weight = 0.057;
		volume = 0.04;
		rubbing = 0.7;
		size[] = {"0.018 * intensity + 0.4", "0.018 * intensity + 0.5", "0.018 * intensity + 0.9", "0.018 * intensity + 0.25"};
		color[] = {{1, 1, 1, 0.03}, {1, 1, 1, 0.06}, {1, 1, 1, 0.07}, {1, 1, 1, 0.06}, {1, 1, 1, 0}};
		animationSpeed[] = {1.7, 0.6, 0.4, 0.3, 0.3};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 2;
		positionVar[] = {0, 0.1, 0};
		MoveVelocityVar[] = {"-inDirX*0.62", "-inDirY*0.62", "-inDirZ*0.62"};
		rotationVelocityVar = 10;
		sizeVar = 0.5;
		colorVar[] = {0, 0, 0, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RHS_ExploSmallAmmoFlash: Default
	{
		interval = 0.1;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 0;
		particleFSFrameCount = 32;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.8;
		moveVelocity[] = {0, 1, 0};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0.1;
		size[] = {"0.0125 * intensity + 0.22", "0.0125 * intensity + 0.15"};
		color[] = {{1, 1, 1, -1}, {1, 1, 1, 0}};
		animationSpeed[] = {2};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0, 0.1, 0};
		MoveVelocityVar[] = {0.02, 0.05, 0.02};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0, 0, 0, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class RHS_ImpactSparks_Mk211: Default
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 3.5;
		moveVelocity[] = {"(- inDirX * 2 + surfNormalX / 2) * inSpeed / 1900","( - inDirY * 2 + surfNormalY / 2) * inSpeed / 1900","( - inDirZ * 2 + surfNormalZ / 2) * inSpeed / 1900"};
		rotationVelocity = 1;
		weight = 100;
		volume = 0.01;
		rubbing = 0.3;
		size[] = {0.1,0.1,0.1,0.1,0.1,0.08,0.08,0.08,0.08,0};
		color[] = {{1,0.3,0.3,-6.5},{1,0.3,0.3,-6},{1,0.3,0.3,-5.5},{1,0.3,0.3,-4.5}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.5;
		randomDirectionIntensity = 0.55;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		lifeTimeVar = 2.5;
		positionVar[] = {0,0.2,0};
		moveVelocityVar[] = {10,10,10};
		rotationVelocityVar = 2;
		sizeVar = 0.04;
		colorVar[] = {0,0.15,0.15,0};
		randomDirectionPeriodVar = 0.3;
		randomDirectionIntensityVar = 0.15;
	};
	class RHSUSF_FlareShell_Red: FlareShell
	{
		color[] = {{1, 0, 0, 0.6}, {0.9, 0.25, 0.25, 0.3}, {0.75, 0.7, 0.7, 0.1}, {0.55, 0.55, 0.55, 0.05}, {0.25, 0.25, 0.25, 0.01}};
	};
	class RHSUSF_FlareShell_Green: Flareshell
	{
		color[] = {{0, 1, 0, 0.6}, {0.25, 0.9, 0.25, 0.3}, {0.7, 0.75, 0.7, 0.1}, {0.55, 0.55, 0.55, 0.05}, {0.25, 0.25, 0.25, 0.01}};
	};
	class RHSUSF_FlareShell_White_Freefall: FlareShell
	{
		interval = 0.005;
		lifetime = 2;		
	};
	class RHSUSF_FlareShell_Red_Freefall: RHSUSF_FlareShell_Red
	{
		color[] = {{1, 0, 0, 0.6}, {0.85, 0.55, 0.55, 0.3}, {0.75, 0.7, 0.7, 0.1}, {0.55, 0.55, 0.55, 0.05}, {0.25, 0.25, 0.25, 0.01}};
		interval = 0.005;
		lifetime = 2;		
	};
	class RHSUSF_FlareShell_Green_Freefall: RHSUSF_FlareShell_Green
	{
		color[] = {{0, 1, 0, 0.6}, {0.55, 0.85, 0.55, 0.3}, {0.7, 0.75, 0.7, 0.1}, {0.55, 0.55, 0.55, 0.05}, {0.25, 0.25, 0.25, 0.01}};
		interval = 0.005;
		lifetime = 2;		
	};
};

class CfgLights
{
	class RHSUSF_flashbang_light
	{
		color[] = { 11, 11, 9 };
		ambient[] = { 0.4, 0.45, 0.45 };
		brightness = 1;
		intensity = 1090;
		diffuse[] = { 0, 0, 0 };
		position[] = { 0, 0, 0 };
		class Attenuation
		{
			start = 0.05;
			constant = 0;
			linear = 0;
			quadratic = 40;
			hardLimitStart = 2;
			hardLimitEnd = 4;
		};
	};

	class RHSUSF_ANM14_Light
	{
		diffuse[] = { 1, 0.55, 0.35 };
		color[] = { 1, 0.55, 0.35 };
		ambient[]={ 0.006,0.006,0.003,0 };

		brightness = 100;
		intensity = 700000;
		drawLight = 0;
		blinking = "false";
		flareSize = 12;
		flareMaxDistance = 1000;
		useFlare = "true";
		dayLight = "true";
		size = 1;

		class Attenuation
		{
			start = 3;
			constant = 0;
			linear = 0;
			quadratic = 1;
			hardLimitStart = 100;
			hardLimitEnd = 200;
		};

		position[] = { 0.0, 0.3, 0.0 };
	};
	class RHSUSF_ANM14_SparksLight
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
			hardLimitEnd = 100;
		};
		position[] = { 0, 0, 0 };
	};
};

class RHSUSF_ANM14_SparksSparkleEffect
{
	class RHSUSF_ANM14_Starter_SparksOmniSparklings
	{
		simulation = "particles";
		type = "RHSUSF_ANM14_Starter_SparksOmniSparklings";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.03;
	};
};

class RHSUSF_ANM14_SparksLightFireEffect
{
	/*class RHSUSF_ANM14_SparksLight
	{
		simulation = "light";
		type = "RHSUSF_ANM14_SparksLight";
		position[] = { 0, 0, 0 };
		intensity = 0.001;
		interval = 1;
		lifeTime = "1";
	};*/
	class RHSUSF_ANM14_SparksFire
	{
		simulation = "particles";
		type = "RHSUSF_ANM14_SparksFire";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = "1";
	};
};

class RHSUSF_40mmPracticePuff
{
	class RHSUSF_40mmPractice_Smoke
	{
		simulation = "particles";
		type = "RHSUSF_40mmPractice_Smoke";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class RHSUSF_40mmPractice_SmokeCrater
	{
		simulation = "particles";
		type = "RHSUSF_40mmPractice_SmokeCrater";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 14;
	};
	class RHSUSF_40mmPractice_Dust
	{
		simulation = "particles";
		type = "CircleDustSmall";
		enabled = "distToWater interpolate [0.1,0.11,-1,1]";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.25;
	};
};

class RHSUSF_762Cartridge
{
	class RHSUSF_762Cartridge
	{
		simulation = "particles";
		type = "RHSUSF_762Cartridge";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifetime = 0.08;
		qualityLevel = 2;
	};
};

class RHSUSF_556Cartridge
{
	class RHSUSF_556Cartridge
	{
		simulation = "particles";
		type = "RHSUSF_556Cartridge";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifetime = 0.075;
		qualityLevel = 2;
	};
};

class RHSUSF_BarrelRefract
{
	class RHSUSF_HeatHaze
	{
		simulation = "particles";
		type = "RHSUSF_HeatHaze";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 3;
		qualityLevel = 2;
	};
};
class RHSUSF_BarrelRefractHeavy
{
	class RHSUSF_HeatHaze1
	{
		simulation = "particles";
		type = "RHSUSF_HeatHaze1";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 4;
		qualityLevel = 2;
	};
};

class RHSUSF_12gExplosion
{
	class FiredLightMed
	{
		simulation = "light";
		type = "FiredLightMed";
		position[] = { 0, 0, 0 };
		intensity = 0;
		interval = 1;
		lifeTime = 0.1;
	};
	class ExploAmmoFlash
	{
		simulation = "particles";
		type = "ExploAmmoFlash";
		position[] = { 0, 0, 0 };
		intensity = 0.015;
		interval = 1;
		lifeTime = 1;
	};
	class RHSUSF_12gExplo_Smoke
	{
		simulation = "particles";
		type = "RHSUSF_12gExplo_Smoke";
		position[] = { 0, 0, 0 };
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactSparks
	{
		simulation = "particles";
		type = "ImpactSparks0";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class RHSUSF_flashbang_Crater
{
    class Smoke1
    {
        position[] = {0,0,0};
        simulation = "particles";
        type = "RHSUSF_flashbang_smoke";
        intensity = 0.5;
        interval = 1;
        lifeTime = 8;
    };
};

class RHSUSF_flashbang_10
{
	class Smoke1
	{
		position[] = { 0, 0, 0 };
		simulation = "particles";
		type = "RHSUSF_flashbang_10";
		intensity = 0.5;
		interval = 1;
		lifeTime = 1;
	};
	class Smoke2 : Smoke1
	{
		position[] = { 0, 0, 0 };
		simulation = "particles";
		type = "RHSUSF_flashbang_smoke";
		intensity = 0.5;
		interval = 1;
		lifeTime = 1;
	};
	class Light
	{
		position[] = { 0, 0, 0 };
		simulation = "light";
		type = "RHSUSF_flashbang_light";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class RHSUSF_flashbang_15 : RHSUSF_flashbang_10
{
	class Smoke1 : Smoke1
	{
		type = "RHSUSF_flashbang_15";
	};
};
class RHSUSF_flashbang_20 : RHSUSF_flashbang_10
{
	class Smoke1 : Smoke1
	{
		type = "RHSUSF_flashbang_20";
	};
};

class RHS_CS_Grenade
{
	class Smoke1
	{
		position[] = { 0, 0, 0 };
		simulation = "particles";
		type = "RHS_CS_Gas";
		intensity = 0.5;
		interval = 1;
		lifeTime = 1;
	};
	class SmokeShellWhite
	{
		simulation = "particles";
		type = "SmokeShellWhite";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
	};
	class SmokeShellWhite2
	{
		simulation = "particles";
		type = "SmokeShellWhite2";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
	};
	class SmokeShellWhiteUW
	{
		simulation = "particles";
		type = "SmokeShellWhiteUW";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
	};
	class SmokeShellWhite2UW
	{
		simulation = "particles";
		type = "SmokeShellWhite2UW";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
	};
};
class RHS_Incendenary_Grenade
{
	class Starter_SparksBurst
	{
		simulation = "particles";
		type = "RHSUSF_ANM14_Starter_SparksBurst";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		lifeTime = 0.07;
	};
	class Starter_SparksStream
	{
		simulation = "particles";
		type = "RHSUSF_ANM14_Starter_SparksStream";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		start = 0.05;
		lifeTime = 0.8;
	};
	class Starter_SmokeStream
	{
		simulation = "particles";
		type = "RHSUSF_ANM14_Starter_SmokeStream";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		start = 0.05;
		lifeTime = 2;
	};
	class Light
	{
		simulation = "particles";
		type = "RHSUSF_ANM14_Light";
		start = 0.1;
		lifeTime = 1;
	};
	class SparksOmni
	{
		simulation = "particles";
		type = "RHSUSF_ANM14_Starter_SparksOmni";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		start = 0.2;
		lifeTime = 17.5;
	};
	class SparksOmniSparkle
	{
		simulation = "particles";
		type = "RHSUSF_ANM14_Starter_SparksOmniSparkle";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		start = 0.2;
		lifeTime = 16;
	};
	class SparksDrop
	{
		simulation = "particles";
		type = "RHSUSF_ANM14_Starter_SparksDrop";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		start = 0.2;
		lifeTime = 16.5;
	};
	class SparksDropLightFire
	{
		simulation = "particles";
		type = "RHSUSF_ANM14_Starter_SparksDropLightFire";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		start = 0.2;
		lifeTime = 16;
	};
	class SmokeStream
	{
		simulation = "particles";
		type = "RHSUSF_ANM14_SmokeStream";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		start = 0.5;
		lifeTime = 16;
	};
	class Fire
	{
		simulation = "particles";
		type = "RHSUSF_ANM14_Fire";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		start = 0.5;
		lifeTime = 15;
	};
	class Cloud
	{
		simulation = "particles";
		type = "RHSUSF_ANM14_Cloud";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
		start = 0.5;
		lifeTime = 17.5;
	};
};

class RHS_Fired_M136HEAT
{
	class RocketBackfire1
	{
		simulation = "particles";
		type = "RocketBackfireRPGNT";
		intensity = 1;
		interval = 0.1;
		lifeTime = 0.03;
	};
	class RocketBacksmoke2
	{
		simulation = "particles";
		type = "RocketBacksmokeRPGNT";
		intensity = 1;
		interval = 0.1;
		lifeTime = 0.1;
	};
	class RocketFrontsmoke
	{
		simulation = "particles";
		type = "RocketFrontsmokeRPGNT";
		intensity = 1;
		interval = 0.1;
		lifeTime = 0.2;
	};
	class Script
	{
		simulation = "particles";
		type = "RHS_fired_M136HEAT";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class RHS_Fired_M136HEDP : RHS_Fired_M136HEAT
{
	class Script : Script
	{
		type = "RHS_fired_M136HEDP";
	};
};
class RHS_Fired_M136HP : RHS_Fired_M136HEAT
{
	class Script : Script
	{
		type = "RHS_fired_M136HP";
	};
};
class RHS_Fired_M72A7 : RHS_Fired_M136HEAT
{
	class Script : Script
	{
		type = "RHS_Fired_M72A7";
	};
};


// SMAW
// Author: TF47 blackpixel
class RHSUSF_SMAW_backblast
{
	class RocketBackfire1
	{
		simulation = "particles";
		type = "RHSUSF_SMAW_RocketBackfire";
		enabled = "(density interpolate [0.98,0.981,-1,1])";
	};
	class RocketBacksmoke1
	{
		simulation = "particles";
		type = "RHSUSF_SMAW_RocketBacksmoke";
		enabled = "(density interpolate [0.98,0.981,-1,1])";
	};
	class RocketFrontsmoke1
	{
		simulation = "particles";
		type = "RHSUSF_SMAW_RocketFrontsmoke";
		enabled = "(density interpolate [0.98,0.981,-1,1])";
	};
	class RocketCirclesmoke1
	{
		simulation = "particles";
		type = "RHSUSF_SMAW_RocketCirclesmoke";
		enabled = "(density interpolate [0.98,0.981,-1,1])";
	};
	class RocketBackHeat1
	{
		simulation = "particles";
		type = "RHSUSF_SMAW_RocketBackHeat";
		enabled = "(density interpolate [0.98,0.981,-1,1])";
	};
};

class RHSUSF_SMAW_MissileTrail
{
	class tf47_smaw_MissileTrail
	{
		simulation = "particles";
		type = "RHSUSF_SMAW_MissileTrail";
	};
};

class RHSUSF_SMAW_cartrige
{
	class tf47_smaw_cartrige
	{
		simulation = "particles";
		type = "RHSUSF_SMAW_Cartridge";
		interval = 1;
		//	enabled = "(density interpolate [0.98,0.981,-1,1])";
	};
	class TF47_SMAW_AmmoCloud
	{
		simulation = "particles";
		type = "RHSUSF_SMAW_AmmoCloud";
		//	enabled = "(density interpolate [0.98,0.981,-1,1])";
	};
};
class RHS_m397_hit
{
	class Handler
	{
		type = "RHS_m397_effect";
		position[] = {0,0,0};
		simulation = "particles";
		intensity = 0.5;
		interval = 1;
		lifeTime = 1;
	};
};
class rhs_m3maaws_illum
{
	class FiredLightSmall
	{
		simulation = "light";
		type = "FiredLightMed";
		position[] = {0,0,0};
		intensity = 0;
		interval = 1;
		lifeTime = 1;
	};
	class ExploAmmoFlash
	{
		simulation = "particles";
		type = "ExploAmmoFlash";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ExploAmmoSmoke
	{
		simulation = "particles";
		type = "ExploAmmoSmoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class m3maawsfakeparticle
	{
		simulation = "particles";
		type = "rhs_m3maawsfakeparticleIllum";
		interval = 1;
		intensity = 1;
		qualityLevel = -1;
	};
};

class rhs_m3maaws_fakeparticle
{
	class FiredLightSmall
	{
		simulation = "light";
		type = "FiredLightMed";
		position[] = {0,0,0};
		intensity = 0;
		interval = 1;
		lifeTime = 1;
	};
	class ExploAmmoFlash
	{
		simulation = "particles";
		type = "ExploAmmoFlash";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ExploAmmoSmoke
	{
		simulation = "particles";
		type = "ExploAmmoSmoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class m3maawsfakeparticle
	{
		simulation = "particles";
		type = "rhs_m3maawsfakeparticle";
		interval = 1;
		intensity = 1;
		qualityLevel = -1;
	};
};

class rhs_m3maaws_smoke
{
	class SmokeShellWhite
	{
		simulation = "particles";
		type = "rhs_m3maawssmokeshell";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShellWhite2
	{
		simulation = "particles";
		type = "rhs_m3maawssmokeshell2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShellWhiteUW
	{
		simulation = "particles";
		type = "SmokeShellWhiteUW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShellWhite2UW
	{
		simulation = "particles";
		type = "SmokeShellWhite2UW";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};



class rhs_m3maaws_exhaust
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

	class m3maawsExhaustsEffectRefract01
	{
		simulation = "particles";
		type = "rhs_m3maawsExhaustSmokeRefract";
	};
	class m3maawsExhaustSmokeRefract
	{
		simulation = "particles";
		type = "rhs_m3maawsExhaustSmokeRefractMed";
		interval = 5;
		lifeTime = 2;
		position[] = {0,0,-0.5};
	};
};

class rhs_m3maaws_backblast
{
	class Light1
	{
		simulation = "light";
		type = "FiredLightCannon";
		position[] = {0,0,0};
		intensity = 1;
		interval = 0.05;
		lifeTime = 0.12;
	};
	class CannonFired1
	{
		simulation = "particles";
		type = "rhs_BackFire";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class CannonFiredFront
	{
		simulation = "particles";
		type = "rhs_FrontSmoke";
		position[] = {0,0,0.28};
		intensity = 1;
		interval = 1;
		lifeTime = 0.25;
	};
	class CannonFired2
	{
		simulation = "particles";
		type = "rhs_Effect5";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.06;
	};
	class CannonFired3
	{
		simulation = "particles";
		type = "rhs_Effect3";
		position[] = {0,0,0};
		intensity = 2;
		interval = 1;
		lifeTime = 0.4;
		qualityLevel = 2;
	};
	class CannonFiredDust1
	{
		simulation = "particles";
		type = "rhs_CircleDust";
		position[] = {0,4,0};
		intensity = 2;
		interval = 1;
		lifeTime = 0.5;
	};
	class CannonFiredDust3
	{
		simulation = "particles";
		type = "rhs_Dust3";
		position[] = {0,0,0};
		intensity = 0.1;
		interval = 1;
		lifeTime = 0.25;
	};
	class m3maawsExhaustsEffectRefract02
	{
		simulation = "particles";
		type = "rhs_m3maawsExhaustSmokeRefract2";
		position[] = {0,0,-0.5};
		interval = 1;
		lifeTime = 0.8;
	};
};

class RHS_FIM92_Fired
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
		type = "RHS_FIM92_Fired";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class RHS_ExploSmallAmmoExplosion
{
	class FiredLightSmall
	{
		simulation = "light";
		type = "FiredLightMed";
		position[] = {0, 0, 0};
		intensity = 0;
		interval = 1;
		lifeTime = 0.1;
	};
	class ExploAmmoFlash
	{
		simulation = "particles";
		type = "RHS_ExploSmallAmmoFlash";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ExploAmmoSmoke
	{
		simulation = "particles";
		type = "RHS_ExploSmallAmmoSmoke";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactSparks
	{
		simulation = "particles";
		type = "RHS_ImpactSparks_Mk211";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
};

class RHSUSF_HeatHaze
{
	class RHSUSF_HeatHaze
	{
		simulation = "particles";
		type = "RHSUSF_HeatHaze";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};

class RHSUSF_FlareShell_Green
{
		class Flare1
		{
			simulation = "particles";
			type = "RHSUSF_FlareShell_Green";
			position[] = {0, 0, 0};
			intensity = 1;
			interval = 1;
		};
		class Light1
		{
			simulation = "light";
			type = "FlareLight";
			position[] = {0, 0, 0};
			intensity = 1;
			interval = 1;
		};
};
class RHSUSF_FlareShell_Red
{
		class Flare1
		{
			simulation = "particles";
			type = "RHSUSF_FlareShell_Red";
			position[] = {0, 0, 0};
			intensity = 1;
			interval = 1;
		};
		class Light1
		{
			simulation = "light";
			type = "FlareLight";
			position[] = {0, 0, 0};
			intensity = 1;
			interval = 1;
		};
};

class RHSUSF_FlareShell_White2
{
		class Flare1
		{
			simulation = "particles";
			type = "RHSUSF_FlareShell_White_Freefall";
			position[] = {0, 0, 0};
			intensity = 1;
			interval = 1;
		};
};
class RHSUSF_FlareShell_Green2
{
		class Flare1
		{
			simulation = "particles";
			type = "RHSUSF_FlareShell_Green_Freefall";
			position[] = {0, 0, 0};
			intensity = 1;
			interval = 1;
		};
};
class RHSUSF_FlareShell_Red2
{
		class Flare1
		{
			simulation = "particles";
			type = "RHSUSF_FlareShell_Red_Freefall";
			position[] = {0, 0, 0};
			intensity = 1;
			interval = 1;
		};
};