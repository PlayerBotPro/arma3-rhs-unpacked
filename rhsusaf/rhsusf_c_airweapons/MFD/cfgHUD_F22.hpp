	
#define PosX0Center 0.498
#define PosY0Center 0.585
#define SizeX10deg (0.668+0.1) //0.94+0.03
#define SizeY10deg (0.69+0.1) //1.3-0.2
		class rhs_f22_pylon
		{
			class material
			{
				ambient[] = {3, 3, 3, 1};
				diffuse[] = {10, 10, 10, 1};
				emissive[] = {400, 200, 200, 1};
			};
			class Bones
			{
				class Center
				{
					type	= fixed;
					pos[]	= {0.00, 0.00};
				};
			};
			class Draw
			{
				class Default
				{
					condition	= "PylonAmmoRelative>0";
					color[]		= {0.15, 1.0, 0.15};
					alpha		= 0.22;
					class Shape
					{
						type			= line;
						width			= 4.0;
						points[]		=
						{
							CIRCLE(Center,MFD_PYLON_SIZE_IN),{}
						};
					};
					HUD_TEXT_BONE(Center,-0.0, -0.015,0.03,	0.035,center,MFD_PYLON_NAME,PylonText1)
				};
				class Selected: Default
				{
					condition	= "(PylonSelected +  PylonAmmoRelative)/2";
					alpha		= 1;

					class Shape: Shape {};
					class PylonText1: PylonText1 {};
					class Background
					{
						type = polygon;
						points[] =
						{
							CIRCLE_POLYGON(Center,MFD_PYLON_SIZE_IN,1,45),
							CIRCLE_POLYGON(Center,MFD_PYLON_SIZE_IN,3,45),
							CIRCLE_POLYGON(Center,MFD_PYLON_SIZE_IN,5,45),
							CIRCLE_POLYGON(Center,MFD_PYLON_SIZE_IN,7,45)
						};
					};
				};
				class Empty: Selected
				{
					condition	= "PylonAmmoRelative <= 0";
					color[]		= {1.0, 0.0, 0.0, 1.0};
					class Shape: Shape {};
					class PylonText1: PylonText1 {};
					class Background: Background {};
				};
			};
		};