#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 17 member(s).
namespace BamoImpl {
class BamoSystemCursorControllerClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoSystemCursorControllerClientPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachIsmCursorVisual@BamoSystemCursorControllerClientPrincipalImpl@BamoImpl@@QEAAJ_K0@Z
    long AttachIsmCursorVisual(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceAdded@BamoSystemCursorControllerClientPrincipalImpl@BamoImpl@@QEAAJPEBUCursorDeviceInfo@@@Z
    long DeviceAdded(CursorDeviceInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceRemoved@BamoSystemCursorControllerClientPrincipalImpl@BamoImpl@@QEAAJ_K@Z
    long DeviceRemoved(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoSystemCursorControllerClientPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoSystemCursorControllerClientPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoSystemCursorControllerClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoSystemCursorControllerClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleOverride@BamoSystemCursorControllerClientPrincipalImpl@BamoImpl@@QEAAXM@Z
    void SetScaleOverride(float);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveAttachIsmCursorVisual@BamoSystemCursorControllerClientPrincipalImpl@BamoImpl@@AEAAX_K0@Z
    void LogReceiveAttachIsmCursorVisual(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveDeviceAdded@BamoSystemCursorControllerClientPrincipalImpl@BamoImpl@@AEAAXAEBUCursorDeviceInfo@@@Z
    void LogReceiveDeviceAdded(CursorDeviceInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveDeviceRemoved@BamoSystemCursorControllerClientPrincipalImpl@BamoImpl@@AEAAX_K@Z
    void LogReceiveDeviceRemoved(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetScaleOverride@BamoSystemCursorControllerClientPrincipalImpl@BamoImpl@@AEAAXM@Z
    void LogSetScaleOverride(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScaleOverrideRemoteCache@BamoSystemCursorControllerClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateScaleOverrideRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScaleOverrideRemoteCacheStatic@BamoSystemCursorControllerClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateScaleOverrideRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl
