// Tracks
/* External */
class RHSUSF_trackSurfaceSound_ext_soft_soundShader {
	samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\Tracks_Surface_Movement\Tracks_Surface_Movement_Grass",1}};
	frequency = " (0.80 + (0.35 * ((abs(speed)) factor [0,  12]))) max (0.8 + 0.2 * ((((abs(speed)) factor [2,1]) * (angVelocity factor [0,1]))))";
	volume = "(mud + grass + (0.1*sand))  * (((abs(speed)) factor [0,5]) max  (((abs(speed)) factor [3,1.5]) * ((0.7 * (angVelocity factor [0,0.1])) +  (0.3 * (angVelocity factor [0.4,0.8])))))";
	range = 220;
	rangeCurve[] = {{0,1},{50,0.75},{220,1}}; 
};
class RHSUSF_trackSurfaceSound_ext_hard_soundShader {
	samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\Tracks_Surface_Movement\Tracks_Surface_Movement_Asphalt",1}};
	frequency = " (0.80 + (0.35 * ((abs(speed)) factor [0,  12]))) max (0.8 + 0.2 * ((((abs(speed)) factor [2,1]) * (angVelocity factor [0,1]))))";
	//volume = "(rock + asphalt + (1.17*gravel)) * ((abs(speed)) factor [0,5])";
	volume = "(rock + asphalt + (1.17*gravel)) * (((abs(speed)) factor [0,5]) max  (((abs(speed)) factor [3,1.5]) * ((0.7 * (angVelocity factor [0,0.1])) +  (0.3 * (angVelocity factor [0.4,0.8])))))";
	range = 220;
	rangeCurve[] = {{0,1},{50,0.75},{220,1}}; 
};
class RHSUSF_trackSurfaceSound_ext_sand_soundShader {
	samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\Tracks_Surface_Movement\Tracks_Surface_Movement_Sand",1}};
	frequency = " (0.80 + (0.35 * ((abs(speed)) factor [0,  12]))) max (0.8 + 0.2 * ((((abs(speed)) factor [2,1]) * (angVelocity factor [0,1]))))";
	volume = "sand  * (((abs(speed)) factor [0,5]) max  (((abs(speed)) factor [3,1.5]) * ((0.7 * (angVelocity factor [0,0.1])) +  (0.3 * (angVelocity factor [0.4,0.8])))))";
	range = 220;
	rangeCurve[] = {{0,1},{50,0.75},{220,1}}; 
};



/* Internal */
// Internal straining when breaking
class RHSUSF_int_breakingStrain_soundShader {
	samples[] = {
		{"A3\Sounds_F\vehicles2\armor\shared\Material_Strain\Tanks_Brakes_Strain_Int_01",1},
		{"A3\Sounds_F\vehicles2\armor\shared\Material_Strain\Tanks_Brakes_Strain_Int_02",1},
		{"A3\Sounds_F\vehicles2\armor\shared\Material_Strain\Tanks_Brakes_Strain_Int_03",1},
		{"A3\Sounds_F\vehicles2\armor\shared\Material_Strain\Tanks_Brakes_Strain_Int_04",1},
		{"A3\Sounds_F\vehicles2\armor\shared\Material_Strain\Tanks_Brakes_Strain_Int_05",1}
	};
	frequency = "1";
	volume = "1";
};
class RHSUSF_tankRattling_1_soundShader {
	samples[] = {{"A3\Sounds_F\vehicles2\armor\shared\add_layers\Rattling_02_INT",1}};
	frequency = "0.7 + (0.45 * ((abs(speed)) factor [0,13]))";
	volume = "(0.8 * (abs(speed)) factor [0.4,6]) + (0.2 * (abs(speed)) factor [6,10])";
};
class RHSUSF_curveStress_1_soundShader {
	samples[] = {{"a3\sounds_f\vehicles2\soft\shared\add_layers\Stress_02_Ext",1}};
	frequency = "0.7 + (0.45 * (angVelocity factor [0,1]))";
	volume = "(angVelocity factor [0,0.9])";
};





/* BoatStuff */
// heavyBoat
class RHSUSF_heavyBoat_water_idle_soundShader {
	samples[] = {{"a3\sounds_f\vehicles\boat\SFX\voda-o-bok-lodi-0-speed",1}}; 
	frequency = "0.7 + (0.3 * wind)";
	volume = "0.75 * water * ((abs(speed)) factor [2,1])";
	range = 100;
	rangeCurve[] = {{0,1},{120,1}};
};
class RHSUSF_heavyBoat_water_slow_soundShader {
	samples[] = {{"a3\sounds_f\vehicles\boat\SFX\voda-o-bok-lodi-10-speed",1}}; 
	frequency = "0.7 + (0.3 * wind)";
	volume = "water * ((abs(speed)) factor [1,1.5]) * ((abs(speed)) factor [2.5,1.5])";
	range = 200;
	rangeCurve[] = {{0,1},{200,1}};
};
class RHSUSF_heavyBoat_water_mid_soundShader {
	samples[] = {{"a3\sounds_f\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",1}}; 
	frequency = "0.7 + (0.3 * wind)";
	volume = "water * ((abs(speed)) factor [1.5,2.5]) * ((abs(speed)) factor [4.5,2.5])";
	range = 380;
	rangeCurve[] = {{0,1},{380,1}};
};
class RHSUSF_heavyBoat_water_fast_soundShader {
	samples[] = {{"a3\sounds_f\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",1}}; 
	frequency = "0.7 + (0.15 * wind) + (0.3 * ((abs(speed)) factor [4.5,8]))";
	volume = "water * ((abs(speed)) factor [2.5,4.5])";
	range = 420;
	rangeCurve[] = {{0,1},{420,1}};
};
class RHSUSF_heavyBoat_int_stress_soundShader {
	samples[] = {{"a3\sounds_f\vehicles\noises\vehicle_stress2c",1}}; 
	frequency = "0.7 + (0.4 * (angVelocity factor [0,0.1]))";
	volume = "1.2 * (angVelocity factor [0.03,0.05])";
};
class RHSUSF_heavyBoat_landScrub_soundShader {
	samples[] = {{"a3\sounds_f\vehicles2\armor\shared\Tracks_Surface_Movement\Tracks_Surface_Movement_Mud",1}}; 
	frequency = "0.85 + (0.2 * (scrubLand factor [0.01, 0.90]))";
	volume = "scrubLand factor [0.01, 0.20]";
	range = 460;
	rangeCurve[] = {{0,1},{460,1}};
};

// boat
class RHSUSF_boat_water_idle_soundShader {
	samples[] = {{"a3\sounds_f\vehicles\boat\SFX\voda-o-bok-lodi-0-speed",1}}; 
	frequency = "1.1 + (0.3 * wind)";
	volume = "water * ((abs(speed)) factor [2,1])";
	range = 90;
	rangeCurve[] = {{0,1},{90,1}};
};
class RHSUSF_boat_water_slow_soundShader {
	samples[] = {{"a3\sounds_f\vehicles\boat\SFX\voda-o-bok-lodi-10-speed",1}}; 
	frequency = "0.8 + (0.3 * wind)";
	volume = "water * ((abs(speed)) factor [1,1.5]) * ((abs(speed)) factor [2.5,1.5])";
	range = 160;
	rangeCurve[] = {{0,1},{160,1}};
};
class RHSUSF_boat_water_mid_soundShader {
	samples[] = {{"a3\sounds_f\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",1}}; 
	frequency = "0.8 + (0.3 * wind)";
	volume = "water * ((abs(speed)) factor [1.5,2.5]) * ((abs(speed)) factor [4.5,2.5])";
	range = 300;
	rangeCurve[] = {{0,1},{300,1}};
};
class RHSUSF_boat_water_fast_soundShader {
	samples[] = {{"a3\sounds_f\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",1}}; 
	frequency = "0.8 + (0.15 * wind) + (0.3 * ((abs(speed)) factor [4.5,8]))";
	volume = "water * ((abs(speed)) factor [2.5,4.5])";
	range = 370;
	rangeCurve[] = {{0,1},{370,1}};
};
class RHSUSF_boat_int_stress_soundShader {
	samples[] = {{"a3\sounds_f\vehicles2\soft\shared\add_layers\Rattling_02_Ext",1}}; 
	frequency = "0.8 + (0.3 * (angVelocity factor [0,0.1]))";
	volume = "1 * (angVelocity factor [0.04,0.8])";
};
class RHSUSF_boat_landScrub_soundShader {
	samples[] = {{"a3\sounds_f\vehicles2\soft\shared\tires01\Tires_Grass_Fast_Ext",1}}; 
	frequency = "0.95 + (0.2 * (scrubLand factor [0.01, 0.90]))";
	volume = "scrubLand factor [0.01, 0.10]";
	range = 360;
	rangeCurve[] = {{0,1},{360,1}};
};