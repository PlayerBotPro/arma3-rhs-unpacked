
	class Default
	{
		isDiscrete = 1;
		skeletonInherit = "";
		skeletonBones[] = {};
	};

	class rhs_btr80_base : Default
	{
		isDiscrete=1; // not continuous
		skeletonInherit = ""; // inheritance
		skeletonBones[]=
		{
				"drivewheel","",

				"wheel_1_1_damper_land","",
				"wheel_1_2_damper_land","",
				"wheel_1_3_damper_land","",
				"wheel_1_4_damper_land","",

				"wheel_2_1_damper_land","",
				"wheel_2_2_damper_land","",
				"wheel_2_3_damper_land","",
				"wheel_2_4_damper_land","",

				"wheel_1_1_damper","wheel_1_1_damper_land",
				"wheel_1_2_damper","wheel_1_2_damper_land",
				"wheel_1_3_damper","wheel_1_3_damper_land",
				"wheel_1_4_damper","wheel_1_4_damper_land",

				"wheel_2_1_damper","wheel_2_1_damper_land",
				"wheel_2_2_damper","wheel_2_2_damper_land",
				"wheel_2_3_damper","wheel_2_3_damper_land",
				"wheel_2_4_damper","wheel_2_4_damper_land",

				"wheel_1_1_steering","wheel_1_1_damper",
				"wheel_1_2_steering","wheel_1_2_damper",
				"wheel_1_3_steering","wheel_1_3_damper",
				"wheel_1_4_steering","wheel_1_4_damper",

				"wheel_2_1_steering","wheel_2_1_damper",
				"wheel_2_2_steering","wheel_2_2_damper",
				"wheel_2_3_steering","wheel_2_3_damper",
				"wheel_2_4_steering","wheel_2_4_damper",

				"wheel_1_1","wheel_1_1_steering",
				"wheel_1_2","wheel_1_2_steering",
				"wheel_1_3","wheel_1_3_steering",
				"wheel_1_4","wheel_1_4_steering",

				"wheel_2_1","wheel_2_1_steering",
				"wheel_2_2","wheel_2_2_steering",
				"wheel_2_3","wheel_2_3_steering",
				"wheel_2_4","wheel_2_4_steering",

				"wheel_1_1_unhide","wheel_1_1",
				"wheel_1_2_unhide","wheel_1_2",
				"wheel_1_3_unhide","wheel_1_3",
				"wheel_1_4_unhide","wheel_1_4",

				"wheel_2_1_unhide","wheel_2_1",
				"wheel_2_2_unhide","wheel_2_2",
				"wheel_2_3_unhide","wheel_2_3",
				"wheel_2_4_unhide","wheel_2_4",

				"wheel_1_1_hide","wheel_1_1",
				"wheel_1_2_hide","wheel_1_2",
				"wheel_1_3_hide","wheel_1_3",
				"wheel_1_4_hide","wheel_1_4",

				"wheel_2_1_hide","wheel_2_1",
				"wheel_2_2_hide","wheel_2_2",
				"wheel_2_3_hide","wheel_2_3",
				"wheel_2_4_hide","wheel_2_4",

			"driverViewHatch","",
			"commanderViewHatch","",
			"driverHatch","",
			"commanderHatch","",
			"propHatch","",
			"prop","",
			
			"crate_l1","",
			"crate_l2","",
			"crate_l3","",
			"crate_l4","",
			"crate_r1","",
			"crate_r2","",
			"crate_r3","",
			"crate_r4","",
			"water_1","",
			"water_2","",
			"wheel_1","",
			"wheel_2","",
			
			"obsTurret","",
			"obsGun","obsTurret",
			
			"speedIndicator","",
			"fuelIndicator","",

			"mainTurret","",
			"mainGun","mainTurret",
			"barrel","mainGun",
			"steering","",
			
			"zasleh1","mainGun",
			"damageVez","mainturret",
			
			"rpm","",
			"damageHide","",
			"glass1","",
			"glass2",""
			
		};
	};