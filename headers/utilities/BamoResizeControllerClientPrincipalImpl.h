#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 25 member(s).
namespace BamoImpl {
class BamoResizeControllerClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoResizeControllerClientPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationStarted@BamoResizeControllerClientPrincipalImpl@BamoImpl@@QEAAJI_K0@Z
    long AnimationStarted(unsigned int, uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoResizeControllerClientPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoResizeControllerClientPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoResizeControllerClientPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoResizeControllerClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeCancelled@BamoResizeControllerClientPrincipalImpl@BamoImpl@@QEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@4567@PEBUtagPOINT@@2@Z
    long ResizeCancelled(unsigned int, int, int, tagPOINT const *, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeEnded@BamoResizeControllerClientPrincipalImpl@BamoImpl@@QEAAJIPEBUtagPOINT@@0@Z
    long ResizeEnded(unsigned int, tagPOINT const *, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeInProgress@BamoResizeControllerClientPrincipalImpl@BamoImpl@@QEAAJIPEBUtagPOINT@@0@Z
    long ResizeInProgress(unsigned int, tagPOINT const *, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeStarted@BamoResizeControllerClientPrincipalImpl@BamoImpl@@QEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@4567@PEBUtagPOINT@@2@Z
    long ResizeStarted(unsigned int, int, int, tagPOINT const *, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoResizeControllerClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveAnimationStarted@BamoResizeControllerClientPrincipalImpl@BamoImpl@@AEAAXI_K0@Z
    void LogReceiveAnimationStarted(unsigned int, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveResizeCancelled@BamoResizeControllerClientPrincipalImpl@BamoImpl@@AEAAXIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@4567@AEBUtagPOINT@@2@Z
    void LogReceiveResizeCancelled(unsigned int, int, int, tagPOINT const &, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveResizeEnded@BamoResizeControllerClientPrincipalImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@0@Z
    void LogReceiveResizeEnded(unsigned int, tagPOINT const &, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveResizeInProgress@BamoResizeControllerClientPrincipalImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@0@Z
    void LogReceiveResizeInProgress(unsigned int, tagPOINT const &, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveResizeStarted@BamoResizeControllerClientPrincipalImpl@BamoImpl@@AEAAXIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@4567@AEBUtagPOINT@@2@Z
    void LogReceiveResizeStarted(unsigned int, int, int, tagPOINT const &, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetHitTestConfiguration@BamoResizeControllerClientPrincipalImpl@BamoImpl@@AEAAXW4HitTestConfiguration@Input@Internal@UI@Windows@@@Z
    void LogSetHitTestConfiguration(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetType@BamoResizeControllerClientPrincipalImpl@BamoImpl@@AEAAXAEBU_GUID@@@Z
    void LogSetType(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BamoResizeControllerClientPrincipalImpl@BamoImpl@@EEAAXXZ
    virtual void OnZeroReferenceCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHitTestConfigurationRemoteCache@BamoResizeControllerClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateHitTestConfigurationRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHitTestConfigurationRemoteCacheStatic@BamoResizeControllerClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateHitTestConfigurationRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTypeRemoteCache@BamoResizeControllerClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateTypeRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTypeRemoteCacheStatic@BamoResizeControllerClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateTypeRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl
