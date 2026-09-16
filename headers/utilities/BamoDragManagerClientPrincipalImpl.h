#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 32 member(s).
namespace BamoImpl {
class BamoDragManagerClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoDragManagerClientPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationEnded@BamoDragManagerClientPrincipalImpl@BamoImpl@@QEAAJ_K@Z
    long AnimationEnded(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationStarted@BamoDragManagerClientPrincipalImpl@BamoImpl@@QEAAJI_K0@Z
    long AnimationStarted(unsigned int, uint64_t, uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BamoDragManagerClientPrincipalImpl@BamoImpl@@QEAA@PEAVBamoDragManagerClientPrincipalOwner@@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z
    BamoDragManagerClientPrincipalImpl(BamoDragManagerClientPrincipalOwner *, ::ISMBamos_AutoBamos::BamoConnection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragCancelled@BamoDragManagerClientPrincipalImpl@BamoImpl@@QEAAJIPEBUtagPOINT@@00PEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2@Z
    long DragCancelled(unsigned int, tagPOINT const *, tagPOINT const *, tagPOINT const *, GestureAnimationProperties const *, uint64_t, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnded@BamoDragManagerClientPrincipalImpl@BamoImpl@@QEAAJIPEBUtagPOINT@@00PEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2@Z
    long DragEnded(unsigned int, tagPOINT const *, tagPOINT const *, tagPOINT const *, GestureAnimationProperties const *, uint64_t, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragInProgress@BamoDragManagerClientPrincipalImpl@BamoImpl@@QEAAJIPEBUtagPOINT@@00PEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2@Z
    long DragInProgress(unsigned int, tagPOINT const *, tagPOINT const *, tagPOINT const *, GestureAnimationProperties const *, uint64_t, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragStarted@BamoDragManagerClientPrincipalImpl@BamoImpl@@QEAAJIPEBUtagPOINT@@00PEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2W4InputType@Input@Internal@UI@7@22W4GestureProcessorType@@@Z
    long DragStarted(unsigned int, tagPOINT const *, tagPOINT const *, tagPOINT const *, GestureAnimationProperties const *, uint64_t, int, uint64_t, int, uint64_t, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DropTargetChanged@BamoDragManagerClientPrincipalImpl@BamoImpl@@QEAAJIPEBUtagPOINT@@00PEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@PEBUDragInfoStruct@@I2@Z
    long DropTargetChanged(unsigned int, tagPOINT const *, tagPOINT const *, tagPOINT const *, GestureAnimationProperties const *, uint64_t, int, DragInfoStruct const *, unsigned int, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoDragManagerClientPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoDragManagerClientPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoDragManagerClientPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoDragManagerClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoDragManagerClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuppressionRegions@BamoDragManagerClientPrincipalImpl@BamoImpl@@QEAAJPEBUtagRECT@@I@Z
    long SetSuppressionRegions(tagRECT const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoDragManagerClientPrincipalImpl@BamoImpl@@UEAA@XZ
    virtual ~BamoDragManagerClientPrincipalImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveAnimationEnded@BamoDragManagerClientPrincipalImpl@BamoImpl@@AEAAX_K@Z
    void LogReceiveAnimationEnded(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveAnimationStarted@BamoDragManagerClientPrincipalImpl@BamoImpl@@AEAAXI_K0@Z
    void LogReceiveAnimationStarted(unsigned int, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveDragCancelled@BamoDragManagerClientPrincipalImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2@Z
    void LogReceiveDragCancelled(unsigned int, tagPOINT const &, tagPOINT const &, tagPOINT const &, GestureAnimationProperties const &, uint64_t, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveDragEnded@BamoDragManagerClientPrincipalImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2@Z
    void LogReceiveDragEnded(unsigned int, tagPOINT const &, tagPOINT const &, tagPOINT const &, GestureAnimationProperties const &, uint64_t, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveDragInProgress@BamoDragManagerClientPrincipalImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2@Z
    void LogReceiveDragInProgress(unsigned int, tagPOINT const &, tagPOINT const &, tagPOINT const &, GestureAnimationProperties const &, uint64_t, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveDragStarted@BamoDragManagerClientPrincipalImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2W4InputType@Input@Internal@UI@7@22W4GestureProcessorType@@@Z
    void LogReceiveDragStarted(unsigned int, tagPOINT const &, tagPOINT const &, tagPOINT const &, GestureAnimationProperties const &, uint64_t, int, uint64_t, int, uint64_t, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveDropTargetChanged@BamoDragManagerClientPrincipalImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@PEBUDragInfoStruct@@I2@Z
    void LogReceiveDropTargetChanged(unsigned int, tagPOINT const &, tagPOINT const &, tagPOINT const &, GestureAnimationProperties const &, uint64_t, int, DragInfoStruct const *, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetSourceType@BamoDragManagerClientPrincipalImpl@BamoImpl@@AEAAXAEBU_GUID@@@Z
    void LogSetSourceType(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetSuppressionRegions@BamoDragManagerClientPrincipalImpl@BamoImpl@@AEAAXI@Z
    void LogSetSuppressionRegions(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BamoDragManagerClientPrincipalImpl@BamoImpl@@EEAAXXZ
    virtual void OnZeroReferenceCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSourceTypeRemoteCache@BamoDragManagerClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateSourceTypeRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSourceTypeRemoteCacheStatic@BamoDragManagerClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateSourceTypeRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSuppressionRegionsRemoteCache@BamoDragManagerClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateSuppressionRegionsRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSuppressionRegionsRemoteCacheStatic@BamoDragManagerClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateSuppressionRegionsRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl
