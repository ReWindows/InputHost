#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
namespace BamoImpl {
class BamoManualDragAreaClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoManualDragAreaClientPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastStartManualDrag@BamoManualDragAreaClientPrincipalImpl@BamoImpl@@QEAAJI@Z
    long BroadcastStartManualDrag(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoManualDragAreaClientPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ManualDragCancelled@BamoManualDragAreaClientPrincipalImpl@BamoImpl@@QEAAJI@Z
    long ManualDragCancelled(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ManualDragEnded@BamoManualDragAreaClientPrincipalImpl@BamoImpl@@QEAAJI@Z
    long ManualDragEnded(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoManualDragAreaClientPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoManualDragAreaClientPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoManualDragAreaClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoManualDragAreaClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallStartManualDragOnStub@BamoManualDragAreaClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I@Z
    static long CallStartManualDragOnStub(::Microsoft::BamoImpl::BamoStubImpl *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveManualDragCancelled@BamoManualDragAreaClientPrincipalImpl@BamoImpl@@AEAAXI@Z
    void LogReceiveManualDragCancelled(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveManualDragEnded@BamoManualDragAreaClientPrincipalImpl@BamoImpl@@AEAAXI@Z
    void LogReceiveManualDragEnded(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetDeliveryMode@BamoManualDragAreaClientPrincipalImpl@BamoImpl@@AEAAXW4InputDeliveryMode@Input@Internal@UI@Windows@@@Z
    void LogSetDeliveryMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetType@BamoManualDragAreaClientPrincipalImpl@BamoImpl@@AEAAXAEBU_GUID@@@Z
    void LogSetType(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BamoManualDragAreaClientPrincipalImpl@BamoImpl@@EEAAXXZ
    virtual void OnZeroReferenceCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDeliveryModeRemoteCache@BamoManualDragAreaClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateDeliveryModeRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDeliveryModeRemoteCacheStatic@BamoManualDragAreaClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateDeliveryModeRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTypeRemoteCache@BamoManualDragAreaClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateTypeRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTypeRemoteCacheStatic@BamoManualDragAreaClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateTypeRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl
