UPSMON_GothitParam = 
{
	private ["_npc","_gothit"];
	
	_npc = _this select 0;
	_gothit = false;
	
	If (isNil "tpwcas_running") then 
	{
		if (group _npc in UPSMON_GOTHIT_ARRAY || group _npc in UPSMON_GOTKILL_ARRAY) then
		{
			_gothit = true;
		};
	}
	else
	{
		_Supstate = [_npc] call UPSMON_supstatestatus;
		if (group _npc in UPSMON_GOTHIT_ARRAY || group _npc in UPSMON_GOTKILL_ARRAY || _Supstate >= 2) then
		{
			_gothit = true;
		};
	};
	
	_gothit
};


UPSMON_supstatestatus = {
	private ["_npc","_azesupstate","_tpwcas_running"];
	
	_tpwcas_running = if (!isNil "tpwcas_running") then {true} else {false};

	_npc = _this select 0;
	_azesupstate = 0;

	if (_tpwcas_running) then
	{
		{
			If (_x getvariable "tpwcas_supstate" == 3) exitwith {_azesupstate = 3;};
			If (_x getvariable "tpwcas_supstate" == 2) exitwith {_azesupstate = 2;};
		} foreach units group _npc;
	};
	
	_azesupstate
};
UPSMON_checksizetargetgrp = {
	private ["_mennear","_result","_pos","_radius"];

	_pos = _this select 0;
	_radius = _this select 1;
	_side = _this select 2;
	
	_mennear = nearestobjects [_pos,["CAManBase"],_radius];
	_result = false;
	_allied = [];
	_eny = [];

	{
		If ((alive _x) && (side _x != _side) && _npc knowsabout _x >= UPSMON_knowsAboutEnemy) then {_eny = _eny + [_x];}
	} foreach _mennear;
	

	_result = [_eny];
	_result
};
UPSMON_checkallied = {
private ["_npc","_mennear","_result","_radius"];

	_npc = _this select 0;
	_radius = _this select 1;
	_side = side _npc;
	
	_mennear = _npc nearTargets 180;
	_result = false;
	_allied = [];
	_eny = [];
	_enemySides = _npc call BIS_fnc_enemySides;
	
	{
		_unit = _x select 4;
		_unitside = _x select 2;
		If ((alive _unit) && (_unitside == _side) && !(_unit in (units _npc)) && !(captive _unit)) then {_allied = _allied + [_x];};
		If ((alive _unit) && (_unitside in _enemySides) && _npc knowsabout _unit >= UPSMON_knowsAboutEnemy) then {_eny = _eny + [_x];}
	} foreach _mennear;
	

	_result = [_allied,_eny];
	_result
};


UPSMON_WITHDRAW = {
		private ["_npc","_target","_AttackPos","_dir1","_dir2","_targetPos","_artillerysideunits","_RadioRange","_array"]; 	
		_npc = _this select 0;
		_target = _this select 1;
		_AttackPos = _this select 2;
		_RadioRange = _this select 3;
		
		// angle from unit to target
		_dir1 = [getpos _npc,_AttackPos] call UPSMON_getDirPos;
		_dir2 = (_dir1+180) mod 360;
		
		_targetPos = [_npc,_dir2,150] call UPSMON_SrchRetreatPos;
		
					
		if (UPSMON_Debug>=1) then 
		{
			"avoid" setmarkerpos _targetPos;							
		};	
		
				
		// New Code:
		If (_npc distance _target >= 200 && morale _npc < -1.2) then 
		{
			{
				{_x setCombatMode "BLUE";} foreach units _npc;
				_x setbehaviour "CARELESS"; 
				_x allowfleeing 1;
			} foreach units group _npc;
		} 
		else 
		{
			{
				{_x setCombatMode "GREEN";} foreach units _npc;
				_x setbehaviour "AWARE"; 
				_x allowfleeing 0;
			} foreach units group _npc;
		};
		// end new code
					
		if (UPSMON_Debug>0) then {player sidechat format["%1 All Retreat!!!",_grpidx]};

		_targetPos;
};

UPSMON_getequipment = 
{
	private ["_unit","_maguniformunit","_magbackunit","_magvestunit","_uniform","_headgear","_vest","_bag","_classbag","_itemsunit","_weaponsunit","_equipmentarray"];
	_unit = _this;
	_maguniformunit = [];
	_magbackunit = [];
	_magvestunit = [];


	_uniform = uniform _unit;
	If (_uniform != "") then {_maguniformunit = getMagazineCargo uniformContainer _unit;};

	_headgear = headgear _unit;

	_vest = vest _unit;
	If (_vest != "") then {_magvestunit = getMagazineCargo vestContainer _unit;};

	_bag = unitBackpack _unit;
	_classbag = typeOf _bag;
	If (_classbag != "") then {_magbackunit = getMagazineCargo backpackContainer _unit;};


	_itemsunit = items _unit;
	_assigneditems = assignedItems _unit;
	_weaponsunit = weaponsItems _unit;


	_allmag = [] + [_maguniformunit] + [_magvestunit] + [_magbackunit];
	_equipmentarray = [_uniform,_headgear,_vest,_classbag,_itemsunit,_assigneditems,_allmag,_weaponsunit];
	_equipmentarray
};

UPSMON_addequipment = {
	private ["_unit","_clonearray","_uniform","_headgear","_vest","_classbag","_itemsunit","_assigneditems","_allmag","_weaponsunit","_index","_array1","_array2","_magazineName","_count","_weapon","_item1","_item2","_item3"];
	_unit = _this select 0;

	_clonearray = _this select 1;
	_uniform = _clonearray select 0;
	_headgear = _clonearray select 1;
	_vest = _clonearray select 2;
	_classbag = _clonearray select 3;
	_itemsunit = _clonearray select 4;
	_assigneditems = _clonearray select 5;
	_allmag = _clonearray select 6;
	_weaponsunit = _clonearray select 7;


	removeAllAssignedItems _unit;
	removeHeadgear _unit;
	removeAllItemsWithMagazines _unit;
	removeAllWeapons _unit;
	removeAllContainers _unit;

	If (_uniform != "") then {_unit addUniform _uniform;};
	If (_vest != "") then {_unit addVest _vest;};
	If (_headgear != "") then {_unit addHeadgear _headgear;};
	If (_classbag != "") then {_unit addBackpack _classbag;};

	{
		_unit addItem _x;
	} foreach _itemsunit;

	{
		_unit addItem _x;
		_unit assignItem _x;
	} foreach _assigneditems;

	{
		If (count _x > 0) then 
		{
			_array1 = _x select 0;
			_array2 = _x select 1;
			_index = -1;
			{
				_index = _index + 1;
				_magazineName = _x;
				_count = _array2 select _index;
				_unit addMagazines [_magazineName, _count];
			} foreach _array1;
		};
	} foreach _allmag;

	_index = -1;

	{
		_index = _index +1;
		_weapon = _x select 0;
		_item1 = _x select 1;
		_item2 = _x select 2;
		_item3 = _x select 3;
		_magweapon1 = (_x select 4) select 0;
		_magweapon2 = "";
		if (count _x > 5) then {_magweapon2 = (_x select 5) select 0};
	
		if (_index == 0) then {{_item = _x; If (_item != "") then {_unit addPrimaryWeaponItem _item;}} foreach [_item1,_item2,_item3];};
		if (_index == 1) then {};
		if (_index == 2) then {{_item = _x; If (_item != "") then {_unit addHandgunItem _item;}} foreach [_item1,_item2,_item3];};
	
		_unit addMagazineGlobal _magweapon1;
		If (_magweapon2 != "") then {_unit addMagazineGlobal _magweapon2;};
		_unit addWeaponGlobal _weapon;
	} foreach _weaponsunit;
};

UPSMON_checkmunition = {
	private ["_npc","_units","_result","_unit","_weapon","_magazineclass","_magazines"];
	
	_npc = _this select 0;
	_units = units _npc;
	_result = [];
	_minmag = 2;
	
	{
		If (!IsNull _x && alive _x) then
		{
			_unit = _x;
			_weapon = currentweapon _unit;
			_magazineclass = getArray (configFile / "CfgWeapons" / _weapon / "magazines");
		
			if (count _magazineclass > 0) then 
			{
				_magazineclass = _magazineclass select 0;
				_magazines = magazines _unit;
				_magazinescount = {_x == _magazineclass} count _magazines;
				//player sidechat format ["%1 %2",_magazineclass,_magazinescount];
				If (_magazinescount <= 2) then {_result = _result + [_unit]};
			};
		};
		
	} foreach _units;

	_result
};

////////////////////////////////////////////////////////////////////// Target Module ////////////////////////////////////////////////////////

UPSMON_TargetAcquisition = {

	private ["_npc","_shareinfo","_closeenough","_NearestEnemy","_sharedenemy","_target","_targets","_dist","_opfknowval","_newtarget","_newattackPos","_targetsnear","_attackPos","_Enemies"];
	
	_npc = _this select 0;
	_shareinfo = _this select 1;
	_closeenough = _this select 2;
	_flankdir = _this select 3;
	_timeontarget = _this select 4;
	_timeinfo = _this select 5;
	_targetdead = true;
	
	_NearestEnemy = objNull;
	_target = objNull;
	_opfknowval = 0;
	_attackPos = [0,0];
	_Enemies = [];
	_targetsnear = false;
		
		
	
		
	_result = [_npc,_shareinfo,_timeinfo] call UPSMON_findnearestenemy;
	_Enemies = _result select 0;
	_timeinfo = _result select 1;
	
	If (count _Enemies > 0) then
	{
		_NearestEnemy = (_Enemies select 0) select 0;
	};

		If (IsNull _NearestEnemy) then 
		{	
			//Reveal targets found by members to leader
			{
				_Enemies = [_x,"NOSHARE",_timeinfo] call UPSMON_findnearestenemy;
				_Enemies = _result select 0;
				
				If (count _Enemies > 0) then
				{
					_NearestEnemy = (_Enemies select 0) select 0;
				};
				
				if ((!IsNull _NearestEnemy) && (_x knowsabout _NearestEnemy > UPSMON_knowsAboutEnemy) 
				&& (_npc knowsabout _NearestEnemy <= UPSMON_knowsAboutEnemy)) then 	
				{		
				
					if (_npc knowsabout _NearestEnemy <= UPSMON_knowsAboutEnemy ) then 	
					{		 
						_npc reveal [_NearestEnemy,_x knowsabout _NearestEnemy];	
					};
				

					_target = _NearestEnemy;
					_opfknowval = _npc knowsabout _target;
					_NearestEnemy setvariable ["UPSMON_lastknownpos", (_Enemies select 0) select 1, false];						
					//if (KRON_UPS_Debug>0) then {player globalchat format["%1: %3 added to targets",_grpidx,typeof _x, typeof _target]}; 						
				};
			} foreach units (group _npc);
		}
		else
		{
			_target = _NearestEnemy;
			_opfknowval = _npc knowsabout _target;
			_NearestEnemy setvariable ["UPSMON_lastknownpos",(_Enemies select 0) select 1, false];
		};

		//Resets distance to target
		_dist = 10000;
		
		
		//Gets  current known position of target and distance
		if ( !isNull (_target) && alive _target ) then 
		{
			_newattackPos = _target getvariable ("UPSMON_lastknownpos");
			
			if ( !isnil "_newattackPos" ) then {
				_attackPos=_newattackPos;	
				//Gets distance to target known pos
				_dist = ([_currpos,_attackPos] call UPSMON_distancePosSqr);				
			};
		};
					
		If (_dist <= 300) then {_targetsnear = true;};
		
		_newtarget = _target;			
		_lastTarget = (_npc getvariable "UPSMON_Lastinfos") select 4;			
			//If you change the target changed direction flanking initialize
			if ( !isNull (_newtarget) && alive _newtarget && canmove _newtarget && (_newtarget != _lastTarget || isNull (_lastTarget)) ) then {
				_timeontarget = 0;
				_targetdead = false;
				_flankdir= if (random 100 <= 10) then {0} else {_flankdir};	
				_target = _newtarget;			
			};	
		
		_result = [_Enemies,_target,_dist,_opfknowval,_targetsnear,_attackPos,_timeontarget,_targetdead,_flankdir,_timeinfo];
		
		_result
};

UPSMON_findnearestenemy = {
	private["_npc","_targets","_enemies","_enemySides","_side","_unit"];
	_npc = _this select 0;
	_shareinfo = _this select 1;
	_timeinfo = _this select 2;
	_enemies = [];

	_targets = _npc nearTargets 600;
	
	_enemySides = _npc call BIS_fnc_enemySides;
	
	//if (UPSMON_Debug>0) then {diag_log format ["Targets found by %1: %2",_npc,_targets];};
	
	{
		_position = (_x select 0);
		_unit = (_x select 4);
		_side = (_x select 2);

		if ((_side in _enemySides) && (count crew _unit > 0) && _npc knowsabout _unit >= UPSMON_knowsAboutEnemy) then
		{
			if ((side driver _unit) in _enemySides) then
			{
				_enemies set [count _enemies, [_unit,_position]];
			};
		};
	} forEach _targets;

	If (count _enemies > 0) then
	{
		_enemies = [_enemies, [], { _npc distance (_x select 0) }, "ASCEND"] call BIS_fnc_sortBy;
		If (_shareinfo=="SHARE" && _timeinfo > 10) then
		{
			//player sidechat "Share Info";
			_timeinfo = 0;
			[_enemies,_npc] spawn UPSMON_Shareinfos;
		};

	};
	
	_result = [_enemies,_timeinfo];
	_result
};


UPSMON_Shareinfos = {

	_enemies = _this select 0;
	_npc = _this select 1;
	_arrnpc = UPSMON_NPCs - [_npc];
	_side = side _npc;
	_pos = getpos _npc;
	_alliednpc = [];
	
	{
		If (_side == side _x  
		&& _pos distance _x  <= UPSMON_sharedist 
		&& ((_x  getvariable "UPSMON_Grpstatus") select 2 == "BLUE" || (_x  getvariable "UPSMON_Grpstatus") select 2 == "GREEN")
		) then {_alliednpc = _alliednpc + [_x];};
	} count _arrnpc > 0;
			
	{
		_npc = _x;
		{
			_enemy = _x select 0;
			If (!(IsNull _enemy) 
			&& alive _enemy) then 
			{
				_npc reveal [_enemy,1.9];
				if (UPSMON_Debug>0) then {diag_log format ["Target shared by RR to %2: %3",_alliednpc,_enemy];};
			};
		} foreach _enemies;
	} count _alliednpc > 0;

			
		
};
