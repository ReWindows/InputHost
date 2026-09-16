#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
namespace Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos {
class BamoList_TouchInjectionContact_PrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoList_TouchInjectionContact_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJPEAVBaseBamoPeerImpl@36@PEAPEAVBamoStub@56@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRemoteClear@BamoList_TouchInjectionContact_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJXZ
    long BroadcastRemoteClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRemoteInsert@BamoList_TouchInjectionContact_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z
    long BroadcastRemoteInsert(unsigned int, ::Windows::UI::Internal::Input::TouchInjectionContact const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRemoteRemove@BamoList_TouchInjectionContact_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJI@Z
    long BroadcastRemoteRemove(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRemoteReplace@BamoList_TouchInjectionContact_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z
    long BroadcastRemoteReplace(unsigned int, ::Windows::UI::Internal::Input::TouchInjectionContact const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoList_TouchInjectionContact_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEBAPEAVBamoPrincipal@56@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoList_TouchInjectionContact_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoList_TouchInjectionContact_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@36@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoList_TouchInjectionContact_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@36@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallRemoteClearOnStub@BamoList_TouchInjectionContact_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@@Z
    static long CallRemoteClearOnStub(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallRemoteInsertOnStub@BamoList_TouchInjectionContact_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z
    static long CallRemoteInsertOnStub(::Microsoft::BamoImpl::BamoStubImpl *, unsigned int, ::Windows::UI::Internal::Input::TouchInjectionContact const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallRemoteRemoveOnStub@BamoList_TouchInjectionContact_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@I@Z
    static long CallRemoteRemoveOnStub(::Microsoft::BamoImpl::BamoStubImpl *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallRemoteReplaceOnStub@BamoList_TouchInjectionContact_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@IAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z
    static long CallRemoteReplaceOnStub(::Microsoft::BamoImpl::BamoStubImpl *, unsigned int, ::Windows::UI::Internal::Input::TouchInjectionContact const &);
};
} // namespace Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos
