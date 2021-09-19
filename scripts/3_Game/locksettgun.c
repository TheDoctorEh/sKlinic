modded class SUserConfigGunplay{
    override void load() {
        super.load();

        //Your default values will go here
        adsDOFIntensity  = 2.0;
        //hideWeaponBarrelInOptic  = false;
        //hideClothingInOptic  = false;
        lensZoomStrength = 0.75;
        //deadzoneLimits = ;
        resetDeadzoneOnFocus  = true;
        showDynamicCrosshair  = false;
        //headLeanAngle = 20;
        //anyOtherSettingYouWantToLock = 69.420;
    }
    
    // overriding the save and createDefault methods will stop the mod from writing the configuration files
    // and potentially overwriting the settings used in another server
    override void save(){}
    override void createDefault(){}
}