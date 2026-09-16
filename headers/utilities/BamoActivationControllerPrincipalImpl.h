#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
namespace BamoImpl {
class BamoActivationControllerPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoActivationControllerPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRequestActivation@BamoActivationControllerPrincipalImpl@BamoImpl@@QEAAJXZ
    long BroadcastRequestActivation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoActivationControllerPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoActivationControllerPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoActivationControllerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoActivationControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoActivationControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetId@BamoActivationControllerPrincipalImpl@BamoImpl@@QEAAX_K@Z
    void SetId(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLuid@BamoActivationControllerPrincipalImpl@BamoImpl@@QEAAXAEBU_LUID@@@Z
    void SetLuid(_LUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActivated@BamoActivationControllerPrincipalImpl@BamoImpl@@QEAAJ_N@Z
    long UpdateActivated(bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallRequestActivationOnStub@BamoActivationControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@@Z
    static long CallRequestActivationOnStub(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetAutoForwardId@BamoActivationControllerPrincipalImpl@BamoImpl@@AEAAX_K@Z
    void LogSetAutoForwardId(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetId@BamoActivationControllerPrincipalImpl@BamoImpl@@AEAAX_K@Z
    void LogSetId(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetLuid@BamoActivationControllerPrincipalImpl@BamoImpl@@AEAAXAEBU_LUID@@@Z
    void LogSetLuid(_LUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAutoForwardIdRemoteCache@BamoActivationControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateAutoForwardIdRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAutoForwardIdRemoteCacheStatic@BamoActivationControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateAutoForwardIdRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIdRemoteCache@BamoActivationControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIdRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIdRemoteCacheStatic@BamoActivationControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateIdRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLuidRemoteCache@BamoActivationControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateLuidRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLuidRemoteCacheStatic@BamoActivationControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateLuidRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl
