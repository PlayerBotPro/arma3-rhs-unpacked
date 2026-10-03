			class rhs_rus_ammoname
			{
				class Bones {};
				class Draw
				{
					condition	= "PylonSelected";
					color[]		= {0.15, 1.0, 0.15};
					alpha		= 1;
					HUD_TEXT_STATIC(-0.005, 0.02,0.05,	0.045,center,MFD_PYLON_NAME,PylonText1)
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones {};
				class Draw
				{
					condition	= "PylonSelected";
					color[]		= {0.15, 1.0, 0.15};
					alpha		= 1;
					HUD_TEXT_STATIC(-0.005, 0.02,0.05,	0.045,right,MFD_PYLON_NAME,PylonText1)
				};
			};
			class rhs_su25_box
			{
				class Bones {};
				class Draw
				{
					condition	= "1-pylonMagazineEmpty";
					color[]		= {0.15, 1.0, 0.15, 1.0};
					alpha		= 0.22;
					class Shape
					{
						type			= polygon;
						width			= 4.0;
						points[]		=
						{
							{
								{{__EVAL(-0.022+0.00),__EVAL(-0.04+0.00)},1},
								{{__EVAL(+0.022+0.00),__EVAL(-0.04+0.00)},1},
								{{__EVAL(+0.022+0.00),__EVAL(+0.04+0.00)},1},
								{{__EVAL(-0.022+0.00),__EVAL(+0.04+0.00)},1}
							}
						};
					};
					class Selected
					{
						condition	= "PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]		= {0.58,0.23,0};
						alpha		= 0.22;
						class Shape
						{
							type			= polygon;
							width			= 4.0;
							points[]		=
							{
								{
									{{__EVAL(-0.022+0.00),__EVAL(-0.04+0.22)},1},
									{{__EVAL(+0.022+0.00),__EVAL(-0.04+0.22)},1},
									{{__EVAL(+0.022+0.00),__EVAL(+0.04+0.22)},1},
									{{__EVAL(-0.022+0.00),__EVAL(+0.04+0.22)},1}
								}
							};
						};
					};
				};

			};