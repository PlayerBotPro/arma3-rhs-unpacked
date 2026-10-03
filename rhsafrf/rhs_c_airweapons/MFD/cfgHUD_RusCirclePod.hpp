
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
						HUD_TEXT_SOURCE(-0.005, 0.06,0.045,	0.045,center,pylonAmmo,PylonValue1)
						HUD_TEXT_STATIC(-0.005, 0.12,0.04,	0.04,center,MFD_PYLON_NAME,PylonText1)
						class Shape
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								CIRCLE(Center,MFD_PYLON_SIZE_IN),{},
								CIRCLE_MARK(Center,MFD_PYLON_SIZE_IN * 0.65,MFD_PYLON_SIZE_IN * 0.55,45+45*0),{},
								CIRCLE_MARK(Center,MFD_PYLON_SIZE_IN * 0.65,MFD_PYLON_SIZE_IN * 0.55,45+45*1),{},
								CIRCLE_MARK(Center,MFD_PYLON_SIZE_IN * 0.65,MFD_PYLON_SIZE_IN * 0.55,45+45*2),{},
								CIRCLE_MARK(Center,MFD_PYLON_SIZE_IN * 0.65,MFD_PYLON_SIZE_IN * 0.55,45+45*3),{},
								CIRCLE_MARK(Center,MFD_PYLON_SIZE_IN * 0.65,MFD_PYLON_SIZE_IN * 0.55,45+45*4),{},
								CIRCLE_MARK(Center,MFD_PYLON_SIZE_IN * 0.65,MFD_PYLON_SIZE_IN * 0.55,45+45*5),{},
								CIRCLE_MARK(Center,MFD_PYLON_SIZE_IN * 0.65,MFD_PYLON_SIZE_IN * 0.55,45+45*6),{},
								CIRCLE_MARK(Center,MFD_PYLON_SIZE_IN * 0.65,MFD_PYLON_SIZE_IN * 0.55,45+45*7),{},

								// inner 
								CIRCLE_MARK(Center,MFD_PYLON_SIZE_IN * 0.35,MFD_PYLON_SIZE_IN * 0.25,45+90*0),{},
								CIRCLE_MARK(Center,MFD_PYLON_SIZE_IN * 0.35,MFD_PYLON_SIZE_IN * 0.25,45+90*1),{},
								CIRCLE_MARK(Center,MFD_PYLON_SIZE_IN * 0.35,MFD_PYLON_SIZE_IN * 0.25,45+90*2),{},
								CIRCLE_MARK(Center,MFD_PYLON_SIZE_IN * 0.35,MFD_PYLON_SIZE_IN * 0.25,45+90*3),{}
							};
						};
					};
					class Selected: Default
					{
						condition	= "PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]		= {0.15, 1.0, 0.15, 1.0};
						alpha		= 0.22;
						class PylonText1: PylonText1 {};
						class PylonValue1: PylonValue1 {};
						class Shape: Shape {};
					};
					class Empty: Selected
					{
						condition	= "pylonMagazineEmpty";
						color[]		= {1, 0, 0, 1.0};
						class PylonText1: PylonText1 {};
						class PylonValue1: PylonValue1 {};
						class Shape: Shape {};
					};
				};

			};