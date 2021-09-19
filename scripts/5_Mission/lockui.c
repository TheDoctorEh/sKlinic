modded class OptionsMenuSVisual {
    override void onBuild(){
        super.onBuild();

        lockOption(m_headBobSlider);
        lockOption(m_headbobSwitch3pp);
        lockOption(m_dofSlider, " Open a Ticket To Change");
        lockOption(m_dofSwitch3PP, " Open a Ticket To Change");
        //lockOption(m_dofSwitchVehicle);
        lockOption(m_motionBlurSlider);
        lockOption(m_bloomSlider);
        //lockOption(m_headLeanSlider);
        //lockOption(anyOtherSettingYouWantToLock);
    }    
}