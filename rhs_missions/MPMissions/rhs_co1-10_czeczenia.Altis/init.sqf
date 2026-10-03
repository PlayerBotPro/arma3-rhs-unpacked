enableSaving [false, false];
["task1",east,[localize "STR_T1",localize "STR_T1s", "obj1"] ,nil,"Created",-1] call BIS_fnc_setTask;

{_x setMarkerAlpha 0}foreach ["ao","aoT","strefa1","strefa2","strefa3","strefa1a","strefa2a","strefa3a","strefa4a","strefa5"];
Nikolaj setGroupId ["Nikolaj"];
(group hq)  setGroupId ["Buran"];
player createDiaryRecord ["Diary", [localize "STR_Kody", localize "STR_Kody_o"]];
player createDiaryRecord ["Diary", [localize "STR_Wyposazenie", localize "STR_Wyposazenie_o"]];
player createDiaryRecord ["Diary", [localize "STR_Wykonanie", localize "STR_Wykonanie_o"]];
player createDiaryRecord ["Diary", [localize "STR_Sytuacja", localize "STR_Sytuacja_o"]];

enableRadio false;

checkC=0;
end1=false;
end2=false;
Rnd_pos = compile preprocessfile "randomPos.sqf";
RDS_ArrayCheck = compile preprocessfile "arrayCheck.sqf";
RDS_Spawn = compile preprocessfile "spawn.sqf";
RDS_SpawnG = compile preprocessfile "spawng.sqf";
RDS_SpawnA = compile preprocessfile "spawna.sqf";
RDS_Dial = compile preprocessfile "dial.sqf";
RDS_Kasuj = compile "(_this select 0) removeAction (_this select 1);";
RDS_Koniec = compile "[_this select 0,_this select 1,true] call BIS_fnc_endMission;";
RDS_Dialog = compile "[_this select 0] call RDS_dial;";



HARDKOR=paramsArray select 1;
if((paramsArray select 0)!=4)then{
	FAR_ReviveMode = (paramsArray select 0);
	call compileFinal preprocessFileLineNumbers "FAR_revive\FAR_revive_init.sqf";
};

call compile preprocessFileLineNumbers "scripts\Init_UPSMON.sqf";



if(isServer)then{
	_r=floor(random(6));
	if(_r==6)then{
		_p=[[6105.42,18535.5],[6100.9,18511.7],[6131.48,18526.7],[6040.82,18523.8],[6047.28,18499.8],[6151.23,18553.5]];
		_r=floor(random(5));
		officer setpos (_p select _r);
		officer setdamage 1;
		[[officer,0],"RDS_kasuj"] call BIS_fnc_MP;
		officer addAction ["<t color='#FF0000'>Sprawdź ciało</t>","check.sqf",4];
		["strefa5",5] call RDS_spawnA;
		["strefa5",5] call RDS_spawn;
		{deleteVehicle _x}foreach list zone2;
		{deleteVehicle _x}foreach list zone1;
		deleteVehicle zone1;deleteVehicle zone2;
	}else{
		_p=[[7013.41,17818.2,0.725952],[7559.94,18356.7,3.32018],[6204.34,19298.8,1.0631],[5643.32,19531.4,0.239365],[7860.69,18017.9,0.531586],[6015.99,19130.5,0.32164]];
		officer setpos (_p select _r);
		_i=0;{_x setpos ((nearestBuilding officer) buildingPos _i);_i=_i+1}foreach units guards;

		officer addMPEventHandler ["mpkilled", {officer removeAction 0;officer addAction[format["<t color='#FF0000'>%1</t>",localize "STR_Check1"],"check.sqf",3];officer removeMPEventHandler ["mpkilled", 0]; }];
		if(_r in [0,1,4])then{
			{deleteVehicle _x}foreach list zone2;deleteVehicle zone1;deleteVehicle zone2;
			["strefa1",5] call RDS_spawn;
			["strefa1a",1] call RDS_spawn;
			["strefa1a",1] call RDS_spawnG;
			["strefa2",5] call RDS_spawn;
			["strefa2a",2] call RDS_spawn;
			["strefa2a",1] call RDS_spawnG;
		}else{
			"ao" setmarkerpos [5875.42,19156.4,0];
			{deleteVehicle _x}foreach list zone1;deleteVehicle zone1;deleteVehicle zone2;
			["strefa3",8] call RDS_spawn;
			["strefa3a",2] call RDS_spawn;
			["strefa3a",1] call RDS_spawnG;
			["strefa4a",2] call RDS_spawn;
			["strefa4a",1] call RDS_spawnG;
		};
	};

};

sleep 2;
//muzyka
playsound "rus";
trup switchMove "Acts_SittingWounded_out";
sleep 8;
enableRadio true;
sleep 95;
deleteVehicle bitwa;
/*
KRON_UPS_ARTILLERY_GUER_FIRE = true;
		sleep 32;
		{nul=[_x,4,3000,100,7,2,"Sh_82mm_AMOS",25] execVM "scripts\UPSMON\MON_artillery_add.sqf";}foreach [m1,m2]
loc1=[7013.41,17818.2,0.725952];
loc2=[7559.94,18356.7,3.32018];
loc5=[7860.69,18017.9,0.531586];

loc3=[6204.34,19298.8,1.0631];
loc4=[5643.32,19531.4,0.239365];
loc6=[6015.99,19130.5,0.32164];


wielka zasadzka:
[6105.42,18535.5]
[6100.9,18511.7]
[6131.48,18526.7]
[6040.82,18523.8]
[6047.28,18499.8]
[6151.23,18553.5]
*/