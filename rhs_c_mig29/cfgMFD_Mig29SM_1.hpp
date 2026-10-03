
				/// adjust position inside of memory points LOD
				borderLeft				= 0;
				borderRight				= 0;
				borderTop				= 0;
				borderBottom			= 0;
				color[]					= {0.0, 0.0, 0.0, 0.1};
				font					= "rhs_digital_font_var";

				class material
				{
					ambient[] = {1, 1, 1, 1};
					diffuse[] = {10, 10, 10, 1};
					emissive[] = {400, 200, 200, 1};
				};

				class Bones
				{
					class Pylon1
					{
						type			= fixed;
						pos[]			= {XY_Scaled(0.503+(0.072+0.107*1), 0.56)};
					};
					class Pylon2: Pylon1 { pos[] = {XY_Scaled(0.503-(0.072+0.107*1), 0.56)};};
					class Pylon3: Pylon1 { pos[] = {XY_Scaled(0.503+(0.072+0.107*2), 0.56)};};
					class Pylon4: Pylon1 { pos[] = {XY_Scaled(0.503-(0.072+0.107*2), 0.56)};};
					class Pylon5: Pylon1 { pos[] = {XY_Scaled(0.503+(0.072+0.107*3), 0.56)};};
					class Pylon6: Pylon1 { pos[] = {XY_Scaled(0.503-(0.072+0.107*3), 0.56)};};
					class Pylon7: Pylon1 { pos[] = {XY_Scaled(0.503, 0.56)};};
				};

				class Draw
				{
					color[]				= {1.0, 1.0, 1.0};
					alpha				= 0.22;
					condition			= on;
					class Group_TV
					{
						condition = "user45<=0";
					};
					class Group_NAV
					{
						condition = "(user45 >= 1)*(user45<=1)";
					};
					class Group_WEAP
					{
						condition = "(user45 >= 2)*(user45<=2)+1";

						HUD_TEXT_STATIC(0.04,0.15,0.06,0.06,right,"ВПУ",AmmoGunText)

						HUD_TEXT_SOURCE_INDEX(0.04,0.15+0.07,0.06,0.06,right,ammo,1,AmmoValue)

						HUD_TEXT_STATIC(0.95,0.15,0.06,0.06,left,"ЛТЦ",CMGunText)

						HUD_TEXT_SOURCE(0.95,0.15+0.07,0.06,0.06,left,cmAmmo,CMValue)

						#define PYLON_EMPTY_MACRO(NUMB) \
						class Pylon##NUMB##_empty \
						{\
							color[]		= {1.0, 0.0, 0.0};\
							condition	= pylonEmpty##NUMB##;\
							\
							class Shape\
							{\
								type = line;\
								width			= 8.0;\
								points[]		=\
								{\
									{Pylon##NUMB##, { XY_Scaled(-0.02,+0.02)}, 1},\
									{Pylon##NUMB##, { XY_Scaled(+0.02,-0.02)}, 1},\
									{},\
									{Pylon##NUMB##, { XY_Scaled(-0.02,-0.02)}, 1},\
									{Pylon##NUMB##, { XY_Scaled(+0.02,+0.02)}, 1}\
								};\
							};\
						};

						PYLON_EMPTY_MACRO(1)

						PYLON_EMPTY_MACRO(2)

						PYLON_EMPTY_MACRO(3)

						PYLON_EMPTY_MACRO(4)

						PYLON_EMPTY_MACRO(5)

						PYLON_EMPTY_MACRO(6)

						PYLON_EMPTY_MACRO(7)


						class PylonName1
						{
							type	= "pylonicon";
							pos[]	= {Pylon1,{0.0, 0.0}, 1};
							pylon	= 1;
							name	= "rhs_rus_circle";
						};
						class PylonName2: PylonName1 {pos[]	= {Pylon2,{0.0, 0.0}, 1};pylon	= 2;};
						class PylonName3: PylonName1 {pos[]	= {Pylon3,{0.0, 0.0}, 1};pylon	= 3;};
						class PylonName4: PylonName1 {pos[]	= {Pylon4,{0.0, 0.0}, 1};pylon	= 4;};
						class PylonName5: PylonName1 {pos[]	= {Pylon5,{0.0, 0.0}, 1};pylon	= 5;};
						class PylonName6: PylonName1 {pos[]	= {Pylon6,{0.0, 0.0}, 1};pylon	= 6;};
						class PylonName7: PylonName1 {pos[]	= {Pylon7,{0.0, 0.0}, 1};pylon	= 7;};
					};
				};
