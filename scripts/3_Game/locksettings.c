modded class SUserConfigVisual{
    
    //your default values here
    void SUserConfigVisual(){
            ddofIntensity  = 15.0;
            ddofEnabledIn3PP = true;
            ddofEnabledInVehicle = false;
            headbobIntensity = 0.3;
            headbobEnabledIn3PP = false;
            motionBlurIntensity = 0.0;
            bloomIntensity = 0.1;
            headLeanAngle = 15;
    }
    
    // overriding the load, save and createDefault methods will stop the mod from reading/writing the configuration files
    override void load(){}        
    override void save(){}
    override void createDefault(){}

    // overriding the setters will stop the mod from actually changing the setting
    override void setDDOFIntensity(float intensity){}
    override void setDDOFEnabledIn3PP(bool enabled){}
    override void setDDOFEnabledInVehicle(bool enabled){}
    override void setHeadbobIntensity(float intensity){}
    override void setHeadbobEnabledIn3pp(bool enabled){}
    override void setMotionBlurIntensity(float intensity){}    
    override void setBloomIntensity(float intensity){}
    override void setHeadLeanAngle(float angle){}
    
}