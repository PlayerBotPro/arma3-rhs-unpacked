class CfgGesturesMale
{
	class Default;
	class States
	{

		class RHS_GestureReloadG36A1 :Default
		{
			file = "rhssaf\addons\rhssaf_m_weapon_g36\anim\standard\reload_G36_standing.rtm";
			speed = 0.2307692307692308;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.25;
			headBobMode = 2;
			leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadG36A1_Prone : Default
		{
			file = "rhssaf\addons\rhssaf_m_weapon_g36\anim\standard\reload_G36_prone.rtm";
			speed = 0.2307692307692308;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.15;
			headBobMode = 2;
			leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKEnd = true;
		};
		class RHS_GestureReloadG36A1_Context : RHS_GestureReloadG36A1
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadG36V :Default
		{
			file = "rhssaf\addons\rhssaf_m_weapon_g36\anim\varient\reload_G36V_standing.rtm";
			speed = 0.2564102564102564;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.25;
			headBobMode = 2;
			leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			rightHandIKCurve[] = { 0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1 };
			rightHandIKBeg = true;
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadG36V_Prone : Default
		{
			file = "rhssaf\addons\rhssaf_m_weapon_g36\anim\varient\reload_G36V_prone.rtm";
			speed = 0.2564102564102564;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.15;
			headBobMode = 2;
			leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			rightHandIKCurve[] = { 0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1 };
			rightHandIKBeg = true;
			rightHandIKEnd = true;
		};
		class RHS_GestureReloadG36V_Context : RHS_GestureReloadG36V
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadAG36 :Default
		{
			file = "rhssaf\addons\rhssaf_m_weapon_g36\anim\ag36\reload_aG36_standing.rtm";
			speed = 0.2307692325443787;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.25;
			headBobMode = 2;
			leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadAG36_Prone : Default
		{
			file = "rhssaf\addons\rhssaf_m_weapon_g36\anim\ag36\reload_aG36_prone.rtm";
			speed = 0.2307692325443787;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.15;
			headBobMode = 2;
			leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKEnd = true;
		};
		class RHS_GestureReloadAG36_Context : RHS_GestureReloadAG36
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadG36MLI :Default
		{
			file = "rhssaf\addons\rhssaf_m_weapon_g36\anim\mli\reload_g36mli_standing.rtm";
			speed = 0.2727272724793388;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			rightHandIKCurve[] = { 0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1 };
			rightHandIKBeg = true;
			rightHandIKEnd = true;
		};

		class RHS_GestureReloadG36MLI_Prone : Default
		{
			file = "rhssaf\addons\rhssaf_m_weapon_g36\anim\mli\reload_g36mli_prone.rtm";
			looped = 0;
			speed = 0.2727272724793388;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.15;
			headBobMode = 2;
			leftHandIKBeg = true;
			leftHandIKCurve[] = { 0, 1, 0.07, 0, 0.81, 0, 0.86, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1 };
			rightHandIKEnd = true;
		};
		class RHS_GestureReloadG36MLI_Context : RHS_GestureReloadG36MLI
		{
			mask = "handsWeapon_context";
		};
		class RHS_GestureReloadM21GP : Default
		{
			file = "\rhssaf\addons\rhssaf_c_weapons\anims\reload_m21_gp.rtm";
			looped = 0;
			speed = -4.8;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.200000;
			headBobMode = 2;
			rightHandIKCurve[] = { 0.631944, 1, 0.657922, 0, 0.840278, 0, 0.875, 1 };
			leftHandIKCurve[] = { 0, 1, 0.03125, 0, 0.868056, 0, 0.96, 1 };
			leftHandIKBeg = false;
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKEnd = true;
		};
		class RHS_GestureReloadM21GP_Prone : Default
		{
			file = "\rhssaf\addons\rhssaf_c_weapons\anims\reload_m21_gp_prone.rtm";
			looped = 0;
			speed = -4.8;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.2;
			headBobMode = 2;
			leftHandIKBeg = false;
			leftHandIKCurve[] = { 0, 1, 0.075, 0, 0.85, 0, 0.93, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 1 };
			rightHandIKEnd = true;
		};
		class RHS_GestureReloadM21GP_Context : RHS_GestureReloadM21GP
		{
			mask = "handsWeapon_context";
		};
	};
};
