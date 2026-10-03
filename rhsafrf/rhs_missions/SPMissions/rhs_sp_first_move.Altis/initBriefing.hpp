//	Initialize briefing.
[
	[
		"Mission",
		[
			"Unknown forces have invaded the Republic of Altis.<br/><br/>Our mission is to deploy with helicopters in the proximities of Panagia, wait for attack helicopters to destroy any heavy vehicles, then assault and seize the village."
		]
	]
] 
call {
	if (not isdedicated) then {
		private "_briefing";
		_briefing = _this;
		waituntil {not isnull player};
		for "_i" from ((count _briefing) - 1) to 0 step -1 do {
			for [{_k = (count (_briefing select _i select 1)) - 1},{_k >= 0},{_k = _k - 1}] do {
				player createDiaryRecord ["Diary", [_briefing select _i select 0,_briefing select _i select 1 select _k]];
			};
		};
	};
};