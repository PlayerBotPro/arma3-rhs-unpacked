
	class RHS_RscUH1Y_Observer: RscUnitInfo
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_uh1_obsHandler";
		controls[]=
		{
			"CA_IGUI_elements_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls 
			{

				class CA_OpticsZoom: RscText
				{
					idc=180;
					style=1;
					colorText[]={0.48,0.77,0.46,1};
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="rhsusf_digital_font_var";
					text="4.5";
					x="43.85 * 		(0.01875 * SafezoneH)";
					y="19.6 * 		(0.025 * SafezoneH)";
					w="0* 		(0.01875 * SafezoneH)";
					h="0 * 		(0.025 * SafezoneH)";
					//w="4.5 * 		(0.01875 * SafezoneH)";
					//h="1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscOpticsValue
				{
					idc=151;
					style=2;
					colorText[]={0.48,0.77,0.46,1};
					shadow=0;
					font="rhsusf_digital_font_var";
					x = "34.41 * 		(0.01875 * SafezoneH)";
					y = "35.6 * 		(0.025 * SafezoneH)";
					w="0* 		(0.01875 * SafezoneH)";
					h="0 * 		(0.025 * SafezoneH)";
				//	w = "6 * 		(0.01875 * SafezoneH)";
					//h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "rhsusf_digital_font_var";
					text = "BHOT";
					x = "11.15 * 		(0.01875 * SafezoneH)";
					y = "15.34 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					idc = 158;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "rhsusf_digital_font_var";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					x = "31.1 * 		(0.01875 * SafezoneH)";
					y = "12.85 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1.5 * 		(0.025 * SafezoneH)";
				};

				//
				class rhs_Distance: CA_Distance
				{
					idc = 1;
					text = "";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class rhs_zoom: RscText
				{
					idc = 2;
					text = "28 0";
					colorText[]={0.48,0.77,0.46,1};
					colorBackground[] = {0,0,0,0};
					sizeEx="0.034*SafezoneH";
					font = "rhsusf_digital_font_var";
					x = "18.41 * 		(0.01875 * SafezoneH)";
					y = "36.3 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};

				class rhs_grid1: CA_Distance
				{
					idc = 3;
					text = "1 3 2  4 2 3";
					sizeEx = "0.02*SafezoneH";
					x = "41.41 * 		(0.01875 * SafezoneH)";
					y = "35.9 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class rhs_grid2: rhs_grid1
				{
					idc = 31;
					x = "3.61 * 		(0.01875 * SafezoneH)";
					y = "35.6 * 		(0.025 * SafezoneH)";
				};

				class rhs_time1: rhs_grid1
				{
					idc = 4;
					text = "12 41 23";
					sizeEx = "0.028*SafezoneH";
					x = "21.05 * 		(0.01875 * SafezoneH)";
					y = "37.9 * 		(0.025 * SafezoneH)";
				};
				class rhs_time2: rhs_time1
				{
					idc = 41;
					sizeEx = "0.035*SafezoneH";
					x = "44.35 * 		(0.01875 * SafezoneH)";
					y = "10.3 * 		(0.025 * SafezoneH)";
				};
				class rhs_arr_vert: RscPicture
				{
					idc = 5;
					text = "rhsusf\addons\rhsusf_optics\data\tex\arrow_vert.paa";
					x = "10.65 * 		(0.01875 * SafezoneH)";
					y = "10.8 * 		(0.025 * SafezoneH)";
					//29.6 - 120 stopni w dół
					w = "0.8 * 		(0.01875 * SafezoneH)";
					h = "0.8 * 		(0.025 * SafezoneH)";
				};
				class rhs_arr_horiz: rhs_arr_vert
				{
					idc = 6;
					text = "rhsusf\addons\rhsusf_optics\data\tex\arrow_hor.paa";
					//12.29 max left
					x = "26.29 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};