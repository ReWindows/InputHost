#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 52 member(s).
class BamoSimpleHapticsControllerProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoSimpleHapticsControllerProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceType@BamoSimpleHapticsControllerProxy@@UEAA?AW4HapticDeviceType@@XZ
    virtual int GetDeviceType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterfacePath@BamoSimpleHapticsControllerProxy@@UEAAPEBGXZ
    virtual unsigned short const * GetInterfacePath();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsIntensitySupported@BamoSimpleHapticsControllerProxy@@UEAA_NXZ
    virtual bool GetIsIntensitySupported();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsPlayCountSupported@BamoSimpleHapticsControllerProxy@@UEAA_NXZ
    virtual bool GetIsPlayCountSupported();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsPlayDurationSupported@BamoSimpleHapticsControllerProxy@@UEAA_NXZ
    virtual bool GetIsPlayDurationSupported();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsReplayPauseIntervalSupported@BamoSimpleHapticsControllerProxy@@UEAA_NXZ
    virtual bool GetIsReplayPauseIntervalSupported();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSupportedFeedback@BamoSimpleHapticsControllerProxy@@UEAAPEAVBamoList_SimpleHapticsControllerFeedback_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Proxy * GetSupportedFeedback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoSimpleHapticsControllerProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoSimpleHapticsControllerProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendHapticFeedbackForDuration@BamoSimpleHapticsControllerProxy@@UEAAJGMI@Z
    virtual long SendHapticFeedbackForDuration(unsigned short, float, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerProxy@@UEAAJGMII@Z
    virtual long SendHapticFeedbackForPlayCount(unsigned short, float, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopFeedback@BamoSimpleHapticsControllerProxy@@UEAAJXZ
    virtual long StopFeedback();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoSimpleHapticsControllerProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoSimpleHapticsControllerProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnDeviceTypeChanged@BamoSimpleHapticsControllerProxy@@MEAAJXZ
    virtual long OnDeviceTypeChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnDeviceTypeChanging@BamoSimpleHapticsControllerProxy@@MEAAJW4HapticDeviceType@@@Z
    virtual long OnDeviceTypeChanging(int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInterfacePathChanged@BamoSimpleHapticsControllerProxy@@MEAAJXZ
    virtual long OnInterfacePathChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInterfacePathChanging@BamoSimpleHapticsControllerProxy@@MEAAJPEBG@Z
    virtual long OnInterfacePathChanging(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnIsIntensitySupportedChanged@BamoSimpleHapticsControllerProxy@@MEAAJXZ
    virtual long OnIsIntensitySupportedChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnIsIntensitySupportedChanging@BamoSimpleHapticsControllerProxy@@MEAAJ_N@Z
    virtual long OnIsIntensitySupportedChanging(bool);
    // Category: Method | Source: PE Export
    // Symbol: ?OnIsPlayCountSupportedChanged@BamoSimpleHapticsControllerProxy@@MEAAJXZ
    virtual long OnIsPlayCountSupportedChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnIsPlayCountSupportedChanging@BamoSimpleHapticsControllerProxy@@MEAAJ_N@Z
    virtual long OnIsPlayCountSupportedChanging(bool);
    // Category: Method | Source: PE Export
    // Symbol: ?OnIsPlayDurationSupportedChanged@BamoSimpleHapticsControllerProxy@@MEAAJXZ
    virtual long OnIsPlayDurationSupportedChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnIsPlayDurationSupportedChanging@BamoSimpleHapticsControllerProxy@@MEAAJ_N@Z
    virtual long OnIsPlayDurationSupportedChanging(bool);
    // Category: Method | Source: PE Export
    // Symbol: ?OnIsReplayPauseIntervalSupportedChanged@BamoSimpleHapticsControllerProxy@@MEAAJXZ
    virtual long OnIsReplayPauseIntervalSupportedChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnIsReplayPauseIntervalSupportedChanging@BamoSimpleHapticsControllerProxy@@MEAAJ_N@Z
    virtual long OnIsReplayPauseIntervalSupportedChanging(bool);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSupportedFeedbackChanged@BamoSimpleHapticsControllerProxy@@MEAAJXZ
    virtual long OnSupportedFeedbackChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnSupportedFeedbackChanging@BamoSimpleHapticsControllerProxy@@MEAAJPEAVBamoList_SimpleHapticsControllerFeedback_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z
    virtual long OnSupportedFeedbackChanging(::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Proxy *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoSimpleHapticsControllerProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnDeviceTypeChanged@BamoSimpleHapticsControllerProxy@@AEAAXXZ
    void LogOnDeviceTypeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnDeviceTypeChanging@BamoSimpleHapticsControllerProxy@@AEAAXW4HapticDeviceType@@@Z
    void LogOnDeviceTypeChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnInterfacePathChanged@BamoSimpleHapticsControllerProxy@@AEAAXXZ
    void LogOnInterfacePathChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnInterfacePathChanging@BamoSimpleHapticsControllerProxy@@AEAAXPEBG@Z
    void LogOnInterfacePathChanging(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnIsIntensitySupportedChanged@BamoSimpleHapticsControllerProxy@@AEAAXXZ
    void LogOnIsIntensitySupportedChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnIsIntensitySupportedChanging@BamoSimpleHapticsControllerProxy@@AEAAX_N@Z
    void LogOnIsIntensitySupportedChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnIsPlayCountSupportedChanged@BamoSimpleHapticsControllerProxy@@AEAAXXZ
    void LogOnIsPlayCountSupportedChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnIsPlayCountSupportedChanging@BamoSimpleHapticsControllerProxy@@AEAAX_N@Z
    void LogOnIsPlayCountSupportedChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnIsPlayDurationSupportedChanged@BamoSimpleHapticsControllerProxy@@AEAAXXZ
    void LogOnIsPlayDurationSupportedChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnIsPlayDurationSupportedChanging@BamoSimpleHapticsControllerProxy@@AEAAX_N@Z
    void LogOnIsPlayDurationSupportedChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnIsReplayPauseIntervalSupportedChanged@BamoSimpleHapticsControllerProxy@@AEAAXXZ
    void LogOnIsReplayPauseIntervalSupportedChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnIsReplayPauseIntervalSupportedChanging@BamoSimpleHapticsControllerProxy@@AEAAX_N@Z
    void LogOnIsReplayPauseIntervalSupportedChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnSupportedFeedbackChanged@BamoSimpleHapticsControllerProxy@@AEAAXXZ
    void LogOnSupportedFeedbackChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnSupportedFeedbackChanging@BamoSimpleHapticsControllerProxy@@AEAAXPEAVBamoList_SimpleHapticsControllerFeedback_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z
    void LogOnSupportedFeedbackChanging(::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Proxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoSimpleHapticsControllerProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoSimpleHapticsControllerProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoSimpleHapticsControllerProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
