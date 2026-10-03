
	class MFD {
		class AirplaneHUD {
			borderbottom = 0;
			borderleft = 0;
			borderright = 0;
			bordertop = 0;
			bottomleft = "HUD LD";
			color[] = {0, 1, 0, 0.1};
			helmetdown[] = {0, -0.05, 0};
			helmetmounteddisplay = 1;
			helmetposition[] = {-0.025, 0.025, 0.1};
			helmetright[] = {0.05, 0, 0};
			topleft = "HUD LH";
			topright = "HUD PH";
			class Pos10Vector {
				pos0[] = {0.5, "0.27+0.23"};
				pos10[] = {0.85, 0.85};
				type = "vector";
			};
			class Bones {
				class PlaneW {
					pos[] = {0.5, "0.34+0.23"};
					type = "fixed";
				};
				class WeaponAim: Pos10Vector {
					source = "weapon";
				};
				class GunnerAim: Pos10Vector {
					pos0[] = {0, -0.0025};
					pos10[] = {0.01, 0.0025};
					source = "weapon";
				};
				class Target: Pos10Vector {
					source = "target";
				};
				class Velocity: Pos10Vector {
					pos0[] = {0.5, "0.27+0.23"};
					pos10[] = {0.85, 0.85};
					source = "velocity";
					type = "vector";
				};
				class ILS_H {
					pos0[] = {0.5, "0.27+0.23"};
					pos3[] = {0.605, "0.27+0.23"};
					type = "ils";
				};
				class ILS_W: ILS_H {
					pos3[] = {0.5, 0.605};
				};
				class Level0: Pos10Vector {
					angle = 0;
					pos0[] = {0.5, "0.34+0.23"};
					pos10[] = {0.85, 0.92};
					type = "horizon";
				};
				class LevelP10: Level0 {
					angle = 10;
				};
				class LevelM10: Level0 {
					angle = -10;
				};
				class LevelP20: Level0 {
					angle = 20;
				};
				class LevelM20: Level0 {
					angle = -20;
				};
				class LevelP30: Level0 {
					angle = 30;
				};
				class LevelM30: Level0 {
					angle = -30;
				};
				class LevelP40: Level0 {
					angle = 40;
				};
				class LevelM40: Level0 {
					angle = -40;
				};
				class LevelP50: Level0 {
					angle = 50;
				};
				class LevelM50: Level0 {
					angle = -50;
				};
			};
			class Draw {
				alpha = 0.6;
				color[] = {0, 0.5, 0.05};
				condition = "on";
				class PlaneW {
					clipbr[] = {1, 0};
					cliptl[] = {0, 1};

					points[] = {{"PlaneW", {0, -0.02}, 1}, {"PlaneW", {0.014, -0.014}, 
1}, {"PlaneW", {0.02, 0}, 1}, {"PlaneW", {0.014, 0.014}, 1}, {"PlaneW", 
{0, 0.02}, 1}, {"PlaneW", {-0.014, 0.014}, 1}, {"PlaneW", {-0.02, 0}, 
1}, {"PlaneW", {-0.014, -0.014}, 1}, {"PlaneW", {0, -0.02}, 1}, {}};
					type = "line";
					width = 4;
				};
				class PlaneHeading {
					clipbr[] = {1, 0};
					cliptl[] = {0, 1};

					points[] = {{"Velocity", {0, -0.02}, 1}, {"Velocity", {0.014, 
-0.014}, 1}, {"Velocity", {0.02, 0}, 1}, {"Velocity", {0.014, 0.014}, 
1}, {"Velocity", {0, 0.02}, 1}, {"Velocity", {-0.014, 0.014}, 1}, 
{"Velocity", {-0.02, 0}, 1}, {"Velocity", {-0.014, -0.014}, 1}, 
{"Velocity", {0, -0.02}, 1}, {}, {"Velocity", {0.04, 0}, 1}, 
{"Velocity", {0.02, 0}, 1}, {}, {"Velocity", {-0.04, 0}, 1}, 
{"Velocity", {-0.02, 0}, 1}, {}, {"Velocity", {0, -0.04}, 1}, 
{"Velocity", {0, -0.02}, 1}, {}};
					type = "line";
					width = 4;
				};
				class Static {
					clipbr[] = {1, 0};
					cliptl[] = {0, 0.1};

					points[] = {{{0.79, 0.52}, 1}, {{0.81, 0.5}, 1}, {{0.79, 0.48}, 1},
 {}, {{0.52, "0.08+0.06"}, 1}, {{0.5, "0.06+0.06"}, 1}, {{0.48, 
"0.08+0.06"}, 1}, {}, {{"0.5-0.1", "0.9-0.04"}, 1}, {{"0.5-0.1", 
"0.9+0.04"}, 1}, {{"0.5+0.1", "0.9+0.04"}, 1}, {{"0.5+0.1", "0.9-0.04"},
 1}, {{"0.5-0.1", "0.9-0.04"}, 1}, {}, {{"0.5-0.1", 0.9}, 1}, 
{{"0.5-0.092", 0.9}, 1}, {}, {{"0.5+0.1", 0.9}, 1}, {{"0.5+0.092", 0.9},
 1}, {}, {{0.5, "0.9-0.04"}, 1}, {{0.5, "0.9-0.032"}, 1}, {}, {{0.5, 
"0.9+0.04"}, 1}, {{0.5, "0.9+0.032"}, 1}, {}};
					type = "line";
					width = 4;
				};
				class Gunner {

					points[] = {{"GunnerAim", {"0.5-0.015", "0.9-0.008"}, 1}, 
{"GunnerAim", {"0.5-0.015", "0.9+0.008"}, 1}, {"GunnerAim", 
{"0.5+0.015", "0.9+0.008"}, 1}, {"GunnerAim", {"0.5+0.015", 
"0.9-0.008"}, 1}, {"GunnerAim", {"0.5-0.015", "0.9-0.008"}, 1}};
					type = "line";
					width = 4;
				};
				class MGun {
					condition = "mgun";
					class Circle {

						points[] = {{"WeaponAim", {0.05, 0}, 1}, {"WeaponAim", {0.015, 0},
 1}, {}, {"WeaponAim", {0, 0.05}, 1}, {"WeaponAim", {0, 0.015}, 1}, {}, 
{"WeaponAim", {-0.05, 0}, 1}, {"WeaponAim", {-0.015, 0}, 1}, {}, 
{"WeaponAim", {0, -0.05}, 1}, {"WeaponAim", {0, -0.015}, 1}, {}};
						type = "line";
						width = 0;
					};
				};
				class Bomb {
					condition = "bomb";
					class Circle {

						points[] = {{"WeaponAim", {0, -0.1}, 1}, {"WeaponAim", {0.05, 
-0.087}, 1}, {"WeaponAim", {0.087, -0.05}, 1}, {"WeaponAim", {0.1, 0}, 
1}, {"WeaponAim", {0.087, 0.05}, 1}, {"WeaponAim", {0.05, 0.087}, 1}, 
{"WeaponAim", {0, 0.1}, 1}, {"WeaponAim", {-0.05, 0.087}, 1}, 
{"WeaponAim", {-0.087, 0.05}, 1}, {"WeaponAim", {-0.1, 0}, 1}, 
{"WeaponAim", {-0.087, -0.05}, 1}, {"WeaponAim", {-0.05, -0.087}, 1}, 
{"WeaponAim", {0, -0.1}, 1}, {}, {"Velocity", 0.001, "WeaponAim", {0, 
0}, 1}, {"Velocity", {0, 0}, 1}, {}, {"Target", {0, -0.07}, 1}, 
{"Target", {0.07, 0}, 1}, {"Target", {0, 0.07}, 1}, {"Target", {-0.07, 
0}, 1}, {"Target", {0, -0.07}, 1}};
						type = "line";
						width = 4;
					};
				};
				class AAMissile {
					condition = "AAmissile";
					class Circle {

						points[] = {{"WeaponAim", {0, -0.25}, 1}, {"WeaponAim", {0.125, 
-0.2175}, 1}, {"WeaponAim", {0.2175, -0.125}, 1}, {"WeaponAim", {0.25, 
0}, 1}, {"WeaponAim", {0.2175, 0.125}, 1}, {"WeaponAim", {0.125, 
0.2175}, 1}, {"WeaponAim", {0, 0.25}, 1}, {"WeaponAim", {-0.125, 
0.2175}, 1}, {"WeaponAim", {-0.2175, 0.125}, 1}, {"WeaponAim", {-0.25, 
0}, 1}, {"WeaponAim", {-0.2175, -0.125}, 1}, {"WeaponAim", {-0.125, 
-0.2175}, 1}, {"WeaponAim", {0, -0.25}, 1}, {}, {"Target", {0, -0.07}, 
1}, {"Target", {0.07, 0}, 1}, {"Target", {0, 0.07}, 1}, {"Target", 
{-0.07, 0}, 1}, {"Target", {0, -0.07}, 1}};
						type = "line";
						width = 4;
					};
				};
				class ATMissile {
					condition = "ATmissile";
					class Circle {

						points[] = {{"WeaponAim", {-0.15, -0.15}, 1}, {"WeaponAim", 
{-0.15, "-0.15+0.02"}, 1}, {}, {"WeaponAim", {-0.15, 0.15}, 1}, 
{"WeaponAim", {-0.15, "+0.15-0.02"}, 1}, {}, {"WeaponAim", {0.15, 
-0.15}, 1}, {"WeaponAim", {0.15, "-0.15+0.02"}, 1}, {}, {"WeaponAim", 
{0.15, 0.15}, 1}, {"WeaponAim", {0.15, "+0.15-0.02"}, 1}, {}, 
{"WeaponAim", {-0.15, -0.15}, 1}, {"WeaponAim", {"-0.15+0.02", -0.15}, 
1}, {}, {"WeaponAim", {-0.15, 0.15}, 1}, {"WeaponAim", {"-0.15+0.02", 
0.15}, 1}, {}, {"WeaponAim", {0.15, -0.15}, 1}, {"WeaponAim", 
{"0.15-0.02", -0.15}, 1}, {}, {"WeaponAim", {0.15, 0.15}, 1}, 
{"WeaponAim", {"0.15-0.02", 0.15}, 1}, {}};
						type = "line";
						width = 4;
					};
				};
				class Rockets {
					condition = "Rocket";
					class Circle {

						points[] = {{"WeaponAim", {-0.25, -0.25}, 1}, {"WeaponAim", 
{-0.25, "-0.25+0.05"}, 1}, {}, {"WeaponAim", {-0.25, 0.25}, 1}, 
{"WeaponAim", {-0.25, "+0.25-0.05"}, 1}, {}, {"WeaponAim", {0.25, 
-0.25}, 1}, {"WeaponAim", {0.25, "-0.25+0.05"}, 1}, {}, {"WeaponAim", 
{0.25, 0.25}, 1}, {"WeaponAim", {0.25, "+0.25-0.05"}, 1}, {}, 
{"WeaponAim", {-0.25, -0.25}, 1}, {"WeaponAim", {"-0.25+0.05", -0.25}, 
1}, {}, {"WeaponAim", {-0.25, 0.25}, 1}, {"WeaponAim", {"-0.25+0.05", 
0.25}, 1}, {}, {"WeaponAim", {0.25, -0.25}, 1}, {"WeaponAim", 
{"0.25-0.05", -0.25}, 1}, {}, {"WeaponAim", {0.25, 0.25}, 1}, 
{"WeaponAim", {"0.25-0.05", 0.25}, 1}, {}, {"WeaponAim", {0.035, 0.035},
 1}, {"WeaponAim", {0.01, 0.01}, 1}, {}, {"WeaponAim", {-0.035, 0.035}, 
1}, {"WeaponAim", {-0.01, 0.01}, 1}, {}, {"WeaponAim", {-0.035, -0.035},
 1}, {"WeaponAim", {-0.01, -0.01}, 1}, {}, {"WeaponAim", {0.035, 
-0.035}, 1}, {"WeaponAim", {0.01, -0.01}, 1}, {}};
						type = "line";
						width = 4;
					};
				};
				class SpeedNumber {
					align = "right";
					down[] = {{0.06, 0.52}, 1};
					pos[] = {{0.06, 0.47}, 1};
					right[] = {{"0.14-0.02", 0.47}, 1};
					scale = 1;
					source = "speed";
					sourcescale = 3.6;
					type = "text";
				};
				class AltNumber: SpeedNumber {
					down[] = {{"0.86-0.15", 0.52}, 1};
					pos[] = {{"0.86-0.15", 0.47}, 1};
					right[] = {{"0.94-0.15-0.02", 0.47}, 1};
					source = "altitudeAGL";
					sourcescale = 1;
				};
				class AltScale {
					align = "right";
					bottom = 0.2;
					center = 0.5;
					down[] = {0.86, 0.87};
					horizontal = 0;
					linexleft = 0.825;
					linexleftmajor = 0.825;
					lineyright = 0.835;
					lineyrightmajor = 0.845;
					majorlineeach = 5;
					max = "none";
					min = "none";
					numbereach = 5;
					pos[] = {0.86, 0.82};
					right[] = {"0.94-0.02", 0.82};
					scale = 1;
					source = "altitudeAGL";
					sourcescale = 1;
					step = 20;
					stepsize = "(0.85- 0.2)/20";
					top = 0.85;
					type = "scale";
					width = 4;
				};
				class weapons {
					align = "right";
					down[] = {{0.1, 0.92}, 1};
					pos[] = {{0.1, 0.88}, 1};
					right[] = {{"0.16-0.02", 0.88}, 1};
					scale = 0.5;
					source = "weapon";
					sourcescale = 1;
					type = "text";
				};
				class ammo {
					align = "right";
					down[] = {{0.1, 0.97}, 1};
					pos[] = {{0.1, 0.93}, 1};
					right[] = {{"0.16-0.02", 0.93}, 1};
					scale = 0.5;
					source = "ammo";
					sourcescale = 1;
					type = "text";
				};
				class HeadingScale {
					align = "center";
					bottom = 0.7;
					center = 0.5;
					down[] = {"0.32-0.01", "0.04+0.05"};
					horizontal = 1;
					linexleft = "0.06+0.05";
					linexleftmajor = "0.07+0.05";
					lineyright = "0.05+0.05";
					lineyrightmajor = "0.04+0.05";
					majorlineeach = 3;
					max = "none";
					min = "none";
					numbereach = 3;
					pos[] = {"0.32-0.01", "0.0+0.05"};
					right[] = {"0.38-0.01", "0.0+0.05"};
					scale = 1;
					source = "Heading";
					sourcescale = 1;
					step = 10;
					stepsize = "(0.70- 0.3)/15";
					top = 0.3;
					type = "scale";
					width = 4;
				};
				class HorizontalLine {
					clipbr[] = {0.8, 0.96};
					cliptl[] = {0.2, 0.12};
					class HorizontalLineDraw {

						points[] = {{"Level0", {"-6*0.075/2", 0.02}, 1}, {"Level0", 
{"-5*0.075/2", 0.02}, 1}, {}, {"Level0", {"-4*0.075/2", 0.02}, 1}, 
{"Level0", {"-3*0.075/2", 0.02}, 1}, {}, {"Level0", {"-2*0.075/2", 
0.02}, 1}, {"Level0", {"-1*0.075/2", 0.02}, 1}, {}, {"Level0", 
{"1*0.075/2", 0.02}, 1}, {"Level0", {"2*0.075/2", 0.02}, 1}, {}, 
{"Level0", {"3*0.075/2", 0.02}, 1}, {"Level0", {"4*0.075/2", 0.02}, 1}, 
{}, {"Level0", {"5*0.075/2", 0.02}, 1}, {"Level0", {"6*0.075/2", 0.02}, 
1}};
						source = "Level0";
						type = "line";
					};
				};
			};
		};
	};
