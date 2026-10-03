class CfgPatches {
    class rhssaf_main {
        units[] = {"rhssaf_flag_serbia", "rhssaf_flag_yugoslavia"};
        weapons[] = {};
        name = "RHS: SAF main";
        requiredVersion = 2;
        requiredAddons[] = {"rhs_main_loadorder", "rhsusf_main_loadorder"};
        author = "$STR_RHSSAF_AUTHOR_FULL";
        url = "http://www.rhsmods.org/";
        versionDesc = "RHS";
        version = "0.4.5.0000";
        text = "QUOTE(RHS_TAG 0.4.5.0000)";
        worlds[] = {};
    };
};
class CfgAddons {
    class PreloadAddons {
        class RHS_SAF {
            list[] = {
                "rhssaf_main",
                "rhssaf_main_loadorder",
                "rhssaf_muzzleflash",
                "rhssaf_c_gear",
                "rhssaf_c_troops",
                "rhssaf_c_vehicles",
                "rhssaf_c_weapons"
            };
        };
    };
};
class CfgMods {
    class Mod_Base;
    class RHS_SAF: Mod_Base {
        author = "$STR_RHSSAF_AUTHOR_FULL";
        picture = "\rhssaf\addons\rhssaf_main\data\rhs_logo_ca.paa";
        logo = "\rhssaf\addons\rhssaf_main\data\rhs_logo_ca.paa";
        logoOver = "\rhssaf\addons\rhssaf_main\data\rhs_logo_ca.paa";
        logoSmall = "\rhssaf\addons\rhssaf_main\data\rhs_logo_ca.paa";
        dlcColor[] = {0, 0, 0, 1};
        fieldManualTopicAndHint[] = {};
        hideName = 1;
        hidePicture = 0;
        tooltip = "RHS: SAF";
        tooltipOwned = "RHS: SAF";
        name = "RHS: SAF";
        overview = "Serbian Armed Forces!";
        action = "http://www.rhsmods.org/";
        dir = "rhssaf";
    };
    class RHSSAF: RHS_SAF {};
    class RHSSAFDEV: RHS_SAF {
        picture = "\rhssaf\addons\rhssaf_main\data\rhsdev_logo_ca.paa";
        logo = "\rhssaf\addons\rhssaf_main\data\rhsdev_logo_ca.paa";
        logoOver = "\rhssaf\addons\rhssaf_main\data\rhsdev_logo_ca.paa";
        logoSmall = "\rhssaf\addons\rhssaf_main\data\rhsdev_logo_ca.paa";
        tooltip = "RHS: SAF Development Version";
        tooltipOwned = "RHS: SAF Development Version";
        name = "RHS: SAF Development Version";
        overview = "Development version, please report bugs to http://feedback.rhsmods.org/view_all_bug_page.php";
    };
};
class CfgVehicles {
    class FlagCarrier;
    class rhssaf_flag_serbia: FlagCarrier {
        class EventHandlers {
            init = "(_this select 0) setFlagTexture '\rhssaf\addons\rhssaf_main\data\flags\flag_serbia_co.paa'";
        };
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_RHSSAF_FLAG_SERBIA_DISPLAYNAME";
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_flag_serbia.paa";
    };
    class rhssaf_flag_yugoslavia: FlagCarrier {
        class EventHandlers {
            init = "(_this select 0) setFlagTexture '\rhssaf\addons\rhssaf_main\data\flags\flag_yugoslavia_co.paa'";
        };
        dlc = "RHS_SAF";
        author = "$STR_RHSSAF_AUTHOR_FULL";
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_RHSSAF_FLAG_YUGOSLAVIA_DISPLAYNAME";
        editorPreview = "rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_flag_yugoslavia.paa";
    };
};
class CfgMarkers {
    class flag_NATO;
    class rhssaf_flag_serbia: flag_NATO {
        name = "Serbia";
        icon = "\rhssaf\addons\rhssaf_main\data\flags\flag_serbia_co.paa";
        texture = "\rhssaf\addons\rhssaf_main\data\flags\flag_serbia_co.paa";
    };
    class rhssaf_flag_yugoslavia: flag_NATO {
        name = "Yugoslavia";
        icon = "\rhssaf\addons\rhssaf_main\data\flags\flag_yugoslavia_co.paa";
        texture = "\rhssaf\addons\rhssaf_main\data\flags\flag_yugoslavia_co.paa";
    };
};
class CfgWorlds {
    class GenericNames {
        class SerbianMen {
            class FirstNames {
                aleksandar = "Aleksandar";
                aleksa = "Aleksa";
                aleksije = "Aleksije";
                andrija = "Andrija";
                branislav = "Branislav";
                boban = "Boban";
                bogdan = "Bogdan";
                bogoje = "Bogoje";
                bojan = "Bojan";
                boris = "Boris";
                branimir = "Branimir";
                goran = "Goran";
                mladen = "Mladen";
                milan = "Milan";
                ivan = "Ivan";
                nemanja = "Nemanja";
                vladan = "Vladan";
                dragan = "Dragan";
                zoran = "Zoran";
                dragisa = "Dragisa";
                stefan = "Stefan";
                nikola = "Nikola";
                marko = "Marko";
                darko = "Darko";
                jovica = "Jovica";
                miroslav = "Miroslav";
                mika = "Mika";
                rodoljub = "Rodoljub";
                lazar = "Lazar";
                zivorad = "Zivorad";
                zivomir = "Zivormir";
                nenad = "Nenad";
                nebojsa = "Nebojsa";
                petar = "Petar";
                filip = "Filip";
                momir = "Momir";
                radisa = "Radisa";
                vladimir = "Vladimir";
                ivica = "Dragutin";
                rade = "Rade";
                radenko = "Radenko";
                igor = "Igor";
                ilija = "Ilija";
                milos = "Milos";
                sasa = "Sasa";
                uros = "Uros";
                ljubisa = "Ljubisa";
                bosko = "Bosko";
                vuk = "Vuk";
                slobodan = "Slobodan";
                danilo = "Danilo";
                sinisa = "Sinisa";
                dusan = "Dusan";
            };
            class LastNames {
                aksentijevic = "Aksentijevic";
                marinkovic = "Marinkovic";
                isakovic = "Isakovic";
                gajic = "Gajic";
                ristic = "Ristic";
                milic = "Milic";
                nikolic = "Nikolic";
                despotovic = "Despotovic";
                markovic = "Markovic";
                ilic = "Ilic";
                dobrivojevic = "Dobrivojevic";
                karic = "Karic";
                milenkovic = "Milenkovic";
                miljkovic = "Miljkovic";
                ostojic = "Ostojic";
                radenkovic = "Radenkovic";
                miletic = "Miletic";
                milivojevic = "Milivojevic";
                milosavljevic = "Milosavljevic";
                bercek = "Bercek";
                arizanov = "Arizanov";
                pasic = "Pasic";
                jandric = "Jandric";
                bogojevic = "Bogojevic";
                blagojevic = "Blagojevic";
                kostic = "Kostic";
                ackov = "Ackov";
                trifunovic = "Trifunovic";
                ilijev = "Ilijev";
                jovanovic = "Jovanovic";
                maksimovic = "Maksimovic";
                drljaca = "Drljaca";
                karadzic = "Karadzic";
                milosevic = "Milosevic";
                mladic = "Mladic";
                eric = "Eric";
                stanisic = "Stanisic";
                reljic = "Reljic";
                stojakovic = "Stojakovic";
                zec = "Zec";
                prvulovic = "Prvulovic";
                avramov = "Avramov";
                budisic = "Budisic";
                glisic = "Glisic";
                grubisic = "Grubisic";
                hristic = "Hristic";
                hrebeljanovic = "Hrebeljanovic";
                vidak = "Vidak";
                djordjevic = "Djordjevic";
                vlaisavljevic = "Vlaisavljevic";
                ivanovic = "Ivanovic";
                stepanovic = "Stepanovic";
                kostadinovic = "Kostadinovic";
                lupsan = "Lupsan";
                ljubenovic = "Ljubenovic";
                matijevic = "Matijevic";
                matovic = "Matovic";
                nesic = "Nesic";
                simic = "Simic";
                trifkovic = "Trifkovic";
            };
        };
        class SerbianWomen {
            class FirstNames {};
            class LastNames {};
        };
        class AlbanianMen {
            class FirstNames {
                adnan = "Adnan";
                afrim = "Afrim";
                agimi = "Agimi";
                arben = "Arben";
                azem = "Azem";
                bajram = "Bajram";
                bashkim = "Bashkim";
                bekim = "Bekim";
                beqir = "Beqir";
                besim = "Besim";
                brahim = "Brahim";
                burim = "Burim";
                dardan = "Dardan";
                defrim = "Defrim";
                edon = "Edon";
                endrit = "Endrit";
                engjell = "Engjell";
                enver = "Enver";
                ermir = "Ermir";
                fatbardh = "Fatbardh";
                fatmir = "Fatmir";
                faton = "Faton";
                florim = "Florim";
                gazmend = "Gazmend";
                gezim = "Gezim";
                ibish = "Ibish";
                idriz = "Idriz";
                ilir = "Ilir";
                indrit = "Indrit";
                isuf = "Isuf";
                jeton = "Jeton";
                kushtrim = "Kushtrim";
                lulezim = "Lulezim";
                murat = "Murat";
                nderim = "Nderim";
                qerim = "Qerim";
                ramiz = "Ramiz";
                redzep = "Redzep";
                shaban = "Shaban";
                shkelzen = "Shkelzen";
                veton = "Veton";
                xhemail = "Xhemail";
                hashim = "Hashim";
                agim = "Agim";
                xhevdet = "Xhevdet";
                skender = "Skender";
            };
            class LastNames {
                zogjani = "Zogjani";
                zhulati = "Zhulati";
                ymeri = "Ymeri";
                useni = "Useni";
                troshani = "Troshani";
                tatari = "Tatari";
                tafaj = "Tafaj";
                siliqi = "Siliqi";
                shkelyim = "Shkelyim";
                selimi = "Selimi";
                sadiraj = "Sadiraj";
                rrustemi = "Rrustemi";
                reufi = "Reufi";
                nuhiji = "Nuhiji";
                muslimi = "Muslimi";
                mujushi = "Mujushi";
                lushi = "Lushi";
                lamaj = "Lamaj";
                kupi = "Kupi";
                krasniqi = "Krasniqi";
                kochiu = "Kochiu";
                jasari = "Jasari";
                idrizi = "Idrizi";
                hasangjekaj = "Hasangjekaj";
                hamiti = "Hamiti";
                hajdari = "Hajdari";
                fakaj = "Fakaj";
                dzaferi = "Dzaferi";
                demachi = "Demachi";
                bushaj = "Bushaj";
                berisha = "Berisha";
                bajrami = "Bajrami";
                ahmeti = "Ahmeti";
                ahmetaj = "Ahmetaj";
                bajraktari = "Bajraktari";
                bejta = "Bejta";
                bislimi = "Bislimi";
                ceku = "Ceku";
                demaqi = "Demaqi";
                emini = "Emini";
                gjokaj = "Gjokaj";
                haliti = "Haliti";
                hasani = "Hasani";
                ismaili = "Ismaili";
                kutishi = "Kutishi";
                meidani = "Meidani";
                qosja = "Qosja";
                ramadani = "Ramadani";
                sadiku = "Sadiku";
                saliu = "Saliu";
                shundi = "Shundi";
                sulejmani = "Sulejmani";
                thaqi = "Thaqi";
                xhaferi = "Xhaferi";
                thaci = "Thaci";
                limaj = "Limaj";
                cheku = "Cheku";
                rexhepi = "Rexhepi";
                nesimi = "Nesimi";
                lumaj = "Lumaj";
            };
        };
    };
};
class CfgFactionClasses {
    class rhssaf_faction_army {
        displayName = "$STR_RHSSAF_FAC_ARMY";
        priority = 80;
        side = 2;
        genericNames = "SerbianMen";
        identityTypes[] = {"LanguageGRE_F", "Head_Euro", "NoGlasses"};
        author = "$STR_RHSSAF_AUTHOR_FULL";
        icon = "\rhssaf\addons\rhssaf_main\data\icons\factions\rhssaf_faction_army_co.paa";
        flag = "\rhssaf\addons\rhssaf_main\data\flags\flag_serbia_co.paa";
        backpack_tf_faction_radio_api = "tf_bussole";
    };
    class rhssaf_faction_army_opfor: rhssaf_faction_army {
        side = 0;
        priority = -9;
    };
    class rhssaf_faction_airforce {
        displayName = "$STR_RHSSAF_FAC_AIRFORCE";
        priority = 81;
        side = 2;
        genericNames = "SerbianMen";
        identityTypes[] = {"LanguageGRE_F", "Head_Euro", "G_NATO_pilot"};
        author = "$STR_RHSSAF_AUTHOR_FULL";
        icon = "\rhssaf\addons\rhssaf_main\data\icons\factions\rhssaf_faction_airforce_co.paa";
        flag = "\rhssaf\addons\rhssaf_main\data\flags\flag_serbia_co.paa";
        backpack_tf_faction_radio_api = "tf_bussole";
    };
    class rhssaf_faction_airforce_opfor: rhssaf_faction_airforce {
        side = 0;
        priority = -9;
    };
    class rhssaf_faction_un {
        displayName = "$STR_RHSSAF_FAC_UN";
        priority = 83;
        side = 2;
        genericNames = "SerbianMen";
        identityTypes[] = {"LanguageGRE_F", "Head_Euro", "G_NATO_casual"};
        author = "$STR_RHSSAF_AUTHOR_FULL";
        icon = "\rhssaf\addons\rhssaf_main\data\icons\factions\rhssaf_faction_un_co.paa";
        flag = "\rhssaf\addons\rhssaf_main\data\flags\flag_serbia_co.paa";
        backpack_tf_faction_radio_api = "tf_bussole";
    };
};
class CfgVehicleClasses {
    class rhssaf_vehclass_un_infantry_desert {
        displayname = "$STR_RHSSAF_VEHCLASS_UN_INFANTRY_DESERT";
    };
    class rhssaf_vehclass_un_infantry_digital {
        displayname = "$STR_RHSSAF_VEHCLASS_UN_INFANTRY_DIGITAL";
    };
    class rhssaf_vehclass_army_infantry_digital {
        displayname = "$STR_RHSSAF_VEHCLASS_ARMY_INFANTRY_DIGITAL";
    };
    class rhssaf_vehclass_army_infantry_oakleaf {
        displayname = "$STR_RHSSAF_VEHCLASS_ARMY_INFANTRY_OAKLEAF";
    };
    class rhssaf_vehclass_army_infantry_para {
        displayname = "$STR_RHSSAF_VEHCLASS_ARMY_INFANTRY_PARA";
    };
    class rhssaf_vehclass_airforce_infantry {
        displayname = "$STR_RHSSAF_VEHCLASS_AIRFORCE_INFANTRY";
    };
    class rhssaf_vehclass_cars {
        displayname = "$STR_RHSSAF_VEHCLASS_CARS";
    };
};
class CfgEditorSubcategories {
    class rhssaf_EdSubcat_un_infantry_desert {
        displayname = "$STR_RHSSAF_VEHCLASS_UN_INFANTRY_DESERT";
    };
    class rhssaf_EdSubcat_un_infantry_digital {
        displayname = "$STR_RHSSAF_VEHCLASS_UN_INFANTRY_DIGITAL";
    };
    class rhssaf_EdSubcat_army_infantry_digital {
        displayname = "$STR_RHSSAF_VEHCLASS_ARMY_INFANTRY_DIGITAL";
    };
    class rhssaf_EdSubcat_army_infantry_oakleaf {
        displayname = "$STR_RHSSAF_VEHCLASS_ARMY_INFANTRY_OAKLEAF";
    };
    class rhssaf_EdSubcat_army_infantry_para {
        displayname = "$STR_RHSSAF_VEHCLASS_ARMY_INFANTRY_PARA";
    };
    class rhssaf_EdSubcat_airforce_infantry {
        displayname = "$STR_RHSSAF_VEHCLASS_AIRFORCE_INFANTRY";
    };
    class rhssaf_Edsubcat_cars {
        displayname = "$STR_RHSSAF_VEHCLASS_CARS";
    };
};
