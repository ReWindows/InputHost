#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
namespace BamoImpl {
class BamoEdgyDragSourceClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlPoints@BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@QEAAJPEBUtagPOINT@@I@Z
    long SetControlPoints(tagPOINT const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@UEAA@XZ
    virtual ~BamoEdgyDragSourceClientPrincipalImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetControlPoints@BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@AEAAXI@Z
    void LogSetControlPoints(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetGestureRecognitionConfiguration@BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoEdgyGestureRecognitionConfigurationPrincipal@@@Z
    void LogSetGestureRecognitionConfiguration(BamoEdgyGestureRecognitionConfigurationPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetId@BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@AEAAX_K@Z
    void LogSetId(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetType@BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@AEAAXAEBU_GUID@@@Z
    void LogSetType(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateControlPointsRemoteCache@BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateControlPointsRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateControlPointsRemoteCacheStatic@BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateControlPointsRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureRecognitionConfigurationRemoteCache@BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateGestureRecognitionConfigurationRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureRecognitionConfigurationRemoteCacheStatic@BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateGestureRecognitionConfigurationRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIdRemoteCache@BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIdRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIdRemoteCacheStatic@BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateIdRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTypeRemoteCache@BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateTypeRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTypeRemoteCacheStatic@BamoEdgyDragSourceClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateTypeRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl
