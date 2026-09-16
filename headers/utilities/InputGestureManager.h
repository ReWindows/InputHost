#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 24 member(s).
class InputGestureManager {
public:
    class Api;
    class DeferralInfo;
    class GestureOperationInfo;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputGestureManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelOperation@InputGestureManager@@QEAAJK@Z
    long CancelOperation(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InputGestureManager@@UEAAXXZ
    virtual void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputGestureManager@@QEAA@XZ
    InputGestureManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallEpilog@InputGestureManager@@UEAAJPEAVBamoDragManagerClientPrincipal@@@Z
    virtual long OnCallEpilog(BamoDragManagerClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallProlog@InputGestureManager@@UEAAJPEAVBamoDragManagerClientPrincipal@@@Z
    virtual long OnCallProlog(BamoDragManagerClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@InputGestureManager@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputGestureManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputGestureManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InputGestureManager@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartOperation@InputGestureManager@@QEAAJK_N_K@Z
    long StartOperation(unsigned long, bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartOperationAsync@InputGestureManager@@QEAAJI_N_KPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    long StartOperationAsync(unsigned int, bool, uint64_t, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputGestureManager@@UEAA@XZ
    virtual ~InputGestureManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationEnded@InputGestureManager@@MEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoDragManagerClientStub@@_K@Z
    virtual long AnimationEnded(BamoDragManagerClientPrincipal *, BamoDragManagerClientStub *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationStarted@InputGestureManager@@MEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoDragManagerClientStub@@I_K2@Z
    virtual long AnimationStarted(BamoDragManagerClientPrincipal *, BamoDragManagerClientStub *, unsigned int, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragCancelled@InputGestureManager@@MEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoDragManagerClientStub@@IAEBUtagPOINT@@22AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@4@Z
    virtual long DragCancelled(BamoDragManagerClientPrincipal *, BamoDragManagerClientStub *, unsigned int, tagPOINT const &, tagPOINT const &, tagPOINT const &, GestureAnimationProperties const &, uint64_t, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnded@InputGestureManager@@MEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoDragManagerClientStub@@IAEBUtagPOINT@@22AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@4@Z
    virtual long DragEnded(BamoDragManagerClientPrincipal *, BamoDragManagerClientStub *, unsigned int, tagPOINT const &, tagPOINT const &, tagPOINT const &, GestureAnimationProperties const &, uint64_t, int, uint64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?DragInProgress@InputGestureManager@@MEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoDragManagerClientStub@@IAEBUtagPOINT@@22AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@4@Z
    virtual long DragInProgress(BamoDragManagerClientPrincipal *, BamoDragManagerClientStub *, unsigned int, tagPOINT const &, tagPOINT const &, tagPOINT const &, GestureAnimationProperties const &, uint64_t, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragStarted@InputGestureManager@@MEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoDragManagerClientStub@@IAEBUtagPOINT@@22AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@4W4InputType@Input@Internal@UI@8@44W4GestureProcessorType@@@Z
    virtual long DragStarted(BamoDragManagerClientPrincipal *, BamoDragManagerClientStub *, unsigned int, tagPOINT const &, tagPOINT const &, tagPOINT const &, GestureAnimationProperties const &, uint64_t, int, uint64_t, int, uint64_t, uint64_t, int);
    // Category: Method | Source: PE Export
    // Symbol: ?DropTargetChanged@InputGestureManager@@MEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoDragManagerClientStub@@IAEBUtagPOINT@@22AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@PEBUDragInfoStruct@@I4@Z
    virtual long DropTargetChanged(BamoDragManagerClientPrincipal *, BamoDragManagerClientStub *, unsigned int, tagPOINT const &, tagPOINT const &, tagPOINT const &, GestureAnimationProperties const &, uint64_t, int, DragInfoStruct const *, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@InputGestureManager@@MEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoDragManagerClientStub@@@Z
    virtual long OnStubDisconnected(BamoDragManagerClientPrincipal *, BamoDragManagerClientStub *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndOperation_Callback@InputGestureManager@@AEAAJAEAUGestureOperationInfo@1@@Z
    long EndOperation_Callback(WindissectOpaque &);
};
