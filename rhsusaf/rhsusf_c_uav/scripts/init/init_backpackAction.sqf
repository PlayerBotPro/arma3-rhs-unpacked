// RQ-11 SCRIPT BY FEINT © 2013 ( RHS AUTHORIZED ADAPTATION )
// TO MODIFY OR COPY FROM THIS FILE - CONTACT JON HILLENBRAND THROUGH HIS WEBSITE - WWW.JONHILLENBRAND.COM
	//  BACKPACK ACTIONS SCRIPT - THIS IS CALLED FROM THE CONFIG
	//  IT SETS UP THE ACTION TO ASSEMBLE THE RAVEN DEPENDING ON THE TYPE OF BACKPACK

/*
private ["_backpack"];
_backpack = _this select 0;
if (typeOf _backpack == "B_rhsusf_BACKPACK") then
{
         unpackRavenAct = _backpack addAction ["Assemble RQ-11 A Raven","\rhsusf\addons\rhsusf_c_uav\scripts\backpack_UnpackRaven.sqf",(0),1,false,true,"","_this == player"];
}
else
{
         unpackRavenAct = _backpack addAction ["Assemble RQ-11 B Raven","\rhsusf\addons\rhsusf_c_uav\scripts\backpack_UnpackRaven.sqf",(1),1,false,true,"","_this == player"];
};
player reveal _backpack;
*/

private ["_backpack"];
_backpack = _this select 0;
waitUntil {!isNull _backpack};
unpackRavenAct = _backpack addAction ["Assemble RQ-11 B Raven","\rhsusf\addons\rhsusf_c_uav\scripts\backpack_UnpackRaven.sqf",(1),1,false,true,"","_this == player"];
player sideChat "I just got initiated, mofos";
player reveal _backpack;