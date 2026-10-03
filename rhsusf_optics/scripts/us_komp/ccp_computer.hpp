//missionconfigfile >> "RHS_m1_ccp_computer"
class RHS_m1_ccp_computer
{
	enableSimulation = true;
	idd = 101;
	movingenable = false;
	//onLoad = "{ctrlShow [_x, false]}foreach [1203,1206,1207,1208]";
	class Controls
	{


		class us_button_base: rhs_1v528_button
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
		class num9: us_button_base
		{
			idc = 7509;
			x = 0.477965 * safezoneW + safezoneX;
			y = 0.415365 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0470196 * safezoneH;
			action="[9] call rhsusf_fnc_ccp_setRange";
		};
		class num8: us_button_base
		{

			idc = 7508;
			x = 0.447115 * safezoneW + safezoneX;
			y = 0.415365 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0470196 * safezoneH;
			action="[8] call rhsusf_fnc_ccp_setRange";
		};
		class num7: us_button_base
		{
			idc = 7507;
			x = 0.414943 * safezoneW + safezoneX;
			y = 0.418186 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0470196 * safezoneH;
			action="[7] call rhsusf_fnc_ccp_setRange";
		};
		class num6: us_button_base
		{
			idc = 7506;
			x = 0.477965 * safezoneW + safezoneX;
			y = 0.490596 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0470196 * safezoneH;
			action="[6] call rhsusf_fnc_ccp_setRange";
		};
		class num5: us_button_base
		{
			idc = 7505;
			x = 0.447115 * safezoneW + safezoneX;
			y = 0.490596 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0470196 * safezoneH;
			action="[5] call rhsusf_fnc_ccp_setRange";
		};
		class num4: us_button_base
		{
			idc = 7504;
			x = 0.416265 * safezoneW + safezoneX;
			y = 0.490596 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0470196 * safezoneH;
			action="[4] call rhsusf_fnc_ccp_setRange";
		};
		class num3: us_button_base
		{
			idc = 7503;
			x = 0.477965 * safezoneW + safezoneX;
			y = 0.556424 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0470196 * safezoneH;
			action="[3] call rhsusf_fnc_ccp_setRange";
		};
		class num2: us_button_base
		{
			idc = 7502;
			x = 0.447115 * safezoneW + safezoneX;
			y = 0.556424 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0470196 * safezoneH;
			action="[2] call rhsusf_fnc_ccp_setRange";
		};
		class num1: us_button_base
		{
			idc = 7501;
			x = 0.416265 * safezoneW + safezoneX;
			y = 0.556424 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0470196 * safezoneH;
			action="[1] call rhsusf_fnc_ccp_setRange";
		};
		class num0: us_button_base
		{
			idc = 7500;
			x = 0.447115 * safezoneW + safezoneX;
			y = 0.622251 * safezoneH + safezoneY;
			w = 0.0220355 * safezoneW;
			h = 0.0470196 * safezoneH;
			action="[0] call rhsusf_fnc_ccp_setRange";
		};
		class enter: us_button_base
		{
			idc = 7401;
			x = 0.411858 * safezoneW + safezoneX;
			y = 0.688079 * safezoneH + safezoneY;
			w = 0.0352567 * safezoneW;
			h = 0.0470196 * safezoneH;
			action="[11] call rhsusf_fnc_ccp_setRange";
		};
		class clear: us_button_base
		{
			idc = 7402;
			x = 0.46915 * safezoneW + safezoneX;
			y = 0.688079 * safezoneH + safezoneY;
			w = 0.0352567 * safezoneW;
			h = 0.0470196 * safezoneH;
			action="[12] call rhsusf_fnc_ccp_setRange";
		};
		class range: us_button_base
		{
			idc = 7403;
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.603443 * safezoneH + safezoneY;
			w = 0.0352567 * safezoneW;
			h = 0.0752314 * safezoneH;
			action="[13] call rhsusf_fnc_ccp_setRange";
		};

		//non interactive elements
		class background: RscPicture
		{
			idc = 1200;
			text = "rhsusf\addons\rhsusf_c_m1a1\data\komputer_2d.paa";
			x = 0.314902 * safezoneW + safezoneX;
			y = 0.105035 * safezoneH + safezoneY;
			w = 0.370196 * safezoneW;
			h = 0.78993 * safezoneH;
		};
		class screen1: RscPicture
		{
			idc = 1201;
			text = "rhsusf\addons\rhsusf_c_m1a1\data\numbers\red_2.paa";
			x = 0.451522 * safezoneW + safezoneX;
			y = 0.3181325 * safezoneH + safezoneY;
			w = 0.0132213 * safezoneW;
			h = 0.0282118 * safezoneH;
		};
		class screen2: screen1
		{
			idc = 1202;
			text = "rhsusf\addons\rhsusf_c_m1a1\data\numbers\red_2.paa";
			x = 0.436301 * safezoneW + safezoneX;
		};
		class screen3: screen1
		{
			idc = 1203;
			text = "rhsusf\addons\rhsusf_c_m1a1\data\numbers\red_2.paa";
			x = 0.420672 * safezoneW + safezoneX;
		};
		class screen4: screen1
		{
			idc = 1204;
			text = "rhsusf\addons\rhsusf_c_m1a1\data\numbers\red_2.paa";
			x = 0.403044 * safezoneW + safezoneX;
		};
		class range_lit: RscPicture
		{
			idc = 1205;
			text = "rhsusf\addons\rhsusf_optics\scripts\us_komp\range_lit.paa";
			x = 0.513221 * safezoneW + safezoneX;
			y = 0.584635 * safezoneH + safezoneY;
			w = 0.0528851 * safezoneW;
			h = 0.112847 * safezoneH;
		};
	};
};