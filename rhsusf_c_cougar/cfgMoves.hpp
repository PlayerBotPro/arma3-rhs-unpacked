class CfgMovesBasic
{
	class DefaultDie;
	class BlendAnims;
	class ManActions
	{
		RHS_cougar_Driver = "RHS_cougar_Driver";
		RHS_cougar_Cargo01_FFV = "RHS_cougar_Cargo01_FFV";
		rhs_cougar_turnout_1 = "rhs_cougar_turnout_1_Idle";
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
		class rhs_cougar_turnout_1Actions: FFV_BaseActions
		{
			upDegree = "ManPosCombat";
			stop = "rhs_cougar_turnout_1_Aim";
			stopRelaxed = "rhs_cougar_turnout_1_Aim";
			default = "rhs_cougar_turnout_1_Aim";
			Stand = "rhs_cougar_turnout_1_Idle";
			HandGunOn = "rhs_cougar_turnout_1_Aim_Pistol";
			PrimaryWeapon = "rhs_cougar_turnout_1_Aim";
			Binoculars = "rhs_cougar_turnout_1_Aim_Binoc";
			die = "rhs_cougar_turnout_1_Die";
			Unconscious = "rhs_cougar_turnout_1_Die";
			civil = "rhs_cougar_turnout_1_Idle_Unarmed";
			Obstructed = "rhs_cougar_turnout_1_Obstructed";
		};
		class rhs_cougar_turnout_1IdleUnarmedActions: FFV_BaseActions
		{
			upDegree = "ManPosNoWeapon";
			stop = "rhs_cougar_turnout_1_Idle_Unarmed";
			stopRelaxed = "rhs_cougar_turnout_1_Idle_Unarmed";
			default = "rhs_cougar_turnout_1_Idle_Unarmed";
			Stand = "rhs_cougar_turnout_1_Idle_Unarmed";
			HandGunOn = "rhs_cougar_turnout_1_Aim_Pistol";
			PrimaryWeapon = "rhs_cougar_turnout_1_Aim";
			Binoculars = "rhs_cougar_turnout_1_Aim_Unarmed_Binoc";
			die = "rhs_cougar_turnout_1_Die_Pistol";
			Unconscious = "rhs_cougar_turnout_1_Die_Pistol";
			civil = "rhs_cougar_turnout_1_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna","Gesture"};
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
		};
		class rhs_cougar_turnout_1DeadActions: FFV_BaseActions
		{
			stop = "rhs_cougar_turnout_1_Die";
			default = "rhs_cougar_turnout_1_Die";
			die = "rhs_cougar_turnout_1_Die";
			Unconscious = "rhs_cougar_turnout_1_Die";
		};
		class rhs_cougar_turnout_1DeadPistolActions: FFV_BaseActions
		{
			stop = "rhs_cougar_turnout_1_Die_Pistol";
			default = "rhs_cougar_turnout_1_Die_Pistol";
			die = "rhs_cougar_turnout_1_Die_Pistol";
			Unconscious = "rhs_cougar_turnout_1_Die_Pistol";
		};
		class rhs_cougar_turnout_1PistolActions: rhs_cougar_turnout_1Actions
		{
			upDegree = "ManPosHandGunStand";
			stop = "rhs_cougar_turnout_1_Aim_Pistol";
			stopRelaxed = "rhs_cougar_turnout_1_Aim_Pistol";
			default = "rhs_cougar_turnout_1_Aim_Pistol";
			Binoculars = "rhs_cougar_turnout_1_Aim_Pistol_Binoc";
			throwGrenade[] = {"GestureThrowGrenadePistol","Gesture"};
			Stand = "rhs_cougar_turnout_1_Idle_Pistol";
			die = "rhs_cougar_turnout_1_Die_Pistol";
			Unconscious = "rhs_cougar_turnout_1_Die_Pistol";
			Obstructed = "rhs_cougar_turnout_1_Obstructed_Pistol";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
		};
		class rhs_cougar_turnout_1BinocActions: rhs_cougar_turnout_1Actions
		{
			binocOn = "";
			upDegree = "ManPosBinocStand";
			stop = "rhs_cougar_turnout_1_Aim_Binoc";
			stopRelaxed = "rhs_cougar_turnout_1_Aim_Binoc";
			default = "rhs_cougar_turnout_1_Aim_Binoc";
		};
		class rhs_cougar_turnout_1BinocPistolActions: rhs_cougar_turnout_1BinocActions
		{
			stop = "rhs_cougar_turnout_1_Aim_Pistol_Binoc";
			stopRelaxed = "rhs_cougar_turnout_1_Aim_Pistol_Binoc";
			default = "rhs_cougar_turnout_1_Aim_Pistol_Binoc";
			die = "rhs_cougar_turnout_1_Die_Pistol";
			Unconscious = "rhs_cougar_turnout_1_Die_Pistol";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
		};
		class rhs_cougar_turnout_1BinocUnarmedActions: rhs_cougar_turnout_1BinocActions
		{
			stop = "rhs_cougar_turnout_1_Aim_Unarmed_Binoc";
			stopRelaxed = "rhs_cougar_turnout_1_Aim_Unarmed_Binoc";
			default = "rhs_cougar_turnout_1_Aim_Unarmed_Binoc";
			die = "rhs_cougar_turnout_1_Die_Pistol";
			Unconscious = "rhs_cougar_turnout_1_Die_Pistol";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
		};
		class rhs_cougar_turnout_1IdleActions: rhs_cougar_turnout_1Actions
		{
			upDegree = "ManPosStand";
			stop = "rhs_cougar_turnout_1_Idle";
			stopRelaxed = "rhs_cougar_turnout_1_Idle";
			default = "rhs_cougar_turnout_1_Idle";
			Combat = "rhs_cougar_turnout_1_Aim";
			fireNotPossible = "rhs_cougar_turnout_1_Aim";
			PlayerStand = "rhs_cougar_turnout_1_Aim";
		};
		class rhs_cougar_turnout_1IdlePistolActions: rhs_cougar_turnout_1Actions
		{
			Stand = "rhs_cougar_turnout_1_Idle_Pistol";
			upDegree = "ManPosHandGunStand";
			stop = "rhs_cougar_turnout_1_Idle_Pistol";
			stopRelaxed = "rhs_cougar_turnout_1_Idle_Pistol";
			default = "rhs_cougar_turnout_1_Idle_Pistol";
			Combat = "rhs_cougar_turnout_1_Aim_Pistol";
			fireNotPossible = "rhs_cougar_turnout_1_Aim_Pistol";
			PlayerStand = "rhs_cougar_turnout_1_Aim_Pistol";
			die = "rhs_cougar_turnout_1_Die_Pistol";
			Unconscious = "rhs_cougar_turnout_1_Die_Pistol";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
		};
		class rhs_cougar_turnout_1ObstructedActions: rhs_cougar_turnout_1Actions
		{
			stop = "rhs_cougar_turnout_1_Obstructed";
			stopRelaxed = "rhs_cougar_turnout_1_Obstructed";
			default = "rhs_cougar_turnout_1_Obstructed";
			Combat = "rhs_cougar_turnout_1_Aim";
			fireNotPossible = "rhs_cougar_turnout_1_Obstructed";
			PlayerStand = "rhs_cougar_turnout_1_Obstructed";
		};
		class rhs_cougar_turnout_1ObstructedPistolActions: rhs_cougar_turnout_1PistolActions
		{
			Stand = "rhs_cougar_turnout_1_Obstructed_Pistol";
			stop = "rhs_cougar_turnout_1_Obstructed_Pistol";
			stopRelaxed = "rhs_cougar_turnout_1_Obstructed_Pistol";
			default = "rhs_cougar_turnout_1_Obstructed_Pistol";
			Combat = "rhs_cougar_turnout_1_Aim_Pistol";
			fireNotPossible = "rhs_cougar_turnout_1_Obstructed_Pistol";
			PlayerStand = "rhs_cougar_turnout_1_Obstructed_Pistol";
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class RHS_cougar_Driver: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\cougar_Driver";
			interpolateTo[] = {"RHS_cougar_KIA_Driver",1};
			//speed = 1e+010;
		};
		class RHS_cougar_KIA_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\cougar_KIA_Driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class RHS_cougar_Cargo01_FFV: Crew
		{
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\Cargo";
			interpolateTo[] = {"RHS_m113_KIA_Cargo01_FFV",1};
			speed = 1e+010;
			canPullTrigger = 0;
		};
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
		class cargo_base;
		class cargo_base_idle;
		class cargo_basepistol;
		class cargo_base_idle_pistol;
		class cargo_basebinoc;

		class rhs_cougar_turnout_1_Aim: cargo_base
		{
			actions = "rhs_cougar_turnout_1Actions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim.rtm";
			speed = 100000;
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim_ToBinoc",0.1};
			InterpolateTo[] = {"rhs_cougar_turnout_1_Idle",0.1,"rhs_cougar_turnout_1_toObstructed",0.1,"rhs_cougar_turnout_1_Aim_ToPistol",0.1,"rhs_cougar_turnout_1_Idle_Unarmed",0.2,"rhs_cougar_turnout_1_Die",0.1};
			variantsAI[] = {"rhs_cougar_turnout_1_Aim_Idling",1};
			variantsPlayer[] = {};
		};
		class rhs_cougar_turnout_1_Obstructed: cargo_base_idle
		{
			actions = "rhs_cougar_turnout_1ObstructedActions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim_obstructed.rtm";
			speed = 1e+010;
			weaponLowered = 0;
			leftHandIKCurve[] = {1};
			weaponObstructed = 1;
			interpolationRestart = 1;
			InterpolateTo[] = {"rhs_cougar_turnout_1_fromObstructed",0.1,"rhs_cougar_turnout_1_Die",0.1};
		};
		class rhs_cougar_turnout_1_fromObstructed: cargo_base_idle
		{
			actions = "rhs_cougar_turnout_1Actions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim_fromobstructed.rtm";
			speed = -0.15;
			looped = 0;
			weaponLowered = 0;
			leftHandIKCurve[] = {1};
			interpolationRestart = 1;
			reverse = "rhs_cougar_turnout_1_toObstructed";
			minplaytime = 0.95;
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim",0.1};
			InterpolateTo[] = {"rhs_cougar_turnout_1_Aim",0.1};
		};
		class rhs_cougar_turnout_1_toObstructed: cargo_base_idle
		{
			actions = "rhs_cougar_turnout_1ObstructedActions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim_toobstructed.rtm";
			speed = -0.15;
			weaponLowered = 0;
			weaponObstructed = 1;
			looped = 0;
			leftHandIKCurve[] = {1};
			interpolationRestart = 1;
			reverse = "rhs_cougar_turnout_1_fromObstructed";
			minplaytime = 0.95;
			ConnectTo[] = {"rhs_cougar_turnout_1_Obstructed",0.1};
			InterpolateTo[] = {"rhs_cougar_turnout_1_Obstructed",0.1};
		};
		class rhs_cougar_turnout_1_Aim_Idling: rhs_cougar_turnout_1_Aim
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			soundEnabled = 1;
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim1.rtm";
			speed = -8;
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim",0.1};
		};
		class rhs_cougar_turnout_1_Idle: cargo_base_idle
		{
			actions = "rhs_cougar_turnout_1IdleActions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1idle.rtm";
			speed = 100000;
			aiming = "aimingDefault";
			aimingBody = "aimingNo";
			leftHandIKCurve[] = {0};
			InterpolateTo[] = {"rhs_cougar_turnout_1_Aim",0.1,"rhs_cougar_turnout_1_Aim_ToPistol",0.1,"rhs_cougar_turnout_1_Idle_Unarmed",0.2,"rhs_cougar_turnout_1_Die",0.1};
			variantsAI[] = {"rhs_cougar_turnout_1_Idle_Idling",1};
			variantsPlayer[] = {"rhs_cougar_turnout_1_Idle_Idling",1};
		};
		class rhs_cougar_turnout_1_Idle_Idling: rhs_cougar_turnout_1_Idle
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			soundEnabled = 1;
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1idle1.rtm";
			speed = -10;
			ConnectTo[] = {"rhs_cougar_turnout_1_Idle",0.1};
		};
		class rhs_cougar_turnout_1_Aim_Pistol: cargo_basepistol
		{
			actions = "rhs_cougar_turnout_1PistolActions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol.rtm";
			aiming = "aimingRifleSlingDefault";
			aimingBody = "aimingUpRifleSlingDefault";
			speed = 100000;
			variantsAI[] = {"rhs_cougar_turnout_1_Aim_Pistol_Idling",1};
			variantsPlayer[] = {"rhs_cougar_turnout_1_Aim_Pistol_Idling",1};
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Pistol_ToBinoc",0.1};
			InterpolateTo[] = {"rhs_cougar_turnout_1_Aim_FromPistol",0.1,"rhs_cougar_turnout_1_Idle_Pistol",0.2,"rhs_cougar_turnout_1_toObstructed_Pistol",0.2,"rhs_cougar_turnout_1_Idle_Unarmed",0.2,"rhs_cougar_turnout_1_Die_Pistol",0.5};
		};
		class rhs_cougar_turnout_1_Aim_Pistol_Idling: rhs_cougar_turnout_1_Aim_Pistol
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			soundEnabled = 1;
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol1.rtm";
			speed = -8;
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Pistol",0.1};
		};
		class rhs_cougar_turnout_1_Idle_Pistol: cargo_base_idle_pistol
		{
			actions = "rhs_cougar_turnout_1IdlePistolActions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1idlepistol.rtm";
			speed = 100000;
			aiming = "aimingRifleSlingDefault";
			aimingBody = "aimingUpRifleSlingDefault";
			InterpolateTo[] = {"rhs_cougar_turnout_1_Aim_Pistol",0.1,"rhs_cougar_turnout_1_Aim_FromPistol",0.1,"rhs_cougar_turnout_1_Idle_Unarmed",0.1,"rhs_cougar_turnout_1_Die_Pistol",0.1};
			variantsAI[] = {"rhs_cougar_turnout_1_Idle_Pistol_Idling",1};
			variantsPlayer[] = {"rhs_cougar_turnout_1_Idle_Pistol_Idling",1};
		};
		class rhs_cougar_turnout_1_Idle_Pistol_Idling: rhs_cougar_turnout_1_Idle
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			soundEnabled = 1;
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1idlepistol1.rtm";
			speed = -10;
			ConnectTo[] = {"rhs_cougar_turnout_1_Idle_Pistol",0.1};
		};
		class rhs_cougar_turnout_1_Obstructed_Pistol: cargo_base_idle_pistol
		{
			actions = "rhs_cougar_turnout_1ObstructedPistolActions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol_obstructed.rtm";
			speed = 1e+010;
			weaponLowered = 0;
			weaponObstructed = 1;
			interpolationRestart = 1;
			InterpolateTo[] = {"rhs_cougar_turnout_1_fromObstructed_Pistol",0.1,"rhs_cougar_turnout_1_Die",0.1};
		};
		class rhs_cougar_turnout_1_fromObstructed_Pistol: cargo_base_idle_pistol
		{
			actions = "rhs_cougar_turnout_1PistolActions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol_fromobstructed.rtm";
			speed = -0.15;
			weaponLowered = 0;
			interpolationRestart = 1;
			looped = 0;
			reverse = "rhs_cougar_turnout_1_toObstructed_Pistol";
			minplaytime = 0.95;
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Pistol",0.1};
			InterpolateTo[] = {"rhs_cougar_turnout_1_Aim_Pistol",0.1};
		};
		class rhs_cougar_turnout_1_toObstructed_Pistol: cargo_base_idle_pistol
		{
			actions = "rhs_cougar_turnout_1ObstructedPistolActions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol_toobstructed.rtm";
			speed = -0.15;
			weaponLowered = 0;
			interpolationRestart = 1;
			looped = 0;
			weaponObstructed = 1;
			reverse = "rhs_cougar_turnout_1_fromObstructed_Pistol";
			minplaytime = 0.95;
			ConnectTo[] = {"rhs_cougar_turnout_1_Obstructed_Pistol",0.1};
			InterpolateTo[] = {"rhs_cougar_turnout_1_Obstructed_Pistol",0.1};
		};
		class rhs_cougar_turnout_1_Aim_ToPistol: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon
		{
			actions = "rhs_cougar_turnout_1PistolActions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimtopistol.rtm";
			speed = 1.2;
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim_ToPistol_End",0.1};
			InterpolateTo[] = {};
		};
		class rhs_cougar_turnout_1_Aim_ToPistol_End: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end
		{
			actions = "rhs_cougar_turnout_1PistolActions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimtopistol_end.rtm";
			speed = 1.42857;
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Pistol",0.1};
			InterpolateTo[] = {};
		};
		class rhs_cougar_turnout_1_Aim_FromPistol: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon
		{
			actions = "rhs_cougar_turnout_1PistolActions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimFrompistol.rtm";
			speed = 1.42857;
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim_FromPistol_End",0.1};
			InterpolateTo[] = {};
		};
		class rhs_cougar_turnout_1_Aim_FromPistol_End: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end
		{
			actions = "rhs_cougar_turnout_1Actions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimfrompistol_end.rtm";
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			speed = 1.2;
			leftHandIKCurve[] = {0,0,0.5,1};
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim",0.1};
			InterpolateTo[] = {};
		};
		class rhs_cougar_turnout_1_Aim_Binoc: cargo_basebinoc
		{
			actions = "rhs_cougar_turnout_1BinocActions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim_Binoc.rtm";
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			speed = -8;
			rightHandIKCurve[] = {1};
			InterpolateTo[] = {"rhs_cougar_turnout_1_Aim_FromBinoc",0.1,"rhs_cougar_turnout_1_Die",0.1};
		};
		class rhs_cougar_turnout_1_Aim_Pistol_Binoc: cargo_basebinoc
		{
			actions = "rhs_cougar_turnout_1BinocPistolActions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol_Binoc.rtm";
			aiming = "aimingRifleSlingDefault";
			aimingBody = "aimingUpRifleSlingDefault";
			showHandGun = 1;
			speed = -8;
			InterpolateTo[] = {"rhs_cougar_turnout_1_Aim_Pistol_FromBinoc",0.1,"rhs_cougar_turnout_1_Die_Pistol",0.1};
		};
		class rhs_cougar_turnout_1_Aim_ToBinoc: AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon
		{
			actions = "rhs_cougar_turnout_1BinocActions";
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim_ToBinoc.rtm";
			speed = 1.57895;
			leftHandIKCurve[] = {0,1,0.15,0};
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim_ToBinoc_End",0.1};
			InterpolateTo[] = {};
		};
		class rhs_cougar_turnout_1_Aim_ToBinoc_End: AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end
		{
			actions = "rhs_cougar_turnout_1BinocActions";
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim_ToBinoc_end.rtm";
			speed = 1.76471;
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Binoc",0.1};
			InterpolateTo[] = {};
		};
		class rhs_cougar_turnout_1_Aim_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon
		{
			actions = "rhs_cougar_turnout_1BinocActions";
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim_frombinoc.rtm";
			speed = 1.57895;
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim_FromBinoc_End",0.1};
			InterpolateTo[] = {};
		};
		class rhs_cougar_turnout_1_Aim_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end
		{
			actions = "rhs_cougar_turnout_1Actions";
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aim_frombinoc_end.rtm";
			speed = 1.76471;
			leftHandIKCurve[] = {0,0,0.5,1};
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim",0.1};
			InterpolateTo[] = {};
		};
		class rhs_cougar_turnout_1_Aim_Pistol_ToBinoc: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon
		{
			actions = "rhs_cougar_turnout_1BinocActions";
			showHandGun = 1;
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol_ToBinoc.rtm";
			speed = 1.76471;
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Pistol_ToBinoc_End",0.1};
			InterpolateTo[] = {};
		};
		class rhs_cougar_turnout_1_Aim_Pistol_ToBinoc_End: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end
		{
			actions = "rhs_cougar_turnout_1BinocActions";
			showHandGun = 1;
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol_ToBinoc_end.rtm";
			speed = 1.76471;
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Pistol_Binoc",0.1};
			InterpolateTo[] = {};
		};
		class rhs_cougar_turnout_1_Aim_Pistol_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon
		{
			actions = "rhs_cougar_turnout_1BinocActions";
			showHandGun = 1;
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol_frombinoc.rtm";
			speed = 1.57895;
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Pistol_FromBinoc_End",0.1};
			InterpolateTo[] = {};
		};
		class rhs_cougar_turnout_1_Aim_Pistol_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end
		{
			actions = "rhs_cougar_turnout_1Actions";
			showHandGun = 1;
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimpistol_frombinoc_end.rtm";
			speed = 1.76471;
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Pistol",0.1};
			InterpolateTo[] = {};
		};
		class rhs_cougar_turnout_1_Idle_Unarmed: cargo_base_idle
		{
			actions = "rhs_cougar_turnout_1IdleUnarmedActions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1idleunarmed.rtm";
			speed = 100000;
			aiming = "aimingNo";
			aimingBody = "aimingNo";
			weaponIK = 0;
			InterpolateTo[] = {"rhs_cougar_turnout_1_Aim_FromPistol_End",0.1,"rhs_cougar_turnout_1_Aim_ToPistol_End",0.1,"rhs_cougar_turnout_1_Aim_Unarmed_ToBinoc",0.1,"rhs_cougar_turnout_1_Die_Pistol",0.1};
			variantsAI[] = {"rhs_cougar_turnout_1_Idle_Unarmed_Idling",1};
			variantsPlayer[] = {"rhs_cougar_turnout_1_Idle_Unarmed_Idling",1};
		};
		class rhs_cougar_turnout_1_Idle_Unarmed_Idling: rhs_cougar_turnout_1_Idle
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			soundEnabled = 1;
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1idleunarmed1.rtm";
			speed = -10;
			ConnectTo[] = {"rhs_cougar_turnout_1_Idle_Unarmed",0.1};
		};
		class rhs_cougar_turnout_1_Aim_Unarmed_Binoc: cargo_basebinoc
		{
			actions = "rhs_cougar_turnout_1BinocUnarmedActions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimUnarmed_Binoc.rtm";
			aiming = "aimingRifleSlingDefault";
			aimingBody = "aimingUpRifleSlingDefault";
			showHandGun = 0;
			speed = -8;
			InterpolateTo[] = {"rhs_cougar_turnout_1_Aim_Unarmed_FromBinoc",0.1,"rhs_cougar_turnout_1_Die_Pistol",0.1};
		};
		class rhs_cougar_turnout_1_Aim_Unarmed_ToBinoc: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon
		{
			actions = "rhs_cougar_turnout_1BinocUnarmedActions";
			showHandGun = 0;
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimUnarmed_ToBinoc.rtm";
			speed = 1.76471;
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Unarmed_ToBinoc_End",0.1};
			InterpolateTo[] = {};
		};
		class rhs_cougar_turnout_1_Aim_Unarmed_ToBinoc_End: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end
		{
			actions = "rhs_cougar_turnout_1BinocUnarmedActions";
			showHandGun = 0;
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimUnarmed_ToBinoc_end.rtm";
			speed = 1.76471;
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Unarmed_Binoc",0.1};
			InterpolateTo[] = {};
		};
		class rhs_cougar_turnout_1_Aim_Unarmed_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon
		{
			actions = "rhs_cougar_turnout_1BinocUnarmedActions";
			showHandGun = 0;
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimUnarmed_frombinoc.rtm";
			speed = 1.57895;
			ConnectTo[] = {"rhs_cougar_turnout_1_Aim_Unarmed_FromBinoc_End",0.1};
			InterpolateTo[] = {};
		};
		class rhs_cougar_turnout_1_Aim_Unarmed_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end
		{
			actions = "rhs_cougar_turnout_1IdleUnarmedActions";
			showHandGun = 0;
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1aimUnarmed_frombinoc_end.rtm";
			speed = 1.76471;
			ConnectTo[] = {"rhs_cougar_turnout_1_Idle_Unarmed",0.1};
			InterpolateTo[] = {};
		};
		class rhs_cougar_turnout_1_Die: DefaultDie
		{
			actions = "rhs_cougar_turnout_1DeadActions";
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1die.rtm";
			speed = 1;
			looped = 0;
			terminal = 1;
			ragdoll = 1;
			ConnectTo[] = {"Unconscious",0.1};
			InterpolateTo[] = {};
		};
		class rhs_cougar_turnout_1_Die_Pistol: rhs_cougar_turnout_1_Die
		{
			file = "\rhsusf\addons\rhsusf_c_cougar\anims\rhs_cougar_turnout_1diepistol.rtm";
			actions = "rhs_cougar_turnout_1DeadPistolActions";
			showHandGun = 1;
		};
	};

	class BlendAnims: BlendAnims
	{
		crewShake_cougar[]=
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