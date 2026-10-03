
			class rhs_rus_circle
			{
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
					color[]		= {0.15, 1.0, 0.15, 1.0};
					alpha		= 0.22;


					class Default
					{
						condition	= "1-PylonSelected-pylonMagazineEmpty";
						color[]		= {1, 1, 1};
						HUD_TEXT_STATIC(-0.005, 0.06,0.045,	0.045,center,MFD_PYLON_NAME,PylonText1)
						class Shape
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								CIRCLE(Center,MFD_PYLON_SIZE_IN),{},
								CIRCLE_MARK(Center,MFD_PYLON_SIZE_IN,MFD_PYLON_SIZE_OUT,45+90*0),{},
								CIRCLE_MARK(Center,MFD_PYLON_SIZE_IN,MFD_PYLON_SIZE_OUT,45+90*1),{},
								CIRCLE_MARK(Center,MFD_PYLON_SIZE_IN,MFD_PYLON_SIZE_OUT,45+90*2),{},
								CIRCLE_MARK(Center,MFD_PYLON_SIZE_IN,MFD_PYLON_SIZE_OUT,45+90*3),{}
							};
						};
					};
					class Selected: Default
					{
						condition	= "PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]		= {0.15, 1.0, 0.15, 1.0};
						alpha		= 0.22;
						class PylonText1: PylonText1 {};
						class Shape: Shape {};
						class Polygon
						{
							type			= polygon;
							width			= 4.0;
							points[]		=
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
						condition	= "pylonMagazineEmpty";
						color[]		= {1, 0, 0, 1.0};
						class PylonText1: PylonText1 {};
						class Shape: Shape {};
						class Polygon: Polygon {};
					};
				};

			};