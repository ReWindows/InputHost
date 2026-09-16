#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
namespace BamoImpl {
class BamoSystemCursorControllerClientProxyImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachIsmCursorVisual@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_K0@Z
    long AttachIsmCursorVisual(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceAdded@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJAEBUCursorDeviceInfo@@@Z
    long DeviceAdded(CursorDeviceInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceRemoved@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_K@Z
    long DeviceRemoved(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScaleOverride@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_NM@Z
    long UpdateScaleOverride(bool, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendAttachIsmCursorVisual@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@AEAAX_K0@Z
    void LogSendAttachIsmCursorVisual(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendDeviceAdded@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@AEAAXAEBUCursorDeviceInfo@@@Z
    void LogSendDeviceAdded(CursorDeviceInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendDeviceRemoved@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@AEAAX_K@Z
    void LogSendDeviceRemoved(uint64_t);
};
} // namespace BamoImpl
