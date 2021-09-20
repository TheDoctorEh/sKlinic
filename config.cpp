class CfgPatches {
    class sKlinic{
        requiredAddons[] = {
            //"sGunplay",
            //"sSurvival",
            //"etc...",
            "sVisual"
        };
    };
};

class CfgMods {
    class sKlinic {
        dir = "sKlinic";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "sKlinic";
        credits = "TheDoctorEh";
        author = "TheDoctorEh";
        authorID = "0";
        version = "0.1";
        extra = 0;
        type = "mod";
        dependencies[] = {
            "Game",
            "World",
            "Mission"
        };
        class defs {
            class gameScriptModule {
                value = "";
                files[] = {
                    "sKlinic/scripts/3_Game"
                };
            };
            class worldScriptModule {
                value = "";
                files[] = {
                    "sKlinic/scripts/4_World"
                };
            };
            
            class missionScriptModule {
                value = "";
                files[] = {
                    "sKlinic/scripts/5_Mission"
                };
            };
        };
    };
};