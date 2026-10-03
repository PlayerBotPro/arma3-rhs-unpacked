private ["_npc","_lastcurrpos","_lastknown","_lastwptype","_lastpos","_timeontarget","_react","_waiting","_membertypes","_vehicletypes","_makenewtarget","_reinforcementsent","_reinforcement","_newpos","_grpid","_Ucthis","_grpidx","_grpidname","_side","_members","_grp","_isSoldier","_exit","_fightmode","_fortifyorig","_fortify","_wp","_targetPos","_surrender",
"_retreat","_pause","_nomove","_onroad","_nosmoke","_nofollow","_shareinfo","_noveh","_noveh2","_radiorange","_orgMode","_orgspeed","_orgpos","_speedmode","_behaviour","_nowp","_nowtype","_ambush","_fixedtargetPos","_areasize","_rangeX","_rangeY","_area","_areadir","_cosdir","_sindir",
"_areamarker","_centerpos","_centerX","_centerY","_mindist","_sokilled","_sowounded","_gothit","_Supstate","_Arrayofnearestunit","_alliednear","_enynear","_surrended","_closeenough","_target","_targetdead","_linkactivate","_isman","_iscar","_isboat","_isplane","_isdiver",
"_rfid","_rfidcalled","_buildingdist","_TargetSearch","_Enemies","_target","_dist","_opfknowval","_targetsnear","_attackPos","_timeontarget","_targetdead","_flankdir","_fightmode","_newattackPos","_dist","_enemytanksnear","_friendlytanksnear","_dir1","_mineposition","_roads","_artillerysideunits",
"_arti","_nbrTargets","_targettext","_wptype","_smoke","_unitsin","_GetOutDist","_timeout","_landing","_fm","_targetX","_targetY","_wpformation","_index"];

_rfidcalled = false;
_nowpType = 1;
_linkdistance = 100;
_RadioRange = 10000;

_surrender = 0;
_retreat = 0;
_fortify = false;
_buildingdist = 25;

_target = ObjNull;
_newtarget=objnull;
_targetdist = 1000;
_makenewtarget = true;
_fixedtargetPos = [0,0];
_targetpos = [0,0,0];
_reinforcementsent = false;

_react = 0;
_lastreact = UPSMON_minreact;
_minreact = UPSMON_minreact;

_timeontarget = 0;
_waiting = 0;
_wait=90;
_timeout = 0;
_newpos = false;
_index = 0;

_exit = false;

_surrended = false;
_supressed = false;
_alliednear = 0;
_enynear = 0;
_dist = 1000;
_dist2 = 0;
_GetOutDist = 0;
_unitsIn = [];

_wp=[];
_wptype="MOVE";
_lastwptype = "MOVE";
_wpformation = "VEE";
_rstuckControl = 0;
_flyInHeight = 0;
_cargo = [];
_landing=false;
_safemode=["CARELESS","SAFE"];

_opfknowval = 0;
_lastknown = 0;
_targetsnear = false;
_attackPos 	= [0,0];
_targetdead = false;
_flankdir = 0;
_fightmode = "WALK";
_newattackPos = [0,0];
_fm = 0;

_dir1 = 0;
_mineposition = [0,0];
_roads = [];
_wptype = "MOVE";
_pursue= false;
_waiting = 0;

_fortifyorig= false;
_rlastPos = [0,0,0];
_lastcurrpos = [0,0,0];
_positiontoambush = [0,0,0];
_targettext ="currPos";
_swimming = false;
_deadBodiesreact = UPSMON_deadBodiesReact; 
_nbrwoundedunit =0;
_closeenough = UPSMON_closeenough;
_closenoughV = UPSMON_closeenoughV;
_ambushed = false;
_enemytanknear = objNull;
_surrended = false;
_rstuckControl = 0;

// ***********************************************************************************************************
// ************************************************ MAIN LOOP ************************************************
// ***********************************************************************************************************
	
while {true} do 
{
	{
		//if (UPSMON_Debug>0) then {player sidechat format["%1: _cycle=%2 _currcycle=%3 _react=%4 _waiting=%5",_grpidx,_cycle,_currcycle,_react,_waiting]}; 
		_npc = _x;
	
		_lastcurrpos = (_npc getvariable "UPSMON_Lastinfos") select 0;
		_lastknown = (_npc getvariable "UPSMON_Lastinfos") select 3;
		_lastwptype = (_npc getvariable "UPSMON_Lastinfos") select 1;
		_lastpos = (_npc getvariable "UPSMON_Lastinfos") select 2;
		_flankdir = (_npc getvariable "UPSMON_Lastinfos") select 5;
		_lastmembers = (_npc getvariable "UPSMON_Lastinfos") select 6;
		_timeinfo = (_npc getvariable "UPSMON_Lastinfos") select 7;
		_timeontarget = _npc getvariable "UPSMON_TIMEONTARGET";
		_react = (_npc getvariable "UPSMON_REACT") select 0;
		_lastreact = (_npc getvariable "UPSMON_REACT") select 1;
		_minreact = (_npc getvariable "UPSMON_REACT") select 2;
		_waiting = _npc getvariable "UPSMON_Waiting";
		_membertypes = (_npc getvariable "UPSMON_RESPAWNARRAY") select 0;
		_vehicletypes = (_npc getvariable "UPSMON_RESPAWNARRAY") select 1;
		_makenewtarget = _npc getvariable "UPSMON_makenewtarget";
		_reinforcementsent = (_npc getvariable "UPSMON_REINFORCEMENTSENT") select 0;
		_reinforcement = _npc getvariable "UPSMON_REINFORCEMENT";
		_timereinforcement =(_npc getvariable "UPSMON_REINFORCEMENTSENT") select 1;
		_timeartillery = _npc getvariable "UPSMON_TimeArtillery";
	
		_timeontarget = _timeontarget + 4;
		_react= _react + 4;	
		_waiting = _waiting - 4;
		_lastreact = _lastreact + 4;
		_newpos = false;
		_timeinfo = _timeinfo + 4;
		_timereinforcement = _timereinforcement + 4;
		_timeartillery = _timeartillery + 10;
		
		_grpid = _npc getvariable "UPSMON_grpid";
		_Ucthis = _npc getvariable "UPSMON_Ucthis";
		_grpidx = format["%1",_grpid];
		_grpname = format["%1_%2",(side _npc),_grpidx];
	
		_side = (_npc getvariable "UPSMON_Grpinfos") select 0;
		_members = (_npc getvariable "UPSMON_Grpinfos") select 1;
		_grp = (_npc getvariable "UPSMON_Grpinfos") select 2;
	
		_isSoldier = true;
		_exit = false;
		_fightmode = "WALK";
	
		_fortifyorig = (_npc getvariable "UPSMON_Fortify") select 0;
		_fortify = (_npc getvariable "UPSMON_Fortify") select 1;
		
		//Sets min units alive for surrender
		if !( _side == civilian ) then 
		{ 
			_surrender = call (compile format ["UPSMON_%1_SURRENDER",_side]); 
			_retreat = call (compile format ["UPSMON_%1_SURRENDER",_side]); 
		};

		// wait at patrol end points
		_pause = if ("NOWAIT" in _UCthis) then {"NOWAIT"} else {"WAIT"};
		_nomove  = if ("NOMOVE" in _UCthis || _fortify) then {"NOMOVE"} else {"MOVE"};

		// create _targerpoint on the roads only (by this group)
		_onroad = if ("ONROAD" in _UCthis) then {true} else {false};
		// do not use smoke (by this group)
		_nosmoke = if ("NOSMOKE" in _UCthis) then {true} else {false};
	
		// don't follow outside of marker area
		_nofollow = if ("NOFOLLOW" in _UCthis) then {"NOFOLLOW"} else {"FOLLOW"};
		// share enemy info 
		_shareinfo = if ("NOSHARE" in _UCthis) then {"NOSHARE"} else {"SHARE"};
	
		// suppress fight behaviour
		if ("NOAI" in _UCthis || side _npc == civilian) then {_isSoldier=false};	
	
		// do not search for vehicles (unless in fight and combat vehicles)
		_noveh = if ("NOVEH" in _UCthis || "NOVEH2" in _UCthis) then {true} else {false};	
		_noveh2 = if ("NOVEH2" in _UCthis) then {true} else {false};	// Ajout
	
		_radiorange = _npc getvariable "UPSMON_RadioRange";
		_orgMode = (_npc getvariable "UPSMON_Origin") select 0;
		_orgSpeed = (_npc getvariable "UPSMON_Origin") select 1;
		_orgpos = (_npc getvariable "UPSMON_Origin") select 2;
		_wpformation = (_npc getvariable "UPSMON_Origin") select 3;
	
		_speedmode = _orgSpeed;
		_behaviour = behaviour _npc;
	
		_nowp = (_npc getvariable "UPSMON_NOWP") select 0;
		_nowtype = (_npc getvariable "UPSMON_NOWP") select 1;
		
		_grpmission = (_npc getvariable "UPSMON_Grpstatus") select 0;
		_lastgrpmission = (_npc getvariable "UPSMON_Grpstatus") select 2;
		
		_fixedtargetPos = [0,0];
		_targetpos = _lastpos;
	
	//========================= Marker caracteristics =================================================
		_areamarker = _Ucthis select 1;
	
		// remember center position of area marker
		_centerpos = getMarkerPos _areamarker;
		_centerX = abs(_centerpos select 0);
		_centerY = abs(_centerpos select 1);
		_centerpos = [_centerX,_centerY];
	
		// X/Y range of target area
		_areasize = getMarkerSize _areamarker;
		_rangeX = _areasize select 0;
		_rangeY = _areasize select 1;
		_area = abs((_rangeX * _rangeY) ^ 0.5);
		// marker orientation (needed as negative value!)
		_areadir = (markerDir _areamarker) * -1;
	
	//===================================================================================================
	
		_sokilled = false;
		_sowounded = false;
		_gothit = false;
		_Supstate = random 100 < 40;
		_newpos = false;
		_pursue = false;
		_supressed = false;
		_colorstatus = (_npc getvariable "UPSMON_Grpstatus") select 1;
	
	
		// did the leader die?
		_npc = [_npc,units _npc] call UPSMON_getleader;							
		if (!alive _npc || !canmove _npc || isplayer _npc ) then {_exit=true;};
	
		// EXIT FROM LOOP =======================================================================================================
		// nobody left alive, exit routine
		if (count units _npc == 0 || _npc getvariable "UPSMON_Deletegroup") then 
		{
			_exit=true;
		}; 
	
		//exits from loop
		if (_exit) exitwith {[_npc,_Ucthis,_target,_orgpos,_surrended,_closeenough,_grpidx,_membertypes,_vehicletypes,_side] call UPSMON_Respawngrp;};

		//=============================================================================================================================	
	
		//Assign the current leader of the group in the array of group leaders
		If (!(_npc in UPSMON_NPCs)) then {UPSMON_NPCs = UPSMON_NPCs + [_npc];};
		if (_reinforcement == "REINFORCEMENT") then 
		{
				switch (_side) do 
			{
				case West: 
				{
					if (!(_npc in UPSMON_REINFORCEMENT_WEST_UNITS) && (IsNull _target || _targetdead) && !_reinforcementsent) then  {UPSMON_REINFORCEMENT_WEST_UNITS = UPSMON_REINFORCEMENT_WEST_UNITS + [_npc]};	
				};
				case EAST: 
				{
					if (!(_npc in UPSMON_REINFORCEMENT_EAST_UNITS) && (IsNull _target || _targetdead) && !_reinforcementsent) then  {UPSMON_REINFORCEMENT_EAST_UNITS = UPSMON_REINFORCEMENT_EAST_UNITS + [_npc]};
				};
				case resistance: 
				{
					if (!(_npc in UPSMON_REINFORCEMENT_GUER_UNITS) && (IsNull _target || _targetdead) && !_reinforcementsent) then  {UPSMON_REINFORCEMENT_GUER_UNITS = UPSMON_REINFORCEMENT_GUER_UNITS + [_npc]};		
				};
	
			};
		};

		// current position
		_currPos = getpos _npc; _currX = _currPos select 0; _currY = _currPos select 1;
		// Variable check if Unit is HIT / WOUNDED / KILLED ===========================================================================
		// CHECK IF did anybody in the group got hit or die? 
	
		If (isNil "tpwcas_running") then 
		{
			If (isNil "bdetect_enable") then
			{ 
				if (group _npc in UPSMON_GOTHIT_ARRAY || group _npc in UPSMON_GOTKILL_ARRAY) then
				{
					_gothit = true;
					If (_Supstate) then {_supressed = true} else {_supressed = false};
					if (group _npc in UPSMON_GOTHIT_ARRAY) then
					{
						_sowounded = true;
						_nbrwoundedunit = 0;
						{
							If (lifestate _x == "INJURED") then {_nbrwoundedunit = _nbrwoundedunit +1;};
						}Foreach units _npc;
					}
					else
					{
						_sokilled = true;
						UPSMON_GOTKILL_ARRAY = UPSMON_GOTKILL_ARRAY - [group _npc];
					};
					UPSMON_GOTHIT_ARRAY = UPSMON_GOTHIT_ARRAY - [group _npc];
				};
			}
			else
			{
				_Supstate = _npc getVariable ["bcombat_suppression_level", 0];
				if (_Supstate >= 20) then
				{
					_gothit = true;
					If (_Supstate >= 75) then {_supressed = true} else {_supressed = false};
				};
		
				if (group _npc in UPSMON_GOTHIT_ARRAY || group _npc in UPSMON_GOTKILL_ARRAY) then
				{
					_gothit = true;
			
					if (group _npc in UPSMON_GOTHIT_ARRAY) then
					{
						_sowounded = true;
						_nbrwoundedunit = 0;
						{
							If (lifestate _x == "INJURED") then {_nbrwoundedunit = _nbrwoundedunit +1;};
						}Foreach units _npc;
					}
					else
					{
						_sokilled = true;
						UPSMON_GOTKILL_ARRAY = UPSMON_GOTKILL_ARRAY - [group _npc];
					};
					UPSMON_GOTHIT_ARRAY = UPSMON_GOTHIT_ARRAY - [group _npc];
				};
			};
			
		} 
		else 
		{
			_Supstate = [_npc] call UPSMON_supstatestatus; 
			if (_Supstate >= 2) then
			{
				_gothit = true;
				_Supstate = [_npc] call UPSMON_supstatestatus;
				If (_Supstate == 3) then {_supressed = true} else {_supressed = false};
			};
		
			if (group _npc in UPSMON_GOTHIT_ARRAY || group _npc in UPSMON_GOTKILL_ARRAY) then
			{
				_gothit = true;
				_Supstate = [_npc] call UPSMON_supstatestatus;
				If (_Supstate == 3) then {_supressed = true} else {_supressed = false};
			
				if (group _npc in UPSMON_GOTHIT_ARRAY) then
				{
					_sowounded = true;
					_nbrwoundedunit = 0;
					{
						If (lifestate _x == "INJURED") then {_nbrwoundedunit = _nbrwoundedunit +1;};
					}Foreach units _npc;
				}
				else
				{
					_sokilled = true;
					UPSMON_GOTKILL_ARRAY = UPSMON_GOTKILL_ARRAY - [group _npc];
				};
					UPSMON_GOTHIT_ARRAY = UPSMON_GOTHIT_ARRAY - [group _npc];
			};
		};

		If (_nbrwoundedunit > 0) then {_react = (-2) * _nbrwoundedunit;_morale = -0.2;};
		If (count _lastmembers > count units _npc) then {_react = -5;_morale = -0.5;};
		
		//Variables to see if the leader is in a vehicle
		_isman = "Man" countType [ vehicle _npc]>0;
		_incar = "LandVehicle" countType [vehicle (_npc)]>0;
		_inheli = "Air" countType [vehicle (_npc)]>0;
		_inboat = "Ship" countType [vehicle (_npc)]>0;
		_isdiver = ["diver", (typeOf (leader _npc))] call BIS_fnc_inString;
	


// if the AI is a civilian we don't have to bother checking for enemy encounters
		if (_isSoldier && !_exit) then 
		{
			_linkactivate = false;
			
			//_unitsneedammo = [_npc] call UPSMON_checkmunition;
			_unitsneedammo = [];
			
			// set target tolerance high for choppers & planes
			if ("Air" countType [vehicle _npc]>0) then {_closeenough = UPSMON_closeenough * 2};

			
			//=====================================================================================================
			// REFINFORCEMENT = true
			//=====================================================================================================	
		
			//If the group is strengthened and the enemies have been detected are sent to target
			_rfid = _npc getvariable "UPSMON_RFID";
			if (isnil "_rfid") then {_rfid=0};
			
			if (_rfid > 0 ) then 
			{
				_rfidcalled = false; // will be TRUE when variable in triger will be true.
				if !(isnil (compile format ["UPSMON_reinforcement%1",_rfid])) then {_rfidcalled= call (compile format ["UPSMON_reinforcement%1",_rfid])};													
			};
			sleep .01;
		
			//Reinforcement control
			if (_reinforcement == "REINFORCEMENT" || _rfid > 0) then 
			{
				// (global call  OR id call) AND !send yet
				if ( (UPSMON_reinforcement || _rfidcalled) && (!_reinforcementsent)) then 
				{				
					If (_rfidcalled) then 
					{
						_fixedtargetPos = call (compile format ["UPSMON_reinforcement%1_pos",_rfid]); // will be position os setfix target of sending reinforcement
						if (isnil "_fixedtargetPos") then 
						{
							_fixedtargetPos =[0,0];
						}else{
							_fixedtargetPos =  [abs(_fixedtargetPos select 0),abs(_fixedtargetPos select 1)];
						};
					} 
					else 
					{
						_fixedtargetPos = _npc getvariable "UPSMON_PosToRenf";
					};
				
					If (format ["%1",_fixedtargetPos] != "[0,0]" && (_lastpos select 0 != _fixedtargetPos select 0 && _lastpos select 1 != _fixedtargetPos select 1)) then 
					{ 
						_reinforcementsent=true;
						_fortify = false;
						{_x enableAI "TARGET"} foreach units _npc;
						_minreact = UPSMON_minreact;
						_buildingdist = 60;			
						_react = _react + 100;		
						_waiting = -1;					
						_nowp = false;
						_targetpos = _fixedtargetpos;
						_grpmission = "REINF";
						If (UPSMON_DEBUG > 0) then {[_targetpos,"ColorBlue"] call fnc_createMarker;};
						_wptype ="MOVE";
						_newpos = true;
					};
					//if (UPSMON_Debug>0) then {player sidechat format["%1 called for reinforcement %2",_grpidx,_fixedtargetPos]};	
				} else {
					// !(global or id call) AND send
					if (!(UPSMON_reinforcement || _rfidcalled) && _reinforcementsent) then 
					{
						_fixedtargetPos = [0,0];
						_attackPos = [0,0];
						_fortify = _fortifyorig;
						_reinforcementsent=false;
						if (_rfid > 0 ) then 
						{
							call (compile format ["UPSMON_reinforcement%1_pos = [0,0]",_rfid]);
							call (compile format ["UPSMON_reinforcement%1 = false",_rfid]);
						};
						if (UPSMON_Debug>0) then {player sidechat format["%1 reinforcement canceled",_grpidx]};	
					};
				};
			};
		//----------- END REINFORCEMENT -------------
			
//*********************************************************************************************************************
// 											ACQUISITION OF TARGET 	
//*********************************************************************************************************************		
	
		_TargetSearch 	= [];
		_Enemies = [];
	
		_TargetSearch 	= [_npc,_shareinfo,_closeenough,_flankdir,_timeontarget,_timeinfo] call UPSMON_TargetAcquisition;
		_Enemies 		= _TargetSearch select 0;
		_target 		= _TargetSearch select 1;
		_dist 			= _TargetSearch select 2;
		_opfknowval 	= _TargetSearch select 3;
		_targetsnear 	= _TargetSearch select 4;
		_attackPos 		= _TargetSearch select 5;
		_timeontarget 	= _TargetSearch select 6;
		_targetdead 	= _TargetSearch select 7;
		_flankdir 		= _TargetSearch select 8;
		_timeinfo 		= _TargetSearch select 9;

	if (UPSMON_Debug>0) then {diag_log format ["target:%1 dist:%2 opfknowval:%3 targetsnear:%4 attackPos:%5 timeinfo:%3",_target,_dist,_opfknowval,_targetsnear,_attackPos,_timeinfo];};
	
	
////////////////////////////////////////// TARGET FOUND ////////////////////////////////////////////////////////////////
	
	//Gets  current known position of target and distance
		if ( !isNull (_target) && alive _target && (_grpmission != "AMBUSH")) then 
		{
			//Enemy detected
			if (_fightmode != "fight" ) then 
			{
				_fightmode = "fight";
				{_x setCombatMode "YELLOW";} foreach units _npc;
				_react = UPSMON_react;
				
				
				if (UPSMON_Debug>0) then {player sidechat format["%1: Enemy detected %2",_grpidx, typeof _target]}; 	
				
				if (_nowpType == 1) then {
					nul = [_npc] call UPSMON_FN_deleteObsoleteWaypoints;
					_nowp = false;
				};
			

				_newattackPos = _target getvariable ("UPSMON_lastknownpos");
			
				if ( !isnil "_newattackPos" ) then 
				{
					_attackPos=_newattackPos;	
					//Gets distance to target known pos
					_dist = ([_currpos,_attackPos] call UPSMON_distancePosSqr);	
					//Looks at target known pos
					_members lookat _attackPos;							 				
				};
			};

			//If use statics are enabled leader searches for static weapons near or fire artillery.
			// Tanks enemies are contabiliced
			
				_enemytanksnear = false;	
				{
					if ( ("Tank" countType [_x select 0] > 0 || "Wheeled_APC" countType [_x select 0] >0 
						|| "Tank" countType [vehicle (_x select 0)] > 0 || "Wheeled_APC" countType [vehicle (_x select 0)] >0 ) 
						&& alive (_x select 0) && canMove (_x select 0) && (_npc distance (_x select 0) <= _closeenough + UPSMON_safedist && _npc distance (_x select 0) >= _closeenough))
						exitwith { _enemytanksnear = true; _enemytanknear = (_x select 0);};																					
				} foreach _Enemies;
				
			
			if ( UPSMON_useMines && ("ATMine" in (magazines player)) && !_supressed && 	(_grpmission != "AMBUSH")&& (_grpmission != "RETREAT")) then 
			{
				
				//If use mines are enabled and enemy armors near and no friendly armor put mine.
				if ( _enemytanksnear && { !(isnull _enemytanknear) } && { alive _enemytanknear } ) then 
				{
					_friendlytanksnear = false;
					{
						if (!( alive _x && canMove _x)) then {_friendlytanks = _friendlytanks - [_x]};
						if (alive _x && canMove _x && _npc distance _x <= _closeenough + UPSMON_safedist ) exitwith { _friendlytanksnear = true;}; 
					}foreach _friendlytanks;

					// if group has no AT weapon make them hide
					
					
					if (!_friendlytanksnear && random(100)<30 ) then 
					{
						_dir1 = [_currPos,position _enemytanknear] call UPSMON_getDirPos;
						_mineposition = [position _npc,_dir1, 25] call UPSMON_GetPos2D;	
						_roads = _mineposition nearroads 50;
						if (count _roads > 0) then {_mineposition = position (_roads select 0);};
						[_npc,_mineposition] call UPSMON_CreateMine;													
					};				
				};
			};

			
	//////////// ARTI REACTION ///////////////////////////////////////////////////////////
		_artillerysideFire = call (compile format ["UPSMON_ARTILLERY_%1_FIRE",_side]);
		
		switch (_side) do 
		{
			case West: 
			{
				_artillerysideunits = UPSMON_ARTILLERY_WEST_UNITS;
			};
			case EAST: 
			{
				_artillerysideunits = UPSMON_ARTILLERY_EAST_UNITS;
			};
				case resistance: 
			{
				_artillerysideunits = UPSMON_ARTILLERY_GUER_UNITS; 
			};
	
		};
		
		// If the group is in inferiority call artillery
		_nbrTargets = [_target,50,_side] call UPSMON_checksizetargetgrp;
		_nbrTargets = count _nbrTargets;
		_outbuilding = [_target] call UPSMON_inbuilding;
		
		// If night and there no flare in the sky then launch flare	
		If (_artillerysideFire
			&& _RadioRange > 0
			&& count _artillerysideunits > 0 
			&& (_grpmission != "AMBUSH")
			&& (_grpmission != "RETREAT") 
			&& _timeartillery >= 30
			&& !(_target iskindof "Air")) then
		{
			
			
			If (UPSMON_Night 
				&& !(UPSMON_FlareInTheAir)
				&& _npc knowsabout _target < 1.9) then 
			{	
				_timeartillery = 0;
				[_artillerysideunits,"FLARE",_RadioRange,getpos _npc,3,_attackpos] spawn UPSMON_Artyhq;
			};
			
			If (_enemytanksnear 
			&& !(isnull _enemytanknear)
			&& alive _enemytanknear
			&& ((speed _enemytanknear) <= 5)
			&& _dist >= 200
			&& _npc knowsabout _enemytanknear >= 1.9
			&& morale _npc > -1) then 
			{
				_timeartillery = 0;
				[_artillerysideunits,"HE",_RadioRange,getpos _npc,2,_attackpos] spawn UPSMON_Artyhq;	
			};
			
			If (_dist >= 200
			&& ( _nbrTargets >= 3 || !_outbuilding || _dist >= 600)
			&& _npc knowsabout _target >= 1.9
			&& morale _npc > -1) then 
			{
				_timeartillery = 0;
				If (!_outbuilding || _dist >= 600) then
				{
					[_artillerysideunits,"HE",_RadioRange,getpos _npc,2,_attackpos] spawn UPSMON_Artyhq;
				}
				else
				{
					[_artillerysideunits,"HE",_RadioRange,getpos _npc,4,_attackpos] spawn UPSMON_Artyhq;
				};
			};
		
		
		};
								
		if (UPSMON_Debug>0) then {diag_log format["Artillery condition artillerysideFire: %1 RadioRange: %2 Knowval: %3 timeartillery: %4 nbrTargets: %5",_artillerysideFire,_RadioRange,_npc knowsabout _target,_timeartillery,_nbrTargets]};
	
			//if (UPSMON_Debug>0) then {diag_log format["Reinforcement condition Supressed: %1 Morale: %2 members: %3 unit: %4 Wounded: %5 Targets: %6 reinforcementSent : %7 Reinforcement: %8",_supressed,morale _npc,count _members, count (units _npc),_nbrwoundedunit,(_nbrTargets > (count units _npc) *2),_reinforcementsent,UPSMON_reinforcement]};
			If ((_supressed || morale _npc < -0.6 || ((count _members / 2) >= (count (units _npc)) - _nbrwoundedunit) || (count _Enemies) > (count units _npc)) && !_reinforcementsent && UPSMON_reinforcement) then 
			{
				_colorstatus = "RED";
				if (UPSMON_Debug>0) then {diag_log format["%1 ask for reinforcement",_grpid]};
				_reinforcementsent = [getpos _npc,_attackpos,_radiorange,_side,_Enemies,_nbrTargets,_enemytanknear,_npc] spawn UPSMON_Askrenf;
				_reinforcementsent = true;
			};
			
			/////// Group supressed /////////
		
			if (_npc == vehicle (_npc) && (_supressed || morale _npc < -1) && _wptype != "HOLD") then
			{				
				if (UPSMON_Debug>0) then {diag_log format["UPSMON: gothit: group %1 supressed by fire",_grpidx]};											
				
				//The unit is deleted, delete the current waypoint	
				_targettext ="SUPRESSED";
				_grpmission = "DEFEND";
				_colorstatus = "ORANGE";
				_react = - 20;
				
				//Prone
				{
					//Motion vanishes
					if ( _x iskindof "Man" && { canmove _x } && { alive _x } ) then 
					{																		
						if ( (random 100)<40 || (primaryWeapon _x ) in UPSMON_MG_WEAPONS ) then 
						{
							[_x,"Down",20] spawn UPSMON_setUnitPosTime;			
						}
						else
						{
							[_x,"AUTO"] spawn UPSMON_setUnitPos;
						};												
					};
					//sleep 0.01;
				} foreach units _npc;
				
												
				////// RETREAT ////////////

				If ( UPSMON_RETREAT 
				&& ((random 100)<= _retreat)
				&& (morale _npc < -1.1)
				&& !_supressed 
				&& !IsNull _target) then
				{
					_flankdir = 0;
					_grpmission = "RETREAT";
					_newpos = true;
					_react = -30;
					_colorstatus = "WHITE";
					_targettext = "avoidPos";
					if (_fortify) then {{_x enableAI "TARGET";} foreach units (group _npc);} else {(group _npc) enableAttack false;};
					
					If (_artillerysideFire
					&& _RadioRange > 0 
					&& count _artillerysideunits > 0
					&& !(_target iskindof "Air")
					&&	_timeartillery >= 30
					&& _dist >= 200) then 
					{
						[_artillerysideunits,"WP",_RadioRange,getpos _npc,3,_attackpos] spawn UPSMON_Artyhq;
					};
					
					_targetpos = [_npc,_target,_AttackPos,_RadioRange,_timeinfo,_dist] call UPSMON_WITHDRAW;
					
					if ((random 100) < 15 && { !_nosmoke } ) then 
					{	
						[_npc,getpos _target] call UPSMON_throw_grenade;
					};
				};				
			};

			//Checks if surrender is enabled
			If ( UPSMON_SURRENDER
			&& { _gothit } 
			&& { _npc == vehicle (_npc) } 
			&& { alive _npc } 
			&& { morale _npc < -1.1 } 
			&& { ((random 100) <= _surrender)}) then
			{
				_Arrayofnearestunit = [_npc,180] call UPSMON_checkallied;
				_alliednear = count (_Arrayofnearestunit select 0);
				_enynear = count (_Arrayofnearestunit select 1);
		
				If (_alliednear < _enynear || (count units _npc)/3 <= count _unitsneedammo) then 
				{
					_surrended = true;
				};		
			};
	
			//If surrended exits from script
			if (_surrended) exitwith 
			{	
				{
					[_x] spawn UPSMON_surrended;
				}foreach units group _npc;
		
				if (UPSMON_Debug>0) then {_npc globalchat format["%1: %2 SURRENDED",_grpidx,_side]};		
			};
				
	};
	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	// use smoke when hit or s/o killed	
	//If under attack or increasing knowledge speeds up the response and regain control of the AI
	if (_sowounded || _gothit || _sokilled) then 
	{ 
		if (!_supressed) then {_react = _react + 30};
		
		If (!IsNull _target && alive _target && !_fortify) then 
		{
			_waiting = -1;
			_grpmission = "ATTACK";
			_makenewtarget = false;
			
			If (_dist > (_closeenough * 2) || _sokilled) then 
			{
				_Behaviour =  "AWARE";	
				_speedmode = "NORMAL";				
				
				if (!_nosmoke && random 100 < UPSMON_USE_SMOKE && _sokilled && (morale _npc < 0) && isNil "bdetect_enable") then 
				{
					{
						If (alive _x && ( "SmokeShell" in (magazines _x))) then
						{
						_smoke = true;
						If (isNil "tpwcas_running" && _x getvariable "tpwcas_supstate" >= 2) then {_smoke = false;};
						If (_smoke) then {nul= [_x,_attackpos] spawn UPSMON_throw_grenade;};
						};
					} foreach units (group _npc);
				};		
			}
			else
			{
				_waiting = -1;				
				_pause="NOWAIT";				
				_speedmode = "FULL";						
				_Behaviour = "COMBAT";

				if (!_nosmoke && random 100 < UPSMON_USE_SMOKE && count _members >= (count (units _npc)) - _nbrwoundedunit && isNil "bdetect_enable") then 
				{
					{
						If (alive _x && ( "SmokeShell" in (magazines _x))) then
						{
							_smoke = true;
							If (isNil "tpwcas_running" && _x getvariable "tpwcas_supstate" >= 2) then {_smoke = false;};
							If (_smoke) then {nul= [_x,_attackpos] spawn UPSMON_throw_grenade;};
						};
					} foreach units (group _npc);
				};					
			};
		}
		else 
		{
			_colorstatus = "BLUE";				
			_pause="NOWAIT";				
			_speedmode = "FULL";						
			_Behaviour = "AWARE";
			_grpmission = "PATROL";
			_makenewtarget = true;

			if (!_nosmoke && random 100 < UPSMON_USE_SMOKE && count _members >= (count (units _npc)) - _nbrwoundedunit) then 
			{
				{
						If (alive _x && ("SmokeShell" in (magazines _x))) then
						{
							_smoke = true;
							If (isNil "tpwcas_running" && _x getvariable "tpwcas_supstate" >= 2) then {_smoke = false;};
							If (_smoke) then {_smokeposition = [getpos _x,((getdir _x) + (random 70)), (random 100) + 50] call UPSMON_GetPos2D; nul= [_x,_smokeposition] spawn UPSMON_throw_grenade;};							
						};					
					
				} foreach units (group _npc);
			};
		};
		
		if (_fightmode != "walk") then 
		{
			if (_nowpType != 3) then 
			{
				nul = [_npc] call UPSMON_FN_deleteObsoleteWaypoints;
				_nowp = false;
			};
		};
	};	
	
	
		
		//If the enemy has moved away from the radio coverage is not a reinforcement sent we will have lost track
		if (!isnull(_target) 
		&& _dist < 15
		&& _fightmode != "walk"
		&& _npc knowsabout _target < UPSMON_knowsAboutEnemy
		&& _timeontarget > UPSMON_maxwaiting
		&& _grpmission != "REINF") then 
		{			
			//If squad is near last position and no target clear position of target
			if (UPSMON_Debug>0) then {player sidechat format["%1: Target lost",_grpidx]}; 				
			_fightmode="walk";
			_speedmode = _orgSpeed;			
			_target = objnull;
			_Behaviour = _orgMode;					
			_waiting = -1;				
			_grpmission = "PATROL";
			_targetdead	= true;
			_makenewtarget = true; //Go back to the original position
		};			
		
	
		
		// if spotted an enemy or got shot, so start pursuit, if in combat and exceed time to react or movecompleted
		if (_grpmission != "AMBUSH" 
		&& (_fightmode != "walk")
		&& ((_react >= UPSMON_react && _lastreact >=_minreact) || moveToCompleted _npc )) then 
		{
			If (UPSMON_DEBUG > 0) then {player sidechat format ["Fortify:%1 Members:%2 Wounded:%3 Supressed:%4",_fortify,(count _members)/2,_nbrwoundedunit,_supressed];};
			If ((_fortify  || (count _members)/2 <= _nbrwoundedunit || _supressed || IsNull _target) && !_inheli) then
			{
				_grpmission = "DEFEND";
			}
			else
			{
				_grpmission = "ATTACK";
			};
		};
		

		//If there is no objective order is canceled persecution
		//If captive or surrended do not pursue
		if (((isNull (_target) || !alive _target) 
		|| (_lastreact >=_minreact && { _targetdead } && _fightmode == "walk") 
		|| isnil "_attackPos" 
		|| captive _target 
		|| format ["%1", _attackPos] == "[0,0]"
		|| format ["%1", _attackPos] == "[0,0,0]")
		&& _grpmission != "REINF") then 
		{
			_grpmission = "PATROL";
		};	
		
		if (isnil "_react") then {_react = 0}; 
		
		//If in safe mode if find dead bodies change behaviour
		if ((_fightmode == "walk") && _deadBodiesReact && (IsNull _target && !_targetdead))then 
		{
			_unitsin = [_npc,_buildingdist] call UPSMON_deadbodies;
			_colorstatus = "BLUE";
			//_firenear = _npc getvariable "UPS_hear" select 0;
			//|| _firenear
			if (count _unitsin > 0) then { 
				if (!_isSoldier) then {
					_npc setSpeedMode "FULL";					
				} else {
					if (!_gothit || !(_npc call BIS_fnc_enemyDetected)) then {
						_Behaviour =  "AWARE";
					} else {
						_Behaviour =  "COMBAT";
						If (IsNull _target && !_inheli) then {_grpmission = "DEFEND";} else {_grpmission = "ATTACK"};
						_fightmode = "fight";
					};	
					_react = _react + 20;
					_npc setBehaviour _Behaviour;
					if (UPSMON_Debug>0) then {player sidechat format["%1 dead bodies found! set %2",_grpidx,_Behaviour]};	
				}; 
			};
		};

//**********************************************************************************************************************
// 										END ACQUISITION OF TARGET 	
//**********************************************************************************************************************	

		
		//Ambush ==========================================================================================================
		if (_grpmission == "AMBUSH") then 
		{
			_pursue = false;
			_nowp = true;
			_ambushwait = 10000;
			_moral = 1;
			_colorstatus = "WHITE";
			
			_linked = if ("LINKED:" in _UCthis) then {true} else {false};
			_linkdistance = ["LINKED:",_linkdistance,_UCthis] call UPSMON_getArg;
			_ambushwait = ["AMBUSH:",_ambushwait,_UCthis] call UPSMON_getArg; _ambushwait = ["AMBUSH2:",_ambushwait,_UCthis] call UPSMON_getArg;
				
			//Ambush enemy is nearly aproach
			//_ambushdist = 50;		
			// replaced _target by _NearestEnemy
		
			_gothit = [_npc] call UPSMON_GothitParam;
			If (_linked) then {{If (_npc distance _x <= _linkdistance && _x getvariable "UPSMON_AMBUSHFIRE" && side _x == _side) exitwith {_linkactivate = true};} foreach UPSMON_NPCs};
			
			If (_npc knowsabout _target >= 4) then {_ambushwait = _ambushwait - 1;};
			
			if ((_gothit  || _linkactivate || (_ambushwait <= 0))
			||((!isNull (_target) && "Air" countType [_target]<=0) && ((_target distance _npc <= UPSMON_ambushdist)||(_target distance (_npc getvariable "UPSMON_Positiontoambush") < 20)))) then
			{ 
				sleep ((random 1) + 1); // let the enemy then get in the area 
				
				if (UPSMON_Debug>0) then {player sidechat format["%1: FIREEEEEEEEE!!! Gothit: %2 linkactivate: %3 Distance: %4 PositionToAmbush: %5 AmbushWait:%6",_grpidx,_gothit,_linkactivate,_target distance _npc <= KRON_UPS_ambushdist,_target distance _positiontoambush < 15,_ambushwait <= 0]};
			
				_npc setBehaviour "COMBAT";
				
				{
					_x setCombatMode "YELLOW";
					_x setvariable ["UPSMON_AMBUSHFIRE",true];
					If !(isNil "bdetect_enable") then {_x setVariable ["bcombat_task", nil];};
				} foreach units _npc;
				
				_nowp = false;
				_ambush = false;
				_linkactivate = false;
								
				//No engage yet
				_grpmission = "DEFEND";
			};			
		}; 
		
		//END Ambush ==========================================================================================================
			
		//if (UPSMON_Debug>0) then {player sidechat format["%1: _nowp=%2 in vehicle=%3 _inheli=%4 _npc=%5",_grpidx,_nowp,vehicle (_npc) ,_inheli,typeof _npc ]}; 	
		
		//If in vehicle take driver if not controlled by user
		if (alive _npc && !_nowp) then 
		{
			if (!_isman || (vehicle (_npc) != _npc && !_inboat && !(vehicle (_npc) iskindof "StaticWeapon"))) then { 						
				
				//If new target is close enough getout vehicle (not heli)	
				_unitsin = [];

				if (!_inheli) then { 						
					if (_fightmode == "walk") then {
						_GetOutDist =  _area / 20;
					}else{
						If (vehicle _npc iskindof "TANK" || vehicle _npc iskindof "Wheeled_APC_F") then
						{
							_GetOutDist =  _closeenough  * ((random .4) + 0.6);
						}
						else
						{
							_GetOutDist =  _closenoughV  * ((random .4) + 0.6);
						};
					};
					 
					  // ToDo check if obsolete
					_lastcurposcheck = false;
					if (!isnil "_lastcurrpos") then {
						if (_lastcurrpos select 0 == _currpos select 0 && _lastcurrpos select 1 == _currpos select 1 && moveToFailed (vehicle (_npc))) then {
							_lastcurposcheck = true;
						};
					};
					//-------------------------
					
					
					
					//If near target or stuck getout of vehicle and lock or gothit exits inmediately

					if 
					( 
						!canmove (vehicle (_npc))
						|| _gothit 
						|| { _dist <= _closeenough * 1.5 }
						|| { ( 
								_lastcurrpos select 0 == _currpos select 0
								&& { _lastcurrpos select 1 == _currpos select 1 } 
								&& { moveToFailed (vehicle (_npc)) } 
							  ) } 
						|| { moveToCompleted (vehicle (_npc)) }
					) 
					then 
					{
						_GetOutDist = 10000; // 2000
					};
					//if (UPSMON_Debug>0) then {player sidechat format["%1: vehicle=%2 _npc=%3",_grpidx,vehicle (_npc) ,typeof _npc ]};
					
					_unitsin = [_npc] call UPSMON_FN_allUnitsInCargo; // return units in cargo in all vehs used by the group
					
					private ["_handle1"];
					_handle1 = [_npc,_targetpos,_GetOutDist] spawn UPSMON_SN_GetOutDist;	// getout if as close as _GetOutDist to the target
					_timeout = time + 10;	
					waitUntil {scriptDone _handle1 || time > _timeout};
							
				}
				else 
				{
				
					_GetOutDist = 0; 					
				};
				
				
				
				// if there was getout of the cargo
				if (count _unitsin > 0) then {					
					//if (UPSMON_Debug>0) then {player sidechat format["%1: Geting out of vehicle, dist=%2 atdist=%3 _area=%4",_grpidx,([_currpos,_targetpos] call KRON_distancePosSqr),_GetOutDist,_area]}; 											
					_timeout = time + 7;	
					{ 
						waituntil {vehicle _x == _x || !canmove _x || !alive _x || time > _timeout || movetofailed _x  }; 
					} foreach _unitsin;			
					
					
					// did the leader die?
					_npc = [_npc,_members] call UPSMON_getleader;							
					if (!alive _npc || !canmove _npc || isplayer _npc ) exitwith {_exit=true;};	
					
					if (_fightmode == "fight" || _gothit) then {			
						_npc setBehaviour "COMBAT";		// AWARE																
						_groupOne = group _npc;
						_groupOne setFormation "DIAMOND";							
						nul = [_npc,30] spawn UPSMON_Domove;	
					};
					
					sleep 0.2;
					// select leader outside of vehicle
					{
						if (alive _x && canmove _x) exitwith {group _x selectLeader _x; _npc = _x};
					} foreach _unitsin;
							
					
					
					if (_fightmode == "fight") then 
					{	
						If !(IsNull _target) then {_grpmission = "ATTACK";} else {_grpmission = "DEFEND";};
					}
					else
					{					
						If (_grpmission != "REINF") then {_grpmission = "PATROL"};
						_makenewtarget=true;
					};						
				};	
			};									
		};	

	
		//If no fixed target check if current target is available
		if (format ["%1",_fixedtargetPos] != "[0,0]") then {	
			//If fixed target check if close enough or near enemy and gothit
			if (([_currpos,_fixedtargetpos] call UPSMON_distancePosSqr) <= _closeenough || (_dist <= _closeenough && _gothit)) then {		
				_fixedtargetPos = [0,0];
				If (!IsNull _target) then {_grpmission == "ATTACK"};
				If (IsNull _target && [_currpos,_fixedtargetpos] call UPSMON_distancePosSqr <= 100 && _timeontarget > 50) then {_grpmission == "PATROL"};
			} else {		
				_pursue = false;
				_attackPos=_fixedtargetPos;
				if (_react >= UPSMON_react && _lastreact >=_minreact) then {
					_grpmission = "REINF";
				};				
			};
		};	
	
	
		//If no waypoint do not move
		if (_nowp || _fortify) then 
		{
			_grpmission = "ATEASE";
			_colorstatus = "GREEN";
			If (_fortify) then {_grpmission = "FORTIFY";};
			_newpos = false;
			_waiting = 100;
		};	
		

		//If knowledge of the target increases accelerate the reaction
		if (_opfknowval > _lastknown ) then {
			_react = _react + 20;
		};
	
		if (_inheli) then {
			_heli = vehicle _npc;  // ToDo check if this is indeed heli an not AI himself
			if (!isnil "_heli") then 
			{
				_landing = _heli getVariable "UPSMON_landing";
				if (isnil ("_landing")) then {_landing=false;};
				if (_landing) then {	
					_grpmission = "DEFEND";
				};
			};
		};		
		sleep 0.1;
		
// **********************************************************************************************************************
//   								COMBAT: PURSUE AND DEFENSE
// **********************************************************************************************************************
		// UPSMON GROUP DEFEND Their position
		if (_grpmission == "DEFEND" && (_lastwptype != "HOLD" && _lastwptype != "SENTRY")) then 
		{
			_react = 0;
			_lastreact = 0;
			If (_fortify) then
			{
				_wptype = "SENTRY";
			}
			else 
			{
				_wptype = "HOLD";
			};
			
			if (UPSMON_Debug>0) then {diag_log format["UPSMON: Group %1 is in defense",_grpidx]};
			
			_wpformation = "DIAMOND";
			_targetPos = _currPos;	
			_targettext ="Defend";
			_pursue = false;
			_waiting = -1;
			_newpos = true;
			(group _npc ) enableAttack false;
			{_x setCombatMode "YELLOW";} foreach units _npc;
			If (IsNull _target) then {_colorstatus = "ORANGE";} else {_colorstatus = "YELLOW";};;
		};		
		
		// UPSMON GROUP ATTACK AND PURSUE NEAREST TARGET
		if (_grpmission == "ATTACK") then 
		{		
			if (UPSMON_Debug>0) then {diag_log format["UPSMON: Group %1 is in pursue",_grpidx]}; 
			
			_pursue = false; 	
			_react = 0;	
			_newpos = false;
			_lastreact = 0;
			_timeontarget = 0; 
			(group _npc ) enableAttack false;
			{_x stop false} foreach units _npc;
			_colorstatus = "YELLOW";
			_fm = 1;
			// did the leader die?
			_npc = [_npc,_members] call UPSMON_getleader;							
			if (!alive _npc || { !canmove _npc } || { isplayer _npc } ) exitwith {_exit=true;};
			
		
			// get position of spotted unit in player group, and watch that spot
			[_attackPos,"ColorRed"] call fnc_createMarker;
			_currPos = getpos _npc;									

			 // also go into "combat mode"		
			_pause="NOWAIT";
			_waiting=0;			
			
			// angle from unit to target
			_dir1 = [_currPos,_attackPos] call UPSMON_getDirPos;
			_dir2 = _dir1+180;	

						
			//Establish the type of waypoint
			//DESTROY has worse behavior with and sometimes do not move
			_wptype = "MOVE";
			_wpformation = "WEDGE";
			
			
			//Set speed and combat mode 
			_rnd = random 100;
			If (!_inheli && !_inboat) then
			{
				If (_dist > _closeenough/2) then 
				{
					_result = [_npc,_dir2,_attackPos,_flankdir] call UPSMON_SrchFlankPos1;
					_targetPos = _result select 0;
					_targettext = _result select 1; 
					_flankdir =_result select 2;
					_newpos = true;
				}
				else
				{
					_targetPos = _attackPos;
					_newpos = true;
				};
			if ( _dist <= _closeenough ) then 
			{
				
				//If we are so close we prioritize discretion fire
				if ( _dist <= _closeenough/2 ) then 
				{	
					_react = _react + UPSMON_react / 2;
					_minreact = UPSMON_minreact / 2;
					//Close combat modeo
					_speedmode = "FULL";	
					_wpformation = "LINE";
					If (vehicle _npc != _npc) then {_wpformation = "WEDGE";};
					(group _npc ) enableAttack true;
					
					 // _rnd < 80
					if (morale _npc <= 0 && _gothit) then 
					{           
						_Behaviour =  "COMBAT";
						{_x setCombatMode "RED";} foreach units _npc;
					} 
					else 
					{
						_Behaviour =  "STEALTH"; // ToDo check impact "STEALTH";
						_speedmode = "LIMITED";
						_wpformation = "DIAMOND";
						//{_x setCombatMode "WHITE";} foreach units _npc;
					};	
					
					_wptype = "SAD"; // MOVE
					_newpos = true;
				
				} 
				else 
				{
					//If the troop has the role of not moving tend to keep the position	
					_speedmode = "NORMAL"; 
					If (vehicle _npc != _npc) then {_wpformation = "VEE";};
					_minreact = UPSMON_minreact/1.5;					

					// _rnd = 80
					if (morale _npc <= 0 && _gothit) then 
					{
						_Behaviour =  "COMBAT";
					} 
					else 
					{
						_Behaviour =  "STEALTH";
						_speedmode = "LIMITED";
					};	
					_wptype = "MOVE";
						
				};								
			} 
			else	
			{	
				{_x setCombatMode "YELLOW";} foreach units _npc;
				
				if (_dist <= (_closeenough + UPSMON_safedist)) then 
				{

					_speedmode = "NORMAL";
					_minreact = UPSMON_minreact;
					
					if (morale _npc > 0 && !_gothit && (random 100 > 30)) then 
					{
						_Behaviour = "STEALTH";
					} 
					else 
					{
						_Behaviour = "AWARE";
					};
					
									
				} 
				else 
				{
					
					//In May distance of radio patrol act..
					if (( _dist <  UPSMON_sharedist )) then 
					{
						//Platoon from the target must move fast and to the point
						_Behaviour =  "AWARE"; 
						_speedmode = "NORMAL";	
						_minreact = UPSMON_minreact * 2;
					} 
					else 
					{
						//Platoon very far from the goal if not move nomove role
						_Behaviour =  "SAFE"; 
						_speedmode = "FULL";
						_minreact = UPSMON_minreact * 3;	
						_wpformation = "COLUMN";  //COLUMN						
												
					};
				};	
			};
			}
			else
			{
				If (_inheli) then
				{
					_Behaviour =  "COMBAT";
					_speedmode = "FULL";
					if ( _dist <= 600 ) then 
					{
						_react = _react + UPSMON_react / 2;
						_minreact = UPSMON_minreact / 2;
						_wptype = "SAD"; // MOVE
						_newpos = true;
					}
					else
					{
						_minreact = UPSMON_minreact;
						
						_result = [_npc,_dir2,_attackPos,_flankdir] call UPSMON_SrchFlankPosforPlane;
						_targetPos = _result select 0;
						_targettext = _result select 1; 
						_flankdir = 0;
						_newpos = true;
					};
				}
				else
				{
					_Behaviour =  "COMBAT";
					_speedmode = "FULL";
					if ( _dist <= 400 && surfaceiswater _targetPos) then 
					{
						_react = _react + UPSMON_react / 2;
						_minreact = UPSMON_minreact / 2;
						_wptype = "SAD"; // MOVE
						_newpos = true;
					}
					else
					{
						_minreact = UPSMON_minreact;
						
						_result = [_npc,_dir2,_attackPos,_flankdir] call UPSMON_SrchFlankPosforboat;
						_targetPos = _result select 0;
						If (!surfaceiswater _targetpos) then {_targetpos = _currpos;};
						_targettext = _result select 1; 
						_flankdir = 0;
						_newpos = true;
					};
				};
				
			};
				


			_targetPos = [_targetPos select 0,_targetPos select 1,0];
			
			// did the leader die?
			_npc = [_npc,_members] call UPSMON_getleader;							
			if (!alive _npc || { !canmove _npc } || { isplayer _npc } ) exitwith {_exit=true;};	
		
			//If leader is in vehicle will move in  anyway
			if (vehicle _npc != _npc || { !_isman } ) then 
			{
				_wptype = "MOVE";
				_Behaviour =  "AWARE"; 
				if ( _inheli) then 
				{
					_speedmode = "FULL";	
					_targetPos = _AttackPos;
				};
			};			
		


			//Establecemos el target
			UPSMON_targetsPos set [_grpid,_targetPos];				
						
						
			if (_nofollow=="NOFOLLOW" && _wptype != "HOLD") then 
			{
				_targetPos = [_targetPos,_centerpos,_rangeX,_rangeY,_areadir] call UPSMON_stayInside;
				_targetdist = [_currPos,_targetPos] call UPSMON_distancePosSqr;
			};
				
			//Is updated with the latest value, changing the target
			_lastknown = _opfknowval; 
				
			//If for whatever reason cancels the new position should make clear the parameters that go into pursuit
			if  (!_newpos) then 
			{
				//If the unit has decided to maintain position but is being attacked is being suppressed, should have the opportunity to react
				_newpos = _gothit;
				
				if  (!_newpos) then 
				{
					_wptype = "HOLD";
					if (UPSMON_Debug>0) then {player sidechat format["%1 Mantaining orders %2",_grpidx,_nomove]};	
				};
			};	
			
		};	//END PURSUE		
	sleep 0.02;
	}; //((_isSoldier) && ((count _enemies)>0)
	
	
	If (_fortify && !(IsNull _target) && alive _target && _dist <= _closeenough && _timeontarget > 40) then
	{
		_timeontarget = 0;
		{
			_outbuilding = [_x] call UPSMON_inbuilding;
			if (alive _x && !_outbuilding && unitready _x) then {[_x,_dist] spawn UPSMON_unitdefend;};
		} foreach units _npc;
	};

	
// **********************************************************************************************************************
//   								PATROL
// **********************************************************************************************************************
		if (_grpmission == "PATROL" && !_nowp) then 
		{
			_pursue = false;
			_gothit = false;
			_moral = 1;
			_targetdead	= true;		
			_fightmode = "walk";
			_speedmode = _orgSpeed;
			_reinforcementsent = false;
			_target = objnull;			
			_Behaviour = _orgMode;					
			_waiting = -1;
			_colorstatus = "GREEN";
			(group _npc) enableAttack false;
			if (_lastgrpmission == "ATTACK") then {{_x dofollow _npc;} foreach (units _grp - [_npc]);};
		
			//Gets distance to targetpos
			_targetdist = [_currPos,_targetPos] call UPSMON_distancePosSqr;	
		
			if (isNil "_lastcurrpos") then
			{
				_lastcurrpos = [0,0];
			};
		
			//Stuck control
			if (alive _npc
			&& canmove _npc 
			&& _lastcurrpos select 0 == _currpos select 0 
			&& _lastcurrpos select 1 == _currpos select 1
			&& (_timeontarget > 30)
			&& !("Air" countType [vehicle (_npc)]>0)) then 
			{
				[_npc] call UPSMON_cancelstop;	
				_makenewtarget = true;
		
				if (UPSMON_Debug>0) then {player sidechat format["%1 stucked, moving",_grpidx]};	
				if (UPSMON_Debug>0) then {diag_log format["%1 stuck for %2 seconds - trying to move again",_grpidx, _timeontarget]};	
			};
		
			//rStuckControl !R					
			if (_lastcurrpos select 0 == _currpos select 0 
			&& _lastcurrpos select 1 == _currpos select 1
			&& (_timeontarget > 60)
			&& !("Air" countType [vehicle (_npc)]>0)) then 
			{
				if (UPSMON_Debug>0) then {player sidechat format["%1 !RstuckControl try to move",_grpidx]};
				if (vehicle _npc != _npc) then 
				{
					_rstuckControl = _rstuckControl + 1;
							
					if (_rstuckControl > 1) then 
					{
						_jumpers = crew (vehicle _npc);
						{
							_x spawn UPSMON_doGetOut;	
							sleep 0.5;
						} forEach _jumpers;
					} 
					else 
					{	
						nul = [vehicle _npc, 25] spawn UPSMON_domove;
					}
				}
				else 
				{
					nul = [_npc, 25] spawn UPSMON_domove;
				};
			}
			else 
			{
				_rstuckControl = 0;
			};	
			_islanding = _npc getVariable "UPSMON_movetolanding";
			if ((_inheli && isnil ("_islanding")) && (_targetdist <= (30 + _flyInHeight) || moveToFailed _npc || moveToCompleted _npc)) then
			{
				_makenewtarget=true;
				_Behaviour = _orgMode;
			};
			
			_index = currentWaypoint _grp;
			//if (UPSMON_Debug>0) then {player sidechat format ["%1 waypoint index %2",_npc,_index];};
			if ((_targetdist <= 10 || moveToFailed _npc || moveToCompleted _npc)) then 
			{
				_makenewtarget=true;
				_Behaviour = _orgMode;
			};
			
			if (_makenewtarget) then
			{
				_gothit = false;
				_react = 0;		
				_lastreact = 0;	
				_makenewtarget = false;				
				_timeontarget = 0;
				_newpos = true;
				_wptype = "MOVE";	
				_targetpos = [_npc,_areamarker,_onroad] call UPSMON_SrchPtrlPos;
			};
		};

		sleep 0.02;
	
// **********************************************************************************************************************
//   								NEWPOS:	SE	EJECUTA		LA	ORDEN 	DE 	MOVIMIENTO
// **********************************************************************************************************************
		//	if (UPSMON_Debug>0) then {player sidechat format["%1 rea=%2 wai=%3 tim=%4 tg=%5 %6",_grpidx,_react,_waiting,_timeontarget,typeof _target,alive _target]};							

		if ((_waiting<=0)) then 
		{			
			_currPos = getpos _npc;
			_waiting = -1; 	
			_swimming=false;			
			_GetIn_NearestVehicles = false;	
		
			//Gets distance to targetpos
			_targetdist = [_currPos,_targetPos] call UPSMON_distancePosSqr;		
				
			// did the leader die?
			_npc = [_npc,_members] call UPSMON_getleader;	
			if (!alive _npc || { !canmove _npc } || { isplayer _npc } ) exitwith {_exit=true;};	
		
			
			if ( _wptype == "MOVE") then 
			{	
				if (UPSMON_Debug>0) then {diag_log format["UPSMON - group %1 looking for vehicles: [%2] - [%3] - [%4] - [%5] - [%6]",_grpidx, _dist, !_gothit,_targetdist, _isSoldier,!_noveh]};		
				
				
				//Search for vehicle			
				if ((!_gothit 
				&& ( _targetdist >= ( UPSMON_searchVehicledist ))) 
				&& _isSoldier 
				&& !_noveh
				&& !(_npc getvariable "UPSMON_DskHeli")
				&& (_targetpos select 0 != 0 && _targetpos select 1 != 0)) then 
				{							
					if ( ( vehicle _npc == _npc ) && ( _dist > _closeenough ) ) then 
					{						
						_unitsIn = [_grpid,_npc] call UPSMON_GetIn_NearestVehicles;		
					
						if (UPSMON_Debug>0) then {diag_log format["UPSMON - group %1 looking for vehicles to travel %2 m - unitsIn: [%3]",_grpidx, _dist, count _unitsIn]};					
						
						if ( count _unitsIn > 0) then 
						{	
							_GetIn_NearestVehicles = true;
							_speedmode = "FULL";	
							_npc setbehaviour "SAFE";
							_npc setspeedmode "FULL";
							_timeout = time + 60;
							
							_vehicle = objnull;
							_vehicles = [];
							{ 
								waitUntil { (vehicle _x != _x) || { time > _timeout } || { moveToFailed _x } || { !canMove _x } || { !canStand _x } || { !alive _x } }; 
								
								if ( vehicle _x != _x && (isnull _vehicle || _vehicle != vehicle _x)) then 
								{
									_vehicle = vehicle _x ;
									_vehicles = _vehicles + [_vehicle]
								};								
							} foreach _unitsIn;
							//sleep 1;							
							
							{
								_vehicle = _x;
								_cargo = _vehicle getVariable ("UPSMON_cargo");
								if ( isNil("_cargo")) then {_cargo = [];};	
								_cargo orderGetIn true;
								
								//Wait for other groups to getin								
								{ 
									waituntil { (vehicle _x != _x) || { time > _timeout } || { movetofailed _x } || { !canmove _x } || { !canstand _x } || { !alive _x } }; 
								} foreach _cargo;	
								
								//Starts gunner control
								nul = [_vehicle] spawn UPSMON_Gunnercontrol;
								sleep 0.1;
								// nul = [_x,30] spawn UPSMON_domove; //!R just little kick to make sure it moves
							} foreach _vehicles;
							
							//Checks if leader has dead in the mean time
							_npc = [_npc,_members] call UPSMON_getleader;							
							if (!alive _npc || { !canmove _npc } ) exitwith {_exit=true;};	
							If ("Ship" countType [vehicle (_npc)]>0) then 
							{
								_isFlat = _targetpos isflatempty [0,10,1,0,1,false];
								If (count _isFlat > 0) then {_targetpos = ASLtoATL _isFlat;};
							};
							
							If ("LandVehicle" countType [vehicle (_npc)]>0) then 
							{
									_isFlat = _targetpos isflatempty [10,10,0.7,10,0,false];
									If (count _isFlat > 0) then {_targetpos = ASLtoATL _isFlat;};
							};
							
							if ( "Air" countType [vehicle (_npc)]>0) then 
							{											
								_rnd = (random 2) * 0.1;
								_flyInHeight = round(UPSMON_flyInHeight * (0.9 + _rnd));
								vehicle _npc flyInHeight _flyInHeight;
								_paradrop = if ("LANDDROP" in _UCthis) then {false} else {true};
								//If you just enter the helicopter landing site is defined
								if (_GetIn_NearestVehicles) then {
									
									If (!_paradrop) then {
									_centerX2 = abs(_targetpos select 0); _centerY2 = abs(_targetpos select 1);
									_centerpos2 = [_centerX2,_centerY2];
									_rangeX2 = 200; _rangeY2 = 200;
									_areadir2 = (0) * -1;
	
									// store some trig calculations
									_cosdir2=cos(_areadir2);
									_sindir2=sin(_areadir2);
	
									_tries=0;
									_targetPosTemp = _targetPos;
									_P = true;

									while { _P && (_tries<50)} do 
									{
										_tries=_tries+1;
										_targetPosTemp = [_centerX2,_centerY2,_rangeX2,_rangeY2,_cosdir2,_sindir2,_areadir2] call UPSMON_randomPos;
		
										_isFlat = _targetPosTemp isflatempty [10,10,0.4,10,0,false];

										If (count _isFlat > 0) then {_targetpostemp = _isFlat;};
										If ((!surfaceIsWater _targetpostemp) && count _isFlat > 0) then {_P = false; _targetpos = ASLtoATL (_targetPosTemp);};
										sleep 0.05;
									};
									};
										
									_GetOutDist = round(((UPSMON_paradropdist )  * (random 100) / 100 ) + 150);
									[vehicle _npc,_paradrop,_TargetPos,_GetOutDist,_flyInHeight] spawn UPSMON_doParadrop; // org _flyInHeight shay_gman changed from MON_doParadrop to MON_landHely
									sleep 1;
									//Execute control stuck for helys
			
									[vehicle _npc] spawn UPSMON_HeliStuckcontrol;
									if (UPSMON_Debug>0 ) then {player sidechat format["%1: flyingheiht=%2 paradrop at dist=%3",_grpidx, _flyInHeight, _GetOutDist,_rnd]}; 
								};				
							};
							sleep 0.05;
						};					
					};
				};
			};	
				

			//Get in combat vehicles
			if (_isSoldier 
			&& (!_GetIn_NearestVehicles ) 
			&& ( _fightmode != "walk" ) 
			&& !_noveh2
			&& _grpmission != "AMBUSH") then 
			{					
				_dist2 = _dist / 4;
				if ( _dist2 <= 100 || !_gothit) then 
				{
					_unitsIn = [];					
					_unitsIn = [_grpid,_npc,_dist2,false] call UPSMON_GetIn_NearestCombat;	
					_timeout = time + (_dist2/2);
				
					if ( count _unitsIn > 0) then 
					{							
						if (UPSMON_Debug>0 ) then {player sidechat format["%1: Geting in combat vehicle targetdist=%2",_grpidx,_npc distance _target]}; 																						
						_npc setbehaviour "SAFE";
						_npc setspeedmode "FULL";						
						
						{ 
							waituntil {vehicle _x != _x || !canmove _x || !canstand _x || !alive _x || time > _timeout || movetofailed _x}; 
						}foreach _unitsIn;
						
						// did the leader die?
						_npc = [_npc,units _npc] call UPSMON_getleader;							
						if (!alive _npc || !canmove _npc || isplayer _npc ) exitwith {_exit=true;};								
						
						//Return to combat mode
						_npc setbehaviour _Behaviour;
						_npc setformation "COLUMN";
						_timeout = time + 150;
						{ 
							waituntil {vehicle _x != _x || !canmove _x || !alive _x || time > _timeout || movetofailed _x}; 
						}foreach _unitsIn;
						
						{								
							if ( vehicle _x  iskindof "Air") then {
								//moving hely for avoiding stuck
								if (driver vehicle _x == _x) then {
									_vehicle = vehicle (_x);									
									nul = [_vehicle,1000] spawn UPSMON_domove;	
									//Execute control stuck for helys
									[_vehicle] spawn UPSMON_HeliStuckcontrol;
									if (UPSMON_Debug>0 ) then {diag_log format["UPSMON %1: Getting in combat vehicle - distance: %2 m",_grpidx,_npc distance _target]}; 	
								};									
							};
							
							if (driver vehicle _x == _x) then {
								//Starts gunner control
								nul = [vehicle _x] spawn UPSMON_Gunnercontrol;								
							};
						} foreach _unitsIn;									
					};	
					sleep 0.02;	
					// did the leader die?
					_npc = [_npc,units _npc] call UPSMON_getleader;							
					if (!alive _npc || !canmove _npc || isplayer _npc ) exitwith {_exit=true;};
				};
				
				
			};
					
			
			//If use statics are enabled leader searches for static weapons near.
			if ((UPSMON_useStatics && {(vehicle _npc == _npc)} && {!_GetIn_NearestVehicles } && {_isSoldier}) 
				&& {((_wptype == "HOLD" && (random 100) < 80) || (_wptype != "HOLD" && (random 100) < 40))}) then 
			{
				 _unitsIn = [_grpid,_npc,_buildingdist] call UPSMON_GetIn_NearestStatic;			
				
				if ( count _unitsIn > 0) then {									
					_npc setbehaviour "SAFE";
					_npc setspeedmode "FULL";					
					_timeout = time + 60;
					
					{ 
						waituntil {vehicle _x != _x || { time > _timeout } || { movetofailed _x } || { !canmove _x } || { !alive _x } }; 
					} foreach _unitsIn;
					
					
					sleep 0.05;
					// did the leader die?
					_npc = [_npc,_members] call UPSMON_getleader;							
					if (!alive _npc || !canmove _npc || isplayer _npc ) exitwith {_exit=true;};
				
				};
				
			};	
			
		
			
			//Check for Static weapon
			If (_fortify 
			&& (_gothit)
			&& vehicle _npc == _npc
			&& _wptype == "HOLD" 
			&& morale _npc >= -0.3) then
			{
				_unitsIn = [_grpid,_npc,150] call UPSMON_GetIn_NearestStatic;
				if ( count _unitsIn > 0 ) then { sleep 10};
			};	
			
			If (!_supressed
			&& _fightmode == "fight" 
			&& morale _npc >= -0.3
			&& _wptype == "SAD"
			&& _dist < 100) then
			{
				[_npc,25,true,10,false] call UPSMON_moveNearestBuildings;
			};
			
		//If in hely calculations must done faster
			if (_inheli && _npc == (vehicle _npc)) then 
			{
				_flyInHeight = UPSMON_flyInHeight;
				If ((getPosATL (vehicle _npc)) select 2 < UPSMON_flyInHeight && !(_npc getvariable "UPSMON_DskHeli")) then {vehicle _npc flyInHeight _flyInHeight;};
				_speedmode = "FULL";
			};
			
			// did the leader die?
			_npc = [_npc,units _npc] call UPSMON_getleader;							
			if (!alive _npc || !canmove _npc || isplayer _npc ) exitwith {_exit=true;};			
			
			_lastcurrpos = getpos _npc;				
			_wp1 = [_grp,0];
			
			If (_newpos) then 
			{
				_newpos = false;
				_index = currentWaypoint _grp;	
				//_wp = [_grp,0];
																	
				while {(count (waypoints _grp)) > 0} do
				{
					deleteWaypoint ((waypoints _grp) select 0);
				};
					
				_wp1 = _grp addWaypoint [_targetPos, 1];																								
			};				
				_wp1  setWaypointType _wptype;						
				_wp1  setWaypointPosition [_targetPos, 1];
				_wp1  setWaypointFormation _wpformation;		
				_wp1  setWaypointSpeed _speedmode;	
				_lastwptype = _wptype;
				_lastgrpmission = _grpmission;
				
			// if iscar the run fast if targetpost is far.
			if ((!_gothit && _targetdist >= (_closeenough * 1.5)) && (vehicle _npc != _npc)) then {
					_speedmode = "FULL";																	
				};
							
			//if (UPSMON_Debug>0) then {diag_log format["%1: waypoints %2 %3 %4 %5",_grpidx,count waypoints _grp, _grp, group _npc, group (leader _npc)]}; 											
			
			//Sets behaviour
			if (toupper(behaviour _npc) != toupper (_Behaviour)) then {
				_npc setBehaviour _Behaviour;	
			};						
				
			//if (UPSMON_Debug>0) then {player sidechat format["%1: %2 %3 %4 %5 %6 %7 %8 %9 %10",_grpidx, _wptype, _targettext,_dist, _speedmode, _unitpos, _Behaviour, _wpformation,_fightmode,count waypoints _grp];};											
		}; //waiting


		if ((_exit) || (isNil("_npc")) || _npc getvariable "UPSMON_Deletegroup") exitwith
		{
			[_npc,_Ucthis,_target,_orgpos,_surrended,_closeenough,_grpidx,_membertypes,_vehicletypes,_side] call UPSMON_Respawngrp;
		}; 
		
		//Refresh position vector
		UPSMON_targetsPos set [_grpid,_targetPos];
		_lastpos=_targetPos;
		_lastreact = _react;
	
		{
			_x setvariable ["UPSMON_Lastinfos",[_lastcurrpos,_lastwptype,_lastpos,_lastknown,_target,_flankdir,units _npc,_timeinfo]];
			_x setvariable ["UPSMON_Waiting",_waiting];
			_x setvariable ["UPSMON_TIMEONTARGET",_timeontarget];
			_x setvariable ["UPSMON_NOWP",[_nowp,_nowptype]];
			_x setvariable ["UPSMON_Fortify",[_fortifyorig,_fortify]];
			_x setvariable ["UPSMON_makenewtarget",_makenewtarget];
			_x setvariable ["UPSMON_REINFORCEMENTSENT",[_reinforcementsent,_timereinforcement]];
			_x setvariable ["UPSMON_TimeArtillery",_timeartillery];
			_x setvariable ["UPSMON_Grpstatus",[_grpmission,_colorstatus,_lastgrpmission,[_react,_lastreact,_minreact],_target,_targetpos]];
			_x setvariable ["UPSMON_REACT",[_react,_lastreact,_minreact]];
		} foreach units _npc;
	
	} count UPSMON_NPCs > 0;
	
	sleep 4;
	
}; //loop