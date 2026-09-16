#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
namespace BamoImpl {
class BamoSystemButtonEventControllerPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoSystemButtonEventControllerPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastOnContinueProcessing@BamoSystemButtonEventControllerPrincipalImpl@BamoImpl@@QEAAJAEBUSystemButtonEventInfo@@@Z
    long BroadcastOnContinueProcessing(SystemButtonEventInfo const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoSystemButtonEventControllerPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoSystemButtonEventControllerPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemButtonEvent@BamoSystemButtonEventControllerPrincipalImpl@BamoImpl@@QEAAJPEBUSystemButtonEventInfo@@@Z
    long OnSystemButtonEvent(SystemButtonEventInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoSystemButtonEventControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoSystemButtonEventControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallOnContinueProcessingOnStub@BamoSystemButtonEventControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@AEBUSystemButtonEventInfo@@@Z
    static long CallOnContinueProcessingOnStub(::Microsoft::BamoImpl::BamoStubImpl *, SystemButtonEventInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveOnSystemButtonEvent@BamoSystemButtonEventControllerPrincipalImpl@BamoImpl@@AEAAXAEBUSystemButtonEventInfo@@@Z
    void LogReceiveOnSystemButtonEvent(SystemButtonEventInfo const &);
};
} // namespace BamoImpl
