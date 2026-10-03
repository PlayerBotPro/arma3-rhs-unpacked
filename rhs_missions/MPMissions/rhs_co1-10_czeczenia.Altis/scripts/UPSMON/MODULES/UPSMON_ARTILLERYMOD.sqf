UPSMON_Artyhq = {
	
	_artillerysideunits = _this select 0;
	_firemission = _this select 1;
	_radiorange = _this select 2;
	_npcpos = _this select 3;
	_roundsask = _this select 4;
	_targetpos = _this select 5;
	
	_arti = [_artillerysideunits,_firemission,_RadioRange,_npcpos] call UPSMON_selectartillery;
	if (UPSMON_Debug>0) then {player sidechat format ["Arti: %1",_arti];};
	If !(IsNull _arti) then {
	[_arti,_firemission,_targetpos,_roundsask,_npcpos] spawn UPSMON_artilleryTarget;};
	
};

UPSMON_selectartillery = {

	private ["_support","_artiarray","_askMission","_RadioRange","_arti","_rounds","_artiarray","_artillerysideunits","_npc","_support","_artibusy"];
	
	_artillerysideunits = _this select 0;
	_askMission = _this select 1;
	_RadioRange = _this select 2;
	_npcpos = _this select 3;
	
	_arti = ObjNull;
	_rounds = 0;
	_artiarray = [_artillerysideunits, [], { _npcpos distance _x }, "ASCEND"] call BIS_fnc_sortBy;
	{
		_support = (vehicle _x) getVariable "UPSMON_ArtiOptions";
		_artibusy  = _support select 0;
		
		Switch (_askmission) do {
			case "HE": {
				_rounds = (_support select 1) select 2;
			};
		
			case "WP": {
				_rounds = (_support select 1) select 1;
			};
		
			case "FLARE": {
				_rounds = (_support select 1) select 0;
			};
	
		};
		
		If (!_artibusy && _x distance _npcpos <= _RadioRange && _rounds > 0) exitwith {_arti = _x;};
		if (UPSMON_Debug>0) then {player sidechat format ["Busy:%1 Distance:%2 RadioRange:%3 Rounds:%4",_artibusy,_x distance _npcpos,_RadioRange,_rounds];};
		
	} ForEach _artiarray;

	_arti
	
};
UPSMON_artilleryTarget = {
	
	private ["_support","_askBullet","_target","_arti","_missionabort","_rounds","_range","_area","_nbrbullet","_maxcadence","_mincadence","_askmission","_fire","_artibusy","_targetpos","_auxtarget","_npc"];
	_arti = _this select 0;
	
	_support = (vehicle _arti) getVariable "UPSMON_ArtiOptions";
	
	If (isnull (gunner _arti) 
	&& !(canmove (gunner _arti))) 
	exitwith 
	{
		if (UPSMON_Debug>0) then {player sidechat "ABORT: no gunner";};
	};
	
	// If (count _support <= 0 ) exitwith {if (UPSMON_Debug>0) then {player sidechat "ABORT: no support";};};
	
	
	_askMission = _this select 1;
	_targetpos = _this select 2;
	_roundsask = _this select 3;
	_npcpos = _this select 4;
	
	_artibusy  = _support select 0;
	_rounds = _support select 1;					
	_area = _support select 2;	
	_maxcadence = _support select 3;	
	_mincadence = _support select 4;	

	_nbrbullet = 0;
	_askbullet = "";
	_missionabort = false;
	
	
	
	_side = side gunner _arti;
	_munradius = 150;	

	Switch (_askmission) do {
		case "HE": {
			If ((typeof (vehicle _arti)) in ["B_Mortar_01_F","O_Mortar_01_F","I_G_Mortar_01_F"]) then {_askbullet = "8Rnd_82mm_Mo_shells";};
			If ((typeof (vehicle _arti)) in ["B_MBT_01_arty_F","O_MBT_02_arty_F"]) then {_askbullet = "32Rnd_155mm_Mo_shells";_munradius = 300;};	
			_nbrbullet = _rounds select 2;
		};
		
		case "WP": {
			If ((typeof (vehicle _arti)) in ["B_Mortar_01_F","O_Mortar_01_F","I_G_Mortar_01_F"]) then {_askbullet = "8Rnd_82mm_Mo_Smoke_white";};
			If ((typeof (vehicle _arti)) in ["B_MBT_01_arty_F","O_MBT_02_arty_F"]) then {_askbullet = "6Rnd_155mm_Mo_smoke";};
			_nbrbullet = _rounds select 1;
		};
		
		case "FLARE": {
			If ((typeof (vehicle _arti)) in ["B_Mortar_01_F","O_Mortar_01_F","I_G_Mortar_01_F"]) then {_askbullet = "8Rnd_82mm_Mo_Flare_white";_nbrbullet = _rounds select 0;};
			If ((typeof (vehicle _arti)) in ["B_MBT_01_arty_F","O_MBT_02_arty_F"]) then {_nbrbullet = 0;};
		};
	
	};
	
	If(_artibusy 
	|| _nbrbullet <= 0) 
	exitwith 
	{
		if (UPSMON_Debug>0) then {player sidechat format ["ABORT: Arti: %1 Munition: %2",_artibusy,_nbrbullet];};
	};
	
	switch (_side) do {
		case West: {
			UPSMON_ARTILLERY_WEST_UNITS = UPSMON_ARTILLERY_WEST_UNITS - [_arti];
		};
		case EAST: {
			UPSMON_ARTILLERY_EAST_UNITS = UPSMON_ARTILLERY_EAST_UNITS - [_arti];
		};
		case resistance: {
			UPSMON_ARTILLERY_GUER_UNITS = UPSMON_ARTILLERY_GUER_UNITS - [_arti];
		};
	};
		
		
	(vehicle _arti) setVariable ["UPSMON_ArtiOptions",[true,_rounds,_area,_maxcadence,_mincadence]];

	If ((_askbullet == "8Rnd_82mm_Mo_Smoke_white" || _askbullet == "6Rnd_155mm_Mo_smoke")) 
	then 
	{ 
		_vcttarget = [_npcpos, _targetpos] call BIS_fnc_dirTo;
		_dist = (_npcpos distance _targetpos)/2;
		_targetPos = [_npcpos,_vcttarget, _dist] call UPSMON_GetPos2D;
	};
	
	
		if (!isnil "_targetPos" || count _targetPos > 0) then 
		{
			//If target in range check no friendly squad near									
			if ((_targetPos inRangeOfArtillery [[_arti], _askbullet])) 
			then 
			{
				//Must check if no friendly squad near fire position
				If (_askbullet != "8Rnd_82mm_Mo_Flare_white") then
				{
					{	
						if (!isnull _x && _side == side _x) then 
						{																								
							if ((round([position _x,_targetPos] call UPSMON_distancePosSqr)) < (_munradius)) exitwith {_targetpos = [];};
						};										
					} foreach UPSMON_NPCs;
				};
			}
			else
			{
				_missionabort = true; 
				if (UPSMON_Debug>0) then {player sidechat format "Arti not in range";};
			};
			
		};
	
	If (count _targetPos > 0) then 
	{	
	
		if (UPSMON_Debug>0) then {player sidechat "FIRE";};
		[_arti,_targetPos,_nbrbullet,_area,_maxcadence,_mincadence,_askbullet,_support,_roundsask] spawn UPSMON_artillerydofire;

	}
	else
	{
		if (UPSMON_Debug>0) then {player sidechat "ABORT: no more target";}; 
		_missionabort = true
	};
	
	If (_missionabort) then
	{
	
		if (UPSMON_Debug>0) then {player sidechat "ABORT: no more target";};
		
			switch (_side) do {
		case West: {
			UPSMON_ARTILLERY_WEST_UNITS = UPSMON_ARTILLERY_WEST_UNITS + [_arti];
		};
		case EAST: {
			UPSMON_ARTILLERY_EAST_UNITS = UPSMON_ARTILLERY_EAST_UNITS + [_arti];
		};
		case resistance: {
			UPSMON_ARTILLERY_GUER_UNITS = UPSMON_ARTILLERY_GUER_UNITS + [_arti];
		};
	
		};
		
		(vehicle _arti) setVariable ["UPSMON_ArtiOptions",[false,_rounds,_area,_maxcadence,_mincadence]];
	};
};

UPSMON_artillerydofire = {
	 
		private ["_smoke1","_i","_area","_position","_maxcadence","_mincadence","_sleep","_nbrbullet","_rounds","_arti","_timeout","_bullet"];
		
		_arti = _this select 0;
		_position  = _this select 1;
		_nbrbullet = _this select 2;	
		_area = _this select 3;	
		_maxcadence = _this select 4;	
		_mincadence = _this select 5;	
		_bullet = _this select 6;
		_support = _this select 7;
		_rounds = _this select 8;
		_supportrounds = _support select 1;
		_support2 = [];

		
		If (_bullet == "8Rnd_82mm_Mo_Flare_white")
		then {[] spawn UPSMON_Flaretime;};
		
	
	
	Switch (_bullet) do {
		case "8Rnd_82mm_Mo_shells": {
			_support2 = [false,[_supportrounds select 0, _supportrounds select 1, (_supportrounds select 2) - _rounds],_support select 2, _support select 3,_support select 4];
			_rounds = 4;
		};
		
		case "32Rnd_155mm_Mo_shells": {
			_support2 = [false,[_supportrounds select 0, _supportrounds select 1, (_supportrounds select 2) - _rounds],_support select 2, _support select 3,_support select 4];
			_rounds = 2;
		};
		
		case "8Rnd_82mm_Mo_Smoke_white": {
			_support2 = [false,[_supportrounds select 0, (_supportrounds select 1) - _rounds, _supportrounds select 2],_support select 2, _support select 3,_support select 4];
			_rounds = 4;
		};
		
		case "6Rnd_155mm_Mo_smoke": {
			_support2 = [false,[_supportrounds select 0, (_supportrounds select 1) - _rounds, _supportrounds select 2],_support select 2, _support select 3,_support select 4];
			_rounds = 2;
		};
		
		case "8Rnd_82mm_Mo_Flare_white": {
			_support2 = [false,[(_supportrounds select 0) - _rounds, _supportrounds select 1, _supportrounds select 2],_support select 2, _support select 3,_support select 4];
		};
	
	};		
		If (_rounds > _nbrbullet) then {_rounds = _nbrbullet};
		
		_area2 = _area * 1.4;
		if (UPSMON_Debug>0) then { player globalchat format["artillery doing fire on %1",_position] };	
		sleep 10;
		for [{_i=0}, {_i<_rounds}, {_i=_i+1}] do 
		{ 		
			_sleep = random _maxcadence;			
			if (_sleep < _mincadence) then {_sleep = _mincadence};
			_com = effectiveCommander (vehicle _arti);
			sleep 2;
			_com commandArtilleryFire [[(_position select 0)+ random _area2 - _area, (_position select 1)+ random  _area2 - _area, 0], _bullet, 1];	
			sleep _sleep; 
			//Swap this
			_arti setVehicleAmmo 1;
		};
		
	sleep 20;
	_side = side gunner _arti;

		switch (_side) do {
		case West: {
			UPSMON_ARTILLERY_WEST_UNITS = UPSMON_ARTILLERY_WEST_UNITS + [_arti];
		};
		case EAST: {
			UPSMON_ARTILLERY_EAST_UNITS = UPSMON_ARTILLERY_EAST_UNITS + [_arti];
		};
		case resistance: {
			UPSMON_ARTILLERY_GUER_UNITS = UPSMON_ARTILLERY_GUER_UNITS + [_arti];
		};
	
		};
		
	(vehicle _arti) setVariable ["UPSMON_ArtiOptions",_support2];
};


UPSMON_Flaretime = {
	UPSMON_FlareInTheAir = true;
	sleep 120;
	UPSMON_FlareInTheAir = false;
	Publicvariable "UPSMON_FlareInTheAir";
};