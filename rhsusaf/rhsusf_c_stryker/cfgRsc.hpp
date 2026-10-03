
class RscEdit;
class RscButton;
class RscOpticsValue;
class RscOpticsText;
class RscIGUIText;
class RscIGUIValue;
class RscText;
class RscPicture;
class HScrollbar;
class VScrollbar;
class RscSlider;
class IGUIBack;


class RHS_BFT_Map_Scale_UI
{
	enableSimulation = true;
	idd = 101;
	movingenable = false;
	//onLoad = "sliderSetRange [1900,0.01,1];sliderSetPosition [1900,cameraon animationSourcePhase 'BFT_Map_Scale']";
	class Controls
	{
		class RscSlider_1900: RscSlider
		{
			idc = 1900;
			x = 0.352539 * safezoneW + safezoneX;
			y = 0.487963 * safezoneH + safezoneY;
			w = 0.193912 * safezoneW;
			h = 0.0376157 * safezoneH;
			onSliderPosChanged = "cameraon animateSource ['BFT_Map_Scale',_this # 1,true];";
		};
		class text: RscText
		{
			idc = 1001;
			text = "map scale"; //--- ToDo: Localize;
			x = 0.425079 * safezoneW + safezoneX;
			y = 0.434173 * safezoneH + safezoneY;
			w = 0.0352567 * safezoneW;
			h = 0.0470196 * safezoneH;
		};
	};
};

class RscInGameUI
{
	class RscUnitInfo;
	class RHS_RscUnitInfoAir_m1127_turret : RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing","RHS_tigr_handler"};
		class RHS_m1127_handler: RscPicture {idc=699999;};
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_m1127_turret_ui";
	};
};

#include "cfgRsc_LMS.hpp"
#include "cfgRsc_GLUA.hpp"