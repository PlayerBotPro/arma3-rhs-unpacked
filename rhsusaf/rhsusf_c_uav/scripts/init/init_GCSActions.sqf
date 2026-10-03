// RQ-11 SCRIPT BY FEINT © 2013 ( RHS AUTHORIZED ADAPTATION )
// TO MODIFY OR COPY FROM THIS FILE - CONTACT JON HILLENBRAND THROUGH HIS WEBSITE - WWW.JONHILLENBRAND.COM
	//  GCS ACTIONS SCRIPT - THIS IS CALLED FROM THE CONFIG
	//  IT ALSO SETS UP AND PRECOMPILES THE FUNCTIONS FOR THE CAMERA SCRIPT BECAUSE I DON'T KNOW WHERE ELSE TO PUT THEM


private ["_groundControlStation"];
_groundControlStation = _this select 0;

_groundControlStation addAction ["Pick Up GCS", "\rhsusf\addons\rhsusf_c_uav\scripts\GCS\GCSpickup.sqf",[],1,false,true,"","(isNil{_this getVariable 'staticGCSAttached'}) and (_this == player)"];
_groundControlStation addAction ["Display Code", "\rhsusf\addons\rhsusf_c_uav\scripts\mavDisplayCode.sqf", [], 0, false, true, "", "_this == player"];

player reveal _groundControlStation;

mavCurrentTarget = 0;

/*
// FUNCTIONS PREPROCESSED FOR CAMERA SCRIPT
if (isNil{_groundControlStation getVariable "functionsProProcessed"}) then
{
         rhsusf_fnc_cameraTime = compile preprocessFileLineNumbers "\rhsusf\addons\rhsusf_c_uav\scripts\functions\fnc_cameraTime.sqf";

         _groundControlStation setVariable ["functionsProProcessed",1,false];
};
// _groundControlStation addMPEventHandler ["mpkilled", {Null = _this execVM "\rhsusf\addons\rhsusf_c_uav\scripts\init_staticRavenDamaged.sqf";}];
*/