#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 17 member(s).
namespace BamoImpl {
class BamoManualResizeAreaClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoManualResizeAreaClientPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastStartManualResize@BamoManualResizeAreaClientPrincipalImpl@BamoImpl@@QEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@@Z
    long BroadcastStartManualResize(unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoManualResizeAreaClientPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ManualResizeCancelled@BamoManualResizeAreaClientPrincipalImpl@BamoImpl@@QEAAJI@Z
    long ManualResizeCancelled(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ManualResizeEnded@BamoManualResizeAreaClientPrincipalImpl@BamoImpl@@QEAAJI@Z
    long ManualResizeEnded(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoManualResizeAreaClientPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoManualResizeAreaClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoManualResizeAreaClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallStartManualResizeOnStub@BamoManualResizeAreaClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IW4InputResizeRegion@Input@Internal@UI@Windows@@@Z
    static long CallStartManualResizeOnStub(::Microsoft::BamoImpl::BamoStubImpl *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveManualResizeCancelled@BamoManualResizeAreaClientPrincipalImpl@BamoImpl@@AEAAXI@Z
    void LogReceiveManualResizeCancelled(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveManualResizeEnded@BamoManualResizeAreaClientPrincipalImpl@BamoImpl@@AEAAXI@Z
    void LogReceiveManualResizeEnded(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetType@BamoManualResizeAreaClientPrincipalImpl@BamoImpl@@AEAAXAEBU_GUID@@@Z
    void LogSetType(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BamoManualResizeAreaClientPrincipalImpl@BamoImpl@@EEAAXXZ
    virtual void OnZeroReferenceCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTypeRemoteCache@BamoManualResizeAreaClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateTypeRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTypeRemoteCacheStatic@BamoManualResizeAreaClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateTypeRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl
