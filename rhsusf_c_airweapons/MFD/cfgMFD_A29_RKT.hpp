#define PosX0Center 0.50 // 502
#define PosY0Center 0.50 // 49
#define SizeX10deg 0.186
#define SizeY10deg 0.141

#define XtoYscale (SizeX10deg / SizeY10deg)
			class RHS_A29_Weap_MFD
			{
				#define MFD_OFFSET_X -0.03
				#define MFD_OFFSET_Y -0.01
				class Bones {};
				class Draw
				{
					class Default
					{
						condition = "PylonAmmoRelative>0";
						color[]				= {0,0.12,0};
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
										{{__EVAL(-0.0225+0.03+MFD_OFFSET_X),__EVAL(-0.05+ MFD_OFFSET_Y)},1},
										{{__EVAL(+0.0225+0.03+MFD_OFFSET_X),__EVAL(-0.05+ MFD_OFFSET_Y)},1},
										{{__EVAL(+0.0225+0.03+MFD_OFFSET_X),__EVAL(+0.04+ MFD_OFFSET_Y)},1},
										{{__EVAL(-0.0225+0.03+MFD_OFFSET_X),__EVAL(+0.04+ MFD_OFFSET_Y)},1},
									}
								};
							};
						};
						class Shape
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								{{__EVAL(-0.0225+0.03+MFD_OFFSET_X),		__EVAL(-0.05+ MFD_OFFSET_Y)},1},
								{{__EVAL(+0.0225+0.03+MFD_OFFSET_X),		__EVAL(-0.05+ MFD_OFFSET_Y)},1},
								{{__EVAL(+0.0225+0.03+MFD_OFFSET_X),		__EVAL(+0.04+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+MFD_OFFSET_X),		__EVAL(+0.04+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+MFD_OFFSET_X),		__EVAL(-0.05+ MFD_OFFSET_Y)},1},{},

								{{__EVAL(-0.0225+0.03+(0.00225*(0)) + MFD_OFFSET_X),		__EVAL(-0.05-0.0+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(1)) + MFD_OFFSET_X),		__EVAL(-0.05-0.25*0.025+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(2)) + MFD_OFFSET_X),		__EVAL(-0.05-0.25*0.03+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(3)) + MFD_OFFSET_X),		__EVAL(-0.05-0.25*0.025+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(4)) + MFD_OFFSET_X),		__EVAL(-0.05-0.0+ MFD_OFFSET_Y)},1},{},

								{{__EVAL(-0.0225+0.03+(0.00225*(4)) + MFD_OFFSET_X),		__EVAL(-0.05-0.0+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(5)) + MFD_OFFSET_X),		__EVAL(-0.05-0.25*0.025+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(6)) + MFD_OFFSET_X),		__EVAL(-0.05-0.25*0.03+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(7)) + MFD_OFFSET_X),		__EVAL(-0.05-0.25*0.025+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(8)) + MFD_OFFSET_X),		__EVAL(-0.05-0.0+ MFD_OFFSET_Y)},1},{},

								{{__EVAL(-0.0225+0.03+(0.00225*(8)) + MFD_OFFSET_X),		__EVAL(-0.05-0.0+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(9)) + MFD_OFFSET_X),		__EVAL(-0.05-0.25*0.025+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(10)) + MFD_OFFSET_X),		__EVAL(-0.05-0.25*0.03+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(11)) + MFD_OFFSET_X),		__EVAL(-0.05-0.25*0.025+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(12)) + MFD_OFFSET_X),		__EVAL(-0.05-0.0+ MFD_OFFSET_Y)},1},{},

								{{__EVAL(-0.0225+0.03+(0.00225*(12)) + MFD_OFFSET_X),		__EVAL(-0.05-0.0+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(13)) + MFD_OFFSET_X),		__EVAL(-0.05-0.25*0.025+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(14)) + MFD_OFFSET_X),		__EVAL(-0.05-0.25*0.03+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(15)) + MFD_OFFSET_X),		__EVAL(-0.05-0.25*0.025+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(16)) + MFD_OFFSET_X),		__EVAL(-0.05-0.0+ MFD_OFFSET_Y)},1},{},

								{{__EVAL(-0.0225+0.03+(0.00225*(16)) + MFD_OFFSET_X),		__EVAL(-0.05-0.0+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(17)) + MFD_OFFSET_X),		__EVAL(-0.05-0.25*0.025+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(18)) + MFD_OFFSET_X),		__EVAL(-0.05-0.25*0.03+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(19)) + MFD_OFFSET_X),		__EVAL(-0.05-0.25*0.025+ MFD_OFFSET_Y)},1},
								{{__EVAL(-0.0225+0.03+(0.00225*(20)) + MFD_OFFSET_X),		__EVAL(-0.05-0.0+ MFD_OFFSET_Y)},1},{},
							};
						};
						HUD_TEXT_STATIC(0.03+MFD_OFFSET_X,	-0.01,0.015,	0.015,center,MFD_PYLON_NAME,PylonText1)
					};
					class Selected: Default
					{
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						color[]				= {0.99,0.94,0.59};
						class Shape: Shape
						{
							width = 8;
						};
						class BackgroundGroup: BackgroundGroup
						{
							color[]				= {0.99,0.94,0.59};
							alpha = 0.1;
							class Background: Background {};
						};
						class BlackText: Default
						{
							color[] = {0,0,0};
							class PylonText1: PylonText1 {};
							class PylonText2: PylonText1 {};
							class PylonText3: PylonText1 {};
							class PylonText4: PylonText1 {};
							class PylonText5: PylonText1 {};
							class PylonText6: PylonText1 {};
						};
					};
					class Empty: Selected
					{
						condition = "PylonAmmoRelative <= 0";
						color[]				= {1.0, 0.0, 0.0, 1.0};
						class Shape: Shape {};
						class BlackText: BlackText
						{
							class PylonText1: PylonText1 {};
							class PylonText2: PylonText1 {};
							class PylonText3: PylonText1 {};
							class PylonText4: PylonText1 {};
							class PylonText5: PylonText1 {};
							class PylonText6: PylonText1 {};
						};
					};
				};
			};
			class RHS_A29_Weap_MFD_Inventory
			{
				class Bones {};
				class Draw
				{
					HUD_TEXT_STATIC(0.00,0.02+0.00,0.025,	0.02,right,MFD_PYLON_NAME2,PylonText1)
					HUD_TEXT_STATIC(0.00,0.02+0.034,0.025,	0.02,right,MFD_PYLON_NAME,PylonText2)
					HUD_TEXT_SOURCE(0.16,0.02+0.034,0.025,	0.02,left,pylonammo,PylonAmo)
				};
			};