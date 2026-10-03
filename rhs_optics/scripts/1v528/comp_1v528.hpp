
//missionconfigfile >> "RHS_1g42_1v528_computer"
		//rhs_1v528_button RscStructuredText
class RHS_1g42_1v528_computer
{
	enableSimulation = true;
	idd = 101;
	movingenable = false;
	//onLoad = "{ctrlShow [_x, false]}foreach [1203,1206,1207,1208]";
	class Controls
	{


		//buttons
		class switch: rhs_1v528_button
		{
			idc = 7400;
			x = 0.548478 * safezoneW + safezoneX;
			y = 0.565828 * safezoneH + safezoneY;
			w = 0.0352567 * safezoneW;
			h = 0.0470196 * safezoneH;
			tooltip = "On/Off"; //--- ToDo: Localize;
			soundClick[] =
			{
				"rhsafrf\addons\rhs_optics\scripts\1v528\sounds\switch_pyk.ogg",
				0.89,
				1
			};
			action="['0',2] call rhs_fnc_1v528_setRange";
		};
		class check: rhs_1v528_button
		{
			idc = 7401;
			x = 0.583735 * safezoneW + safezoneX;
			y = 0.565828 * safezoneH + safezoneY;
			w = 0.0352567 * safezoneW;
			h = 0.0470196 * safezoneH;
			tooltip = "Check controls"; //--- ToDo: Localize;
			soundClick[] =
			{
				"rhsafrf\addons\rhs_optics\scripts\1v528\sounds\button_press.ogg",
				0.89,
				1
			};
			action="['0',3] call rhs_fnc_1v528_setRange";
		};
		class switch_base:  rhs_1v528_button
		{
			idc=0;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			soundClick[] =
			{
				"rhsafrf\addons\rhs_optics\scripts\1v528\sounds\switch_click.ogg",
				0.89,
				1
			};
		};
		//buttons 100m
		class d0: switch_base
		{
			idc = 7501;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.481192 * safezoneH + safezoneY;
			w = 0.0132213 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "0m"; //--- ToDo: Localize;
			action="['0',0] call rhs_fnc_1v528_setRange";
		};
		class d50: switch_base
		{
			idc = 7502;
			x = 0.495593 * safezoneW + safezoneX;
			y = 0.462384 * safezoneH + safezoneY;
			w = 0.0132213 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "50m"; //--- ToDo: Localize;
			action="['50',0] call rhs_fnc_1v528_setRange";
		};
		class d100: switch_base
		{
			idc = 7503;
			x = 0.482372 * safezoneW + safezoneX;
			y = 0.462384 * safezoneH + safezoneY;
			w = 0.0132213 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "100m"; //--- ToDo: Localize;
			action="['100',0] call rhs_fnc_1v528_setRange";
		};
		class d150: switch_base
		{
			idc = 7504;
			x = 0.486779 * safezoneW + safezoneX;
			y = 0.443576 * safezoneH + safezoneY;
			w = 0.0132213 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "150m"; //--- ToDo: Localize;
			action="['150',0] call rhs_fnc_1v528_setRange";
		};
		class d200: switch_base
		{
			idc = 7505;
			x = 0.482372 * safezoneW + safezoneX;
			y = 0.434173 * safezoneH + safezoneY;
			w = 0.0132213 * safezoneW;
			h = 0.00940393 * safezoneH;
			tooltip = "200m"; //--- ToDo: Localize;
			action="['200',0] call rhs_fnc_1v528_setRange";
		};
		class d250: switch_base
		{
			idc = 7506;
			x = 0.486779 * safezoneW + safezoneX;
			y = 0.415365 * safezoneH + safezoneY;
			w = 0.0132213 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "250"; //--- ToDo: Localize;
			action="['250',0] call rhs_fnc_1v528_setRange";
		};
		class d300: switch_base
		{
			idc = 7507;
			x = 0.477965 * safezoneW + safezoneX;
			y = 0.396557 * safezoneH + safezoneY;
			w = 0.0132213 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "300m"; //--- ToDo: Localize;
			action="['300',0] call rhs_fnc_1v528_setRange";
		};
		class d350: switch_base
		{
			idc = 7508;

			x = 0.491186 * safezoneW + safezoneX;
			y = 0.396557 * safezoneH + safezoneY;
			w = 0.0132213 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "350m"; //--- ToDo: Localize;
			action="['350',0] call rhs_fnc_1v528_setRange";
		};

		class d400: switch_base
		{
			idc = 7509;
			x = 0.491186 * safezoneW + safezoneX;
			y = 0.377749 * safezoneH + safezoneY;
			w = 0.0132213 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "400m"; //--- ToDo: Localize;
			action="['400',0] call rhs_fnc_1v528_setRange";
		};
		class d450: switch_base
		{
			idc = 7510;
			x = 0.504407 * safezoneW + safezoneX;
			y = 0.387153 * safezoneH + safezoneY;
			w = 0.00881419 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "450m"; //--- ToDo: Localize;
			action="['450',0] call rhs_fnc_1v528_setRange";
		};
		class d500: switch_base
		{
			idc = 7511;
			x = 0.513221 * safezoneW + safezoneX;
			y = 0.377749 * safezoneH + safezoneY;
			w = 0.00440709 * safezoneW;
			h = 0.0282118 * safezoneH;
			tooltip = "500m"; //--- ToDo: Localize;
			action="['500',0] call rhs_fnc_1v528_setRange";
		};
		class d550: switch_base
		{
			idc = 7512;

			x = 0.517628 * safezoneW + safezoneX;
			y = 0.387153 * safezoneH + safezoneY;
			w = 0.00881419 * safezoneW;
			h = 0.0282118 * safezoneH;
			tooltip = "550m"; //--- ToDo: Localize;
			action="['550',0] call rhs_fnc_1v528_setRange";
		};
		class d600: switch_base
		{
			idc = 7513;
			x = 0.526443 * safezoneW + safezoneX;
			y = 0.377749 * safezoneH + safezoneY;
			w = 0.00881419 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "600m"; //--- ToDo: Localize;
			action="['600',0] call rhs_fnc_1v528_setRange";
		};
		class d650: switch_base
		{
			idc = 7514;
			x = 0.526443 * safezoneW + safezoneX;
			y = 0.396557 * safezoneH + safezoneY;
			w = 0.0132213 * safezoneW;
			h = 0.00940393 * safezoneH;
			tooltip = "650m"; //--- ToDo: Localize;
			action="['650',0] call rhs_fnc_1v528_setRange";
		};
		class d700: switch_base
		{
			idc = 7515;
			x = 0.539664 * safezoneW + safezoneX;
			y = 0.396557 * safezoneH + safezoneY;
			w = 0.0132213 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "700m"; //--- ToDo: Localize;
			action="['700',0] call rhs_fnc_1v528_setRange";
		};
		class d750: switch_base
		{
			idc = 7516;
			x = 0.53085 * safezoneW + safezoneX;
			y = 0.415365 * safezoneH + safezoneY;
			w = 0.0132213 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "750m"; //--- ToDo: Localize;
			action="['750',0] call rhs_fnc_1v528_setRange";
		};
		class d80: switch_base
		{
			idc = 7517;
			x = 0.544071 * safezoneW + safezoneX;
			y = 0.424769 * safezoneH + safezoneY;
			w = 0.0132213 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "800m"; //--- ToDo: Localize;
			action="['800',0] call rhs_fnc_1v528_setRange";
		};
		class d850: switch_base
		{
			idc = 7518;
			x = 0.53085 * safezoneW + safezoneX;
			y = 0.443576 * safezoneH + safezoneY;
			w = 0.00881419 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "850m"; //--- ToDo: Localize;
			action="['850',0] call rhs_fnc_1v528_setRange";
		};
		class d900: switch_base
		{
			idc = 7519;
			x = 0.535257 * safezoneW + safezoneX;
			y = 0.462384 * safezoneH + safezoneY;
			w = 0.0132213 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "900m"; //--- ToDo: Localize;
			action="['900',0] call rhs_fnc_1v528_setRange";
		};
		class d950: switch_base
		{
			idc = 7520;
			x = 0.526443 * safezoneW + safezoneX;
			y = 0.462384 * safezoneH + safezoneY;
			w = 0.00881419 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "950m"; //--- ToDo: Localize;
			action="['950',0] call rhs_fnc_1v528_setRange";
		};
		class d1000: switch_base
		{
			idc = 7521;
			x = 0.517628 * safezoneW + safezoneX;
			y = 0.462384 * safezoneH + safezoneY;
			w = 0.00881419 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "1000m"; //--- ToDo: Localize;
			action="['1000',0] call rhs_fnc_1v528_setRange";
		};

		//button 1000m
		class gA: switch_base
		{
			idc = 7421;
			x = 0.544071 * safezoneW + safezoneX;
			y = 0.443576 * safezoneH + safezoneY;
			w = 0.0308497 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "Automatic mode"; //--- ToDo: Localize;
			action="['aw',1] call rhs_fnc_1v528_setRange";
		};
		class g0: switch_base
		{
			idc = 7422;
			x = 0.548478 * safezoneW + safezoneX;
			y = 0.405961 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "0m"; //--- ToDo: Localize;
			action="['0',1] call rhs_fnc_1v528_setRange";
		};
		class g1000: switch_base
		{
			idc = 7423;
			x = 0.552885 * safezoneW + safezoneX;
			y = 0.387153 * safezoneH + safezoneY;
			w = 0.0176284 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "1000m"; //--- ToDo: Localize;
			action="['1000',1] call rhs_fnc_1v528_setRange";
		};
		class g2000: switch_base
		{
			idc = 7424;
			x = 0.570513 * safezoneW + safezoneX;
			y = 0.368345 * safezoneH + safezoneY;
			w = 0.0176284 * safezoneW;
			h = 0.0376157 * safezoneH;
			tooltip = "2000m"; //--- ToDo: Localize;
			action="['2000',1] call rhs_fnc_1v528_setRange";
		};
		class g3000: switch_base
		{
			idc = 7425;
			x = 0.592549 * safezoneW + safezoneX;
			y = 0.368345 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0376157 * safezoneH;
			tooltip = "3000m"; //--- ToDo: Localize;
			action="['3000',1] call rhs_fnc_1v528_setRange";
		};

		//background
		class rhs_1v528_background: RscPicture
		{
			idc = 1200;
			text = "rhsafrf\addons\rhs_optics\scripts\1v528\1v528_computer_bg.paa";
			x = 0.328123 * safezoneW + safezoneX;
			y = 0.358941 * safezoneH + safezoneY;
			w = 0.317311 * safezoneW;
			h = 0.291522 * safezoneH;
		};
		//clickable objects - pictures
		class switch_distance_100: rhs_1v528_background
		{
			idc = 1201;
			text = "rhsafrf\addons\rhs_optics\scripts\1v528\dist100\1v528_distS_0.paa";
		};
		class switch_distance_1000: rhs_1v528_background
		{
			idc = 1202;
			text = "rhsafrf\addons\rhs_optics\scripts\1v528\dist1000\1v528_dist_aw.paa";
		};
		class switch_slope: rhs_1v528_background
		{
			idc = 1203;
			text = "rhsafrf\addons\rhs_optics\scripts\1v528\controls\switch.paa";
		};

		//lights
		class light_slope: rhs_1v528_background
		{
			idc = 1205;
			text = "rhsafrf\addons\rhs_optics\scripts\1v528\controls\slope_control.paa";
		};
		class light_w: rhs_1v528_background
		{
			idc = 1206;
			text = "rhsafrf\addons\rhs_optics\scripts\1v528\controls\w_control.paa";
		};
		class light_st_beta: rhs_1v528_background
		{
			idc = 1207;
			text = "rhsafrf\addons\rhs_optics\scripts\1v528\controls\st_beta.paa";
		};
		class light_st_alpha: rhs_1v528_background
		{
			idc = 1208;
			text = "rhsafrf\addons\rhs_optics\scripts\1v528\controls\st_alpha.paa";
		};


		//translations
		class distance_100: rhs_1v528_button
		{
			x = 0.5 * safezoneW + safezoneX;
			y = 0.415365 * safezoneH + safezoneY;
			w = 0.0308497 * safezoneW;
			h = 0.0376157 * safezoneH;
			tooltip = "Distance switch 100m"; //--- ToDo: Localize;

			//translation specific things
			//type = 1;
			//style = 2;
			/*
			colorText[] = {0,0,0,0};
			colorBackground[] = {-1,-1,-1,0};
			colorActive[] = {-1,-1,-1,0};
			colorBackgroundActive[] = {0,0,0,0};
			text = ';*/
			idc = 31;

		};
		class Distance_1000: distance_100
		{
			x = 0.574921 * safezoneW + safezoneX;
			y = 0.415365 * safezoneH + safezoneY;
			w = 0.0352567 * safezoneW;
			h = 0.0470196 * safezoneH;
			tooltip = "Distance switch 1000m"; //--- ToDo: Localize;
			idc = 31;
		};
		class Slope_text: distance_100
		{
			x = 0.544071 * safezoneW + safezoneX;
			y = 0.518808 * safezoneH + safezoneY;
			w = 0.0528851 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "Angle sensor"; //--- ToDo: Localize;
		};
		class switch_off: distance_100
		{
			x = 0.552885 * safezoneW + safezoneX;
			y = 0.612847 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "Off"; //--- ToDo: Localize;
		};
		class switch_on: distance_100
		{
			x = 0.552885 * safezoneW + safezoneX;
			y = 0.54702 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "On"; //--- ToDo: Localize;
		};
		class t_ground: distance_100
		{
			x = 0.429487 * safezoneW + safezoneX;
			y = 0.603443 * safezoneH + safezoneY;
			w = 0.0264426 * safezoneW;
			h = 0.0282118 * safezoneH;
			tooltip = "Ground temperature"; //--- ToDo: Localize;
		};
		class t_air: distance_100
		{
			x = 0.5 * safezoneW + safezoneX;
			y = 0.603443 * safezoneH + safezoneY;
			w = 0.0264426 * safezoneW;
			h = 0.0282118 * safezoneH;
			tooltip = "Air temperature"; //--- ToDo: Localize;
		};
		class delta: distance_100
		{
			x = 0.358973 * safezoneW + safezoneX;
			y = 0.612847 * safezoneH + safezoneY;
			w = 0.0308497 * safezoneW;
			h = 0.0282118 * safezoneH;
			tooltip = "Delta D adjustment"; //--- ToDo: Localize;
		};
		class pressure: distance_100
		{
			x = 0.354566 * safezoneW + safezoneX;
			y = 0.490596 * safezoneH + safezoneY;
			w = 0.048478 * safezoneW;
			h = 0.0188079 * safezoneH;
			tooltip = "Air pressure"; //--- ToDo: Localize;
		};
		class deltaV: distance_100
		{
			x = 0.429487 * safezoneW + safezoneX;
			y = 0.481192 * safezoneH + safezoneY;
			w = 0.0264426 * safezoneW;
			h = 0.0282118 * safezoneH;
			tooltip = "Delta V adjustment"; //--- ToDo: Localize;
		};
		class manualD: distance_100
		{
			x = 0.53085 * safezoneW + safezoneX;
			y = 0.481192 * safezoneH + safezoneY;
			w = 0.0396638 * safezoneW;
			h = 0.0282118 * safezoneH;
			tooltip = "Manual distance input"; //--- ToDo: Localize;
		};
	};
};
