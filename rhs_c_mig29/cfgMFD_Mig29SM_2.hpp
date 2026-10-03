
				/// adjust position inside of memory points LOD
				borderLeft				= 0;
				borderRight				= 0;
				borderTop				= 0;
				borderBottom			= 0;
				color[]					= {0.0, 0.0, 0.0, 0.1};
				font					= "rhs_digital_font_var";

				class Bones
				{
				};

				class Draw
				{
					color[]				= {0.0, 0.0, 0.0};
					alpha				= 1;
					condition			= on;
					HUD_TEXT_STATIC(0.74,0.1,0.045,0.045,center,"КСБ 08.125.000.000",RadioFQ_1)
					HUD_TEXT_STATIC(0.74,0.17,0.045,0.045,center,"КСД 08.312.522.000",RadioFQ_2)

					HUD_TEXT_STATIC(0.74,0.10+0.18,0.045,0.045,center,"НВГ 12.541.100.000",RadioFQ_3)
					HUD_TEXT_STATIC(0.74,0.17+0.18,0.045,0.045,center,"ИРГ 00.101.512.000",RadioFQ_4)

					HUD_TEXT_STATIC(0.04,0.1,0.045,0.045,right,"ТОПЛИВО",FuelText)
					class FuelSource
					{
						type			= text;
						source			= fuel;
						sourceScale 	= 4400;
						sourcePrecision = 0;
						sourceLength	= 3;

						align			= right;
						scale			= 1;
						TEXT_SIZEPOS(0.04,0.1+0.07,0.05,0.05)
					};
					HUD_TEXT_STATIC(0.04+0.11,0.1+0.07,0.045,0.045,right,"Л",FuelText2)
					class Time
					{
						type			= text;
						source			= time;
						text 			= %X;
						sourceScale 	= 1;

						align			= right;
						scale			= 1;
						TEXT_SIZEPOS(0.04+0.27,0.1,0.045,0.045)
					};
					class Date: Time
					{
						text 			= %x;
						TEXT_SIZEPOS(0.04+0.27,0.1+0.07,0.045,0.045)
					};
					HUD_TEXT_STATIC(0.04,0.62,0.06,0.06,right,"НАВИГАЦИЯ",NavigationText)
					HUD_TEXT_STATIC(0.04,0.62+0.07,0.05,0.05,right,"ПОЗИЦИЯ:",PositionText)
					class CordX
					{
						type			= text;
						source			= coordinateX;
						sourceScale		= 0.01;
						sourceLength	= 3;
						sourceOffset	= -0.5;

						align			= right;
						scale			= 1;
						TEXT_SIZEPOS(0.04+0.22,0.62+0.07,0.05,0.05)
					};
					class CordY: CordX
					{
						source			= coordinateY;
						TEXT_SIZEPOS(0.04+0.22+0.07,0.62+0.07,0.05,0.05)
					};
					HUD_TEXT_STATIC(0.04+0.03,0.62+0.14,0.05,0.05,right,"ВЫСОТА:",ATLText)
					class ATLValue
					{
						type			= text;
						source			= altitudeAGL;
						sourceScale		= 1;
						sourceLength	= 4;
						sourceOffset	= -2.1;

						align			= right;
						scale			= 1;
						TEXT_SIZEPOS(0.04+0.22,0.62+0.14,0.05,0.05)
					};
					HUD_TEXT_STATIC(0.04+0.32,0.62+0.14+0.01,0.05,0.035,right,"м",ATLText2)

					HUD_TEXT_STATIC(0.04+0.075,0.62+0.21,0.05,0.05,right,"КУРС:",DirectionText)
					HUD_TEXT_SOURCE(0.04+0.22,0.62+0.21,0.05,0.05,right,heading,DirectionValue)
					class Waypoints
					{
						condition = wpvalid;
						HUD_TEXT_STATIC(0.84-0.04,0.62+0.07*1,0.05,0.05,left,"ИНДЕКС ППМ:",WPIndexText)
						HUD_TEXT_SOURCE(0.87-0.04,0.62+0.07*1,0.05,0.05,right,wpindex,WPIndexValue)
						HUD_TEXT_STATIC(0.84-0.04,0.62+0.07*2,0.05,0.05,left,"РАССТОЯНИЕ:",WPDistText)
						HUD_TEXT_STATIC(0.94,0.62+0.14+0.01,0.05,0.035,right,"км",WPDistText2)
						class WPDistValue
						{
							type			= text;
							source			= WPDist;
							sourceScale 	= 0.001;
							sourceLength	= 1;
							sourcePrecision = 1;

							align			= right;
							scale			= 1;
							TEXT_SIZEPOS(0.87-0.04,0.62+0.07*2,0.05,0.05)
						};
						class Waypoints
						{
							condition = user40;
							HUD_TEXT_STATIC(0.84,0.62+0.07*3,0.05,0.05,left,"КУРС ДО ППМ:",WPHeadingText)
							HUD_TEXT_SOURCE_INDEX(0.87,0.62+0.07*3,0.05,0.05,right,user,40,WPHeadingValue)
						};
					};
					class NoWaypoints
					{
						condition = "1- wpvalid";
						HUD_TEXT_STATIC(0.76,0.73,0.07,0.07,center,"ВЫБЕРИ МАРШРУТ",PrevText)
					};

					HUD_TEXT_STATIC(0.02,0.94,0.05,0.05,right,"ПОВОРОТ",PrevText)
					HUD_TEXT_STATIC(0.69,0.94,0.07,0.07,right,"-",MinusText)
					HUD_TEXT_STATIC(0.90,0.94,0.07,0.07,right,"+",PlusText)
				};
