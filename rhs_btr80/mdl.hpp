
	class Default {
		sectionsInherit = "";
		sections[] = {};
		skeletonName = "";
	};
	class rhs_btr80_base: Default
	{                     
		sections[] ={
			"zasleh1",
			"P svetlo",
			"L svetlo",
			"Konec L svetla",
			"Konec P svetla",
			"brzdove svetlo",
			"zadni svetlo",
			"zbytek",
			"vez",
			"zbran",
			"turret",
			"i1",
			"i2",
			"i3",
			"i4",
			"i5",
			"i6",
			"i7",
			"i8",
			"i9",
			"i10",
			"n1",
			"n2",
			"n3",
			"n4",
			"n5",
			"n6",
			"n7",
			"n8",
			"n9",
			"n10",
			"n11",
			"crate_l1",
			"crate_l2",
			"crate_l3",
			"crate_l4",
			"crate_r1",
			"crate_r2",
			"crate_r3",
			"crate_r4",
			"water_1",
			"water_2",
			"wheel_1",
			"wheel_2",
			"glass1",
			"glass2",
			"clan",
			"clan_sign"
		};
		skeletonName = "rhs_btr80_base"; 
		
		class Animations 
		{
			class Glass1_destruct
			{
				type="hide";
				source="HitGlass1";
				selection="glass1";
				minValue = rad 0;//
				maxValue = rad 57.2958;//
				minPhase = rad 0;//
				maxPhase = rad 57.2958;//
				sourceAddress = 0;
				hideValue = 0.990000;
			};
			class Glass2_destruct
			{
				type="hide";
				source="HitGlass2";
				selection="glass2";
				minValue = rad 0;//
				maxValue = rad 57.2958;//
				minPhase = rad 0;//
				maxPhase = rad 57.2958;//
				sourceAddress = 0;
				hideValue = 0.990000;
			};
			class crate_l1_unhide
			{
				type = "hide";
				source = "crate_l1_unhide";
				selection = "crate_l1";
			};
			class crate_l1_damage_hide
			{
				type = "hide";
				source = "damage";
				selection = "crate_l1";
			};
			class crate_l2_unhide
			{
				type = "hide";
				source = "crate_l2_unhide";
				selection = "crate_l2";
			};
			class crate_l2_damage_hide
			{
				type = "hide";
				source = "damage";
				selection = "crate_l2";
			};
			class crate_l3_unhide
			{
				type = "hide";
				source = "crate_l3_unhide";
				selection = "crate_l3";
			};
			class crate_l3_damage_hide
			{
				type = "hide";
				source = "damage";
				selection = "crate_l3";
			};
			class crate_l4_unhide
			{
				type = "hide";
				source = "crate_l4_unhide";
				selection = "crate_l4";
			};
			class crate_l4_damage_hide
			{
				type = "hide";
				source = "damage";
				selection = "crate_l4";
			};
			class crate_r1_unhide
			{
				type = "hide";
				source = "crate_r1_unhide";
				selection = "crate_r1";
			};
			class crate_r1_damage_hide
			{
				type = "hide";
				source = "damage";
				selection = "crate_r1";
			};
			class crate_r2_unhide
			{
				type = "hide";
				source = "crate_r2_unhide";
				selection = "crate_r2";
			};
			class crate_r2_damage_hide
			{
				type = "hide";
				source = "damage";
				selection = "crate_r2";
			};
			class crate_r3_unhide
			{
				type = "hide";
				source = "crate_r3_unhide";
				selection = "crate_r3";
			};
			class crate_r3_damage_hide
			{
				type = "hide";
				source = "damage";
				selection = "crate_r4";
			};
			class crate_r4_unhide
			{
				type = "hide";
				source = "crate_r4_unhide";
				selection = "crate_r4";
			};
			class crate_r4_damage_hide
			{
				type = "hide";
				source = "damage";
				selection = "crate_r3";
			};
			class water_1_unhide
			{
				type = "hide";
				source = "water_1_unhide";
				selection = "water_1";
			};
			class water_1_damage_hide
			{
				type = "hide";
				source = "damage";
				selection = "water_1";
			};
			class water_2_unhide
			{
				type = "hide";
				source = "water_2_unhide";
				selection = "water_2";
			};
			class water_2_damage_hide
			{
				type = "hide";
				source = "damage";
				selection = "water_2";
			};
			class wheel_1_unhide
			{
				type = "hide";
				source = "wheel_1_unhide";
				selection = "wheel_1";
			};
			class wheel_1_damage_hide
			{
				type = "hide";
				source = "damage";
				selection = "wheel_1";
			};
			class wheel_2_unhide
			{
				type = "hide";
				source = "wheel_2_unhide";
				selection = "wheel_2";
			};
			class wheel_2_damage_hide
			{
				type = "hide";
				source = "damage";
				selection = "wheel_2";
			};
			
			class damageHide
			{
				type = "hide";
				source = "damage";
				selection = "damageHide";
				minValue = 0;
				maxValue = 1;
				minPhase = 0;
				maxPhase = 1;
				sourceAddress = "clamp";
				hideValue = 1.0000;
			};
			class damageVez
			{
				type = "hide";
				source = "damage";
				selection = "damageVez";
				minValue = 0;
				maxValue = 1;
				minPhase = 0;
				maxPhase = 1;
				sourceAddress = "clamp";
				hideValue = 1.0000;
			};
			class recoilGun
			{
				type="translation";
				source="recoil_source";
				selection="barrel";
				begin="main_gun_recoil_start";
				end="main_gun_recoil_end";
				initphase=0;
				memory=1;
				animperiod =.5;
				sourceaddress="mirror";
				minvalue=0;
				maxvalue=(1/100)/5;
				offset0=0;
				offset1=1;
			};
			class driverViewHatch
			{
				Type = "rotation";
				source="driverViewHatch";
				selection="driverViewHatch";
				axis="viewHatch_axis";
				sourceAddress = "clamp";
				minValue = 0;
				maxValue = 1;
				angle0=rad 45;
				angle1=0;
			};
			class commanderViewHatch : driverViewHatch
			{
				source="commanderViewHatch";
				selection="commanderViewHatch";
			};
			class driverHatch
			{
				Type = "rotation";
				source="dHatch";
				selection="driverHatch";
				axis="driverHatch_axis";
				sourceAddress = "clamp";
				minValue = 0;
				maxValue = 1;
				angle0="rad 0";
				angle1="-rad 90";
			};
			class commanderHatch : driverHatch
			{
				source="cHatch";
				selection="commanderHatch";
				axis="commanderHatch_axis";
				angle1="rad 90";
			};
			class mainTurret
			{
				type = "rotationY";
				source = "mainTurret";
				selection = "mainTurret";
				axis = "OsaVeze";
				memory = true; 
				sourceAddress = "loop";
				minValue = rad -360;
				maxValue = rad 360;
				angle0 = rad -360; 
				angle1 = "rad 360"; 
			};
			class mainGun
			{
				type = "rotationX";
				source = "mainGun";
				selection = "mainGun";
				axis = "OsaHlavne";
				animPeriod=0; 
				sourceAddress = "clamp";
				minValue="rad -360";
				maxValue="rad +360";
				angle0="rad -360";
				angle1="rad +360"; 
			};
			class obsTurret
			{
				type = "rotationY";
				source = "obsTurret";
				selection = "obsTurret";
				axis = "obsTurret";
				animPeriod = 0;
				memory = 1;
				minValue = "rad -360";
				maxValue = "rad +360";
				angle0 = "rad -360";
				angle1 = "rad +360";
			};
			class obsGun
			{
				type = "rotationX";
				source = "obsGun";
				selection = "obsGun";
				axis = "obsGun_axis";
				animPeriod = 0;
				memory = 1;
				minValue = "rad -360";
				maxValue = "rad +360";
				angle0 = "rad -360";
				angle1 = "rad +360";
			};

			class IndicatorSpeed
			{
				type = "rotation";
				source = "speed";
				memory = true; 
				selection="speedIndicator";
				axis="speedIndicator_axis";
				angle0=0;
				angle1="rad 166";
				minValue=0;
				maxValue=22.22;
			};
			class IndicatorFuel
			{
				type = "rotation";
				source = "fuel";
				memory = true; 
				selection="fuelIndicator";
				axis="fuelIndicator_axis";
				angle0="0";
				angle1="rad -54";
				minValue=0;
				maxValue=1;
			};
			class IndicatorRPM: Rotation
			{
				source="rpm";
				selection="rpm";
				axis="osa_rpm";
				memory=1;
				angle0="rad -120";
				angle1="rad 90";
				maxValue=3600;
			};



			class DrivingWheel: Rotation
			{
				source="drivingWheel";
				selection="drivewheel";
				axis="drivewheel_axis";
				minValue=-1;
				maxValue=1;
				angle0=(rad -80);
				angle1=(rad 80);
			};
			class Steering_1_1
			{
				type="rotationY";
				source="drivingWheel";
				selection="wheel_1_1_steering";
				axis="wheel_1_1_steering_axis";
				memory=1;
				minValue= -1;
				maxValue= 1;
				angle0 = "rad 35"; 
				angle1 = "rad -35";
			};
			class Steering_2_1: Steering_1_1
			{
				selection="wheel_2_1_steering";
				axis="wheel_2_1_steering_axis";
			};
			class Steering_1_2: Steering_1_1
			{
				selection="wheel_1_2_steering";
				axis="wheel_1_2_steering_axis";
			};
			class Steering_2_2: Steering_1_1
			{
				selection="wheel_2_2_steering";
				axis="wheel_2_2_steering_axis";
			};
			class Wheel_1_1
			{
				type="rotationX";
				source="wheel";
				selection="wheel_1_1";
				axis="wheel_1_1_axis";
				memory=1;
				sourceAddress="loop";
				minValue=0;
				maxValue=1;
				angle0=0;
				angle1="rad -360";
			};
			class wheel_2_1: Wheel_1_1
			{
				selection="wheel_2_1";
				axis="wheel_2_1_axis";
			};
			class wheel_1_2: Wheel_1_1
			{
				selection="wheel_1_2";
				axis="wheel_1_2_axis";
			};
			class wheel_1_3: Wheel_1_1
			{
				selection="wheel_1_3";
				axis="wheel_1_3_axis";
			};
			class Wheel_2_2: Wheel_1_1
			{
				selection="wheel_2_2";
				axis="wheel_2_2_axis";
			};
			class Wheel_2_3: Wheel_1_1
			{
				selection="wheel_2_3";
				axis="wheel_2_3_axis";
			};
			class Wheel_1_4: Wheel_1_1
			{
				selection="wheel_1_4";
				axis="wheel_1_4_axis";
			};
			class Wheel_2_4: Wheel_1_1
			{
				selection="wheel_2_4";
				axis="wheel_2_4_axis";
			};
			class Wheel_1_1_Damper
			{
				type="translation";
				source="damper";
				selection="wheel_1_1_damper_land";
				axis="Basic_Damper_Destruct_Axis";
				animPeriod = 1;
				minValue="0";
				maxValue="1";
				offset0= "-0.14";
				offset1= "0.14";
				memory=1;
			};
			class wheel_2_1_Damper: Wheel_1_1_Damper
			{
				selection="wheel_2_1_damper_land";
			};
			class wheel_1_2_Damper: Wheel_1_1_Damper
			{
				selection="wheel_1_2_damper_land";
			};
			class Wheel_2_2_Damper: Wheel_1_1_Damper
			{
				selection="wheel_2_2_damper_land";
			};
			class wheel_1_3_Damper: Wheel_1_1_Damper
			{
				selection="wheel_1_3_damper_land";
			};
			class Wheel_2_3_Damper: Wheel_1_1_Damper
			{
				selection="wheel_2_3_damper_land";
			};
			class wheel_1_4_Damper: Wheel_1_1_Damper
			{
				selection="wheel_1_4_damper_land";
			};
			class Wheel_2_4_Damper: Wheel_1_1_Damper
			{
				selection="wheel_2_4_damper_land";
			};
			// Wheels START
			// Wheels Complete Destruct START
			class wheel_1_1_destruct
			{
				type="hide";
				selection="wheel_1_1_hide";
				source="HitLFWheel";
				minValue = 0; // upravit na 0.99
				maxValue = 1; // upravit na 1.0
				hidevalue = 0.99999;
			};
			class wheel_1_2_destruct:wheel_1_1_destruct {source="HitLF2Wheel";selection="wheel_1_2_hide";};
			class wheel_1_3_destruct:wheel_1_1_destruct {source="HitLMWheel";selection="wheel_1_3_hide";};
			class wheel_1_4_destruct:wheel_1_1_destruct {source="HitLBWheel";selection="wheel_1_4_hide";};
			class wheel_2_1_destruct:wheel_1_1_destruct {source="HitRFWheel";selection="wheel_2_1_hide";};
			class wheel_2_2_destruct:wheel_1_1_destruct {source="HitRF2Wheel";selection="wheel_2_2_hide";};
			class wheel_2_3_destruct:wheel_1_1_destruct {source="HitRMWheel";selection="wheel_2_3_hide";};
			class wheel_2_4_destruct:wheel_1_1_destruct {source="HitRBWheel";selection="wheel_2_4_hide";};

			class wheel_1_1_destruct_unhide
			{
				type="hide";
				selection="wheel_1_1_unhide";
				source="HitLFWheel";
				minValue = 0; 
				maxValue = 1; 
				hidevalue = 0.00000;
				UnHidevalue = 1.00000;
			};
			class wheel_1_2_destruct_unhide:wheel_1_1_destruct_unhide {source="HitLF2Wheel";selection="wheel_1_2_unhide";};
			class wheel_1_3_destruct_unhide:wheel_1_1_destruct_unhide {source="HitLMWheel";selection="wheel_1_3_unhide";};
			class wheel_1_4_destruct_unhide:wheel_1_1_destruct_unhide {source="HitLBWheel";selection="wheel_1_4_unhide";};
			class wheel_2_1_destruct_unhide:wheel_1_1_destruct_unhide {source="HitRFWheel";selection="wheel_2_1_unhide";};
			class wheel_2_2_destruct_unhide:wheel_1_1_destruct_unhide {source="HitRF2Wheel";selection="wheel_2_2_unhide";};
			class wheel_2_3_destruct_unhide:wheel_1_1_destruct_unhide {source="HitRMWheel";selection="wheel_2_3_unhide";};
			class wheel_2_4_destruct_unhide:wheel_1_1_destruct_unhide {source="HitRBWheel";selection="wheel_2_4_unhide";};
			// Wheels Complete Destruct END

			#define DamageOffset 0.2

			// Wheels Damage START
			class wheel_1_1_Damage:wheel_1_1_destruct
			{
				type="translation";
				axis="Basic_Damper_Destruct_Axis";
				memory=1;
				selection="wheel_1_1_damper";
				source="HitLFWheel";
				minValue = 0.0;
				maxValue = 1;
				offset0 = 0;
				offset1 = DamageOffset;
			};
			class wheel_1_2_Damage:wheel_1_1_Damage {source="HitLBWheel";selection="wheel_1_2_damper";};
			class wheel_1_3_Damage:wheel_1_1_Damage {source="HitLMWheel";selection="wheel_1_3_damper";};
			class wheel_1_4_Damage:wheel_1_1_Damage {source="HitLF2Wheel";selection="wheel_1_4_damper";};

			class wheel_2_1_Damage:wheel_1_1_Damage {source="HitRFWheel";selection="wheel_2_1_damper";};
			class wheel_2_2_Damage:wheel_1_1_Damage {source="HitRBWheel";selection="wheel_2_2_damper";};
			class wheel_2_3_Damage:wheel_1_1_Damage {source="HitRMWheel";selection="wheel_2_3_damper";};
			class wheel_2_4_Damage:wheel_1_1_Damage {source="HitRF2Wheel";selection="wheel_2_4_damper";};


			class wheel_1_1_Damper_Damage_BackAnim:wheel_1_1_Damage {selection="wheel_1_1_damper";offset1 = -1.2*DamageOffset;};
			class wheel_1_2_Damper_Damage_BackAnim:wheel_1_1_Damper_Damage_BackAnim {source="HitLBWheel";selection="wheel_1_2_damper";};
			class wheel_1_3_Damper_Damage_BackAnim:wheel_1_1_Damper_Damage_BackAnim {source="HitLMWheel";selection="wheel_1_3_damper";};
			class wheel_1_4_Damper_Damage_BackAnim:wheel_1_1_Damper_Damage_BackAnim {source="HitLF2Wheel";selection="wheel_1_4_damper";};

			class wheel_2_1_Damper_Damage_BackAnim:wheel_1_1_Damper_Damage_BackAnim {source="HitRFWheel";selection="wheel_2_1_damper";};
			class wheel_2_2_Damper_Damage_BackAnim:wheel_1_1_Damper_Damage_BackAnim {source="HitRBWheel";selection="wheel_2_2_damper";};
			class wheel_2_3_Damper_Damage_BackAnim:wheel_1_1_Damper_Damage_BackAnim {source="HitRMWheel";selection="wheel_2_3_damper";};
			class wheel_2_4_Damper_Damage_BackAnim:wheel_1_1_Damper_Damage_BackAnim {source="HitRF2Wheel";selection="wheel_2_4_damper";};
		};
	};