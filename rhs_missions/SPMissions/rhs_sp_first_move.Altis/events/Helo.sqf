A1 sideChat "Assassin 3-1 this is Ronin 2-2, we are in position. You are free to engage. Out. "; // should be say

Sleep 6;

A1 groupChat "Well, let's watch the show."; // should be say

Sleep 3;

["move", "Succeeded"] call BIS_fnc_missionTasks;

Sleep 5;

A2 groupChat "That's better than the fourth of July."; // should be say

Sleep 4;

A3 groupChat "And way more expensive..."; // should be say

Sleep 10;

A1 groupChat "Our time, weapons hot!"; // should be say

Sleep 3;

["seize", ""] call BIS_fnc_missionTasks;