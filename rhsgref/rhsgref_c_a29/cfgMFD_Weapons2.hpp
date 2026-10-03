#define PosX0Center 0.50 // 502
#define PosY0Center 0.50 // 49
#define SizeX10deg 0.186
#define SizeY10deg 0.141

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
turret[]				= {-1};
MFD_MATERIAL


class Bones
{
};
class Draw
{
	alpha				= 1.0;
	color[]				= {0,0.12,0};
	MFD_CONDITION(MFD_CONDITION_NUMBER,2)

	HUD_TEXT_SOURCE_INDEX(0.25,	0.06	,0.03,0.025,center,ammo,1,Gatling_Ammo)
	HUD_TEXT_SOURCE(0.98,0.240-0.115,0.03,0.025,left,CMWeapon,CM_Name)
	HUD_TEXT_SOURCE(0.98,0.270-0.115,0.03,0.025,left,CMAmmo,CM_Ammo)
};