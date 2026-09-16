#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 23 member(s).
namespace BamoImpl {
class BamoSimpleHapticsControllerProxyImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAA@XZ
    BamoSimpleHapticsControllerProxyImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendHapticFeedbackForDuration@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJGMI@Z
    long SendHapticFeedbackForDuration(unsigned short, float, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJGMII@Z
    long SendHapticFeedbackForPlayCount(unsigned short, float, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopFeedback@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJXZ
    long StopFeedback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDeviceType@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_NW4HapticDeviceType@@@Z
    long UpdateDeviceType(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInterfacePath@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z
    long UpdateInterfacePath(bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsIntensitySupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z
    long UpdateIsIntensitySupported(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsPlayCountSupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z
    long UpdateIsPlayCountSupported(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsPlayDurationSupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z
    long UpdateIsPlayDurationSupported(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsReplayPauseIntervalSupported@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z
    long UpdateIsReplayPauseIntervalSupported(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSupportedFeedback@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateSupportedFeedback(bool, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAA@XZ
    virtual ~BamoSimpleHapticsControllerProxyImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendSendHapticFeedbackForDuration@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@AEAAXGMI@Z
    void LogSendSendHapticFeedbackForDuration(unsigned short, float, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendSendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@AEAAXGMII@Z
    void LogSendSendHapticFeedbackForPlayCount(unsigned short, float, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendStopFeedback@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@AEAAXXZ
    void LogSendStopFeedback();
};
} // namespace BamoImpl
