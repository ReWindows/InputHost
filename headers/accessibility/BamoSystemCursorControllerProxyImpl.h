#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 23 member(s).
namespace BamoImpl {
class BamoSystemCursorControllerProxyImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachApplication2@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJPEAVBamoCustomCursorControllerClient2Principal@@@Z
    long AttachApplication2(BamoCustomCursorControllerClient2Principal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCursorForDevice@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K@Z
    long CreateCursorForDevice(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCursorShape@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z
    long CreateCursorShape(uint64_t, uint64_t, CursorBitmapDataHeader const *, unsigned int, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCursorShape@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K0@Z
    long DestroyCursorShape(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureServiceAndRegisterClient@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJPEAVBamoSystemCursorControllerClientPrincipal@@@Z
    long EnsureServiceAndRegisterClient(BamoSystemCursorControllerClientPrincipal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoSystemCursorControllerProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoSystemCursorControllerProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoSystemCursorControllerProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoSystemCursorControllerProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoSystemCursorControllerProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCursorShellMagnification@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_KM@Z
    long SetCursorShellMagnification(uint64_t, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCursorShellVisibility@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K_N@Z
    long SetCursorShellVisibility(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScaleOverride@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_NM@Z
    long UpdateScaleOverride(bool, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoSystemCursorControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendAttachApplication2@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAXI@Z
    void LogSendAttachApplication2(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendCreateCursorForDevice@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAX_K@Z
    void LogSendCreateCursorForDevice(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendCreateCursorShape@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAX_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z
    void LogSendCreateCursorShape(uint64_t, uint64_t, CursorBitmapDataHeader const *, unsigned int, unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendDestroyCursorShape@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAX_K0@Z
    void LogSendDestroyCursorShape(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendEnsureServiceAndRegisterClient@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAXI@Z
    void LogSendEnsureServiceAndRegisterClient(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendSetCursorShellMagnification@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAX_KM@Z
    void LogSendSetCursorShellMagnification(uint64_t, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendSetCursorShellVisibility@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAX_K_N@Z
    void LogSendSetCursorShellVisibility(uint64_t, bool);
};
} // namespace BamoImpl
