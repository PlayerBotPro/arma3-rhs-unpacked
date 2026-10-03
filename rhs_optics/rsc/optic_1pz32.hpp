
	class RHS_RscWeapon1PZ32_FCS: RscUnitInfo
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_sight_1PZ32 ";
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
				class RDS_Horizontal: RscPicture
				{
					idc=1;
					//type=99;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz32_horizontal.paa";
					x =3.65 *   (0.01875 * Safezoneh);
					y =-2.95 *   (0.025 * SafezoneH);
					w="45.9 *   (0.01875 * SafezoneH)";
					h="45.9 *   (0.025 * SafezoneH)";
					//uiNamespace getVariable "RHS_1PZ32_Ctrl" displayCtrl 1)  ctrlSetPosition [-46.65 *   (0.01875 * Safezoneh),-2.95 *   (0.025 * SafezoneH),135.9 *   (0.01875 * SafezoneH),45.9 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_1PZ32_Ctrl"    displayCtrl 1) ctrlCommit 1;

				};
				/*class RDS_Vertical: RDS_Horizontal
				{
					idc=2;
					text="rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz32_vertical.paa";

				};*/
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
					w="0";
					h="0";
					//w="4.5 * 		(0.01875 * SafezoneH)";
					//h="1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc = 154;
				};
			};
		};
	};