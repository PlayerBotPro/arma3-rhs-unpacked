
class MFD_1
{
	topLeft					= MFD_WS_TL;
	topRight				= MFD_WS_TR;
	bottomLeft				= MFD_WS_BL;
	/// adjust position inside of memory points LOD
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0;
	color[]					= {0.15, 1.0, 0.15, 1.0};
	enableParallax			= false;
	font					= "PuristaMedium";

	class Bones {};
	class Draw
	{
		alpha				= 0.5;
		color[]				= {1,1,1};

		class MgunAmmo
		{
			condition = "ammo2>=1";
			class BlackBackground
			{
				color[]				= {0,0,0};
				alpha				= 1;
				class AmmoBox
				{
					type			= polygon;
					width			= 4.0;
					points[]		=
					{
						{
							{{__EVAL(-0.042+0.88),__EVAL(-0.075+0.9)},1},
							{{__EVAL(+0.042+0.88),__EVAL(-0.075+0.9)},1},
							{{__EVAL(+0.042+0.88),__EVAL(+0.075+0.9)},1},
							{{__EVAL(-0.042+0.88),__EVAL(+0.075+0.9)},1}
						}
					};
				};
			};
			class Full
			{
				condition		= "ammo2>=212";
				HUD_TEXT_STATIC(0.875,0.82,0.035,0.14,center,"К",AmmoText)
			};
			class AlmostFull
			{
				condition		= "(ammo2>=137)*(ammo2<=211)";
				HUD_TEXT_STATIC(0.875,0.82,0.035,0.14,center,"3/4",AmmoText)
			};
			class Half
			{
				condition		= "(ammo2>=63)*(ammo2<=136)";
				HUD_TEXT_STATIC(0.875,0.82,0.035,0.14,center,"1/2",AmmoText)
			};
			class AlmostEmpty
			{
				condition		= "(ammo2<=62)";
				HUD_TEXT_STATIC(0.875,0.82,0.035,0.14,center,"1/4",AmmoText)
			};
		};
		class WeaponTypeRocket
		{
			condition = "rocket";
			class BlackBackground
			{
				color[]				= {0,0,0};
				alpha				= 1;
				class AmmoBox
				{
					type			= polygon;
					width			= 4.0;
					points[]		=
					{
						{
							{{__EVAL(-0.042+0.88),__EVAL(-0.075+0.2)},1},
							{{__EVAL(+0.042+0.88),__EVAL(-0.075+0.2)},1},
							{{__EVAL(+0.042+0.88),__EVAL(+0.075+0.2)},1},
							{{__EVAL(-0.042+0.88),__EVAL(+0.075+0.2)},1}
						}
					};
				};
			};
			HUD_TEXT_STATIC(0.875,0.11,0.035,0.14,center,"НРС",AmmoText)
		};
		class WeaponTypeMissiles: WeaponTypeRocket
		{
			condition = "missile";
			class BlackBackground: BlackBackground
			{
				class AmmoBox: AmmoBox {};
			};
			HUD_TEXT_STATIC(0.875,0.11,0.035,0.14,center,"УР",AmmoText)
		};
		class WeaponTypeBombs: WeaponTypeRocket
		{
			condition = "bomb";
			class BlackBackground: BlackBackground
			{
				class AmmoBox: AmmoBox {};
			};
			HUD_TEXT_STATIC(0.875,0.11,0.035,0.14,center,"Б",AmmoText)
		};
		class WeaponTypeMgun: WeaponTypeRocket
		{
			condition = "mgun";
			class BlackBackground: BlackBackground
			{
				class AmmoBox: AmmoBox {};
			};
			HUD_TEXT_STATIC(0.875,0.11,0.035,0.14,center,"ВПУ",AmmoText)
		};
		#define WS_CENTER 0.375
		#define WS_SPACING 0.064
		class Pylon1
		{
			type	= "pylonicon";
			pos[]	= {{__EVAL(WS_CENTER-(WS_SPACING*0+0.03)), 0.34}, 1};
			pylon	= 1;
			name	= "rhs_su25_box";
		};
		class Pylon2: Pylon1 {	pylon	= 2;pos[]	= {{__EVAL(WS_CENTER+(WS_SPACING*0+0.03)), 0.32}, 1};};
		class Pylon3: Pylon1 {	pylon	= 3;pos[]	= {{__EVAL(WS_CENTER-(WS_SPACING*1+0.03)), 0.32}, 1};};
		class Pylon4: Pylon1 {	pylon	= 4;pos[]	= {{__EVAL(WS_CENTER+(WS_SPACING*1+0.03)), 0.32}, 1};};
		class Pylon5: Pylon1 {	pylon	= 5;pos[]	= {{__EVAL(WS_CENTER-(WS_SPACING*2+0.03)), 0.32}, 1};};
		class Pylon6: Pylon1 {	pylon	= 6;pos[]	= {{__EVAL(WS_CENTER+(WS_SPACING*2+0.03)), 0.32}, 1};};
		class Pylon7: Pylon1 {	pylon	= 7;pos[]	= {{__EVAL(WS_CENTER-(WS_SPACING*3+0.03)), 0.32}, 1};};
		class Pylon8: Pylon1 {	pylon	= 8;pos[]	= {{__EVAL(WS_CENTER+(WS_SPACING*3+0.03)), 0.32}, 1};};
		class Pylon9: Pylon1 {	pylon	= 9;pos[]	= {{__EVAL(WS_CENTER-(WS_SPACING*4+0.025)),0.32}, 1};};
		class Pylon10: Pylon1 {	pylon	= 10;pos[]	= {{__EVAL(WS_CENTER+(WS_SPACING*4+0.03)), 0.32}, 1};};

	};
};
class MFD_2
{
	topLeft					= MFD_Lights_TL;
	topRight				= MFD_Lights_TR;
	bottomLeft				= MFD_Lights_BL;
	/// adjust position inside of memory points LOD
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0;
	color[]					= {0.15, 1.0, 0.15, 1.0};
	enableParallax			= false;

	class Bones {};
	class Draw
	{
		alpha				= 1;
		color[]				= {1,1,1};
		class Launch_Authorized
		{
			condition	= "((impactDistance/LarTop)>=LarAmmoMin)*((impactDistance/LarTop)<=LarAmmoMax)+(user1>=1)+missilelocked";
			color[]		= {0.69,0.22,0};
			alpha		= 0.2;
			class Bulb
			{
				type			= polygon;
				texture			= "a3\Data_f\light_flare_ca.paa";
				points[]		=
				{
					{
						{{__EVAL(-0.042+0.94),__EVAL(-0.215+0.3)},1},
						{{__EVAL(+0.042+0.94),__EVAL(-0.215+0.3)},1},
						{{__EVAL(+0.042+0.94),__EVAL(+0.215+0.3)},1},
						{{__EVAL(-0.042+0.94),__EVAL(+0.215+0.3)},1}
					}
				};
			};
		};
		class Laser_Active
		{
			color[]		= {0,0.49,0};
			alpha		= 0.10;
			condition	= laseron;
			class Bulb
			{
				type			= polygon;
				texture			= "a3\Data_f\light_flare_ca.paa";
				points[]		=
				{
					{
						{{__EVAL(-0.042+0.06),__EVAL(-0.215+0.3)},1},
						{{__EVAL(+0.042+0.06),__EVAL(-0.215+0.3)},1},
						{{__EVAL(+0.042+0.06),__EVAL(+0.215+0.3)},1},
						{{__EVAL(-0.042+0.06),__EVAL(+0.215+0.3)},1}
					}
				};
			};
		};
		class Laser_Cooldown: Laser_Active
		{
			condition	= "user0";
			blinkingPattern[]	= {0.3, 0.3};
			blinkingStartsOn	= true;
			class Bulb: Bulb {};
		};
		class Launch_Disengage
		{
			condition = "(((impactDistance/LarTop)<=LarAmmoMin)+((impactDistance/LarTop)>=LarAmmoMax))*rocket+(user1<=-1)";
			color[]		= {0.94,0.01,0};
			alpha		= 0.07;
			class Bulb
			{
				type			= polygon;
				texture			= "a3\Data_f\light_flare_ca.paa";
				points[]		=
				{
					{
						{{__EVAL(-0.042+0.06),__EVAL(-0.215+0.7)},1},
						{{__EVAL(+0.042+0.06),__EVAL(-0.215+0.7)},1},
						{{__EVAL(+0.042+0.06),__EVAL(+0.215+0.7)},1},
						{{__EVAL(-0.042+0.06),__EVAL(+0.215+0.7)},1}
					}
				};
			};
		};
	};
};