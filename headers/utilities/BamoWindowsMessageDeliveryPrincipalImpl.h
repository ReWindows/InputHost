#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 16 member(s).
namespace BamoImpl {
class BamoWindowsMessageDeliveryPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoWindowsMessageDeliveryPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoWindowsMessageDeliveryPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoWindowsMessageDeliveryPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoWindowsMessageDeliveryPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoWindowsMessageDeliveryPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoWindowsMessageDeliveryPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHwnd@BamoWindowsMessageDeliveryPrincipalImpl@BamoImpl@@QEAAX_K@Z
    void SetHwnd(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetType@BamoWindowsMessageDeliveryPrincipalImpl@BamoImpl@@QEAAXW4WindowsMessageDeliveryType@Input@Internal@UI@Windows@@@Z
    void SetType(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetHwnd@BamoWindowsMessageDeliveryPrincipalImpl@BamoImpl@@AEAAX_K@Z
    void LogSetHwnd(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetType@BamoWindowsMessageDeliveryPrincipalImpl@BamoImpl@@AEAAXW4WindowsMessageDeliveryType@Input@Internal@UI@Windows@@@Z
    void LogSetType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHwndRemoteCache@BamoWindowsMessageDeliveryPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateHwndRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHwndRemoteCacheStatic@BamoWindowsMessageDeliveryPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateHwndRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTypeRemoteCache@BamoWindowsMessageDeliveryPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateTypeRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTypeRemoteCacheStatic@BamoWindowsMessageDeliveryPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateTypeRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl
