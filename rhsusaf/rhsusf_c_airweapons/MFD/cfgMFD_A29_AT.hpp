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
									{{__EVAL(-0.022+0.0),__EVAL(-0.042-0.008)},1},
									{{__EVAL(+0.022+0.0),__EVAL(-0.042-0.008)},1},
									{{__EVAL(+0.022+0.0),__EVAL(+0.042-0.008)},1},
									{{__EVAL(-0.022+0.0),__EVAL(+0.042-0.008)},1},
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
								#define SCALE_IMG 1150
								#define OFFSET_IMG_X -0.225
								#define OFFSET_IMG_Y -0.18
								{{__EVAL(274/SCALE_IMG + OFFSET_IMG_X),__EVAL((215/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(256/SCALE_IMG + OFFSET_IMG_X),__EVAL((227/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(237/SCALE_IMG + OFFSET_IMG_X),__EVAL((215/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{},
								{{__EVAL(274/SCALE_IMG + OFFSET_IMG_X),__EVAL((317/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(274/SCALE_IMG + OFFSET_IMG_X),__EVAL((215/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(274/SCALE_IMG + OFFSET_IMG_X),__EVAL((209/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(272/SCALE_IMG + OFFSET_IMG_X),__EVAL((204/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(270/SCALE_IMG + OFFSET_IMG_X),__EVAL((200/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(266/SCALE_IMG + OFFSET_IMG_X),__EVAL((198/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(262/SCALE_IMG + OFFSET_IMG_X),__EVAL((196/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(259/SCALE_IMG + OFFSET_IMG_X),__EVAL((195/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(256/SCALE_IMG + OFFSET_IMG_X),__EVAL((194/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(255/SCALE_IMG + OFFSET_IMG_X),__EVAL((194/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(252/SCALE_IMG + OFFSET_IMG_X),__EVAL((195/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(249/SCALE_IMG + OFFSET_IMG_X),__EVAL((196/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(245/SCALE_IMG + OFFSET_IMG_X),__EVAL((198/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(242/SCALE_IMG + OFFSET_IMG_X),__EVAL((200/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(239/SCALE_IMG + OFFSET_IMG_X),__EVAL((204/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(238/SCALE_IMG + OFFSET_IMG_X),__EVAL((209/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(237/SCALE_IMG + OFFSET_IMG_X),__EVAL((215/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(237/SCALE_IMG + OFFSET_IMG_X),__EVAL((317/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(274/SCALE_IMG + OFFSET_IMG_X),__EVAL((317/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
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