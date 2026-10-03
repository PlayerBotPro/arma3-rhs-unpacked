//#include "script_dialog_defines.hpp"

class RscListBox;
class RscListNBox;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscText;
class RscPicture;
class RscActiveText;
class RscCombo;
class RscProgress;
class RscButton;
class RscButtonMenu;
class RscObject;
class RscStandardDisplay;
class RscStructuredText;
class RscControlsGroupNoScrollbars;
class RscHTML;
class RscEdit;
class RscTitle;
class RscVignette;
class RscFrame;
class RscControlsGroupNoHScrollbars;
class RscControlsGroup;
class RscIGProgress;
class RscHitZones;
class RscIGUIValue;
class RscIGUIText;
class RscPictureKeepAspect;
class RscUnitInfo;
class VScrollbar;
class HScrollbar;
class RscOpticsValue;
class RscOpticsText;
class RscLadderPicture;
class Attributes;
class RscDisplayGetReady;
class IGUIBack;
class CA_Title;
class ScrollBar;

class RscDisplayGarage;
class RHS_RscDisplayGarage: RscDisplayGarage {
	idd = -1;
	enableSimulation = 1;
	scriptName = "RHS_RscDisplayGarage";
	scriptPath = "RHS_Main";
	onLoad = "['onLoad',_this,'RHS_RscDisplayGarage','GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "['onUnload',_this,'RHS_RscDisplayGarage','GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
};

class RscDisplayMain: RscStandardDisplay
{
	onLoad = "_this call compile preprocessfilelinenumbers '\rhsafrf\addons\rhs_main\scripts\handleWelcomeScreen.sqf'";
};
#include "scripts\welcome.hpp"

#define rhs_papier_path rhsafrf\addons\rhs_main\data\rhs_papier.paa
#include "menuOptions.hpp"