
class MFD
{
	class AirplaneHUD
	{
		class Pos10Vector
		{
			pos0[] = {0.52,0.03};
			pos10[] = {2.02,1.23};
			type = "vector";
		};
		color[] = {0,1,0,0.1};
		class Bones
		{
			class ILS_H
			{
				pos0[] = {0.5,0.5};
				pos3[] = {0.95,"(0.50)"};
				type = "ils";
			};
			class ILS_W: ILS_H
			{
				pos3[] = {0.5,0.86};
			};
			class PlaneW
			{
				pos[] = {0.5,0.5};
				type = "fixed";
			};
			class HorizonBankMGun
			{
				center[] = {0,0};
				type = "rotational";
				source = "HorizonBank";
				min = -6.28319;
				max = 6.28319;
				minAngle = -360;
				maxAngle = 360;
				aspectRatio = 0.8;
			};
			class HorizonBankReverted
			{
				center[] = {0,0};
				type = "rotational";
				source = "HorizonBank";
				min = "-3.14159265*2";
				max = "3.14159265*2";
				minAngle = 360;
				maxAngle = -360;
				aspectRatio = 0.8;
			};
			class HorizonDive
			{
				minPos[] = {0,1};
				maxPos[] = {0,0};
				source = "horizonDive";
				type = "linear";
				min = -1;
				max = 1;
			};
			class WeaponAim: Pos10Vector
			{
				source = "weapon";
			};
			class Target: Pos10Vector
			{
				source = "target";
			};
			class VelocityNotCenter: Pos10Vector
			{
				pos0[] = {0,0};
				pos10[] = {1.5,1.2};
				type = "vector";
				source = "velocity";
			};
			class SpdMove2
			{
				minPos[] = {0,0};
				maxPos[] = {0,1};
				source = "speed";
				min = 0;
				max = 200;
				type = "linear";
			};
			class ASLMove1
			{
				minPos[] = {0,0.1};
				maxPos[] = {0,0.8};
				type = "linear";
				source = "altitudeASL";
				min = 0;
				max = 500;
			};
			class Heading
			{
				minPos[] = {0,0};
				maxPos[] = {1,0};
				type = "linear";
				source = "Heading";
				min = -36;
				max = 36;
			};
		};
		class Draw
		{
			color[] = {0,0.3,0.05};
			class Static
			{
				clipTL[] = {0,0.1};
				clipBR[] = {1,0};
				points[] = {{"PlaneW",{-0.21,7.34351e-009},1},{"PlaneW",{-0.28,9.79135e-009},1},{},{"PlaneW",{0.21,-2.00338e-009},1},{"PlaneW",{0.28,-2.67117e-009},1},{},{"PlaneW",{-0.105,0.145492},1},{"PlaneW",{-0.14,0.19399},1},{},{"PlaneW",{0.105,0.145492},1},{"PlaneW",{0.14,0.19399},1},{},{"PlaneW",{-0.181865,0.084},1},{"PlaneW",{-0.242487,0.112},1},{},{"PlaneW",{0.181865,0.084},1},{"PlaneW",{0.242487,0.112},1},{},{"PlaneW",{-0.202844,0.0434816},1},{"PlaneW",{-0.270459,0.0579755},1},{},{"PlaneW",{0.202844,0.0434816},1},{"PlaneW",{0.270459,0.0579755},1},{},{"PlaneW",{-0.209201,0.0146422},1},{"PlaneW",{-0.244068,0.0170825},1},{},{"PlaneW",{-0.20681,0.0291729},1},{"PlaneW",{-0.241278,0.034035},1},{},{"PlaneW",{0.20681,0.0291729},1},{"PlaneW",{0.241278,0.034035},1},{},{"PlaneW",{0.209201,0.0146422},1},{"PlaneW",{0.244068,0.0170825},1},{}};
				type = "line";
			};
			class HorizonBank
			{
				clipTL[] = {0,0.1};
				clipBR[] = {1,0.9};
				points[] = {{"PlaneW",1,"HorizonBankReverted",{0.21,0},1},{"PlaneW",1,"HorizonBankReverted",{0.07,0},1},{},{"PlaneW",1,"HorizonBankReverted",{-0.21,0},1},{"PlaneW",1,"HorizonBankReverted",{-0.07,0},1},{},{"PlaneW",1,"HorizonBankReverted",{0,0.14},1},{"PlaneW",1,"HorizonBankReverted",{0,0.07},1}};
				type = "line";
			};
			class HorizonDive
			{
				clipTL[] = {0,0.1};
				clipBR[] = {1,0};
				points[] = {{"HorizonDive",{0.8,0},1},{"HorizonDive",{0.2,0},1}};
				type = "line";
			};
			class Missile
			{
				class Target
				{
					points[] = {{"Target",{0,-0.08},1},{"Target",{0.05,-0.0696},1},{"Target",{0.087,"-0.50*(0.10)*((1.2/1.5))"},1},{"Target",{"+(0.10)",0},1},{"Target",{0.087,0.04},1},{"Target",{0.05,"+0.87*(0.10)*((1.2/1.5))"},1},{"Target",{0,0.08},1},{"Target",{-0.05,0.0696},1},{"Target",{-0.087,"+0.50*(0.10)*((1.2/1.5))"},1},{"Target",{"-(0.10)",0},1},{"Target",{-0.087,-0.04},1},{"Target",{-0.05,"-0.87*(0.10)*((1.2/1.5))"},1},{"Target",{0,-0.08},1}};
					type = "line";
				};
				condition = "missile";
			};
			class Cros
			{
				class Cros
				{
					points[] = {{"WeaponAim",{0.05,0},1},{"WeaponAim",{0.015,0},1},{},{"WeaponAim",{0,0.04},1},{"WeaponAim",{0,0.012},1},{},{"WeaponAim",{-0.05,0},1},{"WeaponAim",{-0.015,0},1},{},{"WeaponAim",{0,-0.04},1},{"WeaponAim",{0,-0.012},1}};
					type = "line";
				};
				condition = "on";
			};
			class SpeedNumber
			{
				pos[] = {{0.06,0.07},1};
				right[] = {{0.14,0.07},1};
				down[] = {{0.06,0.12},1};
				type = "text";
				align = "right";
				scale = 1;
				source = "speed";
				sourceScale = 3.6;
			};
			class AltNumber: SpeedNumber
			{
				pos[] = {{0.86,0.07},1};
				right[] = {{0.94,0.07},1};
				down[] = {{0.86,0.12},1};
				source = "altitudeASL";
				sourceScale = 1;
			};
			class HeadingNumber: SpeedNumber
			{
				pos[] = {"HorizonDive",{0.81,-0.05},1};
				right[] = {"HorizonDive",{0.89,-0.05},1};
				down[] = {"HorizonDive",{0.81,0},1};
				source = "HorizonDive";
				align = "right";
				sourceScale = 57.2958;
			};
/*
			class MGun
			{

class Lines
				{
					points[] = {{"VelocityNotCenter",-0.001,"WeaponAim",1,"HorizonBankMGun",{0.2,0},-1},{"VelocityNotCenter",-0.1,"WeaponAim",1,"HorizonBankMGun",{0.18,-0.01},-1},{"VelocityNotCenter",-0.2,"WeaponAim",1,"HorizonBankMGun",{0.16,-0.03},-1},{"VelocityNotCenter",-0.3,"WeaponAim",1,"HorizonBankMGun",{0.14,-0.06},-1},{"VelocityNotCenter",-0.4,"WeaponAim",1,"HorizonBankMGun",{0.12,-0.1},-1},{"VelocityNotCenter",-0.5,"WeaponAim",1,"HorizonBankMGun",{0.1,-0.15},-1},{"VelocityNotCenter",-0.6,"WeaponAim",1,"HorizonBankMGun",{0.08,-0.21},-1},{"VelocityNotCenter",-0.7,"WeaponAim",1,"HorizonBankMGun",{0.06,-0.28},-1},{"VelocityNotCenter",-0.8,"WeaponAim",1,"HorizonBankMGun",{0.04,-0.4},-1},{},{"VelocityNotCenter",-0.001,"WeaponAim",1,"HorizonBankMGun",{-0.2,0},-1},{"VelocityNotCenter",-0.1,"WeaponAim",1,"HorizonBankMGun",{-0.18,-0.01},-1},{"VelocityNotCenter",-0.2,"WeaponAim",1,"HorizonBankMGun",{-0.16,-0.03},-1},{"VelocityNotCenter",-0.3,"WeaponAim",1,"HorizonBankMGun",{-0.14,-0.06},-1},{"VelocityNotCenter",-0.4,"WeaponAim",1,"HorizonBankMGun",{-0.12,-0.1},-1},{"VelocityNotCenter",-0.5,"WeaponAim",1,"HorizonBankMGun",{-0.1,-0.15},-1},{"VelocityNotCenter",-0.6,"WeaponAim",1,"HorizonBankMGun",{-0.08,-0.21},-1},{"VelocityNotCenter",-0.7,"WeaponAim",1,"HorizonBankMGun",{-0.06,-0.28},-1},{"VelocityNotCenter",-0.8,"WeaponAim",1,"HorizonBankMGun",{-0.04,-0.4},-1}};
					type = "line";
				};
				condition = "mgun";
			};*/
			class weapons
			{
				pos[] = {{0.06,0.88},1};
				right[] = {{0.12,0.88},1};
				down[] = {{0.06,0.92},1};
				type = "text";
				source = "weapon";
				align = "right";
				scale = 1;
				sourceScale = 1;
			};
			class ammo
			{
				pos[] = {{0.06,0.93},1};
				right[] = {{0.12,0.93},1};
				down[] = {{0.06,0.97},1};
				type = "text";
				source = "ammo";
				align = "right";
				scale = 1;
				sourceScale = 1;
			};
			class ILS
			{
				class Glideslope
				{
					clipTL[] = {0,0};
					clipBR[] = {1,1};
					class ILS
					{
						points[] = {{"ILS_W",{-0.4,0},1},{"ILS_W",{0.4,0},1},{},{"ILS_W",{0,0.04},1},{"ILS_W",{0,-0.04},1},{},{"ILS_W",{0.2,0.04},1},{"ILS_W",{0.2,-0.04},1},{},{"ILS_W",{0.4,0.04},1},{"ILS_W",{0.4,-0.04},1},{},{"ILS_W",{-0.2,0.04},1},{"ILS_W",{-0.2,-0.04},1},{},{"ILS_W",{-0.4,0.04},1},{"ILS_W",{-0.4,-0.04},1},{},{"ILS_H",{0,-0.4},1},{"ILS_H",{0,0.4},1},{},{"ILS_H",{0.04,0},1},{"ILS_H",{-0.04,0},1},{},{"ILS_H",{0.04,0.2},1},{"ILS_H",{-0.04,0.2},1},{},{"ILS_H",{0.04,0.4},1},{"ILS_H",{-0.04,0.4},1},{},{"ILS_H",{0.04,-0.2},1},{"ILS_H",{-0.04,-0.2},1},{},{"ILS_H",{0.04,-0.4},1},{"ILS_H",{-0.04,-0.4},1},{}};
						type = "line";
					};
				};
				condition = "ils";
			};
			alpha = 0.6;
			condition = "on";
		};
		enableParallax = 1;
		topLeft = "HUD LH";
		topRight = "HUD PH";
		bottomLeft = "HUD LD";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
	};
};