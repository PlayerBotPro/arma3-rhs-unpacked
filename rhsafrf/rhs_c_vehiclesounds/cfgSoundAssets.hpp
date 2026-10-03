class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgVehicles
{

//Vehicles

//Air

//Armored Vehicles

	//Tanks

	class Tank;
	class Tank_F: Tank {};

	class rhs_2s1tank_base: Tank_F
	{
		//#include "configs\armor\2S1.hpp"
	};

	class rhs_tank_base: Tank_F
	{
		#include "configs\armor\t80.hpp"
	};
	class rhs_a3t72tank_base: Tank_F
	{
		#include "configs\armor\t72.hpp"
	};

//Trucks
	class Truck_F;
	class O_Truck_02_covered_F;
	
	class OTR21_Base  : Truck_F
	{
		#include "configs\soft\OTR21.hpp"
	};
	
	class rhs_kamaz5350: O_Truck_02_covered_F
	{
		#include "configs\soft\Kamaz5350.hpp"
	};
	class rhs_zil131_base: Truck_F
	{
		#include "configs\soft\Zil131.hpp"
	};
	class rhs_truck : Truck_F
	{
		#include "configs\soft\Gaz66.hpp"
	};
	class RHS_Ural_BaseTurret: Truck_F
	{
		#include "configs\soft\Ural4320.hpp"
	};

//Cars
	class Offroad_01_base_F;
	class RHS_UAZ_Base: Offroad_01_base_F
	{
		#include "configs\soft\Uaz469.hpp"
	};
};