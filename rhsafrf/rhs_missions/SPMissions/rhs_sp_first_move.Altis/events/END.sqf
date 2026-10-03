Sleep 1;

[A2,A3,A4,PY] joinSilent grpNull;

["clear", "Succeeded"] call BIS_fnc_missionTasks;

Sleep 2;
["seize", "Succeeded"] call BIS_fnc_missionTasks;

[A2,A3,A4,PY] joinSilent A1;

Sleep 5;

A1 groupChat "That seem to be the last of them, good job boys!"; // should be say

Sleep 5;

A1 groupChat "Gather in the centre of the town for debrief."; // should be say

Sleep 10;

/* "End" call BIS_fnc_missionConversations; */

"end1" call BIS_fnc_endMission;