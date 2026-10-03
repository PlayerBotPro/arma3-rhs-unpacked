// RQ-11 SCRIPT BY FEINT © 2013 ( RHS AUTHORIZED ADAPTATION )
// TO MODIFY OR COPY FROM THIS FILE - CONTACT JON HILLENBRAND THROUGH HIS WEBSITE - WWW.JONHILLENBRAND.COM
	//  STATIC RAVEN ACTIONS SCRIPT - THIS IS CALLED FROM THE CONFIG
	//  IT SETS UP THE ACTIONS ON THE STATIC RAVEN

private ["_staticRaven"];
_staticRaven = _this select 0;

if ((typeOf _staticRaven == "rhsusf_RQ11RAVEN_STATIC") or (typeOf _staticRaven == "rhsusf_RQ11RAVEN_B_STATIC")) then
	{

		disassembleRavenAct = _staticRaven addAction ["Disassemble RQ-11 Raven","\rhsusf\addons\rhsusf_c_uav\scripts\mavPackup.sqf",[],1,false,true,"","(isNil{_target getVariable ""batteryChargerIsRunning""}) and (_this == player)"];
		// launchRavenAct = _staticRaven addAction ["Pick Up RQ-11 Raven","\rhsusf\addons\rhsusf_c_uav\scripts\startingopen.sqf",[],1,false,true,"","(isNil{_this getVariable 'nameOfMAV'}) and (isNil{_this getVariable 'staticRavenAttached'}) and (_this == player)"];
		launchRavenAct = _staticRaven addAction ["Pick Up RQ-11 Raven","\rhsusf\addons\rhsusf_c_uav\scripts\mavPickup.sqf",[],1,false,true,"","(isNil{_this getVariable 'staticRavenAttached'}) and (_this == player)"];
		strobeRavenResetAct = _staticRaven addAction ["Strobe Reset","\rhsusf\addons\rhsusf_c_uav\scripts\mavStrobeOnOff.sqf",(0),1,false,true,"","(_this == player) and (!isNil{_target getVariable ""mavStrobeOn""})"];
		strobeRavenTestAct = _staticRaven addAction ["Strobe Test","\rhsusf\addons\rhsusf_c_uav\scripts\mavStrobeOnOff.sqf",(1),1,false,true,"","(_this == player) and (isNil{_target getVariable ""mavStrobeOn""})"];
		batteryLevelCheckRavenAct = _staticRaven addAction ["Battery Level","\rhsusf\addons\rhsusf_c_uav\scripts\mavBatteryLevelCheck.sqf",[],1,false,true,"","(isNil{_this getVariable 'nameOfMAV'}) and (_this == player)"];
		batteryRechargeRavenAct = _staticRaven addAction ["Recharge Battery","\rhsusf\addons\rhsusf_c_uav\scripts\mavBatteryRecharge.sqf",[],1,false,true,"","((_target getVariable ""ravenBatteryLevel"") < 100) and (isNil{_target getVariable ""batteryChargerIsRunning""}) and (isNil{_this getVariable 'nameOfMAV'}) and (_this == player)"];
		mavBaseStationActionName_08 = _staticRaven addAction ["Display Code", "\rhsusf\addons\rhsusf_c_uav\scripts\mavDisplayCode.sqf", [], 1, false, true, "", "_this == player"];
		player reveal _staticRaven;
	};

// IF STATIC RAVEN IS DAMAGED TO THE POINT OF BEING KILLED, RUN THIS SCRIPT
_staticRaven addMPEventHandler ["mpkilled", {Null = _this execVM "\rhsusf\addons\rhsusf_c_uav\scripts\init\init_staticRavenDamaged.sqf";}];
// _staticRaven addEventHandler ["killed", {Null = _this execVM "\rhsusf\addons\rhsusf_c_uav\scripts\init\init_staticRavenDamaged.sqf";}];

// _staticRaven addEventHandler ["killed",{Null = _this execVM "\rhsusf\addons\rhsusf_c_uav\scripts\init_staticRavenDamaged.sqf";}];