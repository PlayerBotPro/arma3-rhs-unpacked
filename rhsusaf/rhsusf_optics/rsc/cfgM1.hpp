
	class RHS_RscWeaponM1_FCS: RscUnitInfo
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_rF_M1";
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
					colorText[]={0.70599997,0.074500002,0.0196,1};
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
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
					colorText[]={1,0.15000001,0.15000001,0.64999998};
					shadow=0;
					font="EtelkaMonospacePro";
					x=0;
					y="(SafezoneY+SafezoneH) - 0.195";
					w=0;
					h=0;
				};

				class RangeDigit1: RscPicture
				{
					idc = 1;
					x = 24.5 *   (0.01875 * Safezoneh);
					y = 36.7 *   (0.025 * SafezoneH);
					w = 1.5 *   (0.01875 * SafezoneH);
					h = 1.5 *   (0.025 * SafezoneH);
					text = "";
					colorBackground[] = { 0, 0, 0, 0 };
					colorText[] = { 1, 1, 1, 1 };
					font="EtelkaMonospacePro";
					sizeEx = 0;
					waitForLoad = 0;
				};

				class RangeDigit2 : RangeDigit1
				{
					idc = 2;
					x = 25.5 *   (0.01875 * Safezoneh);
				};
				class RangeDigit3 : RangeDigit1
				{
					idc = 3;
					x = 26.5 *   (0.01875 * Safezoneh);
				};
				class RangeDigit4 : RangeDigit1
				{
					idc = 4;
					x = 27.5 *   (0.01875 * Safezoneh);
				};
				class Ready : RangeDigit1
				{
					idc = 5;
					x = 23.7 *   (0.01875 * Safezoneh);
					y = 35.8 *   (0.025 * SafezoneH);
					w = 0.8 *   (0.01875 * SafezoneH);
					h = 0.8*   (0.025 * SafezoneH);
				};
				class Multiple : RangeDigit1
				{
					idc = 6;
					x = 24.95 *   (0.01875 * Safezoneh);
					y = 35.3 *   (0.025 * SafezoneH);
					w = 3.8 *   (0.01875 * SafezoneH);
					h = 1.8*   (0.025 * SafezoneH);
				};
				class Fault : RangeDigit1
				{
					idc = 7;
					x = 29 *   (0.01875 * Safezoneh);
					y = 35.9 *   (0.025 * SafezoneH);
					w = 1.2 *   (0.01875 * SafezoneH);
					h = 1.2*   (0.025 * SafezoneH);
				};
				class CA_HorizontalCompass : RscPicture {
					IDC = 207;
					type = 105;
					font = "EtelkaMonospacePro";
					textSize = "0.02*SafezoneH";
					style = 1;
					color[] = {0.709, 0.972, 0.384, 1};
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "8.0 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
			};
		};
	};