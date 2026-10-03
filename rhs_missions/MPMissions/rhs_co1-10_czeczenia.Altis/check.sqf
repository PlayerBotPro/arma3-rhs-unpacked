_u=_this select 0;
_k=_this select 1;
_t=_this select 3;

switch(_t)do
{
	case 1:
	{
		_i=30;
		while{_i>0}do
		{
			hint format["%2 (%1 s)...",_i, localize "STR_Hint4a"];
			_i=_i-1;
			sleep 1;
			if(_k distance _u >5)exitWith{};
		};
		if(_k distance _u >5)exitWith{hint localize "STR_Hint4b"};
		hint localize "STR_hint2";
		[[_u,(_this select 2)],"RDS_kasuj"] call BIS_fnc_MP;
		checkC=checkC+3;publicVariable "checkC";
	};
	case 2:
	{
		if(_k distance _u >2)exitWith{hint localize "STR_hint3"};
		_i=6;
		_k playmove "AinvPknlMstpSnonWnonDr_medic4";
		while{_i>0}do
		{
			hint format["%2 (%1 s)...",_i,localize "STR_Hint4"];
			_i=_i-1;
			sleep 1;
		};
		hint localize "STR_Hint5";
		[[_u,(_this select 2)],"RDS_kasuj"] call BIS_fnc_MP;
		checkC=checkC+1;publicVariable "checkC";
	};
	case 3:
	{
		if(_k distance _u >2)exitWith{hint localize "STR_Hint3"};
		_i=6;
		_k playmove "AinvPknlMstpSnonWnonDr_medic4";
		while{_i>0}do
		{
			hint format["%2 (%1 s)...",_i,localize "STR_Hint4"];
			_i=_i-1;
			sleep 1;
		};
		[[_u,(_this select 2)],"RDS_kasuj"] call BIS_fnc_MP;
		hint localize "STR_Hint6";
		//dialog 1
		[[1],"RDS_Dialog"] call BIS_fnc_MP;
	};
	case 4:
	{
		if(_k distance _u >2)exitWith{hint localize "STR_Hint3"};
		_i=6;
		_k playmove "AinvPknlMstpSnonWnonDr_medic4";
		while{_i>0}do
		{
			hint format["%2 (%1 s)...",_i,localize "STR_Hint4"];
			_i=_i-1;
			sleep 1;
		};
		[[_u,(_this select 2)],"RDS_kasuj"] call BIS_fnc_MP;
		hint localize "STR_Hint6";
		//dialog 1
		["task1a",nil,nil ,nil,"SUCCEEDED",-1] call BIS_fnc_setTask;
		sleep 2;
		[[1],"RDS_Dialog"] call BIS_fnc_MP;
	};
	case 5:{hint "Sprawdzanie pojazdu (30s)...";sleep 30;hint "W zgliszczach pojazdu znalaz?e? zw?glone zw?oki oficera";["task1a",nil,nil ,null,"SUCCEEDED",-1] call BIS_fnc_setTask;sleep 3;["task3",player,[localize "STR_T3",localize "STR_T3s", "ao"] ,getmarkerpos "fob","Created",-1] call BIS_fnc_setTask;	};
	default {};
};
