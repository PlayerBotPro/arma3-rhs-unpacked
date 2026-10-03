
	class Default 
	{
		sections[] = {};
		sectionsInherit="";
		skeletonName = "";
	};
	
	// all vehicles
	class rhs_vehicle : Default 
	{
		sections[] = 
		{
			"cislo",
			"grupa",
			"side",
			"sektor",
			"clan",
			"clan_sign",
			"podsvit pristroju",
			"poskozeni",
			"L svetlo",
			"P svetlo",
			"zasleh"
		};
	};
	
	// All tracked
	class rhs_tracked : rhs_vehicle 
	{
		htMin = 60;		// Minimum half-cooling time (in seconds)
		htMax = 1800;	// Maximum half-cooling time (in seconds)
		afMax = 200;	// Maximum temperature in case the model is alive (in celsius)
		mfMax = 100;	// Maximum temperature when the model is moving (in celsius)
						//		mFact & tBody used to simulate main gun heat
		mFact = 1;		// Metabolism factor - number from interval <0, 1> (0 - metabolism has no influence, 1 - metabolism has full influence (no other temperature source will be considered)).
		tBody = 250;	// Metabolism temperature of the model (in celsius)

		sectionsInherit = "rhs_vehicle";
		sections[] = 
		{
			"zadni svetlo",
			"brzdove svetlo",
			"PasOffsetP",
			"PasOffsetL",
			"karoserie",
			"pas_L",
			"pas_P",
			"motor",
			"vez",
			"zbran",
			"clan",
			"clan_sign",
			"Light_L",
			"Light_R",
			"zbytek"
		};

		skeletonName = "rhs_tracked";
		
		class Animations 
		{
			class damageHide 
			{
				type="hide";
				source="damage";
				selection="damageHide";
			};
			class HatchDriver 
			{
				type="rotation";
				source="hatchDriver";
				selection="poklop_driver";
				axis="osa_poklop_driver";
				animPeriod=0;
				angle0=0;
				angle1="rad 100";
			};
			class IndicatorSpeed 
			{
				type="rotation";
				source="speed";
				selection="ukaz_rychlo";
				axis="osa_rychlo";
				memory="false";
				animPeriod=0;
				minValue=0;
				maxValue=16.670000;
				angle0=0;
				angle1="rad -240";
			};
			class IndicatorSpeed2 
			{
				type="rotation";
				source="speed";
				selection="ukaz_rychlo2";
				axis="osa_rychlo2";
				memory="false";
				animPeriod=0;
				minValue=0;
				maxValue=16.670000;
				angle0=0;
				angle1="rad -240";
			};
			class IndicatorRPM 
			{
				type="rotation";
				source="rpm";
				selection="ukaz_rpm";
				axis="osa_rpm";
				memory="false";
				animPeriod=0;
				minValue=0;
				maxValue=1;
				angle0=0;
				angle1="rad -340";
			};
			class Radar 
			{
				type="rotation";
				source="time";
				selection="ukaz_radar";
				axis="osa_radar";
				memory="false";
				minValue=0;
				maxValue=2;
				sourceAddress="loop";
				angle0=0;
				angle1="rad 360";
			};
			class IndicatorTurret 
			{
				type="rotation";
				source="turretDir";
				selection="ukazsmer";
				axis="osa_ukazsmer";
				memory="false";
				animPeriod=0;
				minValue=0;
				maxValue=6.283185;
				angle0=0;
				angle1="rad 360";
			};
			class WatchHour 
			{
				type="rotation";
				source="clockHour";
				selection="hodinova";
				axis="osa_time";
				memory="false";
				animPeriod=0;
				angle0=0;
				angle1="rad 360";
			};
			class WatchMinute 
			{
				type="rotation";
				source="clockMinute";
				selection="minutova";
				axis="osa_time";
				memory="false";
				animPeriod=0;
				angle0=0;
				angle1="rad 360";
			};
			class Wheel_kolL1 
			{
				type="rotationX";
				source="wheelL";
				selection="kolL1";
				axis="";
				memory="false";
				animPeriod=0;
				minvalue=0.5;
				maxvalue = 1.0;
				angle0=0;
				angle1="rad -360";
				sourceAddress="loop";
			};
			class Wheel_koloL1: Wheel_kolL1 
			{
				selection="koloL1";
			};
			class Wheel_podkoloL1 
			{
				type="translation";
				source="damper";
				selection="podkoloL1";
				axis="Basic_Damper_Destruct_Axis";
				memory="true";
				animPeriod=0;
				minValue="0";
				maxValue="1";
				offset0= "-0.18";
				offset1= "0.18";
			};
			class Wheel_kolP1: Wheel_kolL1 
			{
				source="wheelR";
				selection="kolP1";
			};
			class Wheel_koloP1: Wheel_koloL1 
			{
				source="wheelR";
				selection="koloP1";
			};
			class Wheel_podkoloP1: Wheel_podkoloL1 
			{
				selection="podkoloP1";
			};
			class Wheel_kolL2: Wheel_kolL1 
			{
				selection="kolL2";
			};
			class Wheel_kolL3: Wheel_kolL1 
			{
				selection="kolL3";
			};
			class Wheel_kolL4: Wheel_kolL1 
			{
				selection="kolL4";
			};
			class Wheel_kolL5: Wheel_kolL1 
			{
				selection="kolL5";
			};
			class Wheel_kolL6: Wheel_kolL1 
			{
				selection="kolL6";
			};
			class Wheel_kolL7: Wheel_kolL1 
			{
				selection="kolL7";
			};
			class Wheel_kolL8: Wheel_kolL1 
			{
				selection="kolL8";
			};
			class Wheel_kolP2: Wheel_kolP1 
			{
				selection="kolP2";
			};
			class Wheel_kolP3: Wheel_kolP1 
			{
				selection="kolP3";
			};
			class Wheel_kolP4: Wheel_kolP1 
			{
				selection="kolP4";
			};
			class Wheel_kolP5: Wheel_kolP1 
			{
				selection="kolP5";
			};
			class Wheel_kolP6: Wheel_kolP1 
			{
				selection="kolP6";
			};
			class Wheel_kolP7: Wheel_kolP1 
			{
				selection="kolP7";
			};
			class Wheel_kolP8: Wheel_kolP1 
			{
				selection="kolP8";
			};
			class Wheel_koloL2: Wheel_koloL1 
			{
				selection="koloL2";
			};
			class Wheel_koloL3: Wheel_koloL1 
			{
				selection="koloL3";
			};
			class Wheel_koloL4: Wheel_koloL1 
			{
				selection="koloL4";
			};
			class Wheel_koloL5: Wheel_koloL1 
			{
				selection="koloL5";
			};
			class Wheel_koloL6: Wheel_koloL1 
			{
				selection="koloL6";
			};
			class Wheel_koloL7: Wheel_koloL1 
			{
				selection="koloL7";
			};
			class Wheel_koloL8: Wheel_koloL1 
			{
				selection="koloL8";
			};
			class Wheel_koloP2: Wheel_koloP1 
			{
				selection="koloP2";
			};
			class Wheel_koloP3: Wheel_koloP1 
			{
				selection="koloP3";
			};
			class Wheel_koloP4: Wheel_koloP1 
			{
				selection="koloP4";
			};
			class Wheel_koloP5: Wheel_koloP1 
			{
				selection="koloP5";
			};
			class Wheel_koloP6: Wheel_koloP1 
			{
				selection="koloP6";
			};
			class Wheel_koloP7: Wheel_koloP1 
			{
				selection="koloP7";
			};
			class Wheel_koloP8: Wheel_koloP1 
			{
				selection="koloP8";
			};
			class Wheel_podkoloL2: Wheel_podkoloL1 
			{
				selection="podkoloL2";
			};
			class Wheel_podkoloL3: Wheel_podkoloL1 
			{
				selection="podkoloL3";
			};
			class Wheel_podkoloL4: Wheel_podkoloL1 
			{
				selection="podkoloL4";
			};
			class Wheel_podkoloL5: Wheel_podkoloL1 
			{
				selection="podkoloL5";
			};
			class Wheel_podkoloL6: Wheel_podkoloL1 
			{
				selection="podkoloL6";
			};
			class Wheel_podkoloL7: Wheel_podkoloL1 
			{
				selection="podkoloL7";
			};
			class Wheel_podkoloP2: Wheel_podkoloP1 
			{
				selection="podkoloP2";
			};
			class Wheel_podkoloP3: Wheel_podkoloP1 
			{
				selection="podkoloP3";
			};
			class Wheel_podkoloP4: Wheel_podkoloP1 
			{
				selection="podkoloP4";
			};
			class Wheel_podkoloP5: Wheel_podkoloP1 
			{
				selection="podkoloP5";
			};
			class Wheel_podkoloP6: Wheel_podkoloP1 
			{
				selection="podkoloP6";
			};
			class Wheel_podkoloP7: Wheel_podkoloP1 
			{
				selection="podkoloP7";
			};
			class podkoloL1_hide_damage: damageHide 
			{
				selection="podkoloL1_hide";
			};
			class podkoloL2_hide_damage: damageHide 
			{
				selection="podkoloL2_hide";
			};
			class podkoloL3_hide_damage: damageHide 
			{
				selection="podkoloL3_hide";
			};
			class podkoloL4_hide_damage: damageHide 
			{
				selection="podkoloL4_hide";
			};
			class podkoloL5_hide_damage: damageHide 
			{
				selection="podkoloL5_hide";
			};
			class podkoloL6_hide_damage: damageHide 
			{
				selection="podkoloL6_hide";
			};
			class podkoloL7_hide_damage: damageHide 
			{
				selection="podkoloL7_hide";
			};
			class podkoloL8_hide_damage: damageHide 
			{
				selection="podkoloL8_hide";
			};
			class podkoloP1_hide_damage: damageHide 
			{
				selection="podkoloP1_hide";
			};
			class podkoloP2_hide_damage: damageHide 
			{
				selection="podkoloP2_hide";
			};
			class podkoloP3_hide_damage: damageHide 
			{
				selection="podkoloP3_hide";
			};
			class podkoloP4_hide_damage: damageHide 
			{
				selection="podkoloP4_hide";
			};
			class podkoloP5_hide_damage: damageHide 
			{
				selection="podkoloP5_hide";
			};
			class podkoloP6_hide_damage: damageHide 
			{
				selection="podkoloP6_hide";
			};
			class podkoloP7_hide_damage: damageHide 
			{
				selection="podkoloP7_hide";
			};
			class podkoloP8_hide_damage: damageHide 
			{
				selection="podkoloP8_hide";
			};
			class damageVez: damageHide 
			{
				selection="damageVez";
			};
			class MainTurret 
			{
				type="rotationY";
				source="mainTurret";
				selection="OtocVez";
				axis="OsaVeze";
				animPeriod=0;
				minValue="rad -360";
				maxValue="rad +360";
				angle0="rad -360";
				angle1="rad +360";
				memory = 1;
			};
			class MainGun: MainTurret 
			{
				type="rotationX";
				source="mainGun";
				selection="OtocHlaven";
				axis="OsaHlavne";
			};
			class HatchCommander 
			{
				type="rotation";
				source="hatchCommander";
				selection="poklop_commander";
				axis="osa_poklop_commander";
				animPeriod=0;
				angle0=0;
				angle1="rad -90";
			};
			class HatchGunner 
			{
				type="rotation";
				source="hatchGunner";
				selection="poklop_gunner";
				axis="osa_poklop_gunner";
				animPeriod=0;
				angle0=0;
				angle1="rad -90";
			};
			class Recoil 
			{
				type="translation";
				source="recoil_source";
				selection="RecoilHlaven";
				axis="RecoilHlaven_axis";
				memory=1;
				minValue=0.85;
				maxValue=1;
				offset0=0;
				offset1=-1;
			};
			class ObsTurret:MainTurret 
			{
				source="obsTurret";
				selection="Commander_Turret";
				axis="Commander_Turret_axis";
			};
			class ObsGun:MainGun 
			{
				source="obsGun";
				selection="Commander_Gun";
				axis="Commander_Gun_axis";
			};
			class MainGunOptics: MainGun 
			{
				selection="gunnerview";
				axis="gunnerview";
			};
		};
	};
