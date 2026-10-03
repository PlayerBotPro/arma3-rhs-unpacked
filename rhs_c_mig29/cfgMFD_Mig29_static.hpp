
				/// adjust position inside of memory points LOD
				borderLeft				= 0;
				borderRight				= 0;
				borderTop				= 0;
				borderBottom			= 0;
				color[]					= {0.0, 1.0, 0.0, 0.1};
				font					= "rhs_digital_font_rus";

				class Bones
				{
				};

				class Draw
				{
					color[]				= {0.15, 1.0, 0.15};
					alpha				= 1;
					condition			= "user3*on";
					class Shape
					{
						type		= polygon;
						texture		= "rhsafrf\addons\rhs_c_a2port_air\Su25\rhs_su25_reticle_static_ca.paa";
						points[]	=
						{
							{
								{{__EVAL(-0.28+0.505),__EVAL(-0.25+0.665)},1},
								{{__EVAL(+0.28+0.505),__EVAL(-0.25+0.665)},1},
								{{__EVAL(+0.28+0.505),__EVAL(+0.25+0.665)},1},
								{{__EVAL(-0.28+0.505),__EVAL(+0.25+0.665)},1}
							}
						};
					};
				};
