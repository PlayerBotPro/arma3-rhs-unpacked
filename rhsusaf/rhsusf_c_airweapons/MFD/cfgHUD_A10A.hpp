			class rhs_a10a_ammoname
			{
				class Bones {};
				class Draw
				{
					color[]		= {1.0, 1.0, 1.0};
					alpha		= 1;
					HUD_TEXT_STATIC(0.005, 0.02,0.045,	0.085,center,MFD_PYLON_NAME,PylonText1)
				};
			};
			class rhs_a10a_box
			{
				class Bones {};
				class Draw
				{
					color[]		= {0.15, 1.0, 0.15};
					alpha		= 1;
					class Default
					{
						condition	= "PylonAmmoRelative>=0.001";
						color[]		= {0.15, 1.0, 0.15, 1.0};
						alpha		= 0.22;
						class Shape
						{
							type			= polygon;
							width			= 4.0;
							points[]		=
							{
								{
									{{__EVAL(-0.015+0.00),__EVAL(-0.04+0.00)},1},
									{{__EVAL(+0.015+0.00),__EVAL(-0.04+0.00)},1},
									{{__EVAL(+0.015+0.00),__EVAL(+0.04+0.00)},1},
									{{__EVAL(-0.015+0.00),__EVAL(+0.04+0.00)},1}
								}
								#ifdef A10A_2BOXES
								,{
									{{__EVAL(-0.015+0.035),__EVAL(-0.04+0.00)},1},
									{{__EVAL(+0.015+0.035),__EVAL(-0.04+0.00)},1},
									{{__EVAL(+0.015+0.035),__EVAL(+0.04+0.00)},1},
									{{__EVAL(-0.015+0.035),__EVAL(+0.04+0.00)},1}
								}
								#endif
							};
						};
					};
					class Selected
					{
						condition	= "PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]		= {0.15, 1.0, 0.15, 1.0};
						alpha		= 0.22;
						class Shape
						{
							type			= polygon;
							width			= 4.0;
							points[]		=
							{
								{
									{{__EVAL(-0.015+0.00),__EVAL(-0.04+0.09)},1},
									{{__EVAL(+0.015+0.00),__EVAL(-0.04+0.09)},1},
									{{__EVAL(+0.015+0.00),__EVAL(+0.04+0.09)},1},
									{{__EVAL(-0.015+0.00),__EVAL(+0.04+0.09)},1}
								}
							};
						};
					};
					class Empty
					{
						condition	= "PylonAmmoRelative<=0";
						color[]		= {0.87,0,0};
						alpha		= 0.22;
						class Shape
						{
							type			= polygon;
							width			= 4.0;
							points[]		=
							{
								{
									{{__EVAL(-0.015+0.035),__EVAL(-0.04+0.09)},1},
									{{__EVAL(+0.015+0.035),__EVAL(-0.04+0.09)},1},
									{{__EVAL(+0.015+0.035),__EVAL(+0.04+0.09)},1},
									{{__EVAL(-0.015+0.035),__EVAL(+0.04+0.09)},1}
								}
							};
						};

					};
				};
			};