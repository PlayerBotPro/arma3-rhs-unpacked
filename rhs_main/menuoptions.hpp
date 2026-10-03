class RscShortcutButton;

class RHS_Options_Button: RscShortcutButton
{
	default = 0;
	idc = -1;
	type = 16;
	style = "0x02 + 0xC0";

	text = "RHS - Game Options";
	//text = "$STR_RHS_Options";
	action = "(findDisplay 49) closeDisplay 0; 0 spawn {_n=  createDialog 'RHS_Options_Menu';0 spawn rhs_fnc_menuOptions;};";

	class ShortcutPos
	{
		left = 0;
		top = 0;
		w = 0;
		h = 0;
	};
	class TextPos
	{
		left = 0.01;
		top = 0;
		right = 0;
		bottom = 0;
	};

	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";

	color2[] = {0,0,0,1};
	color[] = {1,1,1,1};
	colorBackground[] = { "(profilenamespace getvariable ['GUI_BCG_RGB_R',1])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.647])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.5])" };
	colorBackground2[] = { "(profilenamespace getvariable ['GUI_BCG_RGB_R',1])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.647])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.5])" };
	//colorBackground[] = {1, 0.647, 0, 0.5};
	//colorBackground2[] = {1, 0.647, 0, 0.5};
	colorBackgroundFocused[] = {1, 1, 1, 0};
	colorDisabled[] = {1,1,1,0.25};
	colorFocused[] = {0,0,0,1};
	colorText[] = {1,1,1,1};

	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;

	tooltip = "Configure Various RHS Options";
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	tooltipColorText[] = {1,1,1,1};

	x = "1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX)";
	y = "0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 	(safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
	w = "15 * (((safezoneW / safezoneH) min 1.2) / 40)";
	h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
};


class RscDisplayMPInterrupt: RscStandardDisplay
{
	class controls
	{
		class RHS_Options : RHs_Options_Button {};
	};
};
class RscDisplayInterrupt: RscStandardDisplay
{
	class controls
	{
		class RHS_Options : RHs_Options_Button {};
	};
};
class RscDisplayInterruptEditor3D: RscStandardDisplay
{
	class controls
	{
		class RHS_Options : RHs_Options_Button {};
	};
};
class RscDisplayInterruptEditorPreview: RscStandardDisplay
{
	class controls
	{
		class RHS_Options : RHs_Options_Button {};
	};
};

class RscCheckbox;

/*
configfile >> "RHS_Options_Menu"
*/

class RHS_Options_Menu
{
	enableSimulation = true;
	idd = 101;
	movingenable = false;
	class Controls
	{
		class rhs_background: RscPicture
		{
			idc = 1200;
			text = rhs_papier_path;
			colorText[] = {1,1,1,1};
			x = 0.336938 * safezoneW + safezoneX;
			y = -0.0924473 * safezoneH + safezoneY;
			w = 0.321718 * safezoneW;
			h = 1.16609 * safezoneH;
		};
		class rhs_version_text: RscStructuredText
		{
			text = "Current version:";
			x = 0.354566 * safezoneW + safezoneX;
			y = 0.246094 * safezoneH + safezoneY;
			w = 0.123399 * safezoneW;
			h = 0.0188079 * safezoneH;
			size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9)";
			colorText[] = {0.1,0.1,0.1,0.9};
			colorBackground[] = {-1,-1,-1,0};
			colorActive[] = {-1,-1,-1,0};
			font = "EtelkaMonospaceProBold";
			shadow = 0;
			class Attributes
			{
				font = "EtelkaMonospaceProBold";
				color = "#4f4848";
				align = "left";
				shadow = 0;
			};
		};
		class rhs_version_input: rhs_version_text
		{
			text = "0.5.6";
			x = 0.491186 * safezoneW + safezoneX;
			y = 0.246094 * safezoneH + safezoneY;
			w = 0.0661064 * safezoneW;
			h = 0.0188079 * safezoneH;
		};
		class rhs_miscOption_text: rhs_version_text
		{
			text = "Misc options:";
			x = 0.354566 * safezoneW + safezoneX;
			y = 0.302518 * safezoneH + safezoneY;
			w = 0.123399 * safezoneW;
			h = 0.0188079 * safezoneH;
		};
		class rhs_option1_text: rhs_version_text
		{
			text = "Radio Chatter";
			tooltip = "Toggle random vehicle radio chatter";
			x = 0.367787 * safezoneW + safezoneX;
			y = 0.340133 * safezoneH + safezoneY;
			w = 0.110177 * safezoneW;
			h = 0.0188079 * safezoneH;
		};
		class rhs_checkbox1: RscCheckbox
		{
			idc = 2801;
			checked = (profilenamespace getvariable ['rhs_vehicleRadioChatter',1]);
			x = 0.487043 * safezoneW + safezoneX;
			y = 0.33543105 * safezoneH + safezoneY;
			w = 0.0176284 * safezoneW;
			h = 0.0282118 * safezoneH;
			color[] = { 0.1, 0.1, 0.1, 0.7 };
			colorFocused[] = { 0.1, 0.1, 0.1, 0.95 };
			colorHover[] = { 0.1, 0.1, 0.1, 0.95 };
			colorPressed[] = { 0.1, 0.1, 0.1, 0.95 };
			colorDisabled[] = { 0.1, 0.1, 0.1, 0.3 };
			colorBackground[] = { 0, 0, 0, 0 };
			colorBackgroundFocused[] = { 0, 0, 0, 0 };
			colorBackgroundHover[] = { 0, 0, 0, 0 };
			colorBackgroundPressed[] = { 0, 0, 0, 0 };
			colorBackgroundDisabled[] = { 0, 0, 0, 0 };
			onCheckedChanged = "profileNamespace setVariable ['rhs_vehicleRadioChatter', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option2_text: rhs_option1_text
		{
			text = "Active Tire Pressure";
			tooltip = "Active Tire Pressure script is used on BTRs, Ural & Tochka-U to keep pressure in wheels even when damaged";
			x = 0.367787 * safezoneW + safezoneX;
			y = 0.366624 * safezoneH + safezoneY;
			w = 0.110177 * safezoneW;
			h = 0.0188079 * safezoneH;
		};
		class rhs_checkbox2: rhs_checkbox1
		{
			checked = (profilenamespace getvariable ['rhs_activeTirePressure',1]);
			idc = 2802;
			x = 0.487043 * safezoneW + safezoneX;
			y = 0.36192205 * safezoneH + safezoneY;
			w = 0.0176284 * safezoneW;
			h = 0.0282118 * safezoneH;
			onCheckedChanged = "profileNamespace setVariable ['rhs_activeTirePressure', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option3_text : rhs_option1_text
		{
			text = "FCS Target Lead";
			tooltip = "Toggle automatic target leading for fire control systems";
			x = 0.367787 * safezoneW + safezoneX;
			y = 0.393115 * safezoneH + safezoneY;
			w = 0.110177 * safezoneW;
			h = 0.0188079 * safezoneH;
		};
		class rhs_checkbox3 : rhs_checkbox1
		{
			checked = (profilenamespace getvariable['rhs_fcsTargetLead',1]);
			idc = 2803;
			x = 0.487043 * safezoneW + safezoneX;
			y = 0.38841305 * safezoneH + safezoneY;
			w = 0.0176284 * safezoneW;
			h = 0.0282118 * safezoneH;
			onCheckedChanged = "profileNamespace setVariable ['rhs_fcsTargetLead', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option4_text : rhs_option1_text
		{
			text = "Throw disposables";
			tooltip = "Automatic throw away of used disposables launchers after changing weapon";
			x = 0.367787 * safezoneW + safezoneX;
			y = 0.423115 * safezoneH + safezoneY;
			w = 0.110177 * safezoneW;
			h = 0.0188079 * safezoneH;
		};
		class rhs_checkbox4 : rhs_checkbox1
		{
			checked = (profilenamespace getvariable['rhs_throwDisposable',1]);
			idc = 2804;
			x = 0.487043 * safezoneW + safezoneX;
			y = 0.41641305 * safezoneH + safezoneY;
			w = 0.0176284 * safezoneW;
			h = 0.0282118 * safezoneH;
			onCheckedChanged = "profileNamespace setVariable ['rhs_throwDisposable', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option5_text : rhs_option1_text
		{
			text = "Disable safemode";
			tooltip = "Disables weapon safemode switch script";
			x = 0.367787 * safezoneW + safezoneX;
			y = 0.450115 * safezoneH + safezoneY;
			w = 0.110177 * safezoneW;
			h = 0.0188079 * safezoneH;
		};
		class rhs_checkbox5 : rhs_checkbox1
		{
			checked = (profilenamespace getvariable['rhs_disableSafe',1]);
			idc = 2805;
			x = 0.487043 * safezoneW + safezoneX;
			y = 0.44641305 * safezoneH + safezoneY;
			w = 0.0176284 * safezoneW;
			h = 0.0282118 * safezoneH;
			onCheckedChanged = "profileNamespace setVariable ['rhs_disableSafe', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option6_text : rhs_option1_text
		{
			text = "Disable anim change";
			tooltip = "Disables automatic weapon animation change on deploy";
			x = 0.367787 * safezoneW + safezoneX;
			y = 0.480115 * safezoneH + safezoneY;
			w = 0.110177 * safezoneW;
			h = 0.0188079 * safezoneH;
		};
		class rhs_checkbox6 : rhs_checkbox1
		{
			checked = (profilenamespace getvariable['rhs_disableAnimChange',0]);
			idc = 2805;
			x = 0.487043 * safezoneW + safezoneX;
			y = 0.47641305 * safezoneH + safezoneY;
			w = 0.0176284 * safezoneW;
			h = 0.0282118 * safezoneH;
			onCheckedChanged = "profileNamespace setVariable ['rhs_disableAnimChange', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option7_text: rhs_option1_text
		{
			text = "Manual bolting";
			tooltip = "Manual rifle bolting. By default, you need to hold fire button in order to delay reload anim. Switching this on will require you to press fire button again in order to bolt rifle [RO2 style]";
			x = (0.14+0.367787) * safezoneW + safezoneX;
		};
		class rhs_checkbox7: rhs_checkbox1
		{
			checked = (profilenamespace getvariable ['rhs_manualBolting',0]);
			idc = 2802;
			x = (0.14+0.487043) * safezoneW + safezoneX;
			onCheckedChanged = "profileNamespace setVariable ['rhs_manualBolting', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option8_text: rhs_option2_text
		{
			text = "Prefered optic";
			tooltip = "If available, optic will be replaced with prefered type";
			x = (0.14+0.367787) * safezoneW + safezoneX;
		};
		class rhs_option9_text: rhs_option3_text
		{
			text = "Voice Announcer";
			tooltip = "Enable Voice Announcer aka 'Bitching Betty' in aircrafts";
			x = (0.14+0.367787) * safezoneW + safezoneX;
		};
		class rhs_checkbox9: rhs_checkbox3
		{
			checked = (profilenamespace getvariable ['rhs_voiceAnnouncer',1]);
			idc = 2805;
			x = (0.14+0.487043) * safezoneW + safezoneX;
			onCheckedChanged = "profileNamespace setVariable ['rhs_voiceAnnouncer', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option10_text: rhs_option4_text
		{
			text = "Dynamic Drawing";
			tooltip = "Vehicles are always visible within terrain draw distance when controling planes or helicopters";
			x = (0.14+0.367787) * safezoneW + safezoneX;
		};
		class rhs_checkbox10: rhs_checkbox4
		{
			checked = (profilenamespace getvariable ['rhs_dynamicObjectDistance',1]);
			idc = 2822;
			x = (0.14+0.487043) * safezoneW + safezoneX;
			onCheckedChanged = "profileNamespace setVariable ['rhs_dynamicObjectDistance', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option11_text: rhs_option5_text
		{
			text = "Afterburner toggle";
			tooltip = "Afterburner is activated once throttle is at 100%. By default afterburner is activated by pressing turbo key";
			x = (0.14+0.367787) * safezoneW + safezoneX;
		};
		class rhs_checkbox11: rhs_checkbox5
		{
			checked = (profilenamespace getvariable ['rhs_afterburner_mode',0]);
			idc = 2823;
			x = (0.14+0.487043) * safezoneW + safezoneX;
			onCheckedChanged = "profileNamespace setVariable ['rhs_afterburner_mode', (_this select 1)];saveProfileNamespace;";
		};
		class rhs_option12_text: rhs_option6_text
		{
			text = "Vehicle UI";
			tooltip = "Toggle vanilla lock UI icons like locking, selected target, impact point, etc. Changes are applied after game restart";
			x = (0.14+0.367787) * safezoneW + safezoneX;
		};

		#define HeightChange  (0.033*2)*(2.1267/safezoneH)
		#define HeightChangeD  (0.033*2)*(2.1267/safezoneH)
		#define HeightChangeM  (0.033*1)*(2.1267/safezoneH)

		class rhs_keybinding_static_text: rhs_version_text
		{
			idc = 1105;
			text = "Keybindings:"; //--- ToDo: Localize;
			tooltip = "User Action Keys are defined in Menu >> Configuration >> Controls >> Custom Controls";
			x = 0.355095 * safezoneW + safezoneX;
			y = HeightChange + 0.491725 * safezoneH + safezoneY;
			w = 0.123399 * safezoneW;
			h = 0.0188079 * safezoneH;
		};
		class rhs_keybinding_inf_static_text: rhs_version_text
		{
			idc = 1106;
			text = "Infantry"; //--- ToDo: Localize;
			x = 0.361794 * safezoneW + safezoneX;
			y = HeightChange +0.521817 * safezoneH + safezoneY;
			w = 0.123399 * safezoneW;
			h = 0.0188079 * safezoneH;
		};
		class rhs_keybinding_inf1_static_text: rhs_version_text
		{
			idc = 1107;
			text = "Weapon Interaction"; //--- ToDo: Localize;
			tooltip = "Used in: Folding, NPZ dismount & Bipod script";
			x = 0.373252 * safezoneW + safezoneX;
			y = HeightChange +0.54796 * safezoneH + safezoneY;
			w = 0.123399 * safezoneW;
			h = 0.0188079 * safezoneH;
		};
		class rhs_keybinding_inf2_static_text: rhs_keybinding_inf1_static_text
		{
			idc = 1108;
			text = "Accessory Interaction"; //--- ToDo: Localize;
			tooltip = "Used in: Flashlight/Laser script";
			y = HeightChange +0.563006 * safezoneH + safezoneY;
		};
		class rhs_keybinding_inf3_static_text: rhs_keybinding_inf1_static_text
		{
			idc = 1109;
			text = "Optic Interaction"; //--- ToDo: Localize;
			tooltip = "Used in: Kobra (changing reticle) & AT4 (peephole)  script";
			y = HeightChange +0.579933 * safezoneH + safezoneY;
		};
		class rhs_keybinding_inf4_static_text: rhs_keybinding_inf1_static_text
		{
			idc = 1110;
			text = "Lase Target"; //--- ToDo: Localize;
			tooltip = "Used in infantry LRF to determine range to target";
			y = HeightChange +0.594227 * safezoneH + safezoneY;
		};
		class rhs_keybinding_inf5_static_text: rhs_keybinding_inf1_static_text
		{
			idc = 1111;
			text = "Safemode switch key"; //--- ToDo: Localize;
			tooltip = "Used for switching weapon to safe mode";
			y = HeightChange + HeightChangeM +0.594227 * safezoneH + safezoneY;
		};
		class rhs_keybinding_veh_static_text: rhs_keybinding_inf_static_text
		{
			idc = 1111;
			text = "Vehicles"; //--- ToDo: Localize;
			y = HeightChange + HeightChangeD +0.61943 * safezoneH + safezoneY;
		};
		class rhs_keybinding_veh1_static_text: rhs_keybinding_inf1_static_text
		{
			idc = 1112;
			text = "Open Balistic Computer"; //--- ToDo: Localize;
			tooltip = "Open balistic computer menu to manualy input range. Avaiable in i.e. T80 or M1 tanks";
			y = HeightChange +HeightChangeD +0.645761 * safezoneH + safezoneY;
		};
		class rhs_keybinding_veh2_static_text: rhs_keybinding_veh1_static_text
		{
			idc = 1113;
			text = "Range Up"; //--- ToDo: Localize;
			tooltip = "FCS or optic range adjustment";
			y = HeightChange + HeightChangeD +0.659867 * safezoneH + safezoneY;
		};
		class rhs_keybinding_veh3_static_text: rhs_keybinding_veh1_static_text
		{
			idc = 1114;
			text = "Range Down"; //--- ToDo: Localize;
			tooltip = "FCS or optic range adjustment";
			y = HeightChange + HeightChangeD +0.674161 * safezoneH + safezoneY;
		};
		class rhs_keybinding_veh4_static_text: rhs_keybinding_veh1_static_text
		{
			idc = 1115;
			text = "Lase Target"; //--- ToDo: Localize;
			tooltip = "FCS target lasing";
			y = HeightChange + HeightChangeD +0.687326 * safezoneH + safezoneY;
		};
		class rhs_keybinding_veh5_static_text: rhs_keybinding_veh1_static_text
		{
			idc = 1116;
			text = "Dump Lead"; //--- ToDo: Localize;
			tooltip = "Stops automatic lead calculation";
			y = HeightChange + HeightChangeD +0.702373 * safezoneH + safezoneY;
		};
		class rhs_keybinding_veh6_static_text: rhs_keybinding_veh1_static_text
		{
			idc = 1117;
			text = "Next round switch"; //--- ToDo: Localize;
			tooltip = "Used for autoloader control in T tanks. Determines next loaded round";
			y = HeightChange + HeightChangeD +0.717373 * safezoneH + safezoneY;
		};
		class rhs_keybinding_veh7_static_text: rhs_keybinding_veh1_static_text
		{
			idc = 1118;
			text = "Autoloader mode switch"; //--- ToDo: Localize;
			tooltip = "Used for autoloader sequential modecontrol in T tanks. Determines if next round is automaticly loaded into gun";
			y = HeightChange + HeightChangeD +0.732373 * safezoneH + safezoneY;
		};
		class rhs_keybinding_listbox_inf1: RscCombo
		{
			idc = 1500;
			text = "TEST"; //--- ToDo: Localize;
			x = 0.50133 * safezoneW + safezoneX;
			y = HeightChange + 0.552543 * safezoneH + safezoneY;
			w = 0.150177 * safezoneW;
			h = 0.0109079 * safezoneH;
			font = "EtelkaMonospaceProBold";
			sizeEX= "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
			colorText[] =
			{
				0,
				0,
				0,
				1
			};
			colorBackground[] = {0.99,0.98,0.67,1};
			colorScrollbar[] =
			{
				1,
				0,
				0,
				1
			};
			colorSelectBackground[] =
			{
				0.8,
				0.8,
				0.8,
				1
			};
			colorDisabled[] =
			{
				1,
				1,
				1,
				0.45
			};
			onLBSelChanged ="rhs_options_comboChng=_this";
		};
		class rhs_keybinding_listbox_inf2: rhs_keybinding_listbox_inf1
		{
			idc = 1501;
			y = HeightChange + 0.567708 * safezoneH + safezoneY;
		};
		class rhs_keybinding_listbox_inf3: rhs_keybinding_listbox_inf1
		{
			idc = 1502;
			y = HeightChange + 0.582002 * safezoneH + safezoneY;
		};
		class rhs_keybinding_listbox_inf4: rhs_keybinding_listbox_inf1
		{
			idc = 1503;
			y = HeightChange + 0.596108 * safezoneH + safezoneY;
		};
		class rhs_keybinding_listbox_inf5: rhs_keybinding_listbox_inf1
		{
			idc = 1504;
			y = HeightChange + HeightChangeM +0.596108 * safezoneH + safezoneY;
		};
		class rhs_keybinding_listbox_veh1: rhs_keybinding_listbox_inf1
		{
			idc = 1600;
			y = HeightChange + HeightChangeD +0.646701 * safezoneH + safezoneY;
		};
		class rhs_keybinding_listbox_veh2: rhs_keybinding_listbox_veh1
		{
			idc = 1601;
			y = HeightChange + HeightChangeD +0.660807 * safezoneH + safezoneY;
		};
		class rhs_keybinding_listbox_veh3: rhs_keybinding_listbox_veh1
		{
			idc = 1602;
			y = HeightChange + HeightChangeD +0.675853 * safezoneH + safezoneY;
		};
		class rhs_keybinding_listbox_veh4: rhs_keybinding_listbox_veh1
		{
			idc = 1603;
			y = HeightChange + HeightChangeD +0.691088 * safezoneH + safezoneY;
		};
		class rhs_keybinding_listbox_veh5: rhs_keybinding_listbox_veh1
		{
			idc = 1604;
			y = HeightChange + HeightChangeD +0.706075 * safezoneH + safezoneY;
		};
		class rhs_keybinding_listbox_veh6: rhs_keybinding_listbox_veh1
		{
			idc = 1605;
			y = HeightChange + HeightChangeD +0.721075 * safezoneH + safezoneY;
		};
		class rhs_keybinding_listbox_veh7: rhs_keybinding_listbox_veh1
		{
			idc = 1606;
			y = HeightChange + HeightChangeD +0.736075 * safezoneH + safezoneY;
		};
		class rhs_listbox8: rhs_keybinding_listbox_inf1
		{
			idc = 2821;
			x = 0.610043 * safezoneW + safezoneX;
			y = 0.36892205 * safezoneH + safezoneY;
			w = 0.030177 * safezoneW;
			h = 0.0129079 * safezoneH;
			onLBSelChanged = "profileNamespace setVariable ['rhs_preferedOptic', (_this select 1)];saveProfileNamespace;[] call RHS_fnc_preferedOptic";
		};
		class rhs_listbox12: rhs_keybinding_listbox_inf1
		{
			idc = 2824;
			x = 0.590043 * safezoneW + safezoneX;
			y = 0.48041305 * safezoneH + safezoneY;
			w = 0.050177 * safezoneW;
			h = 0.0129079 * safezoneH;
			onLBSelChanged = "[_this select 1] call RHS_fnc_UI_Options";
		};
	};
};