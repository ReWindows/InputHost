#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
namespace BamoImpl {
class BamoDragSourceClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoDragSourceClientPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoDragSourceClientPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoDragSourceClientPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoDragSourceClientPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoDragSourceClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoDragSourceClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlPoints@BamoDragSourceClientPrincipalImpl@BamoImpl@@QEAAJPEBUtagPOINT@@I@Z
    long SetControlPoints(tagPOINT const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoDragSourceClientPrincipalImpl@BamoImpl@@UEAA@XZ
    virtual ~BamoDragSourceClientPrincipalImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetControlPoints@BamoDragSourceClientPrincipalImpl@BamoImpl@@AEAAXI@Z
    void LogSetControlPoints(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetHitTestConfiguration@BamoDragSourceClientPrincipalImpl@BamoImpl@@AEAAXW4HitTestConfiguration@Input@Internal@UI@Windows@@@Z
    void LogSetHitTestConfiguration(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetId@BamoDragSourceClientPrincipalImpl@BamoImpl@@AEAAX_K@Z
    void LogSetId(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetType@BamoDragSourceClientPrincipalImpl@BamoImpl@@AEAAXAEBU_GUID@@@Z
    void LogSetType(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateControlPointsRemoteCache@BamoDragSourceClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateControlPointsRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateControlPointsRemoteCacheStatic@BamoDragSourceClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateControlPointsRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHitTestConfigurationRemoteCache@BamoDragSourceClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateHitTestConfigurationRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHitTestConfigurationRemoteCacheStatic@BamoDragSourceClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateHitTestConfigurationRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIdRemoteCache@BamoDragSourceClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIdRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIdRemoteCacheStatic@BamoDragSourceClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateIdRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTypeRemoteCache@BamoDragSourceClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateTypeRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTypeRemoteCacheStatic@BamoDragSourceClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateTypeRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl
