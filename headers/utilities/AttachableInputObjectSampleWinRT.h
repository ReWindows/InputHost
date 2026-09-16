#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 12 member(s).
class AttachableInputObjectSampleWinRT {
public:
    class Api;
    class AttachableObjectOwnerInterop;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOnInputHandler@AttachableInputObjectSampleWinRT@@QEAA?AUEventRegistrationToken@@PEAU?$ITypedEventHandler@PEAVAttachableInputObjectSample@Input@Internal@UI@Windows@@PEAVAttachableInputObjectSampleEventArgs@2345@@Foundation@Windows@@@Z
    EventRegistrationToken AddOnInputHandler(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AttachableInputObjectSampleWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@AttachableInputObjectSampleWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@AttachableInputObjectSampleWinRT@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AttachableInputObjectSampleWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseOnInputEvent_Callback@AttachableInputObjectSampleWinRT@@QEAAX_J0PEBG@Z
    void RaiseOnInputEvent_Callback(int64_t, int64_t, unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AttachableInputObjectSampleWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestHitTest@AttachableInputObjectSampleWinRT@@SAJUPoint@Foundation@Windows@@PEAUHSTRING__@@@Z
    static long RequestHitTest(WindissectOpaque, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AttachableInputObjectSampleWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AttachableInputObjectSampleWinRT@@UEAA@XZ
    virtual ~AttachableInputObjectSampleWinRT();
};
