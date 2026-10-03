class CfgCloudlets
{
	class Default;
	class RHS_A29_ExhaustSmoke1PlaneHP: Default
	{
		interval					= "0.001 * (engineDamage interpolate [0,2.5,1,8])";
		circleRadius				= 0;
		circleVelocity[]			= {0, 0, 0};
		particleShape				= "\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth			= 8;
		particleFSIndex				= 0;
		particleFSFrameCount		= 40;
		particleFSLoop				= 1;
		angleVar					= 1;
		animationName				= "";
		particleType				= "Billboard";
		timerPeriod					= 1;
		lifeTime					= "0.3 * (engineDamage interpolate [0,1,1,12])";
		moveVelocity[]				= {"speedX", "speedY", "speedZ"};
		rotationVelocity			= 1;
		weight						= 1.4;
		volume						= 1;
		rubbing						= 0.1;
		size[]						= {0.3, 3};
		sizeCoef					= "1.4 * (engineDamage interpolate [0,1,1,6])";
		color[]						= {{0.06, 0.06, 0.06, 0.12}, {0.1, 0.1, 0.1, 0.04}, {0.2, 0.2, 0.2, 0.01}, {0.3, 0.3, 0.3, 0.001}};
		colorCoef[]					= {"15", "15", "15", "intensity/2 * (engineDamage interpolate [0.3,0.4,1,6]))"};
		animationSpeed[]			= {2, 1};
		animationSpeedCoef			= 1;
		randomDirectionPeriod		= 0.1;
		randomDirectionIntensity	= 0.25;
		onTimerScript				= "";
		beforeDestroyScript			= "";
		blockAIVisibility			= 0;
		destroyOnWaterSurface		= 1;
		destroyOnWaterSurfaceOffset	= -0.1;
		lifeTimeVar					= "0.15 * (engineDamage interpolate [0,1,1,4])";
		position[]					= {"positionX", "positionY", "positionZ"};
		positionVar[]				= {0.2, 0.2, 0.2};
		MoveVelocityVar[]			= {"1 * (engineDamage interpolate [0,1,1,2.5])", "1 * (engineDamage interpolate [0,1,1,2.5])", "1 * (engineDamage interpolate [0,1,1,2.5])"};
		rotationVelocityVar			= 20;
		sizeVar						= 0.2;
		colorVar[]					= {0, 0, 0, 0};
		randomDirectionPeriodVar	= 0;
		randomDirectionIntensityVar	= 0;
	};
	class RHS_A29_ExhaustSmokeRefractPlane: Default
	{
		interval					= "0.002/(intensity + 0.001)";
		circleRadius				= 0;
		circleVelocity[]			= {0, 0, 0};
		particleShape				= "\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth			= 1;
		particleFSIndex				= 0;
		particleFSFrameCount		= 1;
		particleFSLoop				= 0;
		angleVar					= 1;
		animationName				= "";
		particleType				= "Billboard";
		timerPeriod					= 1;
		lifeTime					= 0.15;
		moveVelocity[]				= {"speedX * 0.8", "speedY * 0.8", "speedZ * 0.8"};
		rotationVelocity			= 1;
		weight						= 1.1;
		volume						= 1.5;
		rubbing						= 0.1;
		size[]						= {0.3, 0.8};
		sizeCoef					= 1;
		color[]						= {{0.06, 0.06, 0.06, 0.46}, {0.3, 0.3, 0.3, 0.3}, {0.3, 0.3, 0.3, 0.12}};
		colorCoef[]					= {1, 1, 1, 1};
		animationSpeed[]			= {2, 1};
		animationSpeedCoef			= 1;
		randomDirectionPeriod		= 0.1;
		randomDirectionIntensity	= 0.05;
		onTimerScript				= "";
		beforeDestroyScript			= "";
		blockAIVisibility			= 0;
		destroyOnWaterSurface		= 1;
		destroyOnWaterSurfaceOffset	= -0.1;
		lifeTimeVar					= 0;
		position[]					= {"positionX", "positionY", "positionZ"};
		positionVar[]				= {0.3, 0.3, 0.3};
		MoveVelocityVar[]			= {0.35, 0.35, 0.35};
		rotationVelocityVar			= 20;
		sizeVar						= 0.05;
		colorVar[]					= {0, 0, 0, 0};
		randomDirectionPeriodVar	= 0;
		randomDirectionIntensityVar	= 0;
	};
};
class RHS_A29_ExhaustsEffectPlaneHP
{
	class ExhaustsEffect01
	{
		simulation	= "particles";
		type		= "RHS_A29_ExhaustSmoke1PlaneHP";
	};
	class ExhaustsEffectRefract01
	{
		simulation	= "particles";
		type		= "RHS_A29_ExhaustSmokeRefractPlane";
	};
};