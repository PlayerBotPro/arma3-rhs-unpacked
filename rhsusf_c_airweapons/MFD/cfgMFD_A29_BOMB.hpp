#define PosX0Center 0.50 // 502
#define PosY0Center 0.50 // 49
#define SizeX10deg 0.186
#define SizeY10deg 0.141

#define XtoYscale (SizeX10deg / SizeY10deg)
			class RHS_A29_Weap_MFD
			{
				class Bones {};
				class Draw
				{
					class BackgroundGroup
					{
						//condition			= "PylonAmmoRelative >= 0";
						color[]				= {0.0, 0.0, 0.0};
						class Background
						{
							type = polygon;
							points[] =
							{
								{
									{{__EVAL(-0.024+0.005),__EVAL(-0.06-0.01)},1},
									{{__EVAL(+0.024+0.005),__EVAL(-0.06-0.01)},1},
									{{__EVAL(+0.024+0.005),__EVAL(+0.06-0.01)},1},
									{{__EVAL(-0.024+0.005),__EVAL(+0.06-0.01)},1},
								}
							};
						};
					};
					class Default
					{
						condition = "PylonAmmoRelative>0";
						color[]				= {0,0.12,0};
						class Shape
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								#define SCALE_IMG 3700
								#define OFFSET_IMG_X -0.066
								#define OFFSET_IMG_Y -0.075
								{{__EVAL(276/SCALE_IMG + OFFSET_IMG_X), __EVAL(373/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(289/SCALE_IMG + OFFSET_IMG_X), __EVAL(373/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{},
								{{__EVAL(233/SCALE_IMG + OFFSET_IMG_X), __EVAL(373/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(246/SCALE_IMG + OFFSET_IMG_X), __EVAL(373/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{},
								{{__EVAL(216/SCALE_IMG + OFFSET_IMG_X), __EVAL(104/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(306/SCALE_IMG + OFFSET_IMG_X), __EVAL(104/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{},
								{{__EVAL(216/SCALE_IMG + OFFSET_IMG_X), __EVAL(312/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(306/SCALE_IMG + OFFSET_IMG_X), __EVAL(312/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{},
								{{__EVAL(247/SCALE_IMG + OFFSET_IMG_X), __EVAL(450/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(247/SCALE_IMG + OFFSET_IMG_X), __EVAL(345/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(255/SCALE_IMG + OFFSET_IMG_X), __EVAL(340/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(261/SCALE_IMG + OFFSET_IMG_X), __EVAL(338/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(276/SCALE_IMG + OFFSET_IMG_X), __EVAL(352/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(274/SCALE_IMG + OFFSET_IMG_X), __EVAL(449/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{},
								{{__EVAL(261/SCALE_IMG + OFFSET_IMG_X), __EVAL(473/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(271/SCALE_IMG + OFFSET_IMG_X), __EVAL(469/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(274/SCALE_IMG + OFFSET_IMG_X), __EVAL(459/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(274/SCALE_IMG + OFFSET_IMG_X), __EVAL(449/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(317/SCALE_IMG + OFFSET_IMG_X), __EVAL(464/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(317/SCALE_IMG + OFFSET_IMG_X), __EVAL(385/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(289/SCALE_IMG + OFFSET_IMG_X), __EVAL(373/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(306/SCALE_IMG + OFFSET_IMG_X), __EVAL(313/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(306/SCALE_IMG + OFFSET_IMG_X), __EVAL(106/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(306/SCALE_IMG + OFFSET_IMG_X), __EVAL(81/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(301/SCALE_IMG + OFFSET_IMG_X), __EVAL(62/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(295/SCALE_IMG + OFFSET_IMG_X), __EVAL(51/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(285/SCALE_IMG + OFFSET_IMG_X), __EVAL(42/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(275/SCALE_IMG + OFFSET_IMG_X), __EVAL(37/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(261/SCALE_IMG + OFFSET_IMG_X), __EVAL(35/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(247/SCALE_IMG + OFFSET_IMG_X), __EVAL(37/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(237/SCALE_IMG + OFFSET_IMG_X), __EVAL(43/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(227/SCALE_IMG + OFFSET_IMG_X), __EVAL(52/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(221/SCALE_IMG + OFFSET_IMG_X), __EVAL(63/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(216/SCALE_IMG + OFFSET_IMG_X), __EVAL(81/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(216/SCALE_IMG + OFFSET_IMG_X), __EVAL(106/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(216/SCALE_IMG + OFFSET_IMG_X), __EVAL(313/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(233/SCALE_IMG + OFFSET_IMG_X), __EVAL(373/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(206/SCALE_IMG + OFFSET_IMG_X), __EVAL(386/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(206/SCALE_IMG + OFFSET_IMG_X), __EVAL(462/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(247/SCALE_IMG + OFFSET_IMG_X), __EVAL(450/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{{__EVAL(261/SCALE_IMG + OFFSET_IMG_X), __EVAL(473/SCALE_IMG 	+ OFFSET_IMG_Y)},1},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						color[]				= {0.99,0.94,0.59};
						class Shape: Shape {};
					};
					class Empty: Default
					{
						condition = "PylonAmmoRelative <= 0";
						color[]				= {1.0, 0.0, 0.0, 1.0};
						class Shape: Shape {};
					};
				};
			};
			class RHS_A29_Weap_MFD_Inventory
			{
				class Bones {};
				class Draw 
				{

					HUD_TEXT_STATIC(0.00,0.02+0.00,0.025,	0.02,right,MFD_PYLON_NAME,PylonText1)
					HUD_TEXT_STATIC(0.00,0.02+0.034,0.025,	0.02,right,MFD_PYLON_NAME2,PylonText2)
				};
			};