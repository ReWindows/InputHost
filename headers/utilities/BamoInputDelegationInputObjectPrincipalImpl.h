#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 28 member(s).
namespace BamoImpl {
class BamoInputDelegationInputObjectPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastSetProcessIDDelegation@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@QEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z
    long BroadcastSetProcessIDDelegation(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastSetViewIDDelegation@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@QEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z
    long BroadcastSetViewIDDelegation(unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGamepadInput@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@QEAAJG_N@Z
    long OnGamepadInput(unsigned short, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGamepadInterceptionStarted@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@QEAAJXZ
    long OnGamepadInterceptionStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputDelegated@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@QEAAJII_N@Z
    long OnInputDelegated(unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallSetProcessIDDelegationOnStub@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IW4DelegateInputMode@Input@Internal@UI@Windows@@@Z
    static long CallSetProcessIDDelegationOnStub(::Microsoft::BamoImpl::BamoStubImpl *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallSetViewIDDelegationOnStub@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IW4DelegateInputMode@Input@Internal@UI@Windows@@@Z
    static long CallSetViewIDDelegationOnStub(::Microsoft::BamoImpl::BamoStubImpl *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveOnGamepadInput@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@AEAAXG_N@Z
    void LogReceiveOnGamepadInput(unsigned short, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveOnGamepadInterceptionStarted@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@AEAAXXZ
    void LogReceiveOnGamepadInterceptionStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveOnInputDelegated@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@AEAAXII_N@Z
    void LogReceiveOnInputDelegated(unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetGamepadInterceptionEnabled@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetGamepadInterceptionEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetGamepadKeyRoutingEnabled@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetGamepadKeyRoutingEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetGamepadMouseModeEnabled@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetGamepadMouseModeEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@EEAAXXZ
    virtual void OnZeroReferenceCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGamepadInterceptionEnabledRemoteCache@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateGamepadInterceptionEnabledRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGamepadInterceptionEnabledRemoteCacheStatic@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateGamepadInterceptionEnabledRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGamepadKeyRoutingEnabledRemoteCache@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateGamepadKeyRoutingEnabledRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGamepadKeyRoutingEnabledRemoteCacheStatic@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateGamepadKeyRoutingEnabledRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGamepadMouseModeEnabledRemoteCache@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateGamepadMouseModeEnabledRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGamepadMouseModeEnabledRemoteCacheStatic@BamoInputDelegationInputObjectPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateGamepadMouseModeEnabledRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl
