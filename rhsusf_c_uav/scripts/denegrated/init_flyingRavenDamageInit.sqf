// RQ-11 SCRIPT BY FEINT
// © 2013 ALL RIGHTS RESERVED
// TO MODIFY OR COPY FROM THIS FILE - CONTACT JON HILLENBRAND THROUGH HIS WEBSITE - WWW.JONHILLENBRAND.COM
	//  FLYING RAVEN DAMAGE SCRIPT - THIS IS DENEGRATED

private ["_flyingRaven"];
_flyingRaven = _this;
_flyingRaven allowDamage true;
_flyingRaven addEventHandler ["Hit", {_this execVM "\rhsusf\addons\rhsusf_c_uav\scripts\init_staticRavenDamaged.sqf";}];
_flyingRaven addMPEventHandler ["MPHit", {_this execVM "\rhsusf\addons\rhsusf_c_uav\scripts\init_staticRavenDamaged.sqf";}];
