#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 25 member(s).
namespace BamoImpl {
class BamoControllerNavigationClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsCrossed@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@QEAAJPEBUtagPOINT@@@Z
    long BoundsCrossed(tagPOINT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveBoundsCrossed@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@AEAAXAEBUtagPOINT@@@Z
    void LogReceiveBoundsCrossed(tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetBounds@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@AEAAXAEBUtagRECT@@@Z
    void LogSetBounds(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetEnabled@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetFeatures@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@AEAAXI@Z
    void LogSetFeatures(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetStartPosition@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@AEAAXAEBUtagPOINT@@@Z
    void LogSetStartPosition(tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetVisualReferenceId@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@AEAAX_K@Z
    void LogSetVisualReferenceId(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBoundsRemoteCache@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateBoundsRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBoundsRemoteCacheStatic@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateBoundsRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEnabledRemoteCache@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateEnabledRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEnabledRemoteCacheStatic@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateEnabledRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFeaturesRemoteCache@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateFeaturesRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFeaturesRemoteCacheStatic@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateFeaturesRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStartPositionRemoteCache@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateStartPositionRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStartPositionRemoteCacheStatic@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateStartPositionRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualReferenceIdRemoteCache@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateVisualReferenceIdRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualReferenceIdRemoteCacheStatic@BamoControllerNavigationClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateVisualReferenceIdRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl
