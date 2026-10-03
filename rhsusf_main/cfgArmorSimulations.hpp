class CfgArmorSimulations
{
	/*
		Values:
		{a,b}
		{{a1,a2},b}
		{a,{b1,b2}}
		{{a1,a2},{b1,b2}}
		a - multiplier for when armor is undamaged
		b - multiplier for when armor is destroyed
		a1,a2 - lowest and highest value for randomization pool when armor is undamaged
		b1,b2 - lowest and highest value for randomization pool when armor is destroyed
	*/
	class Armor_ERA_Light;
	class Armor_ERA_Heavy;
	class RHS_ERA_Arat1: Armor_ERA_Heavy
	{
		// warheads
		class AP
		{
			hit[] = {2};
			speed[] = {0.9,1};
		};
		class HE
		{
			hit[] = {0.1,1};
			speed[] = {1};
		};
		class HEAT
		{
			hit[] = {2};
			speed[] = {0.1,0.1};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {0.85,1};
		};
	};
	class RHS_ERA_Arat2: RHS_ERA_Arat1
	{
		// warheads
		class AP
		{
			hit[] = {2};
			speed[] = {0.9,1};
		};
		class HE
		{
			hit[] = {0.1,1};
			speed[] = {1};
		};
		class HEAT
		{
			hit[] = {2};
			speed[] = {0.15,0.15};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {0.95,1};
		};
	};
	class RHS_ERA_Arat2_Mixed: RHS_ERA_Arat2
	{
		class HEAT
		{
			hit[] = {2};
			speed[] = {0.05,0.05};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {0.65,1};
		};
	};
	class RHS_SLAT: Armor_ERA_Light
	{
		class AP
		{
			hit[] = {2};
			speed[] = {1,1};
		};
		class HEAT
		{
			hit[] = {3};
			speed[] = {0.3,0.3};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {1,1};
		};
	};
	class RHS_QNET:  RHS_SLAT
	{
		class AP
		{
			hit[] = {2};
			speed[] = {1,1};
		};
		class HEAT
		{
			hit[] = {3};
			speed[] = {0.08,0.08};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {1,1};
		};
	};
	class RHS_ERA_BUSK: Armor_ERA_Heavy
	{
		// warheads
		class AP
		{
			hit[] = {2};
			speed[] = {0.9,1};
		};
		class HE
		{
			hit[] = {0.1,1};
			speed[] = {1};
		};
		class HEAT
		{
			hit[] = {2};
			speed[] = {0.1,0.1};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {0.85,1};
		};
	};
	class RHS_Hull_Helicopter
	{
		// warheads
		class Default
		{
			hit[] = {1};
			speed[] = {1};
		};
		class AP
		{
			hit[] = {1};
			speed[] = {1};
		};
		class HE
		{
			hit[] = {2};
			speed[] = {1};
		};
		class HEAT
		{
			hit[] = {3};
			speed[] = {1};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {1};
		};
	};
	class RHS_MinePlow
	{
		// warheads
		class Default
		{
			hit[] = {0.01};
			speed[] = {1};
		};
		class AP
		{
			hit[] = {1};
			speed[] = {1};
		};
		class HE
		{
			hit[] = {0.01};
			speed[] = {1};
		};
		class HEAT
		{
			hit[] = {1};
			speed[] = {1};
		};
		class TandemHEAT
		{
			hit[] = {1};
			speed[] = {1};
		};
	};
	#define RHS_COMPOSITE_MACRO(num)\
	class RHS_Composite_##num\
	{\
		class Default\
		{\
			hit[] = {1};\
			speed[] = {1};\
		};\
		class AP: Default  {};\
		class HE: Default {};\
		class HEAT\
		{\
			hit[] = {1};\
			speed[] = {0.##num,0.##num};\
		};\
		class TandemHEAT \
		{\
			hit[] = {1}; \
			speed[] = {0.##num,0.##num};\
		};\
	};
	RHS_COMPOSITE_MACRO(40)
	RHS_COMPOSITE_MACRO(50)
	RHS_COMPOSITE_MACRO(55)
	RHS_COMPOSITE_MACRO(60)
	RHS_COMPOSITE_MACRO(65)
	RHS_COMPOSITE_MACRO(70)
	RHS_COMPOSITE_MACRO(75)
	RHS_COMPOSITE_MACRO(80)
	RHS_COMPOSITE_MACRO(85)
	RHS_COMPOSITE_MACRO(90)
	RHS_COMPOSITE_MACRO(95)
};