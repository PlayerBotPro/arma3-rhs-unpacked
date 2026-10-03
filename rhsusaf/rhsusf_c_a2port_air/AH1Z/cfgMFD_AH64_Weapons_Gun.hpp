#define PosX0Center 0.50 // 502
#define PosY0Center 0.50 // 49
#define SizeX10deg 0.434
#define SizeY10deg 0.430

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
turret[]				= {0};

class Bones
{
};
class Draw
{
	alpha				= 1.0;
	color[]				= {0,0.12,0};
	MFD_CONDITION(MFD_CONDITION_NUMBER,1)
	class Weapon
	{
		condition = "((mgun+rocket+missile+bomb)>=1)+(ammo<=0)";
		class Safemode
		{
			condition = "1-(mgun)";
			HUD_TEXT_SOURCE_INDEX(0.503,	0.385		,0.03,0.034,center,ammo,2,AmmoCount)
		};
		class Selected
		{
			condition = "mgun";
			class Polygons
			{
				type			= polygon;
				width			= 4.0;

				points[]		=
				{
					// Arm Box
					{
						POLYGON_BOX(0.125,0.06,0.44,0.37)
					},
					{
						POLYGON_BOX(0.045,0.08,0.48,0.309)
					},
					{
						POLYGON_BOX(0.011,0.16,0.497,0.23)
					},
				};
			};
			class BlackText
			{
				color[] = {0,0,0};
				alpha = 1;
				HUD_TEXT_SOURCE_INDEX(0.503,	0.385		,0.03,0.034,center,ammo,2,AmmoCount1)
				HUD_TEXT_SOURCE_INDEX(0.503,	0.385		,0.03,0.034,center,ammo,2,AmmoCount2)
				HUD_TEXT_SOURCE_INDEX(0.503,	0.385		,0.03,0.034,center,ammo,2,AmmoCount3)
			};
		};
	};
};
