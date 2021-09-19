modded class SUserConfigVisual{
    override void load() {
        super.load();

        //Your default values will go here
        headbobIntensity = 0.3;
        headbobEnabledIn3PP = false;
        ddofIntensity  = 7.5;
        ddofEnabledIn3PP = true;
        ddofEnabledInVehicle = false;
        motionBlurIntensity = 0.0;
        bloomIntensity = 0.1;
        headLeanAngle = 15;
        //anyOtherSettingYouWantToLock = 69.420;
    }
    
    // overriding the save and createDefault methods will stop the mod from writing the configuration files
    // and potentially overwriting the settings used in another server
    override void save(){}
    override void createDefault(){}
}