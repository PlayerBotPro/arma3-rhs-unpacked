class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		rhs_GestureReloadG36A1 = "rhs_GestureReloadG36A1"; // Would reccommend changing the naming convention, just so nothing overlaps
		rhs_GestureReloadG36MLI =  "rhs_GestureReloadG36MLI";
		rhs_GestureReloadG36V = "rhs_GestureReloadG36V";
		rhs_GestureReloadAG36 = "rhs_GestureReloadAG36";//
		rhssaf_m70c_Gunner = "rhssaf_m70c_Gunner";
        	rhs_GestureReloadM21GP = "rhs_GestureReloadM21GP";
	};

	class Actions 
	{
		class NoActions : ManActions {
			rhs_GestureReloadG36A1[] = { "rhs_GestureReloadG36A1", "Gesture" };
			rhs_GestureReloadG36MLI[] = { "rhs_GestureReloadG36MLI", "Gesture" };
			rhs_GestureReloadG36V[] = { "rhs_GestureReloadG36V", "Gesture" };
			rhs_GestureReloadAG36[] = { "rhs_GestureReloadAG36", "Gesture" };
            		rhs_GestureReloadM21GP[] = { "rhs_GestureReloadM21GP", "Gesture" };
		};
		class RifleBaseStandActions;
		class RifleProneActions : RifleBaseStandActions
		{
			rhs_GestureReloadG36A1[] = { "rhs_GestureReloadG36A1_Prone", "Gesture" };
			rhs_GestureReloadG36MLI[] = { "rhs_GestureReloadG36MLI_Prone", "Gesture" };
			rhs_GestureReloadG36V[] = { "rhs_GestureReloadG36V_Prone", "Gesture" };
			rhs_GestureReloadAG36[] = { "rhs_GestureReloadAG36_Prone", "Gesture" };
            		rhs_GestureReloadM21GP[] = { "rhs_GestureReloadM21GP_Prone", "Gesture" };
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions : RifleAdjustProneBaseActions
		{
			rhs_GestureReloadG36A1[] = { "rhs_GestureReloadG36A1_Context", "Gesture" };
			rhs_GestureReloadG36MLI[] = { "rhs_GestureReloadG36MLI_Context", "Gesture" };
			rhs_GestureReloadG36V[] = { "rhs_GestureReloadG36V_Context", "Gesture" };
			rhs_GestureReloadAG36[] = { "rhs_GestureReloadAG36_Context", "Gesture" };
            		rhs_GestureReloadM21GP[] = { "rhs_GestureReloadM21GP_Context", "Gesture" };
		};
		class RifleAdjustLProneActions : RifleAdjustProneBaseActions
		{
			rhs_GestureReloadG36A1[] = { "rhs_GestureReloadG36A1_Context", "Gesture" };
			rhs_GestureReloadG36MLI[] = { "rhs_GestureReloadG36MLI_Context", "Gesture" };
			rhs_GestureReloadG36V[] = { "rhs_GestureReloadG36V_Context", "Gesture" };
			rhs_GestureReloadAG36[] = { "rhs_GestureReloadAG36_Context", "Gesture" };
            		rhs_GestureReloadM21GP[] = { "rhs_GestureReloadM21GP_Context", "Gesture" };
		};
		class RifleAdjustFProneActions : RifleAdjustProneBaseActions
		{
			rhs_GestureReloadG36A1[] = { "rhs_GestureReloadG36A1_Context", "Gesture" };
			rhs_GestureReloadG36MLI[] = { "rhs_GestureReloadG36MLI_Context", "Gesture" };
			rhs_GestureReloadG36V[] = { "rhs_GestureReloadG36V_Context", "Gesture" };
			rhs_GestureReloadAG36[] = { "rhs_GestureReloadAG36_Context", "Gesture" };
            		rhs_GestureReloadM21GP[] = { "rhs_GestureReloadM21GP", "Gesture" };
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class rhssaf_m70c_Gunner: Crew
		{
			file				= rhssaf\addons\rhssaf_c_weapons\anims\rhssaf_m70c_gunner;
			connectTo[]			= {Static_Dead,1};		//ToDo: own death anim?
			leftHandIKBeg		= true;
			leftHandIKCurve[]	= {1};
			leftHandIKEnd		= true;
			rightHandIKCurve[]	= {1};
			righHandIKBeg		= true;
			righHandIKEnd		= true;
			collisionShape		= "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
		};
	};
};
