#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class InputDragManager {
public:
    class Api;
    class DragOperationInfo;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputDragManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InputDragManager@@UEAAXXZ
    virtual void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputDragManager@@QEAA@XZ
    InputDragManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@InputDragManager@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputDragManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputDragManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InputDragManager@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputDragManager@@UEAA@XZ
    virtual ~InputDragManager();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?AnimationEnded@InputDragManager@@MEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoDragManagerClientStub@@_K@Z
    virtual long AnimationEnded(BamoDragManagerClientPrincipal *, BamoDragManagerClientStub *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationStarted@InputDragManager@@MEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoDragManagerClientStub@@I_K2@Z
    virtual long AnimationStarted(BamoDragManagerClientPrincipal *, BamoDragManagerClientStub *, unsigned int, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragCancelled@InputDragManager@@MEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoDragManagerClientStub@@IAEBUtagPOINT@@22AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@4@Z
    virtual long DragCancelled(BamoDragManagerClientPrincipal *, BamoDragManagerClientStub *, unsigned int, tagPOINT const &, tagPOINT const &, tagPOINT const &, GestureAnimationProperties const &, uint64_t, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnded@InputDragManager@@MEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoDragManagerClientStub@@IAEBUtagPOINT@@22AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@4@Z
    virtual long DragEnded(BamoDragManagerClientPrincipal *, BamoDragManagerClientStub *, unsigned int, tagPOINT const &, tagPOINT const &, tagPOINT const &, GestureAnimationProperties const &, uint64_t, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragInProgress@InputDragManager@@MEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoDragManagerClientStub@@IAEBUtagPOINT@@22AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@4@Z
    virtual long DragInProgress(BamoDragManagerClientPrincipal *, BamoDragManagerClientStub *, unsigned int, tagPOINT const &, tagPOINT const &, tagPOINT const &, GestureAnimationProperties const &, uint64_t, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragStarted@InputDragManager@@MEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoDragManagerClientStub@@IAEBUtagPOINT@@22AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@4W4InputType@Input@Internal@UI@8@44W4GestureProcessorType@@@Z
    virtual long DragStarted(BamoDragManagerClientPrincipal *, BamoDragManagerClientStub *, unsigned int, tagPOINT const &, tagPOINT const &, tagPOINT const &, GestureAnimationProperties const &, uint64_t, int, uint64_t, int, uint64_t, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DropTargetChanged@InputDragManager@@MEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoDragManagerClientStub@@IAEBUtagPOINT@@22AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@PEBUDragInfoStruct@@I4@Z
    virtual long DropTargetChanged(BamoDragManagerClientPrincipal *, BamoDragManagerClientStub *, unsigned int, tagPOINT const &, tagPOINT const &, tagPOINT const &, GestureAnimationProperties const &, uint64_t, int, DragInfoStruct const *, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@InputDragManager@@MEAAJPEAVBamoDragManagerClientPrincipal@@PEAVBamoDragManagerClientStub@@@Z
    virtual long OnStubDisconnected(BamoDragManagerClientPrincipal *, BamoDragManagerClientStub *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelDrag@InputDragManager@@AEAAJK@Z
    long CancelDrag(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessResult@InputDragManager@@AEAAJKUDragOperationResult@Input@Internal@UI@Windows@@@Z
    long ProcessResult(unsigned long, ::Windows::UI::Internal::Input::DragOperationResult);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@InputDragManager@@AEAAJK@Z
    long StartAnimation(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDrag@InputDragManager@@AEAAJK_K@Z
    long StartDrag(unsigned long, uint64_t);
};
