#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 12 member(s).
namespace BamoImpl {
class BamoAttachableInputObjectSamplePrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoAttachableInputObjectSamplePrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoAttachableInputObjectSamplePrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@BamoAttachableInputObjectSamplePrincipalImpl@BamoImpl@@QEAAJ_J0PEBG@Z
    long OnInput(int64_t, int64_t, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoAttachableInputObjectSamplePrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoAttachableInputObjectSamplePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoAttachableInputObjectSamplePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveOnInput@BamoAttachableInputObjectSamplePrincipalImpl@BamoImpl@@AEAAX_J0PEBG@Z
    void LogReceiveOnInput(int64_t, int64_t, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetEnabled@BamoAttachableInputObjectSamplePrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEnabledRemoteCache@BamoAttachableInputObjectSamplePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateEnabledRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEnabledRemoteCacheStatic@BamoAttachableInputObjectSamplePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateEnabledRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl
