		class rhs_f22_pylon
		{
			class Bones
			{
				class Center
				{
					type	= fixed;
					pos[]	= {-0.025, 0.00};
				};
				class Center2
				{
					type	= fixed;
					pos[]	= {0.02, -0.0};
				};
			};
			class material
			{
				ambient[] = {3, 3, 3, 1};
				diffuse[] = {10, 10, 10, 1};
				emissive[] = {400, 200, 200, 1};
			};
			class Draw
			{
				class Default
				{
					condition	= "PylonAmmoRelative>0";
					color[]		= {0.15, 1.0, 0.15};
					alpha		= 0.22;
					class Missile1
					{
						condition	= "PylonAmmo>=2";

						class Shape
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								CIRCLE(Center,MFD_PYLON_SIZE_IN),{}
							};
						};
					};
					class Missile2
					{
						condition	= "PylonAmmo>=1";

						class Shape
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								CIRCLE(Center2,MFD_PYLON_SIZE_IN),{}
							};
						};
					};
					HUD_TEXT_BONE(Center,0.0, -0.015,0.03,	0.035,center,MFD_PYLON_NAME,PylonText1)
					HUD_TEXT_BONE(Center2,0.0, -0.015,0.03,	0.035,center,MFD_PYLON_NAME,PylonText2)
				};
				class Selected: Default
				{
					condition	= "(PylonSelected +  PylonAmmo/2)/2";
					alpha		= 1;
					class Missile1: Missile1
					{
						class Shape: Shape {};
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
					class Missile2: Missile2
					{
						class Shape: Shape {};
						class Background
						{
							type = polygon;
							points[] =
							{
								CIRCLE_POLYGON(Center2,MFD_PYLON_SIZE_IN,1,45),
								CIRCLE_POLYGON(Center2,MFD_PYLON_SIZE_IN,3,45),
								CIRCLE_POLYGON(Center2,MFD_PYLON_SIZE_IN,5,45),
								CIRCLE_POLYGON(Center2,MFD_PYLON_SIZE_IN,7,45)
							};
						};
					};
					class PylonText1: PylonText1 {};
					class PylonText2: PylonText2 {};
				};
				class HalfEmpty: Selected
				{
					alpha		= 0.15;
					condition	= "PylonAmmoRelative <= 1";
					color[]		= {1.0, 0.0, 0.0, 1.0};
					class Missile1: Missile1
					{
						condition	= "PylonAmmo<=1";
						class Shape: Shape {};
						class Background: Background {};
					};
					class Missile2: Missile2
					{
						condition	= "PylonAmmo<=0";
						class Shape: Shape {};
						class Background: Background {};
					};
				};
				class Empty: HalfEmpty
				{
					condition	= "PylonAmmoRelative <= 0";
					class PylonText1: PylonText1 {};
					class PylonText2: PylonText2 {};
				};
			};
		};