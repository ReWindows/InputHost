#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 19 member(s).
class InputResizeController {
public:
    class Api;
    class ResizeOperationInfo;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputResizeController@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InputResizeController@@UEAAXXZ
    virtual void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputResizeController@@QEAA@XZ
    InputResizeController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@InputResizeController@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputResizeController@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputResizeController@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InputResizeController@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputResizeController@@UEAA@XZ
    virtual ~InputResizeController();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationStarted@InputResizeController@@MEAAJPEAVBamoResizeControllerClientPrincipal@@PEAVBamoResizeControllerClientStub@@I_K2@Z
    virtual long AnimationStarted(BamoResizeControllerClientPrincipal *, BamoResizeControllerClientStub *, unsigned int, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@InputResizeController@@MEAAJPEAVBamoResizeControllerClientPrincipal@@PEAVBamoResizeControllerClientStub@@@Z
    virtual long OnStubDisconnected(BamoResizeControllerClientPrincipal *, BamoResizeControllerClientStub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeCancelled@InputResizeController@@MEAAJPEAVBamoResizeControllerClientPrincipal@@PEAVBamoResizeControllerClientStub@@IW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@5678@AEBUtagPOINT@@4@Z
    virtual long ResizeCancelled(BamoResizeControllerClientPrincipal *, BamoResizeControllerClientStub *, unsigned int, int, int, tagPOINT const &, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeEnded@InputResizeController@@MEAAJPEAVBamoResizeControllerClientPrincipal@@PEAVBamoResizeControllerClientStub@@IAEBUtagPOINT@@2@Z
    virtual long ResizeEnded(BamoResizeControllerClientPrincipal *, BamoResizeControllerClientStub *, unsigned int, tagPOINT const &, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeInProgress@InputResizeController@@MEAAJPEAVBamoResizeControllerClientPrincipal@@PEAVBamoResizeControllerClientStub@@IAEBUtagPOINT@@2@Z
    virtual long ResizeInProgress(BamoResizeControllerClientPrincipal *, BamoResizeControllerClientStub *, unsigned int, tagPOINT const &, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeStarted@InputResizeController@@MEAAJPEAVBamoResizeControllerClientPrincipal@@PEAVBamoResizeControllerClientStub@@IW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@5678@AEBUtagPOINT@@4@Z
    virtual long ResizeStarted(BamoResizeControllerClientPrincipal *, BamoResizeControllerClientStub *, unsigned int, int, int, tagPOINT const &, tagPOINT const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelResize@InputResizeController@@AEAAJK@Z
    long CancelResize(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@InputResizeController@@AEAAJK@Z
    long StartAnimation(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartResize@InputResizeController@@AEAAJK@Z
    long StartResize(unsigned long);
};
