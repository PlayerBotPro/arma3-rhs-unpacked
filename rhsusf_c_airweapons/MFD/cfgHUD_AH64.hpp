/*
	MK-66 Rocket Motor/Warheads
	• 6PD - Point Detonation, High Explosive
	• 6RC - Penetration, High Explosive
	• 6MP - Time, Multi-purpose Submunition
	• 6IL - Time, Illumination
	• 6SK - Time, Smoke
	• 6FL - Flechette
*/
			class rhs_ah64_ammoname
			{
				class Bones {};
				class Draw
				{
					condition = "pylonSelected";
					HUD_TEXT_STATIC(0.005, 0.02,0.045,	0.085,center,MFD_PYLON_NAME,PylonText1)
					HUD_TEXT_SOURCE(0.015, 0.02,0.045,	0.085,center,ammo,PylonAmmo)
				};
			};