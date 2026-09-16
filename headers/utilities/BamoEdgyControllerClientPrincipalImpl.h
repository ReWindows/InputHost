#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 28 member(s).
namespace BamoImpl {
class BamoEdgyControllerClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EdgyGestureDetected@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@QEAAJPEBGIPEBUD2D_VECTOR_2F@@_K12II@Z
    long EdgyGestureDetected(unsigned short const *, unsigned int, D2D_VECTOR_2F const *, uint64_t, D2D_VECTOR_2F const *, uint64_t, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveEdgyGestureDetected@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@AEAAXPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z
    void LogReceiveEdgyGestureDetected(unsigned short const *, unsigned int, D2D_VECTOR_2F const &, uint64_t, D2D_VECTOR_2F const &, uint64_t, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetGestureDirection@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@AEAAXAEBUD2D_VECTOR_2F@@@Z
    void LogSetGestureDirection(D2D_VECTOR_2F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetGestureDistance@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@AEAAXI@Z
    void LogSetGestureDistance(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetRouting@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@AEAAXI@Z
    void LogSetRouting(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetRunState@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@AEAAXI@Z
    void LogSetRunState(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetVertex0@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@AEAAXAEBUD2D_VECTOR_2F@@@Z
    void LogSetVertex0(D2D_VECTOR_2F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetVertex1@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@AEAAXAEBUD2D_VECTOR_2F@@@Z
    void LogSetVertex1(D2D_VECTOR_2F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureDirectionRemoteCache@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateGestureDirectionRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureDirectionRemoteCacheStatic@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateGestureDirectionRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureDistanceRemoteCache@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateGestureDistanceRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureDistanceRemoteCacheStatic@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateGestureDistanceRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRoutingRemoteCache@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateRoutingRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRoutingRemoteCacheStatic@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateRoutingRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRunStateRemoteCache@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateRunStateRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRunStateRemoteCacheStatic@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateRunStateRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVertex0RemoteCache@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateVertex0RemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVertex0RemoteCacheStatic@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateVertex0RemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVertex1RemoteCache@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateVertex1RemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVertex1RemoteCacheStatic@BamoEdgyControllerClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateVertex1RemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl
