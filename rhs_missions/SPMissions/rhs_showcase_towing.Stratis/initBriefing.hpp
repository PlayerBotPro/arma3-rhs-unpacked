

rhs_player_01 createDiaryRecord
[
	"Diary",
	[
		localize "STR_A3_Diary_Signal_title",
		"<br><marker name = 'hq'>Bodun-1</marker> - HQ</br>
<br><marker name = 'truck'>Zorya-1</marker> – First training group</br>
<br><marker name = 'truck_1'>Zorya-2</marker> – Your group</br>
<br><marker name = 'traingArea'>Zvezda-32</marker> – UAV operators</br>"
	]
];

rhs_player_01 createDiaryRecord
[
	"Diary",
	[
		localize "STR_A3_Diary_Execution_title",
		"<ol>
  <br>1. Prepare <marker name = 'zu23'>ZU-23-2</marker> and switch it to moving mode</br>
  <br>2. Drag ZU-23-2 closer to the <marker name = 'truck'>truck</marker></br>
  <br>3. Attach ZU-23-2 to the <marker name = 'truck'>truck</br>
  <br>4. Move with <marker name = 'truck_1'>Zorya-1</marker> to the <marker name = 'traingArea'>training area</marker></br>
  <br>5. Detach ZU-2-23 and move it to <marker name = 'firingpos2'>Firing Position #2</marker></br>
  <br>6. Engage <marker name = 'uavs'>designated UAVs</marker></br>
</ol>"
	]
];

rhs_player_01 createDiaryRecord
[
	"Diary",
	[
		localize "STR_A3_Diary_Mission_title",
		"<br>Your mission is to participate in live fire firing drills at our training base. Together with 2nd squad – Zorya-1, you will grab two ZU-23-2 anti-aircraft guns to designated firing positions with help of KrAZ-255B1 trucks.</br><br></br>
<br>After you will arrive to <marker name = 'traingArea'>destination point</marker>, try to assemble your anti-aircraft gun and move it to <marker name = 'firingpos2'>Firing Position marked with number 2</marker>. Once you are ready, UAV operators from <marker name = 'traingArea'>Zvezda-32</marker> team, will release <marker name = 'uavs'>two Pchela-1T UAVs</marker> which will move to this <marker name = 'liveFire'>live fire zone</marker> from the south</marker>.</br><br></br>
<br>Beware that there might one helicopter <marker name = 'resupply'>en route to Camp Rogain</marker> – close to firing zone - with urgent resupply mission. Do not fire at it under any circumstance!</br>"
	]
];

rhs_player_01 createDiaryRecord
[
	"Diary",
	[
		localize "STR_A3_Diary_Situation_title",
		"3rd joint military manoeuvres between Altis Republic &amp; Russian Federation armed forces began yesterday. This time, great focus is held on testing readiness of air defence forces and with that in mind, various parts of Stratis strategic base, lent to Russian Federation on long term contract, will be put on high readiness."
	]
];

// Zoom map on player
_null = [] spawn {
	waitUntil {!(isNull (findDisplay 37))};
	(findDisplay 37 displayCtrl 51) ctrlmapAnimAdd [4, 0.035, player];
	ctrlmapAnimCommit (findDisplay 37 displayCtrl 51);
};
