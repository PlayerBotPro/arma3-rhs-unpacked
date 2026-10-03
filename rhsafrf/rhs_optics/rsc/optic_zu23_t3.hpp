
	class RHS_RscWeaponZU23_T3_Optic: RscUnitInfo
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_sight_zu23_t3";
		controls[]=
		{
			"CA_OpticsZoom",
			"CA_IGUI_elements_group"
		};
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

		class CA_IGUI_elements_group: RscControlsGroup
		{
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			idc = 170;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
				class CA_Distance: RscOpticsValue
				{
					idc = 151;
					style = 1;
					shadow = 0;
					colorBackground[] = {0,0,0,1};
					colorText[] = {1,1,1,1.0};
					font="PuristaLight";
					sizeEx = "0.018*SafezoneH";
					x =28.14 *   (0.01875 * Safezoneh);
					y =30.14 *   (0.025 * SafezoneH);
					//w="3.5 *   (0.01875 * SafezoneH)";
					//h="1 *   (0.025 * SafezoneH)";
					w="0";h="0";
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc = 154;
				};
			};
		};
		class Objects
		{
		  	class MainSight
		  	{
				idc			= 901;
				type		= 82;
				useGlobalLight = 1;
				minGlobalLightIntensity = -4.0;
				model		= "\rhsafrf\addons\rhs_optics\vehicles\rhs_t3_scope_animated.p3d";
				direction[]	= {0, 0, -1};
				up[]		= {0, 1, 0};

				x			= "20.0 * (((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y			= "14.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
				z			= 0.01;
				scale		= 0.15 * (SafeZoneW Min SafeZoneH);

				xBack		= 0; yBack = 0;zBack		= 0;inBack		= 0;enableZoom	= 0; zoomDuration = 0;
				class AnimationSources
				{
					class Elevation
					{
						source		= "user";
						animPeriod	= 0.1;
						initPhase	= 5;
					};
				};
		  	};
		};
	};