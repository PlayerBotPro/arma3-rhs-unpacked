
params["_pos","_yield","_radius"];

_timefactor = 0.03*_yield^0.5;
_effectSize = 0.03*_yield^0.5;
"RadialBlur" ppEffectEnable true;
"RadialBlur" ppEffectAdjust [0.1,0.1,0.1,0.1];
"RadialBlur" ppEffectCommit .1*_timefactor;

"colorCorrections" ppEffectEnable true;
"colorCorrections" ppEffectAdjust [1, 7, 0, [0.4,0.2,0,0.4], [0.5,0.5,0.5,1],[0.5,0.5,0.5,1]];
"colorCorrections" ppEffectCommit 1*_timefactor;

sleep 1.5*_timefactor;

"RadialBlur" ppEffectAdjust [0.0,0.0,0.5,0.5];
"RadialBlur" ppEffectCommit 10*_timefactor;

"colorCorrections" ppEffectAdjust [1, 1, 0, [0,0,0,0], [0,0,0,1],[0,0,0,0]];
"colorCorrections" ppEffectCommit 15*_timefactor;
sleep 15*_timefactor;
"RadialBlur" ppEffectEnable false;
"colorCorrections" ppEffectEnable false;
