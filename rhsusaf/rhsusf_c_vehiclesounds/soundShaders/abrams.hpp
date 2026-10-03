#define VOL_IDLE  1.00 * engineOn * (rpm factor [   0, 400]) * (rpm factor [1400,  1000])
#define VOL_LOW   1.05 * engineOn * ((rpm factor [ 1000, 1100]) * (rpm factor [1600, 1100]))  max   (((rpm factor [ 1000,  1100]) * (rpm factor [1600, 1100])) * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2]))
#define VOL_MID   0.90 * engineOn * ((rpm factor [ 1100,1600]) * (rpm factor [2900,2300]))  max   (((rpm factor [ 1100, 1600]) * (rpm factor [2900,2300])) * (angVelocity factor [0.2,0.4]))
#define VOL_FAST  0.90 * engineOn * (rpm factor [2300,2900])


#define VOL_TLOW  " (((abs(speed)) factor [   0, 1]) * ((abs(speed)) factor [6,  4]))  max (((abs(speed)) factor [5,3]) * 0.8 * (angVelocity factor [0,0.2]) * (angVelocity factor [0.4,0.2]))"
#define VOL_TMID  " (((abs(speed)) factor [   4, 6]) * ((abs(speed)) factor [8,  7]))  max (((abs(speed)) factor [5,3]) * 0.8 * (angVelocity factor [0.2,0.4]))"
#define VOL_TFAST "  ((abs(speed)) factor [   7, 8])"

#define FREQ_IDLE    "0.9 + ( 0.20 * (rpm factor [0   , 1400]))"
#define FREQ_LOW     "0.8 + ((0.23 * (rpm factor [ 1000,1600])) max (0.3 * (angVelocity factor [0,1])))"
#define FREQ_MID     "0.8 + ( 0.26 * (rpm factor [1600,2900]))"
#define FREQ_FAST    "0.8 + ( 0.25 * (rpm factor [2300,3000])) + (0.12 * ((abs(speed)) factor [9,13]))"

#define FREQ_TRACKS  " (0.80 + (0.3 * ((abs(speed)) factor [0,  12]))) max (0.8 + 0.2 * ((((abs(speed)) factor [5,3]) * (angVelocity factor [0,1]))))"



/* Internal */
class RHSUSF_Abrams_int_idle_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\int_Idle",1}};
	frequency = FREQ_IDLE;
	volume = VOL_IDLE * 0.25;
};
class RHSUSF_Abrams_int_slow_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\int_slow",1}};
	frequency = FREQ_LOW;
	volume = VOL_LOW * 0.4;
};
class RHSUSF_Abrams_int_mid_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\int_mid",1}};
	frequency = FREQ_MID;
	volume = VOL_MID * 0.4;
};
class RHSUSF_Abrams_int_fast_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\int_fast",1}};
	frequency = FREQ_FAST;
	volume = VOL_FAST * 0.4;
};
// Exhaust
class RHSUSF_Abrams_exhaust_int_idle_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\exhaust_Ext_Idle",1}};
	frequency = FREQ_IDLE;
	volume = VOL_IDLE;
};
class RHSUSF_Abrams_exhaust_int_slow_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\exhaust_Ext_Slow",1}};
	frequency = FREQ_LOW;
	volume = VOL_LOW;
};
class RHSUSF_Abrams_exhaust_int_mid_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\exhaust_Ext_mid",1}};
	frequency = FREQ_MID;
	volume = VOL_MID;
};
class RHSUSF_Abrams_exhaust_int_fast_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\exhaust_Ext_fast",1}};
	frequency = FREQ_FAST;
	volume = VOL_FAST;
};
// Acceleration
class RHSUSF_Abrams_int_acce_soundShader {
	samples[] = {
		{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_acce_1",1},
		{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_acce_2",1},
		{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_acce_3",1}
	};
	frequency = "1";
	volume = "1 * engineOn * (rpm factor [600,700]) * (rpm factor [1400,1100])";
};
// Rain
class RHSUSF_Abrams_int_rain_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\shared\rain\int_rain_light",1}};
	frequency = "0.7 + (0.3 * rain)";
	volume = "rain";
};



/* External */
class RHSUSF_Abrams_ext_idle_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\engine_Ext_Idle",1}};
	frequency = FREQ_IDLE;
	volume = VOL_IDLE;
	range = 250;
	rangeCurve[] = {{0,1},{250,1}};
};
class RHSUSF_Abrams_ext_slow_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\engine_Ext_Slow",1}};
	frequency = FREQ_LOW;
	volume = VOL_LOW;
	range = 400;
	rangeCurve[] = {{0,1},{400,1}};
};
class RHSUSF_Abrams_ext_mid_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\engine_Ext_mid",1}};
	frequency = FREQ_MID;
	volume = VOL_MID;
	range = 500;
	rangeCurve[] = {{0,1},{500,1}};
};
class RHSUSF_Abrams_ext_fast_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\engine_Ext_fast",1}};
	frequency = FREQ_FAST;
	volume = VOL_FAST;
	range = 600;
	rangeCurve[] = {{0,1},{600,1}};
};
// Rumble
class RHSUSF_Abrams_ext_rumble_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_rumble",1}};
	frequency = "0.8 + (0.2 * ((abs(speed)) factor [0,4])) + (0.15 * ((abs(speed)) factor [4,13]))";
	volume = "((0.8 * ((abs(speed)) factor [0,2.3])) + (0.2 * ((abs(speed)) factor [2.3,6])))    max    (((abs(speed)) factor [3,1.5]) * ((0.5 * (angVelocity factor [0,0.1])) +  (0.3 * (angVelocity factor [0.4,0.8])))               )";
	range = 280;
	rangeCurve[] = {{0,1},{280,1}};
};
// Exhaust
class RHSUSF_Abrams_exhaust_ext_idle_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\exhaust_Ext_Idle",1}};
	frequency = FREQ_IDLE;
	volume = VOL_IDLE;
	range = 300;
	rangeCurve[] = {{0,1},{300,1}};
};
class RHSUSF_Abrams_exhaust_ext_slow_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\exhaust_Ext_Slow",1}};
	frequency = FREQ_LOW;
	volume = VOL_LOW;
	range = 475;
	rangeCurve[] = {{0,1},{475,1}};
};
class RHSUSF_Abrams_exhaust_ext_mid_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\exhaust_Ext_mid",1}};
	frequency = FREQ_MID;
	volume = VOL_MID;
	range = 640;
	rangeCurve[] = {{0,1},{640,1}};
};
class RHSUSF_Abrams_exhaust_ext_fast_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\exhaust_Ext_fast",1}};
	frequency = FREQ_FAST;
	volume = VOL_FAST;
	range = 700;
	rangeCurve[] = {{0,1},{700,1}};
};
// Tracks
class RHSUSF_Abrams_ext_tracks_slow_soundShader {
	samples[] = {
		{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\tracks_ext_slow",1}
	};
	frequency = FREQ_TRACKS;
	volume = VOL_TLOW;
	range = 410;
	rangeCurve[] = {{0,1},{410,1}};
};
class RHSUSF_Abrams_ext_tracks_mid_soundShader {
	samples[] = {
		{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\tracks_ext_mid",1}
	};
	frequency = FREQ_TRACKS;
	volume = VOL_TMID;
	range = 570;
	rangeCurve[] = {{0,1},{570,1}};
};
class RHSUSF_Abrams_ext_tracks_fast_soundShader {
	samples[] = {
		{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\tracks_ext_fast",1}
	};
	frequency = FREQ_TRACKS;
	volume = VOL_TFAST;
	range = 640;
	rangeCurve[] = {{0,1},{640,1}};
};
// Dist
class RHSUSF_Abrams_dist_slow_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\dist_Slow",1}};
	frequency = FREQ_LOW;
	volume = VOL_LOW;
	range = 1000;
	rangeCurve[] = {{0,0},{100,0},{475,1},{1400,1}};
};
class RHSUSF_Abrams_dist_mid_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\dist_mid",1}};
	frequency = FREQ_MID;
	volume = VOL_MID;
	range = 1300;
	rangeCurve[] = {{0,0},{100,0},{500,1},{1900,1}};
};
class RHSUSF_Abrams_dist_fast_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\dist_fast",1}};
	frequency = FREQ_FAST;
	volume = VOL_FAST;
	range = 1500;
	rangeCurve[] = {{0,0},{100,0},{600,1},{2200,1}};
};

// Acceleration
class RHSUSF_Abrams_ext_acce_soundShader {
	samples[] = {
		{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_acce_1",1},
		{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_acce_2",1},
		{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_acce_3",1}
	};
	frequency = "1";
	volume = "0.92 * engineOn * (rpm factor [500,700]) * (rpm factor [1400,1200])";
	range = 325;
	rangeCurve[] = {{0,1},{50,0.75},{325,1}};
};
class RHSUSF_Abrams_ext_acce_high_soundShader {
	samples[] = {
		{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_acce_1",1},
		{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_acce_2",1},
		{"RHSUSF\addons\rhsusf_s_vehicleSounds\tanks\abrams\ext_acce_3",1}
	};
	frequency = "1 + 0.2 * (rpm factor [1400,3000])";
	volume = "1.0 * engineOn * (rpm factor [1200,1400])";
	range = 700;
	rangeCurve[] = {{0,1},{80,0.85},{700,1}};
};

//Rain
class RHSUSF_Abrams_ext_rain_soundShader {
	samples[] = {{"RHSUSF\addons\rhsusf_s_vehicleSounds\shared\rain\ext_rain_hard",1}};
	frequency = "0.8 + (0.3 * rain)";
	volume = "rain";
	range = 50;
	rangeCurve[] = {{0,1},{50,1}};
};

#undef VOL_IDLE
#undef VOL_LOW
#undef VOL_MID
#undef VOL_FAST


#undef VOL_TLOW
#undef VOL_TMID
#undef VOL_TFAST

#undef FREQ_IDLE
#undef FREQ_LOW
#undef FREQ_MID
#undef FREQ_FAST

#undef FREQ_TRACKS