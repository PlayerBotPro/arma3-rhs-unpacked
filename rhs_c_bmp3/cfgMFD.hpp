
		class MFD
		{
			#define MFD_COLOR color[] = {0.07,0.14,0.07};
			//MFD
			class MFD_Left
			{
				topLeft					= "MFD_1_TL";
				topRight				= "MFD_1_TR";
				bottomLeft				= "MFD_1_BL";
				borderLeft				= 0;
				borderRight				= 0;
				borderTop				= 0;
				borderBottom			= 0;
				color[]					= {1,1,1};
				alpha					= 0.5;
				enableParallax			= 0;
				font					= rhs_digital_font_var;
				class Bones {};
				class Draw
				{
					MFD_COLOR
					alpha = 0.12;
					condition = "on";
					class FuelNumber
					{
						type		= "text";
						source		= "fuel";
						sourceScale	= 677;
						scale 		= 1;
						align		= "right";

						pos[]		= {{__EVAL(0.655		),__EVAL(0.205			)	},1};
						right[]		= {{__EVAL(0.655 + 0.10	),__EVAL(0.205			)	},1};
						down[]		= {{__EVAL(0.655		),__EVAL(0.205 + 0.31	)	},1};
					};
				};
			};
			class MFD_Right
			{
				topLeft					= "MFD_2_TL";
				topRight				= "MFD_2_TR";
				bottomLeft				= "MFD_2_BL";
				borderLeft				= 0;
				borderRight				= 0;
				borderTop				= 0;
				borderBottom			= 0;
				color[]					= {1,1,1};
				alpha					= 0.5;
				enableParallax			= 0;
				font					= rhs_digital_font_var;
				class Bones {};
				class Draw
				{
					MFD_COLOR
					alpha = 0.12;
					condition = "on";
					class rpmNumber
					{
						type		= "text";
						source		= "rpm";
						sourceScale	= 1;
						scale 		= 1;
						refreshRate = 0.05;
						align		= "left";

						pos[]		= {{__EVAL(0.305		),__EVAL(0.205			)	},1};
						right[]		= {{__EVAL(0.305 + 0.10	),__EVAL(0.205			)	},1};
						down[]		= {{__EVAL(0.305		),__EVAL(0.205 + 0.31	)	},1};
					};
					class SpeedNumber
					{
						type		= "text";
						source		= "speed";
						sourceScale	= 3.6;
						scale 		= 1;
						refreshRate = 0.05;
						align		= "left";

						pos[]		= {{__EVAL(0.795		),__EVAL(0.205			)	},1};
						right[]		= {{__EVAL(0.795 + 0.10	),__EVAL(0.205			)	},1};
						down[]		= {{__EVAL(0.795		),__EVAL(0.205 + 0.31	)	},1};
					};
				};
			};
		};