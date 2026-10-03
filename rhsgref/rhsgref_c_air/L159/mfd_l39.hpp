
#define PosX0Center 0.50
#define PosY0Center 0.38
#define PosYCenterHorizont 0.53
#define SizeX10deg 0.68
#define SizeY10deg 0.74

class MFD
{
	class AirplaneHUD
	{
		enableParallax = 1;
		topLeft = "HUD LH";
		topRight = "HUD PH";
		bottomLeft = "HUD LD";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;

		class Pos10Vector
		{
			pos0[] = {0.52,0.03};
			pos10[] = {2.02,1.23};
			type = "vector";
		};
		color[] = {0,1,0,0.1};
		class Bones
		{
			class PlaneW
			{
				pos[] = {0.5,0.5};
				type = "fixed";
			};
			class ImpactPoint
			{
				type			= vector;
				source			= ImpactPoint;
				pos0[]			= {0.5, __EVAL(PosY0Center)};
				pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
			};
		};
		class Draw
		{
			condition = on;
			color[] = {0.69,0.22,0};
			class ImpactPoint
			{
				class Cros
				{
					type = "line";
					points[] =
					{
						#define MARK_SMALL 0.08
						#define MARK_BIG 0.18
						CIRCLE_MARK(ImpactPoint,0.14,MARK_SMALL,0),{},
						CIRCLE_MARK(ImpactPoint,0.14,MARK_SMALL,45),{},
						CIRCLE_MARK(ImpactPoint,0.14,MARK_SMALL,45*2),{},
						CIRCLE_MARK(ImpactPoint,0.14,MARK_SMALL,45*3),{},
						CIRCLE_MARK(ImpactPoint,0.14,MARK_SMALL,45*4),{},
						CIRCLE_MARK(ImpactPoint,0.14,MARK_SMALL,45*5),{},
						CIRCLE_MARK(ImpactPoint,0.14,MARK_SMALL,45*6),{},
						CIRCLE_MARK(ImpactPoint,0.14,MARK_SMALL,45*7),{}
					};
				};
				class Dot
				{
					type = "line";
					points[] =
					{
						{ImpactPoint,{ 0.00,	 0.005},1},
						{ImpactPoint,{ 0.005,	-0.00},1},
						{ImpactPoint,{ 0.00,	-0.005},1},
						{ImpactPoint,{-0.005,	-0.00},1},
						{ImpactPoint,{ 0.00,	 0.005},1}
					};
				};
				class Ring
				{
					type = "line";
					lineType = 3;
					width = 17;
					points[] =
					{
						CIRCLE_BIG(ImpactPoint,0.4),{},
						{}
					};
				};
			};


			alpha = 1.0;
		};
	};
};