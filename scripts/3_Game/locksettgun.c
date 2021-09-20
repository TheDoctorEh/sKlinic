modded class SUserConfigGunplay{
    
    //your default values here
    void SUserConfigGunplay(){
            adsDOFIntensity   = 2.0;
            lensZoomStrength  = 0.75;
            resetDeadzoneOnFocus = true;
            showDynamicCrosshair = false;
            //hideWeaponBarrelInOptic  = false;
            //hideClothingInOptic  = false;
            //deadzoneLimits = ;
    }
    
    // overriding the load, save and createDefault methods will stop the mod from reading/writing the configuration files
    override void load(){}        
    override void save(){}
    override void createDefault(){}

    // overriding the setters will stop the mod from actually changing the setting
    override void setAdsDOFIntensity(float intensity){}
    override void setLensZoomStrength(float intensity){}
    override void resetDeadzoneOnFocus(bool enabled){}
    override void setDynamicCrosshairEnabled(bool enabled){}
    //override void sethideWeaponBarrelInOptic(bool enabled){}
    //override void sethideClothingInOptic(bool enabled){}
    //override void setdeadzoneLimits(float intensity){}
}