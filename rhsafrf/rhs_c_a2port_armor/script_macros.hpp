// global define values for within this module

#define Faction_VDV	faction = "rhs_faction_vdv";\
					crew = "rhs_vdv_armoredcrew";\
					rhs_decalParameters[]={\
						"['Number', cBTR3NumberPlaces, 'Default']",\
						"['Label', cBTRBackArmSymPlaces, 'Army',2]",\
						"['Label', cBTRPlnSymPlaces, 'Platoon',11]"\
					};

#define Faction_MSV	faction = "rhs_faction_msv";\
					crew = "rhs_msv_armoredcrew";\
					rhs_decalParameters[]={\
						"['Number', cBTR3NumberPlaces, 'DefaultRed']",\
						"['Label', cBTRPlnSymPlaces, 'Platoon',12]"\
					};

#define Faction_VV 	faction = "rhs_faction_vv";\
					crew = "rhs_msv_armoredcrew";\
					rhs_decalParameters[]={\
						"['Number', cBTR3NumberPlaces, 'Default']",\
						"_gvard1",\
						"_gvard2",\
						"_gvard3",\
						"['Label', cBTRVVLetterSymPlaces, 'Platoon',13]",\
					    "['Label', cBTROMONSymbolPlaces,'Army',10]"\
					};


#define Faction_VMF faction = "rhs_faction_vmf";\
					crew = "rhs_vmf_flora_armoredcrew";\
					rhs_decalParameters[]={\
						"['Number', cBTR3NumberPlaces, 'Default']",\
						"['Label', cBTRPlnSymPlaces, 'Army',[3,1]]"\
					};