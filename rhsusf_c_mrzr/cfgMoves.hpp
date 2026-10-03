class CfgMovesBasic
{
	class DefaultDie;
	class BlendAnims;
	class ManActions
	{
		rhs_mrzr_driver = "rhs_mrzr_driver";
		rhs_mrzr_passenger = "rhs_mrzr_passenger_Idle";		
	};
	class Actions
	{
		class RifleStandActions;
		class FFV_BaseActions: RifleStandActions		/// Some base class definition, using a declaration (class FFV_BaseActions;)
		{
			AdjustF="";
			AdjustB="";
			AdjustL="";
			AdjustR="";
			AdjustLF="";
			AdjustLB="";
			AdjustRB="";
			AdjustRF="";
			agonyStart="";
			agonyStop="";
			medicStop="";
			medicStart="";
			medicStartUp="";
			medicStartRightSide="";
			GestureAgonyCargo="";
			grabCarry="";
			grabCarried="";
			grabDrag="";
			grabDragged="";
			carriedStill="";
			released="";
			releasedBad="";
			Stop="";
			StopRelaxed="";
			TurnL="";
			TurnR="";
			TurnLRelaxed="";
			TurnRRelaxed="";
			ReloadMagazine="";
			ReloadMGun="";
			ReloadRPG="ReloadRPG";
			ReloadMortar="";
			WalkF="";
			WalkLF="";
			WalkRF="";
			WalkL="";
			WalkR="";
			WalkLB="";
			WalkRB="";
			WalkB="";
			PlayerWalkF="";
			PlayerWalkLF="";
			PlayerWalkRF="";
			PlayerWalkL="";
			PlayerWalkR="";
			PlayerWalkLB="";
			PlayerWalkRB="";
			PlayerWalkB="";
			SlowF="";
			SlowLF="";
			SlowRF="";
			SlowL="";
			SlowR="";
			SlowLB="";
			SlowRB="";
			SlowB="";
			PlayerSlowF="";
			PlayerSlowLF="";
			PlayerSlowRF="";
			PlayerSlowL="";
			PlayerSlowR="";
			PlayerSlowLB="";
			PlayerSlowRB="";
			PlayerSlowB="";
			FastF="";
			FastLF="";
			FastRF="";
			FastL="";
			FastR="";
			FastLB="";
			FastRB="";
			FastB="";
			TactF="";
			TactLF="";
			TactRF="";
			TactL="";
			TactR="";
			TactLB="";
			TactRB="";
			TactB="";
			PlayerTactF="";
			PlayerTactLF="";
			PlayerTactRF="";
			PlayerTactL="";
			PlayerTactR="";
			PlayerTactLB="";
			PlayerTactRB="";
			PlayerTactB="";
			EvasiveLeft="";
			EvasiveRight="";
			startSwim="";
			surfaceSwim="";
			bottomSwim="";
			StopSwim="";
			startDive="";
			SurfaceDive="";
			BottomDive="";
			StopDive="";
			Down="";
			Up="";
			PlayerStand="";
			PlayerCrouch="";
			PlayerProne="";
			Lying="";
			Stand="";
			Combat="";
			Crouch="";
			CanNotMove="";
			Civil="";
			CivilLying="";
			FireNotPossible="";
			WeaponOn="";
			WeaponOff="";
			Default="";
			JumpOff="";
			StrokeFist="";
			StrokeGun="";
			SitDown="";
			Salute="";
			saluteOff="";
			GetOver="";
			Diary="";
			Surrender="";
			Gear="";
			BinocOn="";
			BinocOff="";
			PutDown="";
			PutDownEnd="";
			Medic="";
			MedicOther="";
			Treated="";
			LadderOnDown="";
			LadderOnUp="";
			LadderOff="";
			LadderOffTop="";
			LadderOffBottom="";
			PrimaryWeapon="";
			SecondaryWeapon="";
			Binoculars="";
		};
		class rhs_mrzr_passengerActions: FFV_BaseActions
		{
			upDegree = "ManPosCombat";
			stop = "rhs_mrzr_passenger_Aim";
			stopRelaxed = "rhs_mrzr_passenger_Aim";
			default = "rhs_mrzr_passenger_Aim";
			Stand = "rhs_mrzr_passenger_Idle";
			HandGunOn = "rhs_mrzr_passenger_Aim_Pistol";
			PrimaryWeapon = "rhs_mrzr_passenger_Aim";
			Binoculars = "rhs_mrzr_passenger_Aim_Binoc";
			die = "rhs_mrzr_passenger_Die";
			Unconscious = "rhs_mrzr_passenger_Die";
			civil = "rhs_mrzr_passenger_Idle_Unarmed";
			Obstructed = "rhs_mrzr_passenger_Obstructed";
		};
		class rhs_mrzr_passengerIdleUnarmedActions: FFV_BaseActions
		{
			upDegree = "ManPosNoWeapon";
			stop = "rhs_mrzr_passenger_Idle_Unarmed";
			stopRelaxed = "rhs_mrzr_passenger_Idle_Unarmed";
			default = "rhs_mrzr_passenger_Idle_Unarmed";
			Stand = "rhs_mrzr_passenger_Idle_Unarmed";
			HandGunOn = "rhs_mrzr_passenger_Aim_Pistol";
			PrimaryWeapon = "rhs_mrzr_passenger_Aim";
			Binoculars = "rhs_mrzr_passenger_Aim_Unarmed_Binoc";
			die = "rhs_mrzr_passenger_Die_Pistol";
			Unconscious = "rhs_mrzr_passenger_Die_Pistol";
			civil = "rhs_mrzr_passenger_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna", "Gesture"};
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
		};
		class rhs_mrzr_passengerDeadActions: FFV_BaseActions
		{
			stop = "rhs_mrzr_passenger_Die";
			default = "rhs_mrzr_passenger_Die";
			die = "rhs_mrzr_passenger_Die";
			Unconscious = "rhs_mrzr_passenger_Die";
		};
		class rhs_mrzr_passengerDeadPistolActions: FFV_BaseActions
		{
			stop = "rhs_mrzr_passenger_Die_Pistol";
			default = "rhs_mrzr_passenger_Die_Pistol";
			die = "rhs_mrzr_passenger_Die_Pistol";
			Unconscious = "rhs_mrzr_passenger_Die_Pistol";
		};
		class rhs_mrzr_passengerPistolActions: rhs_mrzr_passengerActions
		{
			upDegree = "ManPosHandGunStand";
			stop = "rhs_mrzr_passenger_Aim_Pistol";
			stopRelaxed = "rhs_mrzr_passenger_Aim_Pistol";
			default = "rhs_mrzr_passenger_Aim_Pistol";
			Binoculars = "rhs_mrzr_passenger_Aim_Pistol_Binoc";
			throwGrenade[] = {"GestureThrowGrenadePistol", "Gesture"};
			Stand = "rhs_mrzr_passenger_Idle_Pistol";
			die = "rhs_mrzr_passenger_Die_Pistol";
			Unconscious = "rhs_mrzr_passenger_Die_Pistol";
			Obstructed = "rhs_mrzr_passenger_Obstructed_Pistol";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
		};
		class rhs_mrzr_passengerBinocActions: rhs_mrzr_passengerActions
		{
			binocOn = "";
			upDegree = "ManPosBinocStand";
			stop = "rhs_mrzr_passenger_Aim_Binoc";
			stopRelaxed = "rhs_mrzr_passenger_Aim_Binoc";
			default = "rhs_mrzr_passenger_Aim_Binoc";
		};
		class rhs_mrzr_passengerBinocPistolActions: rhs_mrzr_passengerBinocActions
		{
			stop = "rhs_mrzr_passenger_Aim_Pistol_Binoc";
			stopRelaxed = "rhs_mrzr_passenger_Aim_Pistol_Binoc";
			default = "rhs_mrzr_passenger_Aim_Pistol_Binoc";
			die = "rhs_mrzr_passenger_Die_Pistol";
			Unconscious = "rhs_mrzr_passenger_Die_Pistol";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
		};
		class rhs_mrzr_passengerBinocUnarmedActions: rhs_mrzr_passengerBinocActions
		{
			stop = "rhs_mrzr_passenger_Aim_Unarmed_Binoc";
			stopRelaxed = "rhs_mrzr_passenger_Aim_Unarmed_Binoc";
			default = "rhs_mrzr_passenger_Aim_Unarmed_Binoc";
			die = "rhs_mrzr_passenger_Die_Pistol";
			Unconscious = "rhs_mrzr_passenger_Die_Pistol";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
		};
		class rhs_mrzr_passengerIdleActions: rhs_mrzr_passengerActions
		{
			upDegree = "ManPosStand";
			stop = "rhs_mrzr_passenger_Idle";
			stopRelaxed = "rhs_mrzr_passenger_Idle";
			default = "rhs_mrzr_passenger_Idle";
			Combat = "rhs_mrzr_passenger_Aim";
			fireNotPossible = "rhs_mrzr_passenger_Aim";
			PlayerStand = "rhs_mrzr_passenger_Aim";
		};
		class rhs_mrzr_passengerIdlePistolActions: rhs_mrzr_passengerActions
		{
			Stand = "rhs_mrzr_passenger_Idle_Pistol";
			upDegree = "ManPosHandGunStand";
			stop = "rhs_mrzr_passenger_Idle_Pistol";
			stopRelaxed = "rhs_mrzr_passenger_Idle_Pistol";
			default = "rhs_mrzr_passenger_Idle_Pistol";
			Combat = "rhs_mrzr_passenger_Aim_Pistol";
			fireNotPossible = "rhs_mrzr_passenger_Aim_Pistol";
			PlayerStand = "rhs_mrzr_passenger_Aim_Pistol";
			die = "rhs_mrzr_passenger_Die_Pistol";
			Unconscious = "rhs_mrzr_passenger_Die_Pistol";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
		};
		class rhs_mrzr_passengerObstructedActions: rhs_mrzr_passengerActions
		{
			stop = "rhs_mrzr_passenger_Obstructed";
			stopRelaxed = "rhs_mrzr_passenger_Obstructed";
			default = "rhs_mrzr_passenger_Obstructed";
			Combat = "rhs_mrzr_passenger_Aim";
			fireNotPossible = "rhs_mrzr_passenger_Obstructed";
			PlayerStand = "rhs_mrzr_passenger_Obstructed";
		};
		class rhs_mrzr_passengerObstructedPistolActions: rhs_mrzr_passengerPistolActions
		{
			Stand = "rhs_mrzr_passenger_Obstructed_Pistol";
			stop = "rhs_mrzr_passenger_Obstructed_Pistol";
			stopRelaxed = "rhs_mrzr_passenger_Obstructed_Pistol";
			default = "rhs_mrzr_passenger_Obstructed_Pistol";
			Combat = "rhs_mrzr_passenger_Aim_Pistol";
			fireNotPossible = "rhs_mrzr_passenger_Obstructed_Pistol";
			PlayerStand = "rhs_mrzr_passenger_Obstructed_Pistol";
		};
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class AmovPercMstpSrasWrflDnon;
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon;
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end;
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon;
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end;
		class AmovPercMstpSrasWpstDnon;
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon;
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon_end;
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon;
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end;
		class AmovPercMstpSoptWbinDnon;
		class AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon;
		class AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end;
		class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon;
		class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end;
		class cargo_marksman: AmovPercMstpSrasWrflDnon
		{
		};
		/// base classes for FFV - used to prevent unnecessary idle changes
		class cargo_base: cargo_marksman	
		{
			variantsPlayer[]={};
			variantsAI[]={};
		};
		class cargo_base_idle: cargo_base
		{
			weaponLowered=1;
			enableOptics=0;
			disableWeapons=1;
			disableWeaponsLong=1;
			variantsPlayer[]={};
			variantsAI[]={};
		};
		class cargo_basepistol: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[]={};
			variantsAI[]={};
		};
		class cargo_base_idle_pistol: cargo_basepistol
		{
			weaponLowered=1;
			enableOptics=0;
			disableWeapons=1;
			disableWeaponsLong=1;
		};
		class cargo_basebinoc: AmovPercMstpSoptWbinDnon
		{
			weaponLowered=0;
			canPullTrigger=1;
		};
		class rhs_mrzr_passenger_Aim: cargo_base
		{
			actions = "rhs_mrzr_passengerActions";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim.rtm";
			speed = 100000;
			ConnectTo[] = {"rhs_mrzr_passenger_Aim_ToBinoc", 0.1};
			InterpolateTo[] = {"rhs_mrzr_passenger_Idle", 0.1, "rhs_mrzr_passenger_toObstructed", 0.1, "rhs_mrzr_passenger_Aim_ToPistol", 0.1, "rhs_mrzr_passenger_Idle_Unarmed", 0.2, "rhs_mrzr_passenger_Die", 0.1};
			variantsAI[] = {"rhs_mrzr_passenger_Aim_Idling", 1};
			variantsPlayer[] = {"rhs_mrzr_passenger_Aim_Idling", 1};
		};
		class rhs_mrzr_passenger_Obstructed: cargo_base_idle
		{
			actions = "rhs_mrzr_passengerObstructedActions";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim_obstructed.rtm";
			speed = 1e+010;
			weaponLowered = 0;
			leftHandIKCurve[] = {1};
			weaponObstructed = 1;
			interpolationRestart = 1;
			InterpolateTo[] = {"rhs_mrzr_passenger_fromObstructed", 0.1, "rhs_mrzr_passenger_Die", 0.1};
		};
		class rhs_mrzr_passenger_fromObstructed: cargo_base_idle
		{
			actions = "rhs_mrzr_passengerActions";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim_fromobstructed.rtm";
			speed = -0.15;
			looped = 0;
			weaponLowered = 0;
			leftHandIKCurve[] = {1};
			interpolationRestart = 1;
			reverse = "rhs_mrzr_passenger_toObstructed";
			minplaytime = 0.95;
			ConnectTo[] = {"rhs_mrzr_passenger_Aim", 0.1};
			InterpolateTo[] = {"rhs_mrzr_passenger_Aim", 0.1};
		};
		class rhs_mrzr_passenger_toObstructed: cargo_base_idle
		{
			actions = "rhs_mrzr_passengerObstructedActions";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim_toobstructed.rtm";
			speed = -0.15;
			weaponLowered = 0;
			weaponObstructed = 1;
			looped = 0;
			leftHandIKCurve[] = {1};
			interpolationRestart = 1;
			reverse = "rhs_mrzr_passenger_fromObstructed";
			minplaytime = 0.95;
			ConnectTo[] = {"rhs_mrzr_passenger_Obstructed", 0.1};
			InterpolateTo[] = {"rhs_mrzr_passenger_Obstructed", 0.1};
		};
		class rhs_mrzr_passenger_Aim_Idling: rhs_mrzr_passenger_Aim
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			soundEnabled = 1;
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim1.rtm";
			speed = -8;
			ConnectTo[] = {"rhs_mrzr_passenger_Aim", 0.1};
		};
		class rhs_mrzr_passenger_Idle: cargo_base_idle
		{
			actions = "rhs_mrzr_passengerIdleActions";
			file = "\rhsusf\addons\rhsusf_mrzr\data\anims\rhs_mrzr_passengeraim_idle.rtm";
			speed = 100000;
			aiming = "aimingDefault";
			aimingBody = "aimingNo";
			leftHandIKCurve[] = {1};
			InterpolateTo[] = {"rhs_mrzr_passenger_Aim", 0.1, "rhs_mrzr_passenger_Aim_ToPistol", 0.1, "rhs_mrzr_passenger_Idle_Unarmed", 0.2, "rhs_mrzr_passenger_Die", 0.1};
			variantsAI[] = {"rhs_mrzr_passenger_Idle_Idling", 1};
			variantsPlayer[] = {"rhs_mrzr_passenger_Idle_Idling", 1};
		};
		class rhs_mrzr_passenger_Idle_Idling: rhs_mrzr_passenger_Idle
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			soundEnabled = 1;
			file = "\rhsusf\addons\rhsusf_mrzr\data\anims\rhs_mrzr_passengeraim_idle.rtm";
			speed = -10;
			ConnectTo[] = {"rhs_mrzr_passenger_Idle", 0.1};
		};
		class rhs_mrzr_passenger_Aim_Pistol: cargo_basepistol
		{
			actions = "rhs_mrzr_passengerPistolActions";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol.rtm";
			aiming = "aimingRifleSlingDefault";
			aimingBody = "aimingUpRifleSlingDefault";
			speed = 100000;
			variantsAI[] = {"rhs_mrzr_passenger_Aim_Pistol_Idling", 1};
			variantsPlayer[] = {"rhs_mrzr_passenger_Aim_Pistol_Idling", 1};
			ConnectTo[] = {"rhs_mrzr_passenger_Aim_Pistol_ToBinoc", 0.1};
			InterpolateTo[] = {"rhs_mrzr_passenger_Aim_FromPistol", 0.1, "rhs_mrzr_passenger_Idle_Pistol", 0.2, "rhs_mrzr_passenger_toObstructed_Pistol", 0.2, "rhs_mrzr_passenger_Idle_Unarmed", 0.2, "rhs_mrzr_passenger_Die_Pistol", 0.5};
		};
		class rhs_mrzr_passenger_Aim_Pistol_Idling: rhs_mrzr_passenger_Aim_Pistol
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			soundEnabled = 1;
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol1.rtm";
			speed = -8;
			ConnectTo[] = {"rhs_mrzr_passenger_Aim_Pistol", 0.1};
		};
		class rhs_mrzr_passenger_Idle_Pistol: cargo_base_idle_pistol
		{
			actions = "rhs_mrzr_passengerIdlePistolActions";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2idlepistol.rtm";
			speed = 100000;
			aiming = "aimingRifleSlingDefault";
			aimingBody = "aimingUpRifleSlingDefault";
			InterpolateTo[] = {"rhs_mrzr_passenger_Aim_Pistol", 0.1, "rhs_mrzr_passenger_Aim_FromPistol", 0.1, "rhs_mrzr_passenger_Idle_Unarmed", 0.1, "rhs_mrzr_passenger_Die_Pistol", 0.1};
			variantsAI[] = {"rhs_mrzr_passenger_Idle_Pistol_Idling", 1};
			variantsPlayer[] = {"rhs_mrzr_passenger_Idle_Pistol_Idling", 1};
		};
		class rhs_mrzr_passenger_Idle_Pistol_Idling: rhs_mrzr_passenger_Idle
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			soundEnabled = 1;
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2idlepistol1.rtm";
			speed = -10;
			ConnectTo[] = {"rhs_mrzr_passenger_Idle_Pistol", 0.1};
		};
		class rhs_mrzr_passenger_Obstructed_Pistol: cargo_base_idle_pistol
		{
			actions = "rhs_mrzr_passengerObstructedPistolActions";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol_obstructed.rtm";
			speed = 1e+010;
			weaponLowered = 0;
			weaponObstructed = 1;
			interpolationRestart = 1;
			InterpolateTo[] = {"rhs_mrzr_passenger_fromObstructed_Pistol", 0.1, "rhs_mrzr_passenger_Die", 0.1};
		};
		class rhs_mrzr_passenger_fromObstructed_Pistol: cargo_base_idle_pistol
		{
			actions = "rhs_mrzr_passengerPistolActions";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol_fromobstructed.rtm";
			speed = -0.15;
			weaponLowered = 0;
			interpolationRestart = 1;
			looped = 0;
			reverse = "rhs_mrzr_passenger_toObstructed_Pistol";
			minplaytime = 0.95;
			ConnectTo[] = {"rhs_mrzr_passenger_Aim_Pistol", 0.1};
			InterpolateTo[] = {"rhs_mrzr_passenger_Aim_Pistol", 0.1};
		};
		class rhs_mrzr_passenger_toObstructed_Pistol: cargo_base_idle_pistol
		{
			actions = "rhs_mrzr_passengerObstructedPistolActions";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol_toobstructed.rtm";
			speed = -0.15;
			weaponLowered = 0;
			interpolationRestart = 1;
			looped = 0;
			weaponObstructed = 1;
			reverse = "rhs_mrzr_passenger_fromObstructed_Pistol";
			minplaytime = 0.95;
			ConnectTo[] = {"rhs_mrzr_passenger_Obstructed_Pistol", 0.1};
			InterpolateTo[] = {"rhs_mrzr_passenger_Obstructed_Pistol", 0.1};
		};
		class rhs_mrzr_passenger_Aim_ToPistol: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon
		{
			actions = "rhs_mrzr_passengerPistolActions";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimtopistol.rtm";
			speed = 2;
			ConnectTo[] = {"rhs_mrzr_passenger_Aim_ToPistol_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_mrzr_passenger_Aim_ToPistol_End: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end
		{
			actions = "rhs_mrzr_passengerPistolActions";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimtopistol_end.rtm";
			speed = 1.875;
			ConnectTo[] = {"rhs_mrzr_passenger_Aim_Pistol", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_mrzr_passenger_Aim_FromPistol: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon
		{
			actions = "rhs_mrzr_passengerPistolActions";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimFrompistol.rtm";
			speed = 2.30769;
			ConnectTo[] = {"rhs_mrzr_passenger_Aim_FromPistol_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_mrzr_passenger_Aim_FromPistol_End: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end
		{
			actions = "rhs_mrzr_passengerActions";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimfrompistol_end.rtm";
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			speed = 2;
			leftHandIKCurve[] = {0, 0, 0.5, 1};
			ConnectTo[] = {"rhs_mrzr_passenger_Aim", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_mrzr_passenger_Aim_Binoc: cargo_basebinoc
		{
			actions = "rhs_mrzr_passengerBinocActions";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim_Binoc.rtm";
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			speed = -8;
			rightHandIKCurve[] = {0};
			InterpolateTo[] = {"rhs_mrzr_passenger_Aim_FromBinoc", 0.1, "rhs_mrzr_passenger_Die", 0.1};
		};
		class rhs_mrzr_passenger_Aim_Pistol_Binoc: cargo_basebinoc
		{
			actions = "rhs_mrzr_passengerBinocPistolActions";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol_Binoc.rtm";
			aiming = "aimingRifleSlingDefault";
			aimingBody = "aimingUpRifleSlingDefault";
			showHandGun = 1;
			speed = -8;
			InterpolateTo[] = {"rhs_mrzr_passenger_Aim_Pistol_FromBinoc", 0.1, "rhs_mrzr_passenger_Die_Pistol", 0.1};
		};
		class rhs_mrzr_passenger_Aim_ToBinoc: AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon
		{
			actions = "rhs_mrzr_passengerBinocActions";
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim_ToBinoc.rtm";
			speed = 1.57895;
			leftHandIKCurve[] = {0, 1, 0.15, 0};
			ConnectTo[] = {"rhs_mrzr_passenger_Aim_ToBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_mrzr_passenger_Aim_ToBinoc_End: AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end
		{
			actions = "rhs_mrzr_passengerBinocActions";
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim_ToBinoc_end.rtm";
			speed = 1.76471;
			ConnectTo[] = {"rhs_mrzr_passenger_Aim_Binoc", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_mrzr_passenger_Aim_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon
		{
			actions = "rhs_mrzr_passengerBinocActions";
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim_frombinoc.rtm";
			speed = 1.57895;
			ConnectTo[] = {"rhs_mrzr_passenger_Aim_FromBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_mrzr_passenger_Aim_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end
		{
			actions = "rhs_mrzr_passengerActions";
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aim_frombinoc_end.rtm";
			speed = 1.76471;
			leftHandIKCurve[] = {0, 0, 0.5, 1};
			ConnectTo[] = {"rhs_mrzr_passenger_Aim", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_mrzr_passenger_Aim_Pistol_ToBinoc: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon
		{
			actions = "rhs_mrzr_passengerBinocActions";
			showHandGun = 1;
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol_ToBinoc.rtm";
			speed = 1.76471;
			ConnectTo[] = {"rhs_mrzr_passenger_Aim_Pistol_ToBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_mrzr_passenger_Aim_Pistol_ToBinoc_End: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end
		{
			actions = "rhs_mrzr_passengerBinocActions";
			showHandGun = 1;
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol_ToBinoc_end.rtm";
			speed = 1.76471;
			ConnectTo[] = {"rhs_mrzr_passenger_Aim_Pistol_Binoc", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_mrzr_passenger_Aim_Pistol_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon
		{
			actions = "rhs_mrzr_passengerBinocActions";
			showHandGun = 1;
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol_frombinoc.rtm";
			speed = 1.57895;
			ConnectTo[] = {"rhs_mrzr_passenger_Aim_Pistol_FromBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_mrzr_passenger_Aim_Pistol_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end
		{
			actions = "rhs_mrzr_passengerActions";
			showHandGun = 1;
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimpistol_frombinoc_end.rtm";
			speed = 1.76471;
			ConnectTo[] = {"rhs_mrzr_passenger_Aim_Pistol", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_mrzr_passenger_Idle_Unarmed: cargo_base_idle
		{
			actions = "rhs_mrzr_passengerIdleUnarmedActions";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2idleunarmed.rtm";
			speed = 100000;
			aiming = "aimingNo";
			aimingBody = "aimingNo";
			weaponIK = 0;
			InterpolateTo[] = {"rhs_mrzr_passenger_Aim_FromPistol_End", 0.1, "rhs_mrzr_passenger_Aim_ToPistol_End", 0.1, "rhs_mrzr_passenger_Aim_Unarmed_ToBinoc", 0.1, "rhs_mrzr_passenger_Die_Pistol", 0.1};
			variantsAI[] = {"rhs_mrzr_passenger_Idle_Unarmed_Idling", 1};
			variantsPlayer[] = {"rhs_mrzr_passenger_Idle_Unarmed_Idling", 1};
		};
		class rhs_mrzr_passenger_Idle_Unarmed_Idling: rhs_mrzr_passenger_Idle
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			soundEnabled = 1;
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2idleunarmed1.rtm";
			speed = -10;
			ConnectTo[] = {"rhs_mrzr_passenger_Idle_Unarmed", 0.1};
		};
		class rhs_mrzr_passenger_Aim_Unarmed_Binoc: cargo_basebinoc
		{
			actions = "rhs_mrzr_passengerBinocUnarmedActions";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimUnarmed_Binoc.rtm";
			aiming = "aimingRifleSlingDefault";
			aimingBody = "aimingUpRifleSlingDefault";
			showHandGun = 0;
			speed = -8;
			InterpolateTo[] = {"rhs_mrzr_passenger_Aim_Unarmed_FromBinoc", 0.1, "rhs_mrzr_passenger_Die_Pistol", 0.1};
		};
		class rhs_mrzr_passenger_Aim_Unarmed_ToBinoc: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon
		{
			actions = "rhs_mrzr_passengerBinocUnarmedActions";
			showHandGun = 0;
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimUnarmed_ToBinoc.rtm";
			speed = 1.76471;
			ConnectTo[] = {"rhs_mrzr_passenger_Aim_Unarmed_ToBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_mrzr_passenger_Aim_Unarmed_ToBinoc_End: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end
		{
			actions = "rhs_mrzr_passengerBinocUnarmedActions";
			showHandGun = 0;
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimUnarmed_ToBinoc_end.rtm";
			speed = 1.76471;
			ConnectTo[] = {"rhs_mrzr_passenger_Aim_Unarmed_Binoc", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_mrzr_passenger_Aim_Unarmed_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon
		{
			actions = "rhs_mrzr_passengerBinocUnarmedActions";
			showHandGun = 0;
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimUnarmed_frombinoc.rtm";
			speed = 1.57895;
			ConnectTo[] = {"rhs_mrzr_passenger_Aim_Unarmed_FromBinoc_End", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_mrzr_passenger_Aim_Unarmed_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end
		{
			actions = "rhs_mrzr_passengerIdleUnarmedActions";
			showHandGun = 0;
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2aimUnarmed_frombinoc_end.rtm";
			speed = 1.76471;
			ConnectTo[] = {"rhs_mrzr_passenger_Idle_Unarmed", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_mrzr_passenger_Die: DefaultDie
		{
			actions = "rhs_mrzr_passengerDeadActions";
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2die.rtm";
			speed = 1;
			looped = 0;
			terminal = 1;
			ragdoll = 1;
			ConnectTo[] = {"Unconscious", 0.1};
			InterpolateTo[] = {};
		};
		class rhs_mrzr_passenger_Die_Pistol: rhs_mrzr_passenger_Die
		{
			file = "\A3\cargoposes_F_heli\anim\passenger_inside_2diepistol.rtm";
			actions = "rhs_mrzr_passengerDeadPistolActions";
			showHandGun = 1;
		};

		class rhs_mrzr_driver: Crew
		{
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftLegIKCurve[] = {1};
			rightLegIKCurve[] = {1};
			leaning = "crewShake_mrzr";
			file = "\rhsusf\addons\rhsusf_mrzr\data\anims\MRZR_Driver.rtm";
			speed = 1e+010;
			looped = 0;
			interpolateTo[]= {"KIA_Driver_mid01",1};
		};
	};

	class BlendAnims: BlendAnims
	{
		crewShake_mrzr[]=
		{
			"weapon",
			0,
			"Camera",
			0.5,
			"launcher",
			0.5,
			"Head",
			0.5,
			"Neck",
			0.5,
			"Neck1",
			0.5,
			"LeftShoulder",
			0.44999999,
			"LeftArm",
			0.34999999,
			"LeftArmRoll",
			0.25,
			"LeftForeArm",
			0.15000001,
			"RightShoulder",
			0.44999999,
			"RightArm",
			0.34999999,
			"RightArmRoll",
			0.25,
			"RightForeArm",
			0.315,
			"spine3",
			0.47499999,
			"spine2",
			0.44999999,
			"spine1",
			0.40000001,
			"spine",
			0.34999999,
			"pelvis",
			0.2,
			"LeftUpLeg",
			0.1,
			"LeftUpLegRoll",
			0.25,
			"LeftLeg",
			0.1,
			"RightUpLeg",
			0.1,
			"RightUpLegRoll",
			0.25,
			"RightLeg",
			0.1
		};
	};
};