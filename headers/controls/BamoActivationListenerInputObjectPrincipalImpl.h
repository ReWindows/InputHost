#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 12 member(s).
namespace BamoImpl {
class BamoActivationListenerInputObjectPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoActivationListenerInputObjectPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoActivationListenerInputObjectPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoActivationListenerInputObjectPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoActivationListenerInputObjectPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoActivationListenerInputObjectPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHWND@BamoActivationListenerInputObjectPrincipalImpl@BamoImpl@@QEAAX_K@Z
    void SetHWND(uint64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveOnActivate@BamoActivationListenerInputObjectPrincipalImpl@BamoImpl@@AEAAXW4InputActivationState@Input@UI@Windows@@@Z
    void LogReceiveOnActivate(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetHWND@BamoActivationListenerInputObjectPrincipalImpl@BamoImpl@@AEAAX_K@Z
    void LogSetHWND(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHWNDRemoteCache@BamoActivationListenerInputObjectPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateHWNDRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHWNDRemoteCacheStatic@BamoActivationListenerInputObjectPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateHWNDRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl
