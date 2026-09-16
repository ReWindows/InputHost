#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 25 member(s).
namespace BamoImpl {
class BamoControllerNavigationOverridePrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsCrossed@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@QEAAJPEBUtagPOINT@@@Z
    long BoundsCrossed(tagPOINT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveBoundsCrossed@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@AEAAXAEBUtagPOINT@@@Z
    void LogReceiveBoundsCrossed(tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetBounds@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@AEAAXAEBUtagRECT@@@Z
    void LogSetBounds(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetFeatures@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@AEAAXI@Z
    void LogSetFeatures(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetPaused@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetPaused(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetResumePosition@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@AEAAXAEBUtagPOINT@@@Z
    void LogSetResumePosition(tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetVisualReferenceId@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@AEAAX_K@Z
    void LogSetVisualReferenceId(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBoundsRemoteCache@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateBoundsRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBoundsRemoteCacheStatic@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateBoundsRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFeaturesRemoteCache@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateFeaturesRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFeaturesRemoteCacheStatic@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateFeaturesRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePausedRemoteCache@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdatePausedRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePausedRemoteCacheStatic@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdatePausedRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateResumePositionRemoteCache@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateResumePositionRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateResumePositionRemoteCacheStatic@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateResumePositionRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualReferenceIdRemoteCache@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateVisualReferenceIdRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualReferenceIdRemoteCacheStatic@BamoControllerNavigationOverridePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateVisualReferenceIdRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl
