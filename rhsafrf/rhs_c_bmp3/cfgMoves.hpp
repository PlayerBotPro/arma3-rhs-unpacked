
class CfgMovesBasic
{
	class Default;
	class DefaultDie;
	class ManActions
	{
		RHS_BMP3_Commander = "RHS_BMP3_Commander";
		RHS_BMP3_CommanderOUT = "RHS_BMP3_Commander_OUT";
		RHS_BMP3_Gunner = "RHS_BMP3_Gunner";
		RHS_BMP3_Gunner02 = "RHS_BMP3_Gunner02";
		RHS_BMP3_Gunner03 = "RHS_BMP3_Gunner03";
		RHS_BMP3_GunnerOut = "RHS_BMP3_Gunner_Out";
		RHS_BMP3_Driver = "RHS_BMP3_Driver";
		RHS_BMP3_DriverOut = "RHS_BMP3_Driver_out";
		RHS_BMP3_Cargo = "RHS_BMP3_Cargo01";
		RHS_VehicleTurnout_1 = "rhs_vehicle_turnout_1_Idle_Pistol"; //what a nasty trick to get out of inifite loop of death
		RHS_VehicleTurnout_BMP1_1 = "rhs_vehicle_turnout_BMP1_1_Idle_Pistol"; //what a nasty trick to get out of inifite loop of death
		RHS_VehicleTurnout_Sprut_1 = "rhs_vehicle_turnout_sprut_1_Idle_Pistol";
		RHS_passenger_inside_6 = "rhs_passenger_inside_6_Idle_Unarmed";
	};
	class Actions
	{
		class RifleStandActions;
		class FFV_BaseActions;
		class rhs_vehicle_turnout_1Actions : FFV_BaseActions {
			upDegree = "ManPosCombat";
			stop = "rhs_vehicle_turnout_1_Idle_Unarmed";
			stopRelaxed = "rhs_vehicle_turnout_1_Idle_Unarmed";
			default = "rhs_vehicle_turnout_1_Idle_Unarmed";
			Stand = "rhs_vehicle_turnout_1_Idle_Unarmed";
			HandGunOn = "rhs_vehicle_turnout_1_Aim_Pistol";
			PrimaryWeapon = "rhs_vehicle_turnout_1_Idle_Unarmed";
			Binoculars = "rhs_vehicle_turnout_1_Aim_Binoc";
			die = "rhs_vehicle_turnout_1_Die";
			Unconscious = "rhs_vehicle_turnout_1_Die";
			civil = "rhs_vehicle_turnout_1_Idle_Unarmed";
		};
		class rhs_vehicle_turnout_1IdleUnarmedActions : FFV_BaseActions {
			upDegree = "ManPosNoWeapon";
			stop = "rhs_vehicle_turnout_1_Idle_Unarmed";
			stopRelaxed = "rhs_vehicle_turnout_1_Idle_Unarmed";
			default = "rhs_vehicle_turnout_1_Idle_Unarmed";
			Stand = "rhs_vehicle_turnout_1_Idle_Unarmed";

			HandGunOn = "rhs_vehicle_turnout_1_Aim_Pistol";
			PrimaryWeapon = "rhs_vehicle_turnout_1_Idle_Unarmed";

			Binoculars = "rhs_vehicle_turnout_1_Aim_Unarmed_Binoc";
			die = "rhs_vehicle_turnout_1_Die_Pistol";

			Unconscious = "rhs_vehicle_turnout_1_Die_Pistol";
			civil = "rhs_vehicle_turnout_1_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
		};
		class rhs_vehicle_turnout_1DeadActions : FFV_BaseActions {
			stop = "rhs_vehicle_turnout_1_Die";
			default = "rhs_vehicle_turnout_1_Die";
			die = "rhs_vehicle_turnout_1_Die";
			Unconscious = "rhs_vehicle_turnout_1_Die";
		};
		class rhs_vehicle_turnout_1DeadPistolActions : FFV_BaseActions {
			stop = "rhs_vehicle_turnout_1_Die_Pistol";
			default = "rhs_vehicle_turnout_1_Die_Pistol";
			die = "rhs_vehicle_turnout_1_Die_Pistol";
			Unconscious = "rhs_vehicle_turnout_1_Die_Pistol";
		};
		class rhs_vehicle_turnout_1PistolActions : rhs_vehicle_turnout_1Actions {
			upDegree = "ManPosHandGunStand";
			stop = "rhs_vehicle_turnout_1_Aim_Pistol";
			stopRelaxed = "rhs_vehicle_turnout_1_Aim_Pistol";
			default = "rhs_vehicle_turnout_1_Aim_Pistol";
			Binoculars = "rhs_vehicle_turnout_1_Aim_Pistol_Binoc";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Stand = "rhs_vehicle_turnout_1_Idle_Pistol";
			die = "rhs_vehicle_turnout_1_Die_Pistol";
			Unconscious = "rhs_vehicle_turnout_1_Die_Pistol";
		};
		class rhs_vehicle_turnout_1BinocActions : rhs_vehicle_turnout_1Actions {
			binocOn = "";
			upDegree = "ManPosBinocStand";
			stop = "rhs_vehicle_turnout_1_Aim_Pistol_Binoc";
			stopRelaxed = "rhs_vehicle_turnout_1_Aim_Pistol_Binoc";
			default = "rhs_vehicle_turnout_1_Aim_Binoc";
		};
		class rhs_vehicle_turnout_1BinocPistolActions : rhs_vehicle_turnout_1BinocActions {
			stop = "rhs_vehicle_turnout_1_Aim_Pistol_Binoc";
			stopRelaxed = "rhs_vehicle_turnout_1_Aim_Pistol_Binoc";
			default = "rhs_vehicle_turnout_1_Aim_Pistol_Binoc";
			die = "rhs_vehicle_turnout_1_Die_Pistol";
			Unconscious = "rhs_vehicle_turnout_1_Die_Pistol";
		};
		class rhs_vehicle_turnout_1BinocUnarmedActions : rhs_vehicle_turnout_1BinocActions {
			stop = "rhs_vehicle_turnout_1_Aim_Unarmed_Binoc";
			stopRelaxed = "rhs_vehicle_turnout_1_Aim_Unarmed_Binoc";
			default = "rhs_vehicle_turnout_1_Aim_Unarmed_Binoc";
			die = "rhs_vehicle_turnout_1_Die_Pistol";
			Unconscious = "rhs_vehicle_turnout_1_Die_Pistol";
		};
		class rhs_vehicle_turnout_1IdleActions : rhs_vehicle_turnout_1Actions {
			upDegree = "ManPosStand";
			stop = "rhs_vehicle_turnout_1_Idle";
			stopRelaxed = "rhs_vehicle_turnout_1_Idle";
			default = "rhs_vehicle_turnout_1_Idle";
			Combat = "rhs_vehicle_turnout_1_Idle_Unarmed";
			fireNotPossible = "rhs_vehicle_turnout_1_Idle_Unarmed";
			PlayerStand = "rhs_vehicle_turnout_1_Idle_Unarmed";
		};
		class rhs_vehicle_turnout_1IdlePistolActions : rhs_vehicle_turnout_1Actions {
			Stand = "rhs_vehicle_turnout_1_Idle_Pistol";
			upDegree = "ManPosHandGunStand";
			stop = "rhs_vehicle_turnout_1_Idle_Pistol";
			stopRelaxed = "rhs_vehicle_turnout_1_Idle_Pistol";
			default = "rhs_vehicle_turnout_1_Idle_Pistol";
			Combat = "rhs_vehicle_turnout_1_Aim_Pistol";
			fireNotPossible = "rhs_vehicle_turnout_1_Aim_Pistol";
			PlayerStand = "rhs_vehicle_turnout_1_Aim_Pistol";
			die = "rhs_vehicle_turnout_1_Die_Pistol";
			Unconscious = "rhs_vehicle_turnout_1_Die_Pistol";
		};


		class rhs_vehicle_turnout_sprut_1Actions : FFV_BaseActions {
			upDegree = "ManPosCombat";
			stop = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
			stopRelaxed = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
			default = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
			Stand = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
			HandGunOn = "rhs_vehicle_turnout_sprut_1_Aim_Pistol";
			PrimaryWeapon = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
			Binoculars = "rhs_vehicle_turnout_sprut_1_Aim_Binoc";
			die = "rhs_vehicle_turnout_sprut_1_Die";
			Unconscious = "rhs_vehicle_turnout_sprut_1_Die";
			civil = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
		};
		class rhs_vehicle_turnout_sprut_1IdleUnarmedActions : FFV_BaseActions {
			upDegree = "ManPosNoWeapon";
			stop = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
			stopRelaxed = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
			default = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
			Stand = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";

			HandGunOn = "rhs_vehicle_turnout_sprut_1_Aim_Pistol";
			PrimaryWeapon = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";

			Binoculars = "rhs_vehicle_turnout_sprut_1_Aim_Unarmed_Binoc";
			die = "rhs_vehicle_turnout_sprut_1_Die_Pistol";

			Unconscious = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
			civil = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
		};
		class rhs_vehicle_turnout_sprut_1DeadActions : FFV_BaseActions {
			stop = "rhs_vehicle_turnout_sprut_1_Die";
			default = "rhs_vehicle_turnout_sprut_1_Die";
			die = "rhs_vehicle_turnout_sprut_1_Die";
			Unconscious = "rhs_vehicle_turnout_sprut_1_Die";
		};
		class rhs_vehicle_turnout_sprut_1DeadPistolActions : FFV_BaseActions {
			stop = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
			default = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
			die = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
			Unconscious = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
		};
		class rhs_vehicle_turnout_sprut_1PistolActions : rhs_vehicle_turnout_sprut_1Actions {
			upDegree = "ManPosHandGunStand";
			stop = "rhs_vehicle_turnout_sprut_1_Aim_Pistol";
			stopRelaxed = "rhs_vehicle_turnout_sprut_1_Aim_Pistol";
			default = "rhs_vehicle_turnout_sprut_1_Aim_Pistol";
			Binoculars = "rhs_vehicle_turnout_sprut_1_Aim_Pistol_Binoc";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Stand = "rhs_vehicle_turnout_sprut_1_Idle_Pistol";
			die = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
			Unconscious = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
		};
		class rhs_vehicle_turnout_sprut_1BinocActions : rhs_vehicle_turnout_sprut_1Actions {
			binocOn = "";
			upDegree = "ManPosBinocStand";
			stop = "rhs_vehicle_turnout_sprut_1_Aim_Pistol_Binoc";
			stopRelaxed = "rhs_vehicle_turnout_sprut_1_Aim_Pistol_Binoc";
			default = "rhs_vehicle_turnout_sprut_1_Aim_Binoc";
		};
		class rhs_vehicle_turnout_sprut_1BinocPistolActions : rhs_vehicle_turnout_sprut_1BinocActions {
			stop = "rhs_vehicle_turnout_sprut_1_Aim_Pistol_Binoc";
			stopRelaxed = "rhs_vehicle_turnout_sprut_1_Aim_Pistol_Binoc";
			default = "rhs_vehicle_turnout_sprut_1_Aim_Pistol_Binoc";
			die = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
			Unconscious = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
		};
		class rhs_vehicle_turnout_sprut_1BinocUnarmedActions : rhs_vehicle_turnout_sprut_1BinocActions {
			stop = "rhs_vehicle_turnout_sprut_1_Aim_Unarmed_Binoc";
			stopRelaxed = "rhs_vehicle_turnout_sprut_1_Aim_Unarmed_Binoc";
			default = "rhs_vehicle_turnout_sprut_1_Aim_Unarmed_Binoc";
			die = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
			Unconscious = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
		};
		class rhs_vehicle_turnout_sprut_1IdleActions : rhs_vehicle_turnout_sprut_1Actions {
			upDegree = "ManPosStand";
			stop = "rhs_vehicle_turnout_sprut_1_Idle";
			stopRelaxed = "rhs_vehicle_turnout_sprut_1_Idle";
			default = "rhs_vehicle_turnout_sprut_1_Idle";
			Combat = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
			fireNotPossible = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
			PlayerStand = "rhs_vehicle_turnout_sprut_1_Idle_Unarmed";
		};
		class rhs_vehicle_turnout_sprut_1IdlePistolActions : rhs_vehicle_turnout_sprut_1Actions {
			Stand = "rhs_vehicle_turnout_sprut_1_Idle_Pistol";
			upDegree = "ManPosHandGunStand";
			stop = "rhs_vehicle_turnout_sprut_1_Idle_Pistol";
			stopRelaxed = "rhs_vehicle_turnout_sprut_1_Idle_Pistol";
			default = "rhs_vehicle_turnout_sprut_1_Idle_Pistol";
			Combat = "rhs_vehicle_turnout_sprut_1_Aim_Pistol";
			fireNotPossible = "rhs_vehicle_turnout_sprut_1_Aim_Pistol";
			PlayerStand = "rhs_vehicle_turnout_sprut_1_Aim_Pistol";
			die = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
			Unconscious = "rhs_vehicle_turnout_sprut_1_Die_Pistol";
		};


		class rhs_vehicle_turnout_bmp1_1Actions : FFV_BaseActions {
			upDegree = "ManPosCombat";
			stop = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
			stopRelaxed = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
			default = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
			Stand = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
			HandGunOn = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol";
			PrimaryWeapon = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
			Binoculars = "rhs_vehicle_turnout_bmp1_1_Aim_Binoc";
			die = "rhs_vehicle_turnout_bmp1_1_Die";
			Unconscious = "rhs_vehicle_turnout_bmp1_1_Die";
			civil = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
		};
		class rhs_vehicle_turnout_bmp1_1IdleUnarmedActions : FFV_BaseActions {
			upDegree = "ManPosNoWeapon";
			stop = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
			stopRelaxed = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
			default = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
			Stand = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";

			HandGunOn = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol";
			PrimaryWeapon = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";

			Binoculars = "rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_Binoc";
			die = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";

			Unconscious = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
			civil = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
		};
		class rhs_vehicle_turnout_bmp1_1DeadActions : FFV_BaseActions {
			stop = "rhs_vehicle_turnout_bmp1_1_Die";
			default = "rhs_vehicle_turnout_bmp1_1_Die";
			die = "rhs_vehicle_turnout_bmp1_1_Die";
			Unconscious = "rhs_vehicle_turnout_bmp1_1_Die";
		};
		class rhs_vehicle_turnout_bmp1_1DeadPistolActions : FFV_BaseActions {
			stop = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
			default = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
			die = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
			Unconscious = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
		};
		class rhs_vehicle_turnout_bmp1_1PistolActions : rhs_vehicle_turnout_bmp1_1Actions {
			upDegree = "ManPosHandGunStand";
			stop = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol";
			stopRelaxed = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol";
			default = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol";
			Binoculars = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Binoc";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Stand = "rhs_vehicle_turnout_bmp1_1_Idle_Pistol";
			die = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
			Unconscious = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
		};
		class rhs_vehicle_turnout_bmp1_1BinocActions : rhs_vehicle_turnout_bmp1_1Actions {
			binocOn = "";
			upDegree = "ManPosBinocStand";
			stop = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Binoc";
			stopRelaxed = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Binoc";
			default = "rhs_vehicle_turnout_bmp1_1_Aim_Binoc";
		};
		class rhs_vehicle_turnout_bmp1_1BinocPistolActions : rhs_vehicle_turnout_bmp1_1BinocActions {
			stop = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Binoc";
			stopRelaxed = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Binoc";
			default = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Binoc";
			die = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
			Unconscious = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
		};
		class rhs_vehicle_turnout_bmp1_1BinocUnarmedActions : rhs_vehicle_turnout_bmp1_1BinocActions {
			stop = "rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_Binoc";
			stopRelaxed = "rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_Binoc";
			default = "rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_Binoc";
			die = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
			Unconscious = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
		};
		class rhs_vehicle_turnout_bmp1_1IdleActions : rhs_vehicle_turnout_bmp1_1Actions {
			upDegree = "ManPosStand";
			stop = "rhs_vehicle_turnout_bmp1_1_Idle";
			stopRelaxed = "rhs_vehicle_turnout_bmp1_1_Idle";
			default = "rhs_vehicle_turnout_bmp1_1_Idle";
			Combat = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
			fireNotPossible = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
			PlayerStand = "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed";
		};
		class rhs_vehicle_turnout_bmp1_1IdlePistolActions : rhs_vehicle_turnout_bmp1_1Actions {
			Stand = "rhs_vehicle_turnout_bmp1_1_Idle_Pistol";
			upDegree = "ManPosHandGunStand";
			stop = "rhs_vehicle_turnout_bmp1_1_Idle_Pistol";
			stopRelaxed = "rhs_vehicle_turnout_bmp1_1_Idle_Pistol";
			default = "rhs_vehicle_turnout_bmp1_1_Idle_Pistol";
			Combat = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol";
			fireNotPossible = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol";
			PlayerStand = "rhs_vehicle_turnout_bmp1_1_Aim_Pistol";
			die = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
			Unconscious = "rhs_vehicle_turnout_bmp1_1_Die_Pistol";
		};


		class rhs_passenger_inside_6Actions : FFV_BaseActions {
			upDegree = "ManPosCombat";
			stop = "rhs_passenger_inside_6_Aim";
			stopRelaxed = "rhs_passenger_inside_6_Aim";
			default = "rhs_passenger_inside_6_Aim";
			Stand = "rhs_passenger_inside_6_Idle";
			HandGunOn = "rhs_passenger_inside_6_Aim_Pistol";
			PrimaryWeapon = "rhs_passenger_inside_6_Idle_Unarmed";
			Binoculars = "rhs_passenger_inside_6_Aim_Binoc";
			die = "rhs_passenger_inside_6_Die";
			Unconscious = "rhs_passenger_inside_6_Die";
			civil = "rhs_passenger_inside_6_Idle_Unarmed";
			Obstructed = "rhs_passenger_inside_6_Obstructed";
		};
		class rhs_passenger_inside_6IdleUnarmedActions : FFV_BaseActions {
			upDegree = "ManPosNoWeapon";
			stop = "rhs_passenger_inside_6_Idle_Unarmed";
			stopRelaxed = "rhs_passenger_inside_6_Idle_Unarmed";
			default = "rhs_passenger_inside_6_Idle_Unarmed";
			Stand = "rhs_passenger_inside_6_Idle_Unarmed";
			HandGunOn = "rhs_passenger_inside_6_Idle_Unarmed";
			PrimaryWeapon = "rhs_passenger_inside_6_Idle_Unarmed";
			Binoculars = "rhs_passenger_inside_6_Aim_Unarmed_Binoc";
			die = "rhs_passenger_inside_6_Die_Pistol";
			Unconscious = "rhs_passenger_inside_6_Die_Pistol";
			civil = "rhs_passenger_inside_6_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
		};
		class rhs_passenger_inside_6PistolActions : rhs_passenger_inside_6Actions {
			upDegree = "ManPosHandGunStand";
			stop = "rhs_passenger_inside_6_Aim_Pistol";
			stopRelaxed = "rhs_passenger_inside_6_Aim_Pistol";
			default = "rhs_passenger_inside_6_Aim_Pistol";
			Binoculars = "rhs_passenger_inside_6_Aim_Pistol_Binoc";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Stand = "rhs_passenger_inside_6_Idle_Pistol";
			die = "rhs_passenger_inside_6_Die_Pistol";
			Unconscious = "rhs_passenger_inside_6_Die_Pistol";
			Obstructed = "rhs_passenger_inside_6_Obstructed_Pistol";
		};
		class rhs_passenger_inside_6BinocActions : rhs_passenger_inside_6Actions {
			binocOn = "";
			upDegree = "ManPosBinocStand";
			stop = "rhs_passenger_inside_6_Aim_Binoc";
			stopRelaxed = "rhs_passenger_inside_6_Aim_Binoc";
			default = "rhs_passenger_inside_6_Aim_Binoc";
		};
		class rhs_passenger_inside_6BinocUnarmedActions : rhs_passenger_inside_6BinocActions {
			stop = "rhs_passenger_inside_6_Aim_Unarmed_Binoc";
			stopRelaxed = "rhs_passenger_inside_6_Aim_Unarmed_Binoc";
			default = "rhs_passenger_inside_6_Aim_Unarmed_Binoc";
			die = "rhs_passenger_inside_6_Die_Pistol";
			Unconscious = "rhs_passenger_inside_6_Die_Pistol";
		};
		class rhs_passenger_inside_6IdleActions : rhs_passenger_inside_6Actions {
			upDegree = "ManPosStand";
			stop = "rhs_passenger_inside_6_Idle";
			stopRelaxed = "rhs_passenger_inside_6_Idle";
			default = "rhs_passenger_inside_6_Idle";
			Combat = "rhs_passenger_inside_6_Aim";
			fireNotPossible = "rhs_passenger_inside_6_Aim";
			PlayerStand = "rhs_passenger_inside_6_Aim";
		};
		class rhs_passenger_inside_6DeadActions : FFV_BaseActions {
			stop = "rhs_passenger_inside_6_Die";
			default = "rhs_passenger_inside_6_Die";
			die = "rhs_passenger_inside_6_Die";
			Unconscious = "rhs_passenger_inside_6_Die";
		};
		class rhs_passenger_inside_6DeadPistolActions : FFV_BaseActions {
			stop = "rhs_passenger_inside_6_Die_Pistol";
			default = "rhs_passenger_inside_6_Die_Pistol";
			die = "rhs_passenger_inside_6_Die_Pistol";
			Unconscious = "rhs_passenger_inside_6_Die_Pistol";
		};
		class rhs_passenger_inside_6BinocPistolActions : rhs_passenger_inside_6BinocActions {
			stop = "rhs_passenger_inside_6_Aim_Pistol_Binoc";
			stopRelaxed = "rhs_passenger_inside_6_Aim_Pistol_Binoc";
			default = "rhs_passenger_inside_6_Aim_Pistol_Binoc";
			die = "rhs_passenger_inside_6_Die_Pistol";
			Unconscious = "rhs_passenger_inside_6_Die_Pistol";
		};
		class rhs_passenger_inside_6IdlePistolActions : rhs_passenger_inside_6Actions {
			Stand = "rhs_passenger_inside_6_Idle_Pistol";
			upDegree = "ManPosHandGunStand";
			stop = "rhs_passenger_inside_6_Idle_Pistol";
			stopRelaxed = "rhs_passenger_inside_6_Idle_Pistol";
			default = "rhs_passenger_inside_6_Idle_Pistol";
			Combat = "rhs_passenger_inside_6_Aim_Pistol";
			fireNotPossible = "rhs_passenger_inside_6_Aim_Pistol";
			PlayerStand = "rhs_passenger_inside_6_Aim_Pistol";
			die = "rhs_passenger_inside_6_Die_Pistol";
			Unconscious = "rhs_passenger_inside_6_Die_Pistol";
		};
		class rhs_passenger_inside_6ObstructedActions : rhs_passenger_inside_6Actions {
			stop = "rhs_passenger_inside_6_Obstructed";
			stopRelaxed = "rhs_passenger_inside_6_Obstructed";
			default = "rhs_passenger_inside_6_Obstructed";
			Combat = "rhs_passenger_inside_6_Aim";
			fireNotPossible = "rhs_passenger_inside_6_Obstructed";
			PlayerStand = "rhs_passenger_inside_6_Obstructed";
		};
		class rhs_passenger_inside_6ObstructedPistolActions : rhs_passenger_inside_6PistolActions {
			Stand = "rhs_passenger_inside_6_Obstructed_Pistol";
			stop = "rhs_passenger_inside_6_Obstructed_Pistol";
			stopRelaxed = "rhs_passenger_inside_6_Obstructed_Pistol";
			default = "rhs_passenger_inside_6_Obstructed_Pistol";
			Combat = "rhs_passenger_inside_6_Aim_Pistol";
			fireNotPossible = "rhs_passenger_inside_6_Obstructed_Pistol";
			PlayerStand = "rhs_passenger_inside_6_Obstructed_Pistol";
		};
	};
};

#define AnimD(name) 	class KIA_RHS_##name##: KIA_RHS_BMP3_Commander {\
				file = \rhsafrf\addons\rhs_bmp3\anim\KIA_##name##.rtm;\
			};
#define Anim(name,nameD) class RHS_##name##: Crew\
			{\
				file = \rhsafrf\addons\rhs_bmp3\anim\##name##.rtm;\
				interpolateTo[] = {KIA_RHS_##nameD##,1};\
			};
#define Anim2(name,nameD) class RHS_##name##: rhs_crew_in\
			{\
				file = \rhsafrf\addons\rhs_bmp3\anim\##name##.rtm;\
				interpolateTo[] = {KIA_RHS_##nameD##,1};\
			};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class rhs_crew_in: Default
		{
			actions = "CargoActions";
			aiming = "aimingNo";
			aimingBody = "aimingNo";
			legs = "legsNo";
			head = "headNo";
			disableWeapons = 1;
			interpolationRestart = 1;
			soundEdge[] = {0.45};
			//seems that bounding Sphere is crucial to hit detection
			boundingSphere = 2.5;
			canPullTrigger = 0;
			leaning = "crewShake";
			rightHandIKCurve[] = {1};
			leftHandIKCurve[] = {1};
			rightLegIKCurve[] = {1};
			leftLegIKCurve[] = {1};
			ConnectTo[] = {};
			InterpolateTo[] = {"Unconscious",0.1};
		};

		class KIA_RHS_BMP3_Commander: DefaultDie
		{
			actions = "DeadActions";
			file = "rhsafrf\addons\rhs_bmp3\anim\KIA_BMP3_Commander.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		AnimD(BMP3_Gunner)
		AnimD(BMP3_Gunner02)
		AnimD(BMP3_Gunner03)
		AnimD(BMP3_Gunner_Out)
		AnimD(BMP3_Commander_Out)
		AnimD(BMP3_Driver)
		AnimD(BMP3_Driver_Out)

		Anim2(BMP3_Gunner,BMP3_Gunner)
		Anim(BMP3_Gunner_Out,BMP3_Gunner)
		Anim(BMP3_Gunner02,BMP3_Gunner02)
		Anim(BMP3_Gunner03,BMP3_Gunner03)
		Anim2(BMP3_Commander,BMP3_Commander)
		Anim(BMP3_Commander_Out,BMP3_Commander)
		Anim(BMP3_Driver,BMP3_Commander)
		Anim(BMP3_Driver_Out,BMP3_Commander)

		class RHS_KIA_BMP3_Cargo01: KIA_RHS_BMP3_Driver
		{
			file = "\rhsafrf\addons\rhs_bmp3\anim\KIA_BMP3_Cargo01.rtm";
		};
		class RHS_BMP3_Cargo01: Crew
		{
			file = "\rhsafrf\addons\rhs_bmp3\anim\BMP3_Cargo01_V0.rtm";
			interpolateTo[] = {"RHS_KIA_BMP3_Cargo01",0.1};
			connectTo[] = {"RHS_BMP3_Cargo01",0.1,"RHS_BMP3_Cargo01_V1",0.1,"RHS_BMP3_Cargo01_V2",0.1,"RHS_BMP3_Cargo01_V3",0.1,"RHS_BMP3_Cargo01_V4",0.1};
			equivalentTo = "RHS_BMP3_Cargo01";
			variantsAI[] = {"RHS_BMP3_Cargo01",0.6,"RHS_BMP3_Cargo01_V1",0.1,"RHS_BMP3_Cargo01_V2",0.1,"RHS_BMP3_Cargo01_V3",0.1,"RHS_BMP3_Cargo01_V4",0.1};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class RHS_BMP3_Cargo01_V1: RHS_BMP3_Cargo01
		{
			file = "\rhsafrf\addons\rhs_bmp3\anim\BMP3_Cargo01_V1.rtm";
			connectTo[] = {"RHS_BMP3_Cargo01",0.1};
			speed = 0.236;
			variantAfter[] = {4,4,4};
		};
		class RHS_BMP3_Cargo01_V2: RHS_BMP3_Cargo01
		{
			file = "\rhsafrf\addons\rhs_bmp3\anim\BMP3_Cargo01_V2.rtm";
			connectTo[] = {"RHS_BMP3_Cargo01",0.1};
			speed = 0.169;
			variantAfter[] = {6,6,6};
		};
		class RHS_BMP3_Cargo01_V3: RHS_BMP3_Cargo01
		{
			file = "\rhsafrf\addons\rhs_bmp3\anim\BMP3_Cargo01_V3.rtm";
			connectTo[] = {"RHS_BMP3_Cargo01",0.1};
			speed = 0.197;
			variantAfter[] = {5,5,5};
		};
		class RHS_BMP3_Cargo01_V4: RHS_BMP3_Cargo01
		{
			file = "\rhsafrf\addons\rhs_bmp3\anim\BMP3_Cargo01_V4.rtm";
			connectTo[] = {"RHS_BMP3_Cargo01",0.1};
			speed = 0.197;
			variantAfter[] = {5,5,5};
		};

		class vehicle_turnout_1_Aim_Pistol;
		class vehicle_turnout_1_Aim_Pistol_Idling;
		class vehicle_turnout_1_Idle_Pistol;
		class vehicle_turnout_1_Idle_Pistol_Idling;
		class vehicle_turnout_1_Aim_ToPistol;
		class vehicle_turnout_1_Aim_ToPistol_End ;
		class vehicle_turnout_1_Aim_FromPistol;
		class vehicle_turnout_1_Aim_FromPistol_End;
		class vehicle_turnout_1_Aim_Binoc;
		class vehicle_turnout_1_Aim_Pistol_Binoc;
		class vehicle_turnout_1_Aim_ToBinoc;
		class vehicle_turnout_1_Aim_ToBinoc_End;
		class vehicle_turnout_1_Aim_FromBinoc;
		class vehicle_turnout_1_Aim_FromBinoc_End;
		class vehicle_turnout_1_Aim_Pistol_ToBinoc;
		class vehicle_turnout_1_Aim_Pistol_ToBinoc_End;
		class vehicle_turnout_1_Aim_Pistol_FromBinoc;
		class vehicle_turnout_1_Aim_Pistol_FromBinoc_End;
		class vehicle_turnout_1_Idle_Unarmed;
		class vehicle_turnout_1_Idle_Unarmed_Idling;
		class vehicle_turnout_1_Aim_Unarmed_Binoc;
		class vehicle_turnout_1_Aim_Unarmed_ToBinoc;
		class vehicle_turnout_1_Aim_Unarmed_ToBinoc_End;
		class vehicle_turnout_1_Aim_Unarmed_FromBinoc;
		class vehicle_turnout_1_Aim_Unarmed_FromBinoc_End;
		class vehicle_turnout_1_Die;
		class vehicle_turnout_1_Die_Pistol;


		class rhs_vehicle_turnout_1_Aim_Pistol : vehicle_turnout_1_Aim_Pistol {
			actions = "rhs_vehicle_turnout_1PistolActions";
			variantsAI[] = {"rhs_vehicle_turnout_1_Aim_Pistol_Idling", 1};
			variantsPlayer[] = {"rhs_vehicle_turnout_1_Aim_Pistol_Idling", 1};
			ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Pistol_ToBinoc", 0.1};
			InterpolateTo[] = {"rhs_vehicle_turnout_1_Aim_FromPistol", 0.1, "rhs_vehicle_turnout_1_Idle_Pistol", 0.2, "rhs_vehicle_turnout_1_Idle_Unarmed", 0.2, "rhs_vehicle_turnout_1_Die_Pistol", 0.5};
		};
		class rhs_vehicle_turnout_1_Aim_Pistol_Idling : vehicle_turnout_1_Aim_Pistol_Idling {
			ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Pistol", 0.1};
			InterpolateTo[] = {"rhs_vehicle_turnout_1_Aim_FromPistol", 0.1, "rhs_vehicle_turnout_1_Idle_Pistol", 0.2, "rhs_vehicle_turnout_1_Idle_Unarmed", 0.2, "rhs_vehicle_turnout_1_Die_Pistol", 0.5};
		};
		class rhs_vehicle_turnout_1_Idle_Pistol : vehicle_turnout_1_Idle_Pistol {
			actions = "rhs_vehicle_turnout_1IdlePistolActions";
			InterpolateTo[] = {"rhs_vehicle_turnout_1_Aim_Pistol", 0.1, "rhs_vehicle_turnout_1_Aim_FromPistol", 0.1, "rhs_vehicle_turnout_1_Idle_Unarmed", 0.1, "rhs_vehicle_turnout_1_Die_Pistol", 0.1};
			variantsAI[] = {"rhs_vehicle_turnout_1_Idle_Pistol_Idling", 1};
			variantsPlayer[] = {"rhs_vehicle_turnout_1_Idle_Pistol_Idling", 1};
		};
		class rhs_vehicle_turnout_1_Idle_Pistol_Idling : vehicle_turnout_1_Idle_Pistol_Idling {
			ConnectTo[] = {"rhs_vehicle_turnout_1_Idle_Pistol", 0.1};
			InterpolateTo[] = {"rhs_vehicle_turnout_1_Aim_Pistol", 0.1, "rhs_vehicle_turnout_1_Aim_FromPistol", 0.1, "rhs_vehicle_turnout_1_Idle_Unarmed", 0.1, "rhs_vehicle_turnout_1_Die_Pistol", 0.1};
		};
		class rhs_vehicle_turnout_1_Aim_ToPistol : vehicle_turnout_1_Aim_ToPistol {
			actions = "rhs_vehicle_turnout_1PistolActions";
			ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_ToPistol_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_1_Aim_ToPistol_End : vehicle_turnout_1_Aim_ToPistol_End {
			actions = "rhs_vehicle_turnout_1PistolActions";
			ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Pistol", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_1_Aim_FromPistol : vehicle_turnout_1_Aim_FromPistol {
			actions = "rhs_vehicle_turnout_1PistolActions";
			ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_FromPistol_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_1_Aim_FromPistol_End : vehicle_turnout_1_Aim_FromPistol_End {
			actions = "rhs_vehicle_turnout_1Actions";
			ConnectTo[] = {"rhs_vehicle_turnout_1_Idle_Unarmed", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_1_Aim_Binoc : vehicle_turnout_1_Aim_Binoc {
			actions = "rhs_vehicle_turnout_1BinocActions";
			InterpolateTo[] = {"rhs_vehicle_turnout_1_Aim_FromBinoc", 0.1, "rhs_vehicle_turnout_1_Die", 0.1};
		};
		class rhs_vehicle_turnout_1_Aim_Pistol_Binoc : vehicle_turnout_1_Aim_Pistol_Binoc {
			actions = "rhs_vehicle_turnout_1BinocPistolActions";
			InterpolateTo[] = {"rhs_vehicle_turnout_1_Aim_Pistol_FromBinoc", 0.1, "rhs_vehicle_turnout_1_Die_Pistol", 0.1};
		};
		class rhs_vehicle_turnout_1_Aim_ToBinoc : vehicle_turnout_1_Aim_ToBinoc {
			actions = "rhs_vehicle_turnout_1BinocActions";
			ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_ToBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_1_Aim_ToBinoc_End : vehicle_turnout_1_Aim_ToBinoc_End {
			actions = "rhs_vehicle_turnout_1BinocActions";
			ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Binoc", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_1_Aim_FromBinoc : vehicle_turnout_1_Aim_FromBinoc {
			actions = "rhs_vehicle_turnout_1BinocActions";
			ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_FromBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_1_Aim_FromBinoc_End : vehicle_turnout_1_Aim_FromBinoc_End {
			actions = "rhs_vehicle_turnout_1Actions";
			ConnectTo[] = {"rhs_vehicle_turnout_1_Idle_Unarmed", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_1_Aim_Pistol_ToBinoc : vehicle_turnout_1_Aim_Pistol_ToBinoc {
			actions = "rhs_vehicle_turnout_1BinocActions";
			ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Pistol_ToBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_1_Aim_Pistol_ToBinoc_End : vehicle_turnout_1_Aim_Pistol_ToBinoc_End {
			actions = "rhs_vehicle_turnout_1BinocActions";
			ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Pistol_Binoc", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_1_Aim_Pistol_FromBinoc : vehicle_turnout_1_Aim_Pistol_FromBinoc {
			actions = "rhs_vehicle_turnout_1BinocActions";
			ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Pistol_FromBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_1_Aim_Pistol_FromBinoc_End : vehicle_turnout_1_Aim_Pistol_FromBinoc_End {
			actions = "rhs_vehicle_turnout_1Actions";
			ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Pistol", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_1_Idle_Unarmed : vehicle_turnout_1_Idle_Unarmed {
			file = "\rhsafrf\addons\rhs_c_bmp3\anims\bmd4_commander_out.rtm";
			showWeaponAim = 0;
			actions = "rhs_vehicle_turnout_1IdleUnarmedActions";
			InterpolateTo[] = {"rhs_vehicle_turnout_1_Aim_FromPistol_End", 0.1, "rhs_vehicle_turnout_1_Aim_ToPistol_End", 0.1, "rhs_vehicle_turnout_1_Aim_Unarmed_ToBinoc", 0.1, "rhs_vehicle_turnout_1_Die_Pistol", 0.1};
			variantsAI[] = {"rhs_vehicle_turnout_1_Idle_Unarmed_Idling", 1};
			variantsPlayer[] = {"rhs_vehicle_turnout_1_Idle_Unarmed_Idling", 1};
		};
		class rhs_vehicle_turnout_1_Idle_Unarmed_Idling : vehicle_turnout_1_Idle_Unarmed_Idling {
			file = "\rhsafrf\addons\rhs_c_bmp3\anims\bmd4_commander_out.rtm";
			showWeaponAim = 0;
			variantsPlayer[] = {};
			ConnectTo[] = {"rhs_vehicle_turnout_1_Idle_Unarmed", 0.1};
			InterpolateTo[] = {"rhs_vehicle_turnout_1_Aim_FromPistol_End", 0.1, "rhs_vehicle_turnout_1_Aim_ToPistol_End", 0.1, "rhs_vehicle_turnout_1_Aim_Unarmed_ToBinoc", 0.1, "rhs_vehicle_turnout_1_Die_Pistol", 0.1};
		};
		class rhs_vehicle_turnout_1_Aim_Unarmed_Binoc : vehicle_turnout_1_Aim_Unarmed_Binoc {
			actions = "rhs_vehicle_turnout_1BinocUnarmedActions";
			//ConnectTo[] = {"rhs_vehicle_turnout_1_Idle_Unarmed", 0.1};
			InterpolateTo[] = {"rhs_vehicle_turnout_1_Aim_Unarmed_FromBinoc", 0.1, "rhs_vehicle_turnout_1_Die_Pistol", 0.1};
		};
		class rhs_vehicle_turnout_1_Aim_Unarmed_ToBinoc : vehicle_turnout_1_Aim_Unarmed_ToBinoc {
			actions = "rhs_vehicle_turnout_1BinocUnarmedActions";
			ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Unarmed_ToBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_1_Aim_Unarmed_ToBinoc_End : vehicle_turnout_1_Aim_Unarmed_ToBinoc_End {
			file="\rhsafrf\addons\rhs_bmp3\anim\commander_binoc2.rtm";
			actions = "rhs_vehicle_turnout_1BinocUnarmedActions";
			ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Unarmed_Binoc", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_1_Aim_Unarmed_FromBinoc : vehicle_turnout_1_Aim_Unarmed_FromBinoc {
			actions = "rhs_vehicle_turnout_1BinocUnarmedActions";
			ConnectTo[] = {"rhs_vehicle_turnout_1_Aim_Unarmed_FromBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_1_Aim_Unarmed_FromBinoc_End : vehicle_turnout_1_Aim_Unarmed_FromBinoc_End {
			actions = "rhs_vehicle_turnout_1Actions";
			ConnectTo[] = {"rhs_vehicle_turnout_1_Idle_Unarmed", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_1_Die : vehicle_turnout_1_Die {
			actions = "rhs_vehicle_turnout_1DeadActions";
			ConnectTo[] = {"Unconscious", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_1_Die_Pistol : vehicle_turnout_1_Die_Pistol {
			actions = "rhs_vehicle_turnout_1DeadPistolActions";
			showHandGun = 1;
		};

		class rhs_vehicle_turnout_sprut_1_Aim_Pistol : vehicle_turnout_1_Aim_Pistol {
			actions = "rhs_vehicle_turnout_sprut_1PistolActions";
			variantsAI[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol_Idling", 1};
			variantsPlayer[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol_Idling", 1};
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol_ToBinoc", 0.1};
			InterpolateTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_FromPistol", 0.1, "rhs_vehicle_turnout_sprut_1_Idle_Pistol", 0.2, "rhs_vehicle_turnout_sprut_1_Idle_Unarmed", 0.2, "rhs_vehicle_turnout_sprut_1_Die_Pistol", 0.5};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_Pistol_Idling : vehicle_turnout_1_Aim_Pistol_Idling {
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol", 0.1};
			InterpolateTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_FromPistol", 0.1, "rhs_vehicle_turnout_sprut_1_Idle_Pistol", 0.2, "rhs_vehicle_turnout_sprut_1_Idle_Unarmed", 0.2, "rhs_vehicle_turnout_sprut_1_Die_Pistol", 0.5};
		};
		class rhs_vehicle_turnout_sprut_1_Idle_Pistol : vehicle_turnout_1_Idle_Pistol {
			actions = "rhs_vehicle_turnout_sprut_1IdlePistolActions";
			InterpolateTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol", 0.1, "rhs_vehicle_turnout_sprut_1_Aim_FromPistol", 0.1, "rhs_vehicle_turnout_sprut_1_Idle_Unarmed", 0.1, "rhs_vehicle_turnout_sprut_1_Die_Pistol", 0.1};
			variantsAI[] = {"rhs_vehicle_turnout_sprut_1_Idle_Pistol_Idling", 1};
			variantsPlayer[] = {"rhs_vehicle_turnout_sprut_1_Idle_Pistol_Idling", 1};
		};
		class rhs_vehicle_turnout_sprut_1_Idle_Pistol_Idling : vehicle_turnout_1_Idle_Pistol_Idling {
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Idle_Pistol", 0.1};
			InterpolateTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol", 0.1, "rhs_vehicle_turnout_sprut_1_Aim_FromPistol", 0.1, "rhs_vehicle_turnout_sprut_1_Idle_Unarmed", 0.1, "rhs_vehicle_turnout_sprut_1_Die_Pistol", 0.1};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_ToPistol : vehicle_turnout_1_Aim_ToPistol {
			actions = "rhs_vehicle_turnout_sprut_1PistolActions";
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_ToPistol_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_ToPistol_End : vehicle_turnout_1_Aim_ToPistol_End {
			actions = "rhs_vehicle_turnout_sprut_1PistolActions";
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_FromPistol : vehicle_turnout_1_Aim_FromPistol {
			actions = "rhs_vehicle_turnout_sprut_1PistolActions";
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_FromPistol_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_FromPistol_End : vehicle_turnout_1_Aim_FromPistol_End {
			actions = "rhs_vehicle_turnout_sprut_1Actions";
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Idle_Unarmed", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_Binoc : vehicle_turnout_1_Aim_Binoc {
			actions = "rhs_vehicle_turnout_sprut_1BinocActions";
			InterpolateTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_FromBinoc", 0.1, "rhs_vehicle_turnout_sprut_1_Die", 0.1};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_Pistol_Binoc : vehicle_turnout_1_Aim_Pistol_Binoc {
			actions = "rhs_vehicle_turnout_sprut_1BinocPistolActions";
			InterpolateTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol_FromBinoc", 0.1, "rhs_vehicle_turnout_sprut_1_Die_Pistol", 0.1};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_ToBinoc : vehicle_turnout_1_Aim_ToBinoc {
			actions = "rhs_vehicle_turnout_sprut_1BinocActions";
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_ToBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_ToBinoc_End : vehicle_turnout_1_Aim_ToBinoc_End {
			actions = "rhs_vehicle_turnout_sprut_1BinocActions";
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Binoc", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_FromBinoc : vehicle_turnout_1_Aim_FromBinoc {
			actions = "rhs_vehicle_turnout_sprut_1BinocActions";
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_FromBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_FromBinoc_End : vehicle_turnout_1_Aim_FromBinoc_End {
			actions = "rhs_vehicle_turnout_sprut_1Actions";
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Idle_Unarmed", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_Pistol_ToBinoc : vehicle_turnout_1_Aim_Pistol_ToBinoc {
			actions = "rhs_vehicle_turnout_sprut_1BinocActions";
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol_ToBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_Pistol_ToBinoc_End : vehicle_turnout_1_Aim_Pistol_ToBinoc_End {
			actions = "rhs_vehicle_turnout_sprut_1BinocActions";
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol_Binoc", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_Pistol_FromBinoc : vehicle_turnout_1_Aim_Pistol_FromBinoc {
			actions = "rhs_vehicle_turnout_sprut_1BinocActions";
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol_FromBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_Pistol_FromBinoc_End : vehicle_turnout_1_Aim_Pistol_FromBinoc_End {
			actions = "rhs_vehicle_turnout_sprut_1Actions";
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Pistol", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_sprut_1_Idle_Unarmed : vehicle_turnout_1_Idle_Unarmed {
			file = "\rhsafrf\addons\rhs_c_bmp3\anims\2s25_commander_out.rtm";
			showWeaponAim = 0;
			actions = "rhs_vehicle_turnout_sprut_1IdleUnarmedActions";
			InterpolateTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_FromPistol_End", 0.1, "rhs_vehicle_turnout_sprut_1_Aim_ToPistol_End", 0.1, "rhs_vehicle_turnout_sprut_1_Aim_Unarmed_ToBinoc", 0.1, "rhs_vehicle_turnout_sprut_1_Die_Pistol", 0.1};
			variantsAI[] = {"rhs_vehicle_turnout_sprut_1_Idle_Unarmed_Idling", 1};
			variantsPlayer[] = {"rhs_vehicle_turnout_sprut_1_Idle_Unarmed_Idling", 1};
		};
		class rhs_vehicle_turnout_sprut_1_Idle_Unarmed_Idling : vehicle_turnout_1_Idle_Unarmed_Idling {
			file = "\rhsafrf\addons\rhs_c_bmp3\anims\2s25_commander_out.rtm";
			showWeaponAim = 0;
			variantsPlayer[] = {};
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Idle_Unarmed", 0.1};
			InterpolateTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_FromPistol_End", 0.1, "rhs_vehicle_turnout_sprut_1_Aim_ToPistol_End", 0.1, "rhs_vehicle_turnout_sprut_1_Aim_Unarmed_ToBinoc", 0.1, "rhs_vehicle_turnout_sprut_1_Die_Pistol", 0.1};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_Unarmed_Binoc : vehicle_turnout_1_Aim_Unarmed_Binoc {
			actions = "rhs_vehicle_turnout_sprut_1BinocUnarmedActions";
			//ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Idle_Unarmed", 0.1};
			InterpolateTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Unarmed_FromBinoc", 0.1, "rhs_vehicle_turnout_sprut_1_Die_Pistol", 0.1};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_Unarmed_ToBinoc : vehicle_turnout_1_Aim_Unarmed_ToBinoc {
			actions = "rhs_vehicle_turnout_sprut_1BinocUnarmedActions";
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Unarmed_ToBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_Unarmed_ToBinoc_End : vehicle_turnout_1_Aim_Unarmed_ToBinoc_End {
			file="\rhsafrf\addons\rhs_bmp3\anim\commander_binoc2.rtm";
			actions = "rhs_vehicle_turnout_sprut_1BinocUnarmedActions";
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Unarmed_Binoc", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_Unarmed_FromBinoc : vehicle_turnout_1_Aim_Unarmed_FromBinoc {
			actions = "rhs_vehicle_turnout_sprut_1BinocUnarmedActions";
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Aim_Unarmed_FromBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_sprut_1_Aim_Unarmed_FromBinoc_End : vehicle_turnout_1_Aim_Unarmed_FromBinoc_End {
			actions = "rhs_vehicle_turnout_sprut_1Actions";
			ConnectTo[] = {"rhs_vehicle_turnout_sprut_1_Idle_Unarmed", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_sprut_1_Die : vehicle_turnout_1_Die {
			actions = "rhs_vehicle_turnout_sprut_1DeadActions";
			ConnectTo[] = {"Unconscious", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_sprut_1_Die_Pistol : vehicle_turnout_1_Die_Pistol {
			actions = "rhs_vehicle_turnout_sprut_1DeadPistolActions";
			showHandGun = 1;
		};

		class rhs_vehicle_turnout_bmp1_1_Aim_Pistol : vehicle_turnout_1_Aim_Pistol {
			actions = "rhs_vehicle_turnout_bmp1_1PistolActions";
			variantsAI[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Idling", 1};
			variantsPlayer[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Idling", 1};
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol_ToBinoc", 0.1};
			InterpolateTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_FromPistol", 0.1, "rhs_vehicle_turnout_bmp1_1_Idle_Pistol", 0.2, "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed", 0.2, "rhs_vehicle_turnout_bmp1_1_Die_Pistol", 0.5};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Idling : vehicle_turnout_1_Aim_Pistol_Idling {
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol", 0.1};
			InterpolateTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_FromPistol", 0.1, "rhs_vehicle_turnout_bmp1_1_Idle_Pistol", 0.2, "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed", 0.2, "rhs_vehicle_turnout_bmp1_1_Die_Pistol", 0.5};
		};
		class rhs_vehicle_turnout_bmp1_1_Idle_Pistol : vehicle_turnout_1_Idle_Pistol {
			actions = "rhs_vehicle_turnout_bmp1_1IdlePistolActions";
			InterpolateTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol", 0.1, "rhs_vehicle_turnout_bmp1_1_Aim_FromPistol", 0.1, "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed", 0.1, "rhs_vehicle_turnout_bmp1_1_Die_Pistol", 0.1};
			variantsAI[] = {"rhs_vehicle_turnout_bmp1_1_Idle_Pistol_Idling", 1};
			variantsPlayer[] = {"rhs_vehicle_turnout_bmp1_1_Idle_Pistol_Idling", 1};
		};
		class rhs_vehicle_turnout_bmp1_1_Idle_Pistol_Idling : vehicle_turnout_1_Idle_Pistol_Idling {
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Idle_Pistol", 0.1};
			InterpolateTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol", 0.1, "rhs_vehicle_turnout_bmp1_1_Aim_FromPistol", 0.1, "rhs_vehicle_turnout_bmp1_1_Idle_Unarmed", 0.1, "rhs_vehicle_turnout_bmp1_1_Die_Pistol", 0.1};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_ToPistol : vehicle_turnout_1_Aim_ToPistol {
			actions = "rhs_vehicle_turnout_bmp1_1PistolActions";
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_ToPistol_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_ToPistol_End : vehicle_turnout_1_Aim_ToPistol_End {
			actions = "rhs_vehicle_turnout_bmp1_1PistolActions";
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_FromPistol : vehicle_turnout_1_Aim_FromPistol {
			actions = "rhs_vehicle_turnout_bmp1_1PistolActions";
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_FromPistol_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_FromPistol_End : vehicle_turnout_1_Aim_FromPistol_End {
			actions = "rhs_vehicle_turnout_bmp1_1Actions";
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Idle_Unarmed", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_Binoc : vehicle_turnout_1_Aim_Binoc {
			actions = "rhs_vehicle_turnout_bmp1_1BinocActions";
			InterpolateTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_FromBinoc", 0.1, "rhs_vehicle_turnout_bmp1_1_Die", 0.1};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Binoc : vehicle_turnout_1_Aim_Pistol_Binoc {
			actions = "rhs_vehicle_turnout_bmp1_1BinocPistolActions";
			InterpolateTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol_FromBinoc", 0.1, "rhs_vehicle_turnout_bmp1_1_Die_Pistol", 0.1};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_ToBinoc : vehicle_turnout_1_Aim_ToBinoc {
			actions = "rhs_vehicle_turnout_bmp1_1BinocActions";
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_ToBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_ToBinoc_End : vehicle_turnout_1_Aim_ToBinoc_End {
			actions = "rhs_vehicle_turnout_bmp1_1BinocActions";
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Binoc", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_FromBinoc : vehicle_turnout_1_Aim_FromBinoc {
			actions = "rhs_vehicle_turnout_bmp1_1BinocActions";
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_FromBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_FromBinoc_End : vehicle_turnout_1_Aim_FromBinoc_End {
			actions = "rhs_vehicle_turnout_bmp1_1Actions";
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Idle_Unarmed", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_Pistol_ToBinoc : vehicle_turnout_1_Aim_Pistol_ToBinoc {
			actions = "rhs_vehicle_turnout_bmp1_1BinocActions";
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol_ToBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_Pistol_ToBinoc_End : vehicle_turnout_1_Aim_Pistol_ToBinoc_End {
			actions = "rhs_vehicle_turnout_bmp1_1BinocActions";
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol_Binoc", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_Pistol_FromBinoc : vehicle_turnout_1_Aim_Pistol_FromBinoc {
			actions = "rhs_vehicle_turnout_bmp1_1BinocActions";
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol_FromBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_Pistol_FromBinoc_End : vehicle_turnout_1_Aim_Pistol_FromBinoc_End {
			actions = "rhs_vehicle_turnout_bmp1_1Actions";
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Pistol", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_bmp1_1_Idle_Unarmed : vehicle_turnout_1_Idle_Unarmed {
			file = "\rhsafrf\addons\rhs_c_bmp3\anims\bmp1_commander_out.rtm";
			showWeaponAim = 0;
			actions = "rhs_vehicle_turnout_bmp1_1IdleUnarmedActions";
			InterpolateTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_FromPistol_End", 0.1, "rhs_vehicle_turnout_bmp1_1_Aim_ToPistol_End", 0.1, "rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_ToBinoc", 0.1, "rhs_vehicle_turnout_bmp1_1_Die_Pistol", 0.1};
			variantsAI[] = {"rhs_vehicle_turnout_bmp1_1_Idle_Unarmed_Idling", 1};
			variantsPlayer[] = {"rhs_vehicle_turnout_bmp1_1_Idle_Unarmed_Idling", 1};
		};
		class rhs_vehicle_turnout_bmp1_1_Idle_Unarmed_Idling : vehicle_turnout_1_Idle_Unarmed_Idling {
			file = "\rhsafrf\addons\rhs_c_bmp3\anims\bmp1_commander_out.rtm";
			showWeaponAim = 0;
			variantsPlayer[] = {};
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Idle_Unarmed", 0.1};
			InterpolateTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_FromPistol_End", 0.1, "rhs_vehicle_turnout_bmp1_1_Aim_ToPistol_End", 0.1, "rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_ToBinoc", 0.1, "rhs_vehicle_turnout_bmp1_1_Die_Pistol", 0.1};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_Binoc : vehicle_turnout_1_Aim_Unarmed_Binoc {
			actions = "rhs_vehicle_turnout_bmp1_1BinocUnarmedActions";
			//ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Idle_Unarmed", 0.1};
			InterpolateTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_FromBinoc", 0.1, "rhs_vehicle_turnout_bmp1_1_Die_Pistol", 0.1};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_ToBinoc : vehicle_turnout_1_Aim_Unarmed_ToBinoc {
			actions = "rhs_vehicle_turnout_bmp1_1BinocUnarmedActions";
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_ToBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_ToBinoc_End : vehicle_turnout_1_Aim_Unarmed_ToBinoc_End {
			file="\rhsafrf\addons\rhs_bmp3\anim\commander_binoc2.rtm";
			actions = "rhs_vehicle_turnout_bmp1_1BinocUnarmedActions";
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_Binoc", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_FromBinoc : vehicle_turnout_1_Aim_Unarmed_FromBinoc {
			actions = "rhs_vehicle_turnout_bmp1_1BinocUnarmedActions";
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_FromBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_bmp1_1_Aim_Unarmed_FromBinoc_End : vehicle_turnout_1_Aim_Unarmed_FromBinoc_End {
			actions = "rhs_vehicle_turnout_bmp1_1Actions";
			ConnectTo[] = {"rhs_vehicle_turnout_bmp1_1_Idle_Unarmed", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_bmp1_1_Die : vehicle_turnout_1_Die {
			actions = "rhs_vehicle_turnout_bmp1_1DeadActions";
			ConnectTo[] = {"Unconscious", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_vehicle_turnout_bmp1_1_Die_Pistol : vehicle_turnout_1_Die_Pistol {
			actions = "rhs_vehicle_turnout_bmp1_1DeadPistolActions";
			showHandGun = 1;
		};

		#include "anims\passenger_inside6.hpp"

	};
};