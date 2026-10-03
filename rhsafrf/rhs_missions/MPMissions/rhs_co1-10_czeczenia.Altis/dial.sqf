switch(_this select 0) do
{
	case 1: 
	{
		["task2",nil,nil ,null,"FAILED",-1] call BIS_fnc_setTask;
		sleep 2;
		(leader nikolaj) sidechat localize "STR_Dial12";
		sleep 11;
		hq sidechat localize "STR_Dial13";
		sleep 4;
		["task3",east,[localize "STR_T3",localize "STR_T3s", "RTB"] ,getmarkerpos "fob","Created",-1] call BIS_fnc_setTask;	
		end2=true;	
	};
	case 2: 
	{
		if(isServer)then{[officer] join nikolaj};
		officer removeMPEventHandler ["mpkilled", 0];
		officer setcaptive false;
		officer enableAI "Move";
		officer removeAction 0;
		["task2",nil,nil ,nil,"SUCCEEDED",-1] call BIS_fnc_setTask;
		(leader nikolaj) sidechat localize "STR_Dial9";
		sleep 12;
		hq sidechat localize "STR_Dial10";
		sleep 4;
		(leader nikolaj) sidechat localize "STR_Dial11";
		sleep 4;
		["task3",east,[localize "STR_T3",localize "STR_T3s", "ao"] ,getmarkerpos "fob","Created",-1] call BIS_fnc_setTask;	
		end1=true;
	};
};