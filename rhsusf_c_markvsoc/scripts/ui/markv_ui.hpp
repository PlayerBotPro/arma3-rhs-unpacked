//missionconfigfile >> "RHS_MarkV_UI"
class RHS_MarkV_UI
{
	enableSimulation = true;
	idd = 101;
	movingenable = false;
	//onLoad = "{ctrlShow [_x, false]}foreach [1203,1206,1207,1208]";
	class Controls
	{
		class rhs_markv_button: rhs_markv_button_base
		{
			idc = 1;
			soundClick[] =
			{
				"rhsusf\addons\rhsusf_optics\scripts\us_komp\sounds\button.wav",
				0.89,
				1
			};
			x = 0.477965 * safezoneW + safezoneX;
			y = 0.415365 * safezoneH + safezoneY;
			w = 0;
			h = 0;
		};
		class switch_display: rhs_markv_button
		{
			idc = 6001;
			x = 0.413445 * safezoneW + safezoneX;
			y = 0.477431 * safezoneH + safezoneY;
			w = 0.0396638 * safezoneW;
			h = 0.0752314 * safezoneH;
			tooltip = "Displays ON/OFF";
			action="[7001,'c_displays_off_source',1] call rhsusf_fnc_markvsoc_setOption";
		};
		class switch_eng_sys: rhs_markv_button
		{
			idc = 6002;
			x = 0.394318 * safezoneW + safezoneX;
			y = 0.568461 * safezoneH + safezoneY;
			w = 0.0396638 * safezoneW;
			h = 0.0752314 * safezoneH;
			tooltip = "Engine systems displays ON/OFF";
			action="[7002,'c_eng_ctrl_off_source',1] call rhsusf_fnc_markvsoc_setOption";
		};
		class switch_illum: rhs_markv_button
		{
			idc = 6003;
			x = 0.307586 * safezoneW + safezoneX;
			y = 0.50489 * safezoneH + safezoneY;
			w = 0.0412267 * safezoneW;
			h = 0.0733788 * safezoneH;
			tooltip = "Lights";
			action="[7003,'',2] call rhsusf_fnc_markvsoc_setOption";
		};
		class switch_nav: rhs_markv_button
		{
			idc = 6004;
			x = 0.56972 * safezoneW + safezoneX;
			y = 0.318316 * safezoneH + safezoneY;
			w = 0.0412267 * safezoneW;
			h = 0.0733788 * safezoneH;
			tooltip = "Navigation Light";
			action="[7004,'rL_nav_source'] call rhsusf_fnc_markvsoc_setOption";
		};
		class switch_night: rhs_markv_button
		{
			idc = 6005;
			x = 0.639088 * safezoneW + safezoneX;
			y = 0.317564 * safezoneH + safezoneY;
			w = 0.0412267 * safezoneW;
			h = 0.0733788 * safezoneH;
			tooltip = "OP Lights: Night";
			action="[7005,'rL_opR_source'] call rhsusf_fnc_markvsoc_setOption";
		};
		class switch_dive: rhs_markv_button
		{
			idc = 6006;
			x = 0.569279 * safezoneW + safezoneX;
			y = 0.439627 * safezoneH + safezoneY;
			w = 0.0412267 * safezoneW;
			h = 0.0733788 * safezoneH;
			tooltip = "Dive Beacons";
			action="[7006,'Beacons'] call rhsusf_fnc_markvsoc_setOption";
		};
		class switch_horiz: rhs_markv_button
		{
			idc = 6007;
			x = 0.639617 * safezoneW + safezoneX;
			y = 0.439815 * safezoneH + safezoneY;
			w = 0.0412267 * safezoneW;
			h = 0.0733788 * safezoneH;
			tooltip = "OP Lights: Horizon";
			action="[7007,'rL_opT_source'] call rhsusf_fnc_markvsoc_setOption";
		};
		class switch_spot: rhs_markv_button
		{
			idc = 6008;
			x = 0.601363 * safezoneW + safezoneX;
			y = 0.624696 * safezoneH + safezoneY;
			w = 0.0396638 * safezoneW;
			h = 0.0752314 * safezoneH;
			tooltip = "Spot light ON/OFF";
			action="[7008,'rL_remSpot_source',1] call rhsusf_fnc_markvsoc_setOption";
		};
		class switch_instr: rhs_markv_button
		{
			idc = 6009;
			x = 0.602156 * safezoneW + safezoneX;
			y = 0.549841 * safezoneH + safezoneY;
			w = 0.0396638 * safezoneW;
			h = 0.0752314 * safezoneH;
			tooltip = "Instruments illumination  ON/OFF";
			action="[7009,'c_instr_off_source',1] call rhsusf_fnc_markvsoc_setOption";
		};
		//non interactive elements
		class background: RscPicture
		{
			idc = 1200;
			text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_console_co.paa";
			x = 0.182689 * safezoneW + safezoneX;
			y = 0.199074 * safezoneH + safezoneY;
			w = 0.608179 * safezoneW;
			h = 0.564236 * safezoneH;
		};
		class wylacznik_l_1: background
		{
			idc = 1205;
			text = "#(argb,8,8,3)color(0.43,0.5,0.45,0.81)";
			x = 0.312963 * safezoneW + safezoneX;
			y = 0.300825 * safezoneH + safezoneY;
			w = 0.0326521 * safezoneW;
			h = 0.0593433 * safezoneH;
		};
		class wylacznik_l_2: wylacznik_l_1
		{
			idc = 1206;
			x = 0.355712 * safezoneW + safezoneX;
			y = 0.300825 * safezoneH + safezoneY;
			w = 0.0326521 * safezoneW;
			h = 0.0593433 * safezoneH;
		};
		class wylacznik_l_3: wylacznik_l_1
		{
			idc = 1204;
			x = 0.312522 * safezoneW + safezoneX;
			y = 0.386965 * safezoneH + safezoneY;
			w = 0.0326521 * safezoneW;
			h = 0.0593433 * safezoneH;
		};
		class wylacznik_l_4: wylacznik_l_1
		{
			idc = 1201;
			x = 0.356152 * safezoneW + safezoneX;
			y = 0.387153 * safezoneH + safezoneY;
			w = 0.0316102 * safezoneW;
			h = 0.0593433 * safezoneH;
		};
		class wylacznik_s_1: wylacznik_l_1
		{
			idc = 1207;
			x = 0.42186 * safezoneW + safezoneX;
			y = 0.301769 * safezoneH + safezoneY;
			w = 0.0326521 * safezoneW;
			h = 0.0593433 * safezoneH;
		};
		class wylacznik_s_2: wylacznik_l_1
		{
			idc = 1208;
			x = 0.465619 * safezoneW + safezoneX;
			y = 0.302695 * safezoneH + safezoneY;
			w = 0.0326521 * safezoneW;
			h = 0.0593433 * safezoneH;
		};
		class wylacznik_s_3: wylacznik_l_1
		{
			idc = 1209;
			x = 0.508856 * safezoneW + safezoneX;
			y = 0.301769 * safezoneH + safezoneY;
			w = 0.0326521 * safezoneW;
			h = 0.0593433 * safezoneH;
		};
		class wylacznik_s_4: wylacznik_l_1
		{
			idc = 1210;
			x = 0.422902 * safezoneW + safezoneX;
			y = 0.382358 * safezoneH + safezoneY;
			w = 0.0326521 * safezoneW;
			h = 0.0593433 * safezoneH;
		};
		class wylacznik_illum: wylacznik_l_1
		{
			idc = 1203;
			x = 0.311993 * safezoneW + safezoneX;
			y = 0.60175 * safezoneH + safezoneY;
			w = 0.0316102 * safezoneW;
			h = 0.0593433 * safezoneH;
		};


		// images
		class switch_display_img: RscPicture
		{
			idc = 7001;
			text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_rubber_off.paa";
			x = 0.413445 * safezoneW + safezoneX;
			y = 0.477431 * safezoneH + safezoneY;
			w = 0.0396638 * safezoneW;
			h = 0.0752314 * safezoneH;
			tooltip = "Displays ON/OFF";
		};
		class switch_eng_sys_img: switch_display_img
		{
			idc = 7002;
			text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_rubber_off.paa";
			x = 0.394318 * safezoneW + safezoneX;
			y = 0.568461 * safezoneH + safezoneY;
			w = 0.0396638 * safezoneW;
			h = 0.0752314 * safezoneH;
			tooltip = "Engine systems displays ON/OFF";
		};
		class switch_illum_img: switch_display_img
		{
			idc = 7003;
			text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_off.paa";
			x = 0.307586 * safezoneW + safezoneX;
			y = 0.50489 * safezoneH + safezoneY;
			w = 0.0412267 * safezoneW;
			h = 0.0733788 * safezoneH;
			tooltip = "Lights";
		};
		class switch_nav_img: switch_display_img
		{
			idc = 7004;
			text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_off.paa";
			x = 0.56972 * safezoneW + safezoneX;
			y = 0.318316 * safezoneH + safezoneY;
			w = 0.0412267 * safezoneW;
			h = 0.0733788 * safezoneH;
			tooltip = "Navigation Light";
		};
		class switch_night_img: switch_display_img
		{
			idc = 7005;
			text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_off.paa";
			x = 0.639088 * safezoneW + safezoneX;
			y = 0.317564 * safezoneH + safezoneY;
			w = 0.0412267 * safezoneW;
			h = 0.0733788 * safezoneH;
			tooltip = "OP Lights_img: Night";
		};
		class switch_dive_img: switch_display_img
		{
			idc = 7006;
			text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_off.paa";
			x = 0.569279 * safezoneW + safezoneX;
			y = 0.439627 * safezoneH + safezoneY;
			w = 0.0412267 * safezoneW;
			h = 0.0733788 * safezoneH;
			tooltip = "Dive Beacons";
		};
		class switch_horiz_img: switch_display_img
		{
			idc = 7007;
			text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_off.paa";
			x = 0.639617 * safezoneW + safezoneX;
			y = 0.439815 * safezoneH + safezoneY;
			w = 0.0412267 * safezoneW;
			h = 0.0733788 * safezoneH;
			tooltip = "OP Lights_img: Horizon";
		};

		class switch_spot_img: switch_display_img
		{
			idc = 7008;
			text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_rubber_off.paa";
			x = 0.601363 * safezoneW + safezoneX;
			y = 0.624696 * safezoneH + safezoneY;
			w = 0.0396638 * safezoneW;
			h = 0.0752314 * safezoneH;
			tooltip = "Spot light ON/OFF";
		};
		class switch_instr_img: switch_display_img
		{
			idc = 7009;
			text = "rhsusf\addons\rhsusf_c_markvsoc\scripts\ui\rhs_switch_rubber_off.paa";
			x = 0.602156 * safezoneW + safezoneX;
			y = 0.549841 * safezoneH + safezoneY;
			w = 0.0396638 * safezoneW;
			h = 0.0752314 * safezoneH;
			tooltip = "Instruments illumination  ON/OFF";
		};
	};
};