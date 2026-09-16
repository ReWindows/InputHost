#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 10 member(s).
namespace BamoImpl {
class BamoShellHandwritingHostClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoShellHandwritingHostClientPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoShellHandwritingHostClientPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoShellHandwritingHostClientPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoShellHandwritingHostClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoShellHandwritingHostClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferInkPoints@BamoShellHandwritingHostClientPrincipalImpl@BamoImpl@@QEAAJPEBUSyntheticPenInfo@Input@Internal@UI@Windows@@I@Z
    long TransferInkPoints(::Windows::UI::Internal::Input::SyntheticPenInfo const *, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveTransferInkPoints@BamoShellHandwritingHostClientPrincipalImpl@BamoImpl@@AEAAXPEBUSyntheticPenInfo@Input@Internal@UI@Windows@@I@Z
    void LogReceiveTransferInkPoints(::Windows::UI::Internal::Input::SyntheticPenInfo const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BamoShellHandwritingHostClientPrincipalImpl@BamoImpl@@EEAAXXZ
    virtual void OnZeroReferenceCount();
};
} // namespace BamoImpl
