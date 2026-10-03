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
	class RHS_Sideskirt_Rubber: Armor_ERA_Light
	{
		class Default // when hit by ammunition without warHeadName
		{
			hit[] = {1};
			speed[] = {1};
		};
		// Vanilla warheads
		class AP
		{
			hit[] = {2};
			speed[] = {1,1};
		};
		class HE
		{
			hit[] = {0.5,1};
			speed[] = {1};
		};
		class HEAT
		{
			hit[] = {3};
			speed[] = {0.7,0.7};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {0.85,1};
		};
	};
	class RHS_ERA_K1: Armor_ERA_Light
	{
		class Default // when hit by ammunition without warHeadName
		{
			hit[] = {1};
			speed[] = {1};
		};
		// Vanilla warheads
		class AP
		{
			hit[] = {2};
			speed[] = {1,1};
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
	class RHS_ERA_K5: Armor_ERA_Heavy
	{
		// warheads
		class AP
		{
			hit[] = {2};
			speed[] = {0.75,0.75};
		};
		class HE
		{
			hit[] = {0.1,1};
			speed[] = {1};
		};
		class HEAT
		{
			hit[] = {2};
			speed[] = {0.05,0.05};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {0.75,1};
		};
	};
	class RHS_ERA_RELIKT: Armor_ERA_Heavy
	{
		// warheads
		class AP
		{
			hit[] = {2};
			speed[] = {0.6,0.6};
		};
		class HE
		{
			hit[] = {0.1,1};
			speed[] = {1};
		};
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
	class RHS_ERA_MALACHIT: Armor_ERA_Heavy
	{
		// warheads
		class AP
		{
			hit[] = {2};
			speed[] = {0.5,0.5};
		};
		class HE
		{
			hit[] = {0.1,1};
			speed[] = {1};
		};
		class HEAT
		{
			hit[] = {2};
			speed[] = {0.03,0.03};
		};
		class TandemHEAT
		{
			hit[] = {3};
			speed[] = {0.3,0.3};
		};
	};
	class RHS_SLAT: Armor_ERA_Light
	{
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

	// Vehicle hitzones

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
	
	// Fuel
	class RHS_FuelTank
	{
		class Default
		{
			hit[] = {1};
			speed[] = {1};
		};
		// warheads
		class AP
		{
			hit[] = {1};
			speed[] = {0.75,1};
		};
		class HE
		{
			hit[] = {0.1,1};
			speed[] = {1};
		};
		class HEAT
		{
			hit[] = {1};
			speed[] = {0.05,1};
		};
		class TandemHEAT
		{
			hit[] = {1};
			speed[] = {0.75,1};
		};
	};
	#define AP_LEVEL(num,val) \
	class AP_Level_##num##: Default\
	{\
		hit[] = {val,3};\
	};

	// Personal Protection
	class RHS_Gost_1
	{
		class Default
		{
			hit[] = {0.1,3};
			speed[] = {0.1,1};
		};
		class HE
		{
			hit[] = {0.1,1};
			speed[] = {1};
		};
		AP_LEVEL(1,0.5)
		AP_LEVEL(2,0.7)
		AP_LEVEL(3,0.95)
	};
	class RHS_Gost_2: RHS_Gost_1
	{
		AP_LEVEL(1,0.5)
		AP_LEVEL(2,0.7)
		AP_LEVEL(3,0.8)
	};
	class RHS_Gost_3: RHS_Gost_1
	{
		AP_LEVEL(1,0.5)
		AP_LEVEL(2,0.6)
		AP_LEVEL(3,0.7)
	};
	class RHS_Gost_4: RHS_Gost_1
	{
		AP_LEVEL(1,0.4)
		AP_LEVEL(2,0.5)
		AP_LEVEL(3,0.6)
	};
	class RHS_Gost_5: RHS_Gost_1
	{
		AP_LEVEL(1,0.2)
		AP_LEVEL(2,0.4)
		AP_LEVEL(3,0.5)
	};
	class RHS_Gost_6: RHS_Gost_1
	{
		AP_LEVEL(1,0.1)
		AP_LEVEL(2,0.3)
		AP_LEVEL(3,0.4)
	};
};