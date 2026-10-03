
	class B_Parachute;
	class Steerable_Parachute_F;
	class rhs_d6_Parachute: Steerable_Parachute_F
	{
		scope = 1;
		scopeArsenal = 0;
		side = 0;
		faction = "rhs_faction_vdv";
 		vehicleClass = "Air";
		crew = "rhs_vdv_rifleman";

		maxgravity=-10;
		maxliftduration=4;
		maxliftthrust=-40;
		maxrotationx=0.1;
		maxrotationz=0.4;
		maxsensitivityhorizontal=0.05;
		maxsensitivityvertical=0.01;
		mingravity=-2;
		minliftduration=4;
		minliftthrust=-40;
		minrotationx=-0.1;
		minrotationz=-0.4;
		normalgravity=-5;
		thrustaccel=0.001;
		thrustdeccel=0.001;
		thrustnormal=0.001;
		turnforcescale=0.0001;

		displayName="D-6 Parachute";
		driverAction="rhs_d6_pilot";
		model="\rhsafrf\addons\rhs_air\parachute\para.p3d";
	};
	class rhs_d6_Parachute_backpack: B_Parachute
	{
		scope=2;
		scopeArsenal = 2;
		displayName="D6 Parachute Bag";
		ParachuteClass="rhs_d6_Parachute";
		maximumLoad=0;
		mass=130;
	};