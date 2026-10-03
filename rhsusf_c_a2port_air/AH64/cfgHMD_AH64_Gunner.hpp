				topLeft					= "HUD_top_left";
				topRight				= "HUD_top_right";
				bottomLeft				= "HUD_bottom_left";
				borderLeft				= 0;
				borderRight				= 0;
				borderTop				= 0;
				borderBottom			= 0;
				color[]					= {1.0, 1.0, 1.0, 1.0};
				helmetMountedDisplay	= true;
				helmetPosition[]		= {-0.0375,	0.0375,	0.1};
				helmetRight[]			= {0.075,	0.0,	0.0};
				helmetDown[]			= {0.0,		-0.075,	0.0};
				font					= rhsusf_txled;
				turret[]				= {0};
				class material
				{
					ambient[] = {1, 1, 1, 1};
					diffuse[] = {1, 1, 1, 1};
					emissive[] = {400, 200, 200, 1};
				};

				class Bones
				{
					class GunnerAim
					{
						type		= vector;
						source		= turret;
						pos0[]		= {0, -2.0}; // in spherical this is offset
						pos10[]		= {0.0068, -0.01}; // in spherical pos10 is scale
						projection	= 0;  // 1 (default) planar projection. 0 spherical projection
					};
				};

				class Draw
				{
					alpha				= user3;
					color[]				= {user0, user1, user2};
					condition 			= "on";

					class Gunner
					{
						type			= line;
						width			= 4.0;
						points[]		=
						{
							// Gunner aim rectangle
							{GunnerAim, {__EVAL(0.5 - 0.015), __EVAL(0.9 - 0.008)}, 1},
							{GunnerAim, {__EVAL(0.5 - 0.015), __EVAL(0.9 + 0.008)}, 1},
							{GunnerAim, {__EVAL(0.5 + 0.015), __EVAL(0.9 + 0.008)}, 1},
							{GunnerAim, {__EVAL(0.5 + 0.015), __EVAL(0.9 - 0.008)}, 1},
							{GunnerAim, {__EVAL(0.5 - 0.015), __EVAL(0.9 - 0.008)}, 1}
						};
					};
				};