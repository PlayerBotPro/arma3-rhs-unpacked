#define RAGDOLL_DEBUG
class PhysXMaterials
{
	// for more see: vhttp://docs.nvidia.com/gameworks/content/gameworkslibrary/physx/guide/Manual/RigidBodyDynamics.html#friction-and-restitution

	// base material - just for inheritance purposed
	class PhysXMaterialBase
	{
		// sets if this is the default material (can be only one)
		isDefault 		= false;
		// anisotropy seems no longer supported PhysX 3+
		isAnisotropic 	= false;

		restitution		= 0.05;
		staticFriction	= 0.75;
		dynamicFriction	= 0.55;
	};

	// default material
	class Default: PhysXMaterialBase
	{
		isDefault 		= true;
		restitution		= 0.05;
		staticFriction	= 0.75;
		dynamicFriction	= 0.55;
	};

	// Make the terrain with very low friction, so that wheels can slide on it well (the real friction must be thus used on the objects)
	class Terrain: PhysXMaterialBase
	{
		restitution		= 0.01;
		staticFriction	= 0.6;
		dynamicFriction = 0.46;
	};
	// normal wheel
	class Wheel: PhysXMaterialBase
	{
		restitution		= 0.05;
		staticFriction	= 0.9;
		dynamicFriction = 0.68;
	};
	// tank wheel
	class Wheel2: PhysXMaterialBase
	{
		restitution		= 0.01;
		staticFriction	= 1.0;
		dynamicFriction = 0.77;
	};
	// braked wheel material
	class WheelBrake: PhysXMaterialBase
	{
		restitution		= 0.05;
		staticFriction	= 0.9;
		dynamicFriction = 0.68;
	};
	class WheelBrake_Soft: PhysXMaterialBase
	{
		restitution		= 0.05;
		staticFriction	= 0.9;
		dynamicFriction = 0.68;
	};
	class WheelBrake_Hard: PhysXMaterialBase
	{
		restitution		= 0.05;
		staticFriction	= 0.9;
		dynamicFriction = 0.68;
	};
	class WheelNeutralTurn: PhysXMaterialBase
	{
		restitution		= 0.01;
		staticFriction	= 0.9;
		dynamicFriction = 0.68;
	};
	class WheelBrakeNA: PhysXMaterialBase
	{
		restitution		= 0.05;
		staticFriction	= 0.9;
		dynamicFriction = 0.68;
	};
	class WheelDestroyed: PhysXMaterialBase
	{
		restitution		= 0.01;
		staticFriction	= 0.5;
		dynamicFriction	= 0.3;
	};
	class Ragdoll: PhysXMaterialBase
	{
		restitution		= 0.2;
		staticFriction	= 0.6;
		dynamicFriction = 0.45;
	};
	class Grenade: PhysXMaterialBase
	{
		restitution		= 0.1;
		staticFriction	= 3.0;
		dynamicFriction = 1.5;
	};
	class DriveOn: PhysXMaterialBase
	{
		restitution		= 0.0;
		staticFriction	= 0.01;
		dynamicFriction = 0.007;
	};
};

/// general parameters for physx
class PhysXParams
{
/// coefficient for epe contacts on applying impulse damage
	epeImpulseDamageCoef = 30.0;

	/// coefficient used to multiply impulse force when adding force to ragdoll (impulse force is force from shell hits, explosion hits, etc.)
	impulseForceRagdollCoef = 200;
	/// coefficient used to multiply impulse torque when adding torque to ragdoll (impulse torque is torque from shell hits, explosion hits, etc.)
	impulseTorqueRagdollCoef = 75;
	/// coefficient used to multiply object speed when adding force to ragdoll
	impulseSpeedRagdollCoef = 3;
	/// maximal possible magnitude of force added tor ragdoll
	maxRagdollImpulseForceMagnitude = 300;
	/// maximal possible magnitude of torque added tor ragdoll
	maxRagdollImpulseTorqueMagnitude = 100;
	/// coefficient used to multiply mass of ragdoll bone for computation of underwater force (this should be sligthly smaller than gravity constant 9.81)
	ragdollUnderwaterForceCoef = 9.6;
	/// coefficient used to multiply initial impulse of ragdoll bone, when it gets underwater (this should be slightly less then 1.0f)
	ragdollUnderwaterInitImpulseCoef = 0.98;
	/// when the soldier collides with the object, that has speed larger then this limit, it will start ragdoll (speed is in m/s)
	ragdollOnCollideSpeedLimit = 4;
	/// when the soldier collides with the object, that has mass larger then this limit, it will start ragdoll
	ragdollOnCollideMassLimit = 200;
	/// coefficient, that is used to multiply speed of the object to get the force, that is applied to ragdoll on object collision
	ragdollOnCollideForceCoef = 0.1;
	/// maximal possible force applied to ragdoll at collision with object
	ragdollOnCollideMaxForce = 1;
	/// max distance that the soldier can be shifted when it collides with object (in m)
	ragdollOnCollideMaxOffset = 10;
	/// speed of the colliding object at which the offset will gain its max value (that is ragdollOnCollideMaxOffset) - in m/s
	ragdollOnCollideMaxOffsetSpeed = 100;
	/// time of hit ragdoll animation (in s)
	ragdollHitTime = 0.01;
	/// coef used to multiply force of hit
	ragdollHitForceCoef = 3;
	/// damage limit for hit ragdoll animation to start (set to <0 to disable)
	ragdollHitDmgLimit = 0.01;

	/// Wheel PhysX
	wheelPointRejectLimitSpeed  = 5; // 'Fast' values are used if vehicle moves faster this speed (m/s)
	/// threshold angle used when comparing the angle between collision point direction and suspension direction. Value must be in range (0, Pi).
	wheelPointRejectAngle       = Pi/4.0;
	wheelPointRejectAngleFast   = Pi/3.0;
	/// Threshold angle used when comparing the angle between negative surface normal and suspension direction. Value must be in range (0, Pi).
	wheelNormalRejectAngle      = Pi/4.0;
	wheelNormalRejectAngleFast  = Pi/2.4;
};

// general limits class
class RagDollDefaultLimit
{
	// The angle / position beyond which the limit is active
	// angle in degrees (-180, 180)
	// or position (-inf, inf)
	value = 30;
	// limit bounce [0,1]
	restitution = 0.25;
	// limit can be made softer by setting this to less than 1
	// probably not implemented yet in PhysX!
	hardness = 1;
};

// general spring class
class RagDollDefaultSpring
{
	// if the spring is enabled
	enabled = true;
	// spring coefficient [0, inf)
	value = 1;
	// damper coefficient [0, inf)
	damper = 1;
	// target value (angle/position) of spring where the spring force is zero
	// angle in degrees (-180, 180]
	targetValue = 0;
};

// general values for spherical joint
class RagDollSphericalJoint
{
	// low twist limit
	class TwistLimitLow: RagDollDefaultLimit {};
	// high twist limit
	class TwistLimitHigh: RagDollDefaultLimit {};
	// swing limit
	class SwingLimit: RagDollDefaultLimit {};
	// twist spring
	class TwistSpring: RagDollDefaultSpring
	{
		enabled = true;
	};
	// swing spring
	class SwingSpring: RagDollDefaultSpring
	{
		enabled = true;
	// damper coefficient [0, inf)
	damper = 2;
	};
	// joint spring
	class JointSpring: RagDollDefaultSpring
	{
		enabled = true;
	};

	// type
	type = "spherical";
	// collision
	enableCollision = false;
	// projection distance
	projectionDistance = 0.05;
	// projection mode
	projectionMode = "point";
};

// general valuies for revolute joint
class RagDollRevoluteJoint
{
	// low limit
	class LimitLow: RagDollDefaultLimit {};
	// high limit
	class LimitHigh: RagDollDefaultLimit {};
	// spring
	class Spring: RagDollDefaultSpring
	{
		enabled = true;
	};

	// type
	type = "revolute";
	// collision
	enableCollision = false;
	// projection distance
	projectionDistance = 0.05;
	// projection mode
	projectionMode = "point";
};

/// Ragdoll D6 joint - used for PhysX3 ragdoll joints
class RagDollD6Joint_PX3
{
	/// type
	type = "D6";
	/// collision
	enableCollision = false;
	/// projection distance
	projectionDistance = 0.05;
	// projection mode
	projectionMode = "point";


	/// swing limit around y-axis (in degrees) (if 0, then swing is disabled)
	swingLimitY = 0.0;
	/// swing limit around z-axis (in degrees) (if 0, then swing is disabled)
	swingLimitZ = 0.0;
	/// swing spring - when enabled, limit is soft (by default disabled)
	swingSpring = 0.00;
	/// swing spring damping
	swingDamping = 0.0;
	/// swing restitution [0,1] - 0 = actor stops motion when reaching limit, 1 = actor bounces with the same speed when he reaches limit
	swingRestitution = 0.3;
	/// swing contact distance - distance from limit, where limit becomes active (must be > 0 and lower than actual limit)
	swingContactDistance = 0.05;

	/// twist limit (rotation around x-axis) (in degrees) (if 0, then twist is disabled)
	twistLimitLower = 0.0;
	twistLimitUpper = 0.0;
	/// twist spring - when enabled, limit is soft (by default disabled)
	twistSpring = 0.00;
	/// twist spring damping
	twistDamping = 0.0;
	/// twist restitution [0,1] - 0 = actor stops motion when reaching limit, 1 = actor bounces with the same speed when he reaches limit
	twistRestitution = 0.4;
	/// twist contact distance - distance from limit, where limit becomes active (must be > 0 and lower than actual limit)
	twistContactDistance = 0.05;

	/// parameters for drive -> drive is used to force the actors to their default position
	/// drive spring
	driveSpring = 550.0;
	/// drive damping
	driveDamping = 100.0;
	/// drive max force
	driveMaxForce = 100.0;
	/// drive spring is for the acceleration at the joint (rather than the force)
	driveUseAcceleration = true;

	/* drive spring values if joint is in water.
	 * If not defined, normal values are taken instead
	driveSpringWater = 20.0;
	/// drive damping
	driveDampingWater = 20.0;
	/// drive max force
	driveMaxForceWater = 1000000.0;
	/// drive spring is for the acceleration at the joint (rather than the force)
	driveUseAccelerationWater = true;
	*/

	/// target goal linear velocity for joint drive
	driveLinearVelocity[] = {0,0,0};
	/// target goal angular velocity for joint drive
	driveAngularVelocity[] = {0,0,0};
};

/// skeletons for ragdoll
class CfgRagDollSkeletons
{
	class BaseRagdoll
	{
		///----------------------------------------------------------
		// weapon bones
		///----------------------------------------------------------
		/// bone of the ragdoll that represents primary weapon
		primaryWeaponBone = "";
		/// bone of the ragdoll that represents secondary weapon
		secondaryWeaponBone = "";

		///----------------------------------------------------------
		// Weapon sleep params
		// - this params are  used for dropped weapons - weapon is being simulated by PhysX - when the weapon stopped moving, it is converted to weapon holder
		///----------------------------------------------------------
		/// weapon linear velocity limit - when the weapon actor reaches this value, we suppose the weapon stopped moving
		weaponSleepLinearVelocity = 0.1;
		/// weapon angular velocity limit - when the weapon actor reaches this value, we suppose the weapon stopped moving
		weaponSleepAngularVelocity = 0.1;
		/// minimum time the dropped weapon is being simulated, before it can be put to sleep (in seconds)
		weaponDropMinTime = 1;
		/// maximum time the dropped weapon is being simulated - after this time it is put to sleep (in seconds)
		weaponDropMaxTime = 3;
		/// distance limit for weapon simulation end (im meters)
		weaponDistanceLimit = 0.1;
		/// time in seconds for distance limit testing (when the weapon does not move for more than weaponDistanceLimit length during this time, simulation ends)
		weaponDistanceLimitTime = 2;

		///----------------------------------------------------------
		// Ragdoll sleep params
		// Ragdoll (the root item of ragdoll) is being tested for velocities - when the velocity reaches some value,
		// we stop ragdoll moving
		///----------------------------------------------------------
		/// ragdoll linear velocity limit - when the ragdoll actor reaches this value, we suppose the body stopped moving
		sleepLinearVelocity = 0.1;
		/// ragdoll angular velocity limit - when the ragdoll actor reaches this value, we suppose the body stopped moving
		sleepAngularVelocity = 0.1;
		/// minimum time the ragdoll is simulated (before this time we do not test for sleep) - in seconds
		simulateMinTime = 1.5;
		/// maximum time the ragdoll being simulated - after this time it is put to sleep - in seconds
		simulateMaxTime = 3;
		/// distance limit for ragdoll simulation end (im meters)
		simulateDistanceLimit = 0.5;
		/// time in seconds for distance limit testing (when the ragdoll does not move for more than weaponDistanceLimit length during this time, simulation ends)
		simulateDistanceLimitTime = 2;

		///----------------------------------------------------------
		/// blending constants
		///----------------------------------------------------------
		/// time of ragdoll recovery blending (in s) (that means recovery from ragdoll to animation)
		recoveryBlendTime = 0.01;
		/// cosinus of limiting angle for ragdoll recovery blending (-1...1) - we can blend only when cos of angle between ragdoll and animation direction is higher than this value
		recoveryCosLimit = -1;//always blend
		/// distance limit for ragdoll recovery blending (iin m) - we can blend only when distance of ragdoll and animation is lower than this value
		recoveryDistLimit = 100;
		/// time (in s) of blending between animation and ragdoll (when ragdoll starts simulating)
		animBlendTime = 0.00; //positive value just cause strange body twitches upon death
	};


	class Soldier : BaseRagdoll
	{
		//----------------------------------------------------
		//----------------------------------------------------
		// General
		//----------------------------------------------------
		//----------------------------------------------------

		#ifdef RAGDOLL_DEBUG
		networkBonePrimary = "chest";
		networkBoneSecondary = "pelvis";
		#endif

		/// bone of the ragdoll that represents primary weapon
		primaryWeaponBone = "weapon";
		/// bone of the ragdoll that represents secondary weapon
		secondaryWeaponBone = "launcher";

		/// mask used when dragging and carrying
		draggingMask = "dragging";
		/// mask used when the soldier is hit
		hitMask = "hit";

		/// all bones the weapon bones can be linked to
		class WeaponLinkBones
		{
			class LinkBone1
			{
				// ragdoll bone name
				bone = "leftHand";
				// can weapon be dropped if it is linked to this bone?
				canBeDropped = true;
				// prefference coefficient for this link (used to determine which bone the weapon should be linked to)
				prefference = 1.0;
			};
			class LinkBone2
			{
				// ragdoll bone name
				bone = "rightHand";
				// can weapon be dropped if it is linked to this bone?
				canBeDropped = true;
				// prefference coefficient for this link (used to determine which bone the weapon should be linked to)
				prefference = 1.0;
			};
			class LinkBone3
			{
				// ragdoll bone name
				bone = "chest";
				// can weapon be dropped if it is linked to this bone?
				canBeDropped = true;
				// prefference coefficient for this link (used to determine which bone the weapon should be linked to)
				prefference = 2.0;
			};
		};

		class Masks
		{
			class DraggingMask
			{
				name = "dragging";
				mask[] =
				{
					{"pelvis",0,1},
					{"chest",0,1},
					{"head",1,0},
					{"leftArm",1,0},
					{"leftForeArm",1,0},
					{"leftHand",1,0},
					{"rightArm",1,0},
					{"rightForeArm",1,0},
					{"rightHand",1,0},
					{"leftUpLeg",1,0},
					{"leftLeg",1,0},
					{"leftFoot",1,0},
					{"rightUpLeg",1,0},
					{"rightLeg",1,0},
					{"rightFoot",1,0},
					{"weapon",0.2,1},
					{"launcher",0,1}
				};
			};

			class HitMask
			{
				name = "hit";
				mask[] =
				{
					{"pelvis",0,1},
					{"chest",1,0},
					{"head",1,0},
					{"leftArm",1,0},
					{"leftForeArm",1,0},
					{"leftHand",1,0},
					{"rightArm",1,0},
					{"rightForeArm",1,0},
					{"rightHand",1,0},
					{"leftUpLeg",0,1},
					{"leftLeg",0,1},
					{"leftFoot",0,1},
					{"rightUpLeg",0,1},
					{"rightLeg",0,1},
					{"rightFoot",0,1},
					{"weapon",0,1},
					{"launcher",0,1}
				};
			};
		};

		//----------------------------------------------------
		//----------------------------------------------------
		// Bones
		//----------------------------------------------------
		//----------------------------------------------------

		class BaseRagdollBone
		{
			// name of material in PhysXMaterials
			material = "Ragdoll";
			// if animation (not ragdoll!) bones, that are "children" of this bone should use the position in which they were during ragdoll start
			childrenUseStartTrans = true;
			#ifdef RAGDOLL_DEBUG
			childrenUseIdleAnim = false;
			#endif
		};

		class Bones
		{
			class Pelvis: BaseRagdollBone
			{
				name      = "pelvis";
				//type    = "capsule";
				type      = "box";
				size[]    = {0.11,0.12,0.21};
				startBone = "pelvis";
				endBone   = "spine2";
				mass      = 36;//10
			};
			class Chest: BaseRagdollBone
			{
				name                  = "chest";
				//      type          = "sphere";
				startBone             = "spine2";
				endBone               = "head";
				type                  = "box";
				size[]                = {0.11,0.14,0.19};
				// endPosRelToStart[] = {0, 0, -0.4};
				mass                  = 20;//15
				//    radius          = 0.20;
			};
			class Head: BaseRagdollBone
			{
				name      = "head";
				type      = "capsule";
				startBone = "head";
				startPos[]  = {0.0,0.6267,-0.008}; // offset doesn't exist
				endPosRel[] = {0,0.1,2};
				//endPosRelToStart[] = {0,0.001,0};
				mass      = 9.75;//5
				radius    = 0.09;
				size[]    = {0.03,0.04,0.03};
			};
			//--------------------------------
			class LeftArm: BaseRagdollBone
			{
				name      = "leftArm";
				type      = "capsule";
				startBone = "leftArm";
				endBone   = "leftForeArm";
				mass      = 9.75;//5
			};
			class LeftForeArm: BaseRagdollBone
			{
				name      = "leftForeArm";
				type      = "capsule";
				startBone = "leftForeArm";
				endBone   = "leftHand";
				mass      = 12;//5
			};
			class LeftHand: BaseRagdollBone
			{
				name                  = "leftHand";
				type                  = "sphere";
				startBone             = "leftHand";
				mass                  = 6;//1
				radius                = 0.08;
				childrenUseStartTrans = false;
			};
			//--------------------------------
			class RightArm: BaseRagdollBone
			{
				name      = "rightArm";
				type      = "capsule";
				startBone = "rightArm";
				endBone   = "rightForeArm";
				mass      = 9.75;//5
			};
			class RightForeArm: BaseRagdollBone
			{
				name      = "rightForeArm";
				type      = "capsule";
				startBone = "rightForeArm";
				endBone   = "rightHand";
				mass      = 12;//5
			};
			class RightHand: BaseRagdollBone
			{
				name                  = "rightHand";
				type                  = "sphere";
				startBone             = "rightHand";
				mass                  = 4;//1
				radius                = 0.08;
				childrenUseStartTrans = false;
			};
			//--------------------------------
			class LeftUpLeg: BaseRagdollBone
			{
				name      = "leftUpLeg";
				type      = "capsule";
				startBone = "leftUpLeg";
				endBone   = "leftLeg";
				mass      = 25.5;//40 //10
			};
			class LeftLeg: BaseRagdollBone
			{
				name      = "leftLeg";
				type      = "capsule";
				startBone = "leftLeg";
				endBone   = "leftFoot";
				mass      = 13;//20 //7
			};
			class LeftFoot: BaseRagdollBone
			{
				name      = "leftFoot";
				type      = "box";
				startBone = "leftFoot";
				size[]    = {0.15,0.05,0.07};
				mass      = 2.3;// 10 //3
			};
			//--------------------------------
			class RightUpLeg: BaseRagdollBone
			{
				name      = "rightUpLeg";
				type      = "capsule";
				startBone = "rightUpLeg";
				endBone   = "rightLeg";
				mass      = 25.5;//40 //10
			};
			class RightLeg: BaseRagdollBone
			{
				name      = "rightLeg";
				type      = "capsule";
				startBone = "rightLeg";
				endBone   = "rightFoot";
				mass      = 13;//20 //7
			};
			class RightFoot: BaseRagdollBone
			{
				name      = "rightFoot";
				type      = "box";
				startBone = "rightFoot";
				size[]    = {0.15,0.05,0.07};
				mass      = 2.3;//10 //3
			};

			//--------------------------------
			class Weapon: BaseRagdollBone
			{
				name               = "weapon";
				type               = "weapon";
				startBone          = "weapon";
				endPosRelToStart[] = {0, 0, 0.4};
				mass               = 4;//3
			};
			class Launcher: BaseRagdollBone
			{
				name               = "launcher";
				type               = "weapon";
				startBone          = "launcher";
				endPosRelToStart[] = {0, 0, 0.4};
				mass               = 9;//3
			};
		};

		class JointsPX3
		{
			#ifdef RAGDOLL_DEBUG
			class Pelvis_Chest_PX3: RagDollD6Joint_PX3
			{
				name = "pelvis_chest";
				bone1 = "pelvis";
				bone2 = "chest";
				axis[] = {0,1,0.3};
				enableCollision = false;

				swingLimitY = 30;
				swingLimitZ = 30;
				twistLimitLower = -25;
				twistLimitUpper = 25;

				driveSpring = 330;
				driveDamping = 330;
				driveSpringWater = 5;
				driveDampingWater = 5;
			};
			class Chest_Head_PX3: RagDollD6Joint_PX3
			{
				name = "chest_head";
				bone1 = "chest";
				bone2 = "head";

				swingLimitY = 25;
				swingLimitZ = 25;
				twistLimitLower = -40;
				twistLimitUpper = 40;

				driveSpring = 15.0;
				driveDamping = 30;
				driveSpringWater = 1.5;
				driveDampingWater = 03.0;
				twistSpring = 15.0;
				twistDamping = 30.0;
			};
			#endif
			class Chest_LeftArm_PX3: RagDollD6Joint_PX3
			{
				name = "chest_leftArm";
				bone1 = "chest";
				bone2 = "leftArm";
				//axis[] = {-1.5, -1.1, 2};
				enableCollision = true;

				swingLimitY = 5;
				swingLimitZ = 15;
				twistLimitLower = -50;
				twistLimitUpper = 50;

				swingSpring = 25;
				swingDamping = 25.0;

				twistSpring = 1.0;
				twistDamping = 25.0;

				driveSpring = 15;
				driveDamping = 30;
				driveSpringWater = 3;
				driveDampingWater = 3;
			};


			class Chest_RightArm_PX3: RagDollD6Joint_PX3
			{
				name = "chest_rightArm";
				bone1 = "chest";
				bone2 = "rightArm";
				//axis[] = {-1.5, -1.1, 2};
				enableCollision = true;

				swingLimitY = 15;
				swingLimitZ = 15;
				twistLimitLower = -50;
				twistLimitUpper = 50;

				swingSpring = 25;
				swingDamping = 25.0;

				twistSpring = 1.0;
				twistDamping = 25.0;

				driveSpring = 15;
				driveDamping = 30;
				driveSpringWater = 3;
				driveDampingWater = 3;

			};
			class Pelvis_LeftUpLeg_PX3: RagDollD6Joint_PX3
			{
				name = "pelvis_leftUpLeg";
				bone1 = "pelvis";
				bone2 = "leftUpLeg";
				//axis[] = {-1.5, -1.1, 2};
				enableCollision = true;

				swingLimitY = 10;
				swingLimitZ = 10;
				twistLimitLower = -80;
				twistLimitUpper = 80;

				swingSpring = 5.0;
				swingDamping = 5.0;

				twistSpring = 5.0;
				twistDamping = 5.0;

				driveSpring = 550;
				driveDamping = 130;
				driveSpringWater = 3;
				driveDampingWater = 3;

			};
			class Pelvis_RightUpLeg_PX3: RagDollD6Joint_PX3
			{
				name = "pelvis_rightUpLeg";
				bone1 = "pelvis";
				bone2 = "rightUpLeg";
				//axis[] = {1.5, -1.1, 2};
				enableCollision = true;

				swingLimitY = 1;
				swingLimitZ = 1;
				twistLimitLower = -80;
				twistLimitUpper = 80;

				swingSpring = 1.0;
				swingDamping = 5.0;

				twistSpring = 5.0;
				twistDamping = 5.0;

				driveSpring = 550;
				driveDamping = 130;
				driveSpringWater = 3;
				driveDampingWater = 3;

			};
			class LeftArm_LeftForeArm_PX3: RagDollD6Joint_PX3
			{
				name = "leftArm_leftForeArm";
				bone1 = "leftArm";
				bone2 = "leftForeArm";
				axis[] = {-1,1,-0.2};

				swingLimitY = 10;
				swingLimitZ = 10;
				twistLimitLower = -5;
				twistLimitUpper = 150;

				driveSpring = 10;
				driveDamping = 10;
				driveSpringWater = 1;
				driveDampingWater = 1;
			};

			class LeftForeArm_LeftHand_PX3: RagDollD6Joint_PX3
			{
				name = "leftForeArm_leftHand";
				bone1 = "leftForeArm";
				bone2 = "leftHand";

				swingLimitY = 10;
				swingLimitZ = 10;
				twistLimitLower = -20;
				twistLimitUpper = 20;

				driveSpring = 10;
				driveDamping = 10;
				driveSpringWater = 1;
				driveDampingWater = 1;
			};

			//----------------------------------------------------
			class RightArm_RightForeArm_PX3: RagDollD6Joint_PX3
			{
				name = "rightArm_rightForeArm";
				bone1 = "rightArm";
				bone2 = "rightForeArm";
				axis[] = {-1,-1,0.2};

				swingLimitY = 10;
				swingLimitZ = 10;
				twistLimitLower = -5;
				twistLimitUpper = 150;

				driveSpring = 10;
				driveDamping = 10;
				driveSpringWater = 1;
				driveDampingWater = 1;
			};

			class RightForeArm_RightHand_PX3: RagDollD6Joint_PX3
			{
				name = "rightForeArm_rightHand";
				bone1 = "rightForeArm";
				bone2 = "rightHand";

				swingLimitY = 10;
				swingLimitZ = 10;
				twistLimitLower = -20;
				twistLimitUpper = 20;

				driveSpring = 10;
				driveDamping = 10;
				driveSpringWater = 1;
				driveDampingWater = 1;
			};
			class LeftUpLeg_LeftLeg_PX3: RagDollD6Joint_PX3
			{
				name = "leftUpLeg_leftLeg";
				bone1 = "leftUpLeg";
				bone2 = "leftLeg";
				axis[] = {1,0,0};

				swingLimitY = 10;
				swingLimitZ = 0.01;
				twistLimitLower = -5;
				twistLimitUpper = 45;

				twistSpring = 45.0;
				twistDamping = 15.0;

				driveSpring = 255;
				driveDamping = 230;
				driveSpringWater = 2;
				driveDampingWater = 2;
			};

			class LeftLeg_LeftFoot_PX3: RagDollD6Joint_PX3
			{
				name = "leftLeg_leftFoot";
				bone1 = "leftLeg";
				bone2 = "leftFoot";
				axis[] = {1,0,0};
				enableCollision = true;
				swingLimitY = 5;
				swingLimitZ = 5;
				twistLimitLower = -65;
				twistLimitUpper = 45;

				driveSpring = 55;
				driveDamping = 45;
				driveSpringWater = 2;
				driveDampingWater = 2;
			};

			//----------------------------------------------------

			class RightUpLeg_RightLeg_PX3: RagDollD6Joint_PX3
			{
				name = "rightUpLeg_rightLeg";
				bone1 = "rightUpLeg";
				bone2 = "rightLeg";
				axis[] = {1,0,0};

				swingLimitY = 10;
				swingLimitZ = 0.01;
				twistLimitLower = -5;
				twistLimitUpper = 45;

				twistSpring = 45.0;
				twistDamping = 15.0;

				driveSpring = 255;
				driveDamping = 230;
				driveSpringWater = 2;
				driveDampingWater = 2;
			};

			class RightLeg_RightFoot_PX3: RagDollD6Joint_PX3
			{
				name = "rightLeg_rightFoot";
				bone1 = "rightLeg";
				bone2 = "rightFoot";
				axis[] = {1,0,0};
				enableCollision = true;
				swingLimitY = 5;
				swingLimitZ = 5;
				twistLimitLower = -65;
				twistLimitUpper = 45;

				driveSpring = 55;
				driveDamping = 45;
				driveSpringWater = 2;
				driveDampingWater = 2;
			};

		};
	};
};