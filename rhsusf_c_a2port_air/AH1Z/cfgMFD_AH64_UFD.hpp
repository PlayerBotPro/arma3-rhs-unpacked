#define PosX0Center 0.50 // 502
#define PosY0Center 0.50 // 49
#define SizeX10deg 0.534
#define SizeY10deg 0.330

MFD_MEMORY_MACRO(MFD_MEMORY_POINTS)
borderLeft				= 0;
borderRight				= 0;
borderTop				= 0;
borderBottom			= 0;
color[]					= {1.0, 1.0, 1.0, 1.0};
helmetMountedDisplay	= false;
helmetPosition[]		= {-0.0375,	0.0375,	0.1};
helmetRight[]			= {0.075,	0.0,	0.0};
helmetDown[]			= {0.0,		-0.075,	0.0};
font					= rhsusf_txled;

class Bones
{
};

class Draw
{
	alpha				= 1.0;
	color[]				= {0,0.12,0};
	condition			= on;
	class Lines
	{
		type			= line;
		width			= 4.0;
		lineType 		= 2;
		points[]		=
		{
			{{0.33, __EVAL( (0.03+0.00)	* 0.9)		}, 1},
			{{0.33, __EVAL( (0.03+0.05)	* 0.9)		}, 1},{},
			{{0.33, __EVAL( (0.03+0.1)	* 0.9)			}, 1},
			{{0.33, __EVAL( (0.03+0.15)	* 0.9)		}, 1},{},
			{{0.33, __EVAL( (0.03+0.2)	* 0.9)			}, 1},
			{{0.33, __EVAL( (0.03+0.25)	* 0.9)		}, 1},{},
			{{0.33, __EVAL( (0.03+0.3)	* 0.9)			}, 1},
			{{0.33, __EVAL( (0.03+0.35)	* 0.9)		}, 1},{},
			{{0.33, __EVAL( (0.03+0.4)	* 0.9)			}, 1},
			{{0.33, __EVAL( (0.03+0.45)	* 0.9)		}, 1},{},

			{{0.66, __EVAL( (0.03+0.00)	* 0.9)		}, 1},
			{{0.66, __EVAL( (0.03+0.05)	* 0.9)		}, 1},{},
			{{0.66, __EVAL( (0.03+0.1)	* 0.9)			}, 1},
			{{0.66, __EVAL( (0.03+0.15)	* 0.9)		}, 1},{},
			{{0.66, __EVAL( (0.03+0.2)	* 0.9)			}, 1},
			{{0.66, __EVAL( (0.03+0.25)	* 0.9)		}, 1},{},
			{{0.66, __EVAL( (0.03+0.3)	* 0.9)			}, 1},
			{{0.66, __EVAL( (0.03+0.35)	* 0.9)		}, 1},{},
			{{0.66, __EVAL( (0.03+0.4)	* 0.9)			}, 1},
			{{0.66, __EVAL( (0.03+0.45)	* 0.9)		}, 1},{},

			// arrows
			{{0.02, __EVAL( 0.06 + 0.5)		}, 1},
			{{0.00, __EVAL( 0.03 + 0.5)		}, 1},
			{{0.02, __EVAL( 0.00 + 0.5)		}, 1},
			{{0.02, __EVAL( 0.06 + 0.5)		}, 1},
			{},
			{{__EVAL(0.02 + 0.01), __EVAL( 0.06 + 0.5)		}, 1},
			{{__EVAL(0.04 + 0.01), __EVAL( 0.03 + 0.5)		}, 1},
			{{__EVAL(0.02 + 0.01), __EVAL( 0.00 + 0.5)		}, 1},
			{{__EVAL(0.02 + 0.01), __EVAL( 0.06 + 0.5)		}, 1},
			{},
			{{0.02, __EVAL( 0.06 + 0.6)		}, 1},
			{{0.00, __EVAL( 0.03 + 0.6)		}, 1},
			{{0.02, __EVAL( 0.00 + 0.6)		}, 1},
			{{0.02, __EVAL( 0.06 + 0.6)		}, 1},
			{},
			{{__EVAL(0.02 + 0.01), __EVAL( 0.06 + 0.6)		}, 1},
			{{__EVAL(0.04 + 0.01), __EVAL( 0.03 + 0.6)		}, 1},
			{{__EVAL(0.02 + 0.01), __EVAL( 0.00 + 0.6)		}, 1},
			{{__EVAL(0.02 + 0.01), __EVAL( 0.06 + 0.6)		}, 1},
			{},
			{{0.02, __EVAL( 0.06 + 0.7)		}, 1},
			{{0.00, __EVAL( 0.03 + 0.7)		}, 1},
			{{0.02, __EVAL( 0.00 + 0.7)		}, 1},
			{{0.02, __EVAL( 0.06 + 0.7)		}, 1},
			{},
			{{__EVAL(0.02 + 0.01), __EVAL( 0.06 + 0.7)		}, 1},
			{{__EVAL(0.04 + 0.01), __EVAL( 0.03 + 0.7)		}, 1},
			{{__EVAL(0.02 + 0.01), __EVAL( 0.00 + 0.7)		}, 1},
			{{__EVAL(0.02 + 0.01), __EVAL( 0.06 + 0.7)		}, 1},
			{},
			{{0.02, __EVAL( 0.06 + 0.8)		}, 1},
			{{0.00, __EVAL( 0.03 + 0.8)		}, 1},
			{{0.02, __EVAL( 0.00 + 0.8)		}, 1},
			{{0.02, __EVAL( 0.06 + 0.8)		}, 1},
			{},
			{{__EVAL(0.02 + 0.01), __EVAL( 0.06 + 0.8)		}, 1},
			{{__EVAL(0.04 + 0.01), __EVAL( 0.03 + 0.8)		}, 1},
			{{__EVAL(0.02 + 0.01), __EVAL( 0.00 + 0.8)		}, 1},
			{{__EVAL(0.02 + 0.01), __EVAL( 0.06 + 0.8)		}, 1},
			{},
		};
	};
	class Time
	{
		type			= text;
		source			= time;
		text   			= "%X";
		sourceScale		= 1;

		align			= right;
		scale			= 1;
		TEXT_SIZEPOS(0.7,0.9,0.035,0.07)
	};
	class Fuel
	{
		type			= text;
		source			= fuel;
		text   			= "%X";
		sourceScale		= 2440;
		sourceLength	= 4;

		align			= right;
		scale			= 1;
		TEXT_SIZEPOS(0.01,0.9,0.035,0.07)
	};
	HUD_TEXT_STATIC(0.25-0.03,	0.9	,0.035,0.07,right,"XP",TransponderID)
	HUD_TEXT_STATIC(0.33-0.03,	0.9	,0.035,0.07,right,"1200",TransponderMode)
	HUD_TEXT_STATIC(0.48-0.03,	0.9	,0.035,0.07,right,"B",XPNDRDMode)
	HUD_TEXT_STATIC(0.55-0.03,	0.9	,0.035,0.07,right,"NORM",TransponderMasterControl)
	HUD_TEXT_STATIC(0.97,	0.9	,0.035,0.07,right,"L",LocalTime)
	// IDM Net status
	HUD_TEXT_STATIC(0.7,0.5,0.035,0.07,right,"L1",IDM_Net1)
	HUD_TEXT_STATIC(0.7,0.6,0.035,0.07,right,"L2",IDM_Net2)
	HUD_TEXT_STATIC(0.7,0.7,0.035,0.07,right,"T1",IDM_Net3)
	HUD_TEXT_STATIC(0.7,0.8,0.035,0.07,right,"L3",IDM_Net4)
	HUD_TEXT_STATIC(0.99,0.5,0.035,0.07,left,"149.500",IDM_Net1_FQ)
	HUD_TEXT_STATIC(0.99,0.6,0.035,0.07,left,"249.500",IDM_Net2_FQ)
	HUD_TEXT_STATIC(0.99,0.7,0.035,0.07,left,"45.550",IDM_Net3_FQ)
	HUD_TEXT_STATIC(0.99,0.8,0.035,0.07,left,"69.525",IDM_Net4_FQ)
	// Radio identifer
	HUD_TEXT_STATIC(0.065,0.5,0.035,0.07,right,"VH",Radio_ID_1)
	HUD_TEXT_STATIC(0.065,0.6,0.035,0.07,right,"UH",Radio_ID_2)
	HUD_TEXT_STATIC(0.065,0.7,0.035,0.07,right,"F2",Radio_ID_3)
	HUD_TEXT_STATIC(0.065,0.8,0.035,0.07,right,"F2",Radio_ID_4)
	HUD_TEXT_STATIC(0.35,0.5,0.035,0.07,left,"139.500",Radio_ID_1_FQ)
	HUD_TEXT_STATIC(0.35,0.6,0.035,0.07,left,"240.500",Radio_ID_2_FQ)
	HUD_TEXT_STATIC(0.35,0.7,0.035,0.07,left,"39.075",Radio_ID_3_FQ)
	HUD_TEXT_STATIC(0.35,0.8,0.035,0.07,left,"49.500",Radio_ID_4_FQ)
	// Call sign
	HUD_TEXT_STATIC(0.54,0.5,0.035,0.07,left,"H8G65",Callsign_1)
	HUD_TEXT_STATIC(0.54,0.6,0.035,0.07,left,"P3R56",Callsign_2)
	HUD_TEXT_STATIC(0.54,0.7,0.035,0.07,left,"J8L68",Callsign_3)
	HUD_TEXT_STATIC(0.54,0.8,0.035,0.07,left,"B5Z23",Callsign_4)
	// Cipher
	HUD_TEXT_STATIC(0.63,0.5,0.035,0.07,left,"",Cipher_1)
	HUD_TEXT_STATIC(0.63,0.6,0.035,0.07,left,"C3",Cipher_2)
	HUD_TEXT_STATIC(0.63,0.7,0.035,0.07,left,"C5",Cipher_3)
	HUD_TEXT_STATIC(0.63,0.8,0.035,0.07,left,"C2",Cipher_4)

	HUD_TEXT_STATIC(0.67,0.6,0.035,0.07,left,"C",GuardReceiver)
	HUD_TEXT_STATIC(0.67,0.7,0.035,0.07,left,"H",PowerSetting)

};
