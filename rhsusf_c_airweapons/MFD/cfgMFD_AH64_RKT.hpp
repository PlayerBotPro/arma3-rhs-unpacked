#define PosX0Center 0.50 // 502
#define PosY0Center 0.50 // 49
#define SizeX10deg 0.234
#define SizeY10deg 0.230

#define XtoYscale (SizeX10deg / SizeY10deg)
			class RHS_AH64_Weap_MFD
			{
				#define MFD_OFFSET_X -0.03
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
										{{__EVAL(-0.035+0.03+MFD_OFFSET_X),__EVAL(-0.1+0.06)},1},
										{{__EVAL(+0.035+0.03+MFD_OFFSET_X),__EVAL(-0.1+0.06)},1},
										{{__EVAL(+0.035+0.03+MFD_OFFSET_X),__EVAL(+0.09+0.06)},1},
										{{__EVAL(-0.035+0.03+MFD_OFFSET_X),__EVAL(+0.09+0.06)},1},
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
								{{__EVAL(-0.035+0.03+MFD_OFFSET_X),		__EVAL(-0.1+0.06)},1},
								{{__EVAL(+0.035+0.03+MFD_OFFSET_X),		__EVAL(-0.1+0.06)},1},
								{{__EVAL(+0.035+0.03+MFD_OFFSET_X),		__EVAL(+0.09+0.06)},1},
								{{__EVAL(-0.035+0.03+MFD_OFFSET_X),		__EVAL(+0.09+0.06)},1},
								{{__EVAL(-0.035+0.03+MFD_OFFSET_X),		__EVAL(-0.1+0.06)},1},{},

								{{__EVAL(-0.035+0.03+(0.0035*(0)) + MFD_OFFSET_X),		__EVAL(-0.1-0.0+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(1)) + MFD_OFFSET_X),		__EVAL(-0.1-0.25*0.025+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(2)) + MFD_OFFSET_X),		__EVAL(-0.1-0.25*0.03+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(3)) + MFD_OFFSET_X),		__EVAL(-0.1-0.25*0.025+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(4)) + MFD_OFFSET_X),		__EVAL(-0.1-0.0+0.06)},1},{},

								{{__EVAL(-0.035+0.03+(0.0035*(4)) + MFD_OFFSET_X),		__EVAL(-0.1-0.0+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(5)) + MFD_OFFSET_X),		__EVAL(-0.1-0.25*0.025+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(6)) + MFD_OFFSET_X),		__EVAL(-0.1-0.25*0.03+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(7)) + MFD_OFFSET_X),		__EVAL(-0.1-0.25*0.025+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(8)) + MFD_OFFSET_X),		__EVAL(-0.1-0.0+0.06)},1},{},

								{{__EVAL(-0.035+0.03+(0.0035*(8)) + MFD_OFFSET_X),		__EVAL(-0.1-0.0+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(9)) + MFD_OFFSET_X),		__EVAL(-0.1-0.25*0.025+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(10)) + MFD_OFFSET_X),		__EVAL(-0.1-0.25*0.03+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(11)) + MFD_OFFSET_X),		__EVAL(-0.1-0.25*0.025+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(12)) + MFD_OFFSET_X),		__EVAL(-0.1-0.0+0.06)},1},{},

								{{__EVAL(-0.035+0.03+(0.0035*(12)) + MFD_OFFSET_X),		__EVAL(-0.1-0.0+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(13)) + MFD_OFFSET_X),		__EVAL(-0.1-0.25*0.025+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(14)) + MFD_OFFSET_X),		__EVAL(-0.1-0.25*0.03+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(15)) + MFD_OFFSET_X),		__EVAL(-0.1-0.25*0.025+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(16)) + MFD_OFFSET_X),		__EVAL(-0.1-0.0+0.06)},1},{},

								{{__EVAL(-0.035+0.03+(0.0035*(16)) + MFD_OFFSET_X),		__EVAL(-0.1-0.0+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(17)) + MFD_OFFSET_X),		__EVAL(-0.1-0.25*0.025+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(18)) + MFD_OFFSET_X),		__EVAL(-0.1-0.25*0.03+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(19)) + MFD_OFFSET_X),		__EVAL(-0.1-0.25*0.025+0.06)},1},
								{{__EVAL(-0.035+0.03+(0.0035*(20)) + MFD_OFFSET_X),		__EVAL(-0.1-0.0+0.06)},1},{},
							};
						};
						HUD_TEXT_STATIC(0.03+MFD_OFFSET_X,	+0.02,0.025,	0.025,center,MFD_PYLON_NAME,PylonText1)
					};
					class Selected: Default
					{
						condition = "(PylonSelected +  PylonAmmoRelative)/2";
						class Shape: Shape
						{
							width = 8;
						};
						class BackgroundGroup: BackgroundGroup
						{
							color[]				= {0,0.12,0};
							alpha = 0.3;
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
			class RHS_AH64_Weap_MFD_Inventory
			{
				class Bones {};
				class Draw
				{
					HUD_TEXT_STATIC(0.00,0.02+0.00,0.03,	0.03,right,MFD_PYLON_NAME,PylonText1)
					HUD_TEXT_SOURCE(0.00,0.02+0.034,0.03,	0.03,right,pylonammo,PylonAmo)
					class PylonSelected
					{
						condition = "PylonSelected";
						class Static
						{
							type = line;
							width = 4;
							points[] =
							{
								DRAW_BOX(-0.005,0.005,0.085,0.09)
							};
						};
					};
				};
			};