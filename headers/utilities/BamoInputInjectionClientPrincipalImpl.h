#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 13 member(s).
namespace BamoImpl {
class BamoInputInjectionClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoInputInjectionClientPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastInjectTouchInput@BamoInputInjectionClientPrincipalImpl@BamoImpl@@QEAAJPEAVBamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z
    long BroadcastInjectTouchInput(::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Principal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoInputInjectionClientPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoInputInjectionClientPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoInputInjectionClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoInputInjectionClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallInjectTouchInputOnStub@BamoInputInjectionClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAVBamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@4@@Z
    static long CallInjectTouchInputOnStub(::Microsoft::BamoImpl::BamoStubImpl *, ::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Principal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetWorkspaceId@BamoInputInjectionClientPrincipalImpl@BamoImpl@@AEAAX_K@Z
    void LogSetWorkspaceId(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BamoInputInjectionClientPrincipalImpl@BamoImpl@@EEAAXXZ
    virtual void OnZeroReferenceCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWorkspaceIdRemoteCache@BamoInputInjectionClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateWorkspaceIdRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWorkspaceIdRemoteCacheStatic@BamoInputInjectionClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateWorkspaceIdRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl
