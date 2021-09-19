modded class OptionsMenuSGunplay  {
    override void onBuild(){
        super.onBuild();

        lockOption(adsDOFIntensity);
        //lockOption(hideWeaponBarrelInOptic);
        //lockOption(m_hideClothingInOptic);
        lockOption(m_lensZoomStrength);
        //lockOption(m_deadzoneLimits);
        lockOption(m_resetDeadzoneOnFocus);
        lockOption(m_showDynamicCrosshair);
        //lockOption(anyOtherSettingYouWantToLock);
    }    
}