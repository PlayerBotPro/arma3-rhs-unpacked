private _plane = vehicle (call rhs_fnc_findPlayer);

[_plane] spawn rhs_fnc_pakfa_glonass;
[_plane] spawn rhs_fnc_pakfa_navigation;