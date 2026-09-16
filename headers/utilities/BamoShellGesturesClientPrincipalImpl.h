#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 31 member(s).
namespace BamoImpl {
class BamoShellGesturesClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoShellGesturesClientPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BamoShellGesturesClientPrincipalImpl@BamoImpl@@QEAA@PEAVBamoShellGesturesClientPrincipalOwner@@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z
    BamoShellGesturesClientPrincipalImpl(BamoShellGesturesClientPrincipalOwner *, ::ISMBamos_AutoBamos::BamoConnection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoShellGesturesClientPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoShellGesturesClientPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoShellGesturesClientPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoShellGesturesClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoShellGesturesClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputSinkData@BamoShellGesturesClientPrincipalImpl@BamoImpl@@QEAAXAEBUInputSinkData@@@Z
    void SetInputSinkData(InputSinkData const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuppressionRegions@BamoShellGesturesClientPrincipalImpl@BamoImpl@@QEAAJPEBUtagRECT@@I@Z
    long SetSuppressionRegions(tagRECT const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTouchEnabled@BamoShellGesturesClientPrincipalImpl@BamoImpl@@QEAAX_N@Z
    void SetTouchEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchpadActionPerformed@BamoShellGesturesClientPrincipalImpl@BamoImpl@@QEAAJ_JW4TouchpadGlobalAction@Input@Internal@UI@Windows@@@Z
    long TouchpadActionPerformed(int64_t, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoShellGesturesClientPrincipalImpl@BamoImpl@@UEAA@XZ
    virtual ~BamoShellGesturesClientPrincipalImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveTouchpadActionPerformed@BamoShellGesturesClientPrincipalImpl@BamoImpl@@AEAAX_JW4TouchpadGlobalAction@Input@Internal@UI@Windows@@@Z
    void LogReceiveTouchpadActionPerformed(int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetInputSinkData@BamoShellGesturesClientPrincipalImpl@BamoImpl@@AEAAXAEBUInputSinkData@@@Z
    void LogSetInputSinkData(InputSinkData const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetSuppressionRegions@BamoShellGesturesClientPrincipalImpl@BamoImpl@@AEAAXI@Z
    void LogSetSuppressionRegions(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetTouchEnabled@BamoShellGesturesClientPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetTouchEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetTouchpadEnabled@BamoShellGesturesClientPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetTouchpadEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetTouchpadSupportedGestures@BamoShellGesturesClientPrincipalImpl@BamoImpl@@AEAAXW4TouchpadGlobalGestureKinds@Input@Internal@UI@Windows@@@Z
    void LogSetTouchpadSupportedGestures(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BamoShellGesturesClientPrincipalImpl@BamoImpl@@EEAAXXZ
    virtual void OnZeroReferenceCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputSinkDataRemoteCache@BamoShellGesturesClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateInputSinkDataRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputSinkDataRemoteCacheStatic@BamoShellGesturesClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateInputSinkDataRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSuppressionRegionsRemoteCache@BamoShellGesturesClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateSuppressionRegionsRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSuppressionRegionsRemoteCacheStatic@BamoShellGesturesClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateSuppressionRegionsRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTouchEnabledRemoteCache@BamoShellGesturesClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateTouchEnabledRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTouchEnabledRemoteCacheStatic@BamoShellGesturesClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateTouchEnabledRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTouchpadEnabledRemoteCache@BamoShellGesturesClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateTouchpadEnabledRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTouchpadEnabledRemoteCacheStatic@BamoShellGesturesClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateTouchpadEnabledRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTouchpadSupportedGesturesRemoteCache@BamoShellGesturesClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateTouchpadSupportedGesturesRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTouchpadSupportedGesturesRemoteCacheStatic@BamoShellGesturesClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateTouchpadSupportedGesturesRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl
