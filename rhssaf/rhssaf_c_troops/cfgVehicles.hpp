class DefaultEventhandlers;
class UniformSlotInfo;

class CfgVehicles
{
	class Land;
	class Man : Land
	{
		class EventHandlers;
	};

	class CAManBase: Man
	{
		class HitPoints;
	};

	class SoldierGB: CAManBase
	{
		class HitPoints: HitPoints
		{
			class HitFace;
			class HitNeck;
			class HitHead;
			class HitPelvis;
			class HitAbdomen;
			class HitDiaphragm;
			class HitChest;
			class HitBody;
			class HitArms;
			class HitHands;
			class HitLegs;
		};
		class Eventhandlers;
	};

	#include "infantry\rhssaf_soldiers_base.hpp"
	#include "infantry\rhssaf_soldiers_o.hpp"
	#include "infantry\rhssaf_army_infantry_digital.hpp"
	#include "infantry\rhssaf_army_infantry_digital_o.hpp"
	#include "infantry\rhssaf_army_infantry_oakleaf.hpp"
	#include "infantry\rhssaf_army_infantry_oakleaf_o.hpp"
	#include "infantry\rhssaf_army_infantry_para.hpp"
	#include "infantry\rhssaf_army_infantry_para_o.hpp"
	#include "infantry\rhssaf_un_infantry_desert.hpp"
	#include "infantry\rhssaf_un_infantry_digital.hpp"
};
