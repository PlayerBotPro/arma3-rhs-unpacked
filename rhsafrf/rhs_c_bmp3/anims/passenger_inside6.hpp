
class cargo_base;
class cargo_base_idle;
class cargo_base_idle_pistol;
class cargo_basepistol;
class cargo_basebinoc;
class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon;
class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end;
class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon;
class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end;
class AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon;
class AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end;
class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon;
class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end;
class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon;
class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end;
class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon;
class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end;
class rhs_passenger_inside_6_Aim : cargo_base {
	actions = "rhs_passenger_inside_6Actions";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim.rtm";
	speed = 100000;
	ConnectTo[] = {"rhs_passenger_inside_6_Aim_ToBinoc", 0.1};
	InterpolateTo[] = {"rhs_passenger_inside_6_Idle", 0.1, "rhs_passenger_inside_6_toObstructed", 0.1, "rhs_passenger_inside_6_Aim_ToPistol", 0.1, "rhs_passenger_inside_6_Idle_Unarmed", 0.2, "rhs_passenger_inside_6_Die", 0.1};
	variantsAI[] = {"rhs_passenger_inside_6_Aim_Idling", 1};
	variantsPlayer[] = {"rhs_passenger_inside_6_Aim_Idling", 1};
};
class rhs_passenger_inside_6_Obstructed : cargo_base_idle {
	actions = "rhs_passenger_inside_6ObstructedActions";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim_obstructed.rtm";
	speed = 1e+010;
	weaponLowered = 0;
	leftHandIKCurve[] = {1};
	weaponObstructed = 1;
	interpolationRestart = 1;
	InterpolateTo[] = {"rhs_passenger_inside_6_fromObstructed", 0.1, "rhs_passenger_inside_6_Die", 0.1};
};
class rhs_passenger_inside_6_fromObstructed : cargo_base_idle {
	actions = "rhs_passenger_inside_6ObstructedActions";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim_fromobstructed.rtm";
	speed = -0.15;
	looped = "false";
	weaponLowered = 0;
	leftHandIKCurve[] = {1};
	interpolationRestart = 1;
	reverse = "rhs_passenger_inside_6_toObstructed";
	minplaytime = 0.95;
	ConnectTo[] = {"rhs_passenger_inside_6_Aim", 0.1};
	InterpolateTo[] = {"rhs_passenger_inside_6_Aim", 0.1};
};
class rhs_passenger_inside_6_toObstructed : cargo_base_idle {
	actions = "rhs_passenger_inside_6ObstructedActions";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim_toobstructed.rtm";
	speed = -0.15;
	weaponLowered = 0;
	weaponObstructed = 1;
	looped = "false";
	leftHandIKCurve[] = {1};
	interpolationRestart = 1;
	reverse = "rhs_passenger_inside_6_fromObstructed";
	minplaytime = 0.95;
	ConnectTo[] = {"rhs_passenger_inside_6_Obstructed", 0.1};
	InterpolateTo[] = {"rhs_passenger_inside_6_Obstructed", 0.1};
};
class rhs_passenger_inside_6_Aim_Idling : rhs_passenger_inside_6_Aim {
	variantsPlayer[] = {};
	headBobStrength = 0;
	soundEnabled = 1;
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim1.rtm";
	speed = -8;
	ConnectTo[] = {"rhs_passenger_inside_6_Aim", 0.1};
};
class rhs_passenger_inside_6_Idle : cargo_base_idle {
	actions = "rhs_passenger_inside_6IdleActions";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6idle.rtm";
	speed = 100000;
	aiming = "aimingDefault";
	aimingBody = "aimingNo";
	leftHandIKCurve[] = {1};
	InterpolateTo[] = {"rhs_passenger_inside_6_Aim", 0.1, "rhs_passenger_inside_6_Aim_ToPistol", 0.1, "rhs_passenger_inside_6_Idle_Unarmed", 0.2, "rhs_passenger_inside_6_Die", 0.1};
	variantsAI[] = {"rhs_passenger_inside_6_Idle_Idling", 1};
	variantsPlayer[] = {"rhs_passenger_inside_6_Idle_Idling", 1};
};
class rhs_passenger_inside_6_Idle_Idling : rhs_passenger_inside_6_Idle {
	variantsPlayer[] = {};
	headBobStrength = 0;
	soundEnabled = 1;
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6idle1.rtm";
	speed = -10;
	ConnectTo[] = {"rhs_passenger_inside_6_Idle", 0.1};
};
class rhs_passenger_inside_6_Aim_Pistol : cargo_basepistol {
	actions = "rhs_passenger_inside_6PistolActions";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol.rtm";
	aiming = "aimingRifleSlingDefault";
	aimingBody = "aimingUpRifleSlingDefault";
	speed = 100000;
	variantsAI[] = {"rhs_passenger_inside_6_Aim_Pistol_Idling", 1};
	variantsPlayer[] = {"rhs_passenger_inside_6_Aim_Pistol_Idling", 1};
	ConnectTo[] = {"rhs_passenger_inside_6_Aim_Pistol_ToBinoc", 0.1};
	InterpolateTo[] = {"rhs_passenger_inside_6_Aim_FromPistol", 0.1, "rhs_passenger_inside_6_Idle_Pistol", 0.2, "rhs_passenger_inside_6_toObstructed_Pistol", 0.2, "rhs_passenger_inside_6_Idle_Unarmed", 0.2, "rhs_passenger_inside_6_Die_Pistol", 0.5};
};
class rhs_passenger_inside_6_Aim_Pistol_Idling : rhs_passenger_inside_6_Aim_Pistol {
	variantsPlayer[] = {};
	headBobStrength = 0;
	soundEnabled = 1;
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol1.rtm";
	speed = -8;
	ConnectTo[] = {"rhs_passenger_inside_6_Aim_Pistol", 0.1};
};
class rhs_passenger_inside_6_Idle_Pistol : cargo_base_idle_pistol {
	actions = "rhs_passenger_inside_6IdlePistolActions";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6idlepistol.rtm";
	speed = 100000;
	aiming = "aimingRifleSlingDefault";
	aimingBody = "aimingUpRifleSlingDefault";
	InterpolateTo[] = {"rhs_passenger_inside_6_Aim_Pistol", 0.1, "rhs_passenger_inside_6_Aim_FromPistol", 0.1, "rhs_passenger_inside_6_Idle_Unarmed", 0.1, "rhs_passenger_inside_6_Die_Pistol", 0.1};
	variantsAI[] = {"rhs_passenger_inside_6_Idle_Pistol_Idling", 1};
	variantsPlayer[] = {"rhs_passenger_inside_6_Idle_Pistol_Idling", 1};
};
class rhs_passenger_inside_6_Idle_Pistol_Idling : rhs_passenger_inside_6_Idle {
	variantsPlayer[] = {};
	headBobStrength = 0;
	soundEnabled = 1;
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6idlepistol1.rtm";
	speed = -10;
	ConnectTo[] = {"rhs_passenger_inside_6_Idle_Pistol", 0.1};
};
class rhs_passenger_inside_6_Obstructed_Pistol : cargo_base_idle_pistol {
	actions = "rhs_passenger_inside_6ObstructedPistolActions";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol_obstructed.rtm";
	speed = 1e+010;
	weaponLowered = 0;
	weaponObstructed = 1;
	interpolationRestart = 1;
	InterpolateTo[] = {"rhs_passenger_inside_6_fromObstructed_Pistol", 0.1, "rhs_passenger_inside_6_Die", 0.1};
};
class rhs_passenger_inside_6_fromObstructed_Pistol : cargo_base_idle_pistol {
	actions = "rhs_passenger_inside_6ObstructedPistolActions";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol_fromobstructed.rtm";
	speed = -0.15;
	weaponLowered = 0;
	interpolationRestart = 1;
	looped = "false";
	reverse = "rhs_passenger_inside_6_toObstructed_Pistol";
	minplaytime = 0.95;
	ConnectTo[] = {"rhs_passenger_inside_6_Aim_Pistol", 0.1};
	InterpolateTo[] = {"rhs_passenger_inside_6_Aim_Pistol", 0.1};
};
class rhs_passenger_inside_6_toObstructed_Pistol : cargo_base_idle_pistol {
	actions = "rhs_passenger_inside_6ObstructedPistolActions";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol_toobstructed.rtm";
	speed = -0.15;
	weaponLowered = 0;
	interpolationRestart = 1;
	looped = "false";
	weaponObstructed = 1;
	reverse = "rhs_passenger_inside_6_fromObstructed_Pistol";
	minplaytime = 0.95;
	ConnectTo[] = {"rhs_passenger_inside_6_Obstructed_Pistol", 0.1};
	InterpolateTo[] = {"rhs_passenger_inside_6_Obstructed_Pistol", 0.1};
};
class rhs_passenger_inside_6_Aim_ToPistol : AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon {
	actions = "rhs_passenger_inside_6PistolActions";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimtopistol.rtm";
	speed = 2;
	ConnectTo[] = {"rhs_passenger_inside_6_Aim_ToPistol_End", 0.1};
	InterpolateTo[] = {};
};
class rhs_passenger_inside_6_Aim_ToPistol_End : AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end {
	actions = "rhs_passenger_inside_6PistolActions";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimtopistol_end.rtm";
	speed = 1.875;
	ConnectTo[] = {"rhs_passenger_inside_6_Aim_Pistol", 0.1};
	InterpolateTo[] = {};
};
class rhs_passenger_inside_6_Aim_FromPistol : AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon {
	actions = "rhs_passenger_inside_6PistolActions";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimFrompistol.rtm";
	speed = 2.30769;
	ConnectTo[] = {"rhs_passenger_inside_6_Aim_FromPistol_End", 0.1};
	InterpolateTo[] = {};
};
class rhs_passenger_inside_6_Aim_FromPistol_End : AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end {
	actions = "rhs_passenger_inside_6Actions";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimfrompistol_end.rtm";
	aiming = "aimingDefault";
	aimingBody = "aimingUpDefault";
	speed = 2;
	leftHandIKCurve[] = {0, 0, 0.5, 1};
	ConnectTo[] = {"rhs_passenger_inside_6_Aim", 0.1};
	InterpolateTo[] = {};
};
class rhs_passenger_inside_6_Aim_Binoc : cargo_basebinoc {
	actions = "rhs_passenger_inside_6BinocActions";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim_Binoc.rtm";
	aiming = "aimingDefault";
	aimingBody = "aimingUpDefault";
	speed = -8;
	rightHandIKCurve[] = {0};
	InterpolateTo[] = {"rhs_passenger_inside_6_Aim_FromBinoc", 0.1, "rhs_passenger_inside_6_Die", 0.1};
};
class rhs_passenger_inside_6_Aim_Pistol_Binoc : cargo_basebinoc {
	actions = "rhs_passenger_inside_6BinocPistolActions";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol_Binoc.rtm";
	aiming = "aimingRifleSlingDefault";
	aimingBody = "aimingUpRifleSlingDefault";
	showHandGun = 1;
	speed = -8;
	InterpolateTo[] = {"rhs_passenger_inside_6_Aim_Pistol_FromBinoc", 0.1, "rhs_passenger_inside_6_Die_Pistol", 0.1};
};
class rhs_passenger_inside_6_Aim_ToBinoc : AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon {
	actions = "rhs_passenger_inside_6BinocActions";
	aiming = "aimingDefault";
	aimingBody = "aimingUpDefault";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim_ToBinoc.rtm";
	speed = 1.57895;
	leftHandIKCurve[] = {0, 1, 0.15, 0};
	ConnectTo[] = {"rhs_passenger_inside_6_Aim_ToBinoc_End", 0.1};
	InterpolateTo[] = {};
};
class rhs_passenger_inside_6_Aim_ToBinoc_End : AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end {
	actions = "rhs_passenger_inside_6BinocActions";
	aiming = "aimingDefault";
	aimingBody = "aimingUpDefault";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim_ToBinoc_end.rtm";
	speed = 1.76471;
	ConnectTo[] = {"rhs_passenger_inside_6_Aim_Binoc", 0.1};
	InterpolateTo[] = {};
};
class rhs_passenger_inside_6_Aim_FromBinoc : AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon {
	actions = "rhs_passenger_inside_6BinocActions";
	aiming = "aimingDefault";
	aimingBody = "aimingUpDefault";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim_frombinoc.rtm";
	speed = 1.57895;
	ConnectTo[] = {"rhs_passenger_inside_6_Aim_FromBinoc_End", 0.1};
	InterpolateTo[] = {};
};
class rhs_passenger_inside_6_Aim_FromBinoc_End : AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end {
	actions = "rhs_passenger_inside_6Actions";
	aiming = "aimingDefault";
	aimingBody = "aimingUpDefault";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aim_frombinoc_end.rtm";
	speed = 1.76471;
	leftHandIKCurve[] = {0, 0, 0.5, 1};
	ConnectTo[] = {"rhs_passenger_inside_6_Aim", 0.1};
	InterpolateTo[] = {};
};
class rhs_passenger_inside_6_Aim_Pistol_ToBinoc : AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon {
	actions = "rhs_passenger_inside_6BinocActions";
	showHandGun = 1;
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol_ToBinoc.rtm";
	speed = 1.76471;
	ConnectTo[] = {"rhs_passenger_inside_6_Aim_Pistol_ToBinoc_End", 0.1};
	InterpolateTo[] = {};
};
class rhs_passenger_inside_6_Aim_Pistol_ToBinoc_End : AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end {
	actions = "rhs_passenger_inside_6BinocActions";
	showHandGun = 1;
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol_ToBinoc_end.rtm";
	speed = 1.76471;
	ConnectTo[] = {"rhs_passenger_inside_6_Aim_Pistol_Binoc", 0.1};
	InterpolateTo[] = {};
};
class rhs_passenger_inside_6_Aim_Pistol_FromBinoc : AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon {
	actions = "rhs_passenger_inside_6BinocActions";
	showHandGun = 1;
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol_frombinoc.rtm";
	speed = 1.57895;
	ConnectTo[] = {"rhs_passenger_inside_6_Aim_Pistol_FromBinoc_End", 0.1};
	InterpolateTo[] = {};
};
class rhs_passenger_inside_6_Aim_Pistol_FromBinoc_End : AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end {
	actions = "rhs_passenger_inside_6Actions";
	showHandGun = 1;
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimpistol_frombinoc_end.rtm";
	speed = 1.76471;
	ConnectTo[] = {"rhs_passenger_inside_6_Aim_Pistol", 0.1};
	InterpolateTo[] = {};
};
class rhs_passenger_inside_6_Idle_Unarmed : cargo_base_idle {
	actions = "rhs_passenger_inside_6IdleUnarmedActions";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6idleunarmed.rtm";
	speed = 100000;
	aiming = "aimingNo";
	aimingBody = "aimingNo";
	weaponIK = 0;
	InterpolateTo[] = {"rhs_passenger_inside_6_Aim_FromPistol_End", 0.1, "rhs_passenger_inside_6_Aim_ToPistol_End", 0.1, "rhs_passenger_inside_6_Aim_Unarmed_ToBinoc", 0.1, "rhs_passenger_inside_6_Die_Pistol", 0.1};
	variantsAI[] = {"rhs_passenger_inside_6_Idle_Unarmed_Idling", 1};
	variantsPlayer[] = {"rhs_passenger_inside_6_Idle_Unarmed_Idling", 1};
};
class rhs_passenger_inside_6_Idle_Unarmed_Idling : rhs_passenger_inside_6_Idle {
	variantsPlayer[] = {};
	headBobStrength = 0;
	soundEnabled = 1;
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6idleunarmed1.rtm";
	speed = -10;
	ConnectTo[] = {"rhs_passenger_inside_6_Idle_Unarmed", 0.1};
};
class rhs_passenger_inside_6_Aim_Unarmed_Binoc : cargo_basebinoc {
	actions = "rhs_passenger_inside_6BinocUnarmedActions";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimUnarmed_Binoc.rtm";
	aiming = "aimingRifleSlingDefault";
	aimingBody = "aimingUpRifleSlingDefault";
	showHandGun = 0;
	speed = -8;
	InterpolateTo[] = {"rhs_passenger_inside_6_Aim_Unarmed_FromBinoc", 0.1, "rhs_passenger_inside_6_Die_Pistol", 0.1};
};
class rhs_passenger_inside_6_Aim_Unarmed_ToBinoc : AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon {
	actions = "rhs_passenger_inside_6BinocUnarmedActions";
	showHandGun = 0;
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimUnarmed_ToBinoc.rtm";
	speed = 1.76471;
	ConnectTo[] = {"rhs_passenger_inside_6_Aim_Unarmed_ToBinoc_End", 0.1};
	InterpolateTo[] = {};
};
class rhs_passenger_inside_6_Aim_Unarmed_ToBinoc_End : AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end {
	actions = "rhs_passenger_inside_6BinocUnarmedActions";
	showHandGun = 0;
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimUnarmed_ToBinoc_end.rtm";
	speed = 1.76471;
	ConnectTo[] = {"rhs_passenger_inside_6_Aim_Unarmed_Binoc", 0.1};
	InterpolateTo[] = {};
};
class rhs_passenger_inside_6_Aim_Unarmed_FromBinoc : AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon {
	actions = "rhs_passenger_inside_6BinocUnarmedActions";
	showHandGun = 0;
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimUnarmed_frombinoc.rtm";
	speed = 1.57895;
	ConnectTo[] = {"rhs_passenger_inside_6_Aim_Unarmed_FromBinoc_End", 0.1};
	InterpolateTo[] = {};
};
class rhs_passenger_inside_6_Aim_Unarmed_FromBinoc_End : AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end {
	actions = "rhs_passenger_inside_6IdleUnarmedActions";
	showHandGun = 0;
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6aimUnarmed_frombinoc_end.rtm";
	speed = 1.76471;
	ConnectTo[] = {"rhs_passenger_inside_6_Idle_Unarmed", 0.1};
	InterpolateTo[] = {};
};
class rhs_passenger_inside_6_Die : DefaultDie {
	actions = "rhs_passenger_inside_6DeadActions";
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6die.rtm";
	speed = 1;
	looped = "false";
	terminal = 1;
	ragdoll = 1;
	ConnectTo[] = {"Unconscious", 0.1};
	InterpolateTo[] = {};
};
class rhs_passenger_inside_6_Die_Pistol : rhs_passenger_inside_6_Die {
	file = "\A3\cargoposes_F_heli\anim\passenger_inside_6diepistol.rtm";
	actions = "rhs_passenger_inside_6DeadPistolActions";
	showHandGun = 1;
};