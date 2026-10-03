["task1",nil,nil ,nil,"SUCCEEDED",-1,true,true] call BIS_fnc_setTask;

sleep 5;
(leader nikolaj) sidechat localize "STR_Dial1";
sleep 7;
hq sidechat localize "STR_Dial2";
sleep 10;
(leader nikolaj) sidechat localize "STR_Dial3";

["task1a",east,[localize "STR_T1a",localize "STR_T1as", "ao"] ,nil,"Created",-1] call BIS_fnc_setTask;
if(alive officer)then{
	sleep (60*4);
	if(checkC<16)then{hint localize "STR_Hint1";};
	waitUntil{checkC>16};
	["task1a",nil,nil ,nil,"SUCCEEDED",-1] call BIS_fnc_setTask;
	(leader nikolaj) sidechat localize "STR_Dial4";
	sleep 12;
	hq sidechat localize "STR_Dial5";
	sleep 12;
	hq sidechat localize "STR_Dial6";
	sleep 8;
	hq sidechat localize "STR_Dial7";
	sleep 6;
	(leader nikolaj) sidechat localize "STR_Dial8";
	sleep 10;
	["task2",east,[localize "STR_T2",localize "STR_T2s", "AO"] ,nil,"Created",-1] call BIS_fnc_setTask;
	"ao" setmarkerAlpha 0.7;
	"aoT" setmarkerAlpha 1;
	"aoT" setmarkerpos (getmarkerpos "ao");
};