#define PosX0Center 0.50 // 502
#define PosY0Center 0.50 // 49
#define SizeX10deg 0.234
#define SizeY10deg 0.230

#define XtoYscale (SizeX10deg / SizeY10deg)
			class RHS_AH64_Weap_MFD
			{
				class Bones {};
				class Draw
				{
					#define OFFSET_WHOLE_IMG_X -0.06
					class BackgroundGroup
					{
						//condition			= "PylonAmmoRelative >= 0";
						color[]				= {0.0, 0.0, 0.0};
						alpha = 1;
						class Background
						{
							type = polygon;
							points[] =
							{
								{
									{{__EVAL(-0.045),__EVAL(-0.11+0.06)},1},
									{{__EVAL(+0.045),__EVAL(-0.11+0.06)},1},
									{{__EVAL(+0.045),__EVAL(+0.11+0.06)},1},
									{{__EVAL(-0.045),__EVAL(+0.11+0.06)},1},
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
								//{{0,-1},1},
								//{{0,1},1},{},
								#define SCALE_IMG 1000
								// top left
								#define OFFSET_IMG_X -0.225 + OFFSET_WHOLE_IMG_X
								#define OFFSET_IMG_Y -0.27
								{{__EVAL(274/SCALE_IMG + OFFSET_IMG_X),__EVAL((215/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(237/SCALE_IMG + OFFSET_IMG_X),__EVAL((215/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{},
								{{__EVAL(274/SCALE_IMG + OFFSET_IMG_X),__EVAL((225/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
								{{__EVAL(237/SCALE_IMG + OFFSET_IMG_X),__EVAL((225/SCALE_IMG)/XtoYscale + OFFSET_IMG_Y)},1},
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
								{},
								// top right
								#define OFFSET_IMG_X -0.175 + OFFSET_WHOLE_IMG_X
								#define OFFSET_IMG_Y -0.27
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
								{},
								// bottom left
								#define OFFSET_IMG_X -0.225 + OFFSET_WHOLE_IMG_X
								#define OFFSET_IMG_Y -0.137
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
								{},
								// bottom right
								#define OFFSET_IMG_X -0.175 + OFFSET_WHOLE_IMG_X
								#define OFFSET_IMG_Y -0.137
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
								{},
							};
						};
						HUD_TEXT_STATIC(0.02,	+0.01,0.03,	0.025,center,MFD_PYLON_NAME,PylonText1)
						HUD_TEXT_STATIC(0.02,	+0.14,0.03,	0.025,center,MFD_PYLON_NAME,PylonText2)
						HUD_TEXT_STATIC(-0.025,	+0.01,0.03,	0.025,center,MFD_PYLON_NAME,PylonText3)
						HUD_TEXT_STATIC(-0.025,	+0.14,0.03,	0.025,center,MFD_PYLON_NAME,PylonText4)
					};
					class Selected: Default
					{
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						color[]				= {0.99,0.94,0.59};
						class Shape: Shape {};
						class PylonText1: PylonText1 {};
						class PylonText2: PylonText2 {};
						class PylonText3: PylonText3 {};
						class PylonText4: PylonText4 {};
					};
					class Empty: Default
					{
						condition = "PylonAmmoRelative <= 0";
						color[]				= {1.0, 0.0, 0.0, 1.0};
						class Shape: Shape {};
						class PylonText1: PylonText1 {};
						class PylonText2: PylonText2 {};
						class PylonText3: PylonText3 {};
						class PylonText4: PylonText4 {};
					};
				};
			};
			class RHS_AH64_Weap_MFD_Inventory
			{
				class Bones {};
				class Draw {};
			};