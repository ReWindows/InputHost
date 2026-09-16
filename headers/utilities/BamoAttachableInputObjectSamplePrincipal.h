#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class BamoAttachableInputObjectSamplePrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAttachableInputObjectSamplePrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnabled@BamoAttachableInputObjectSamplePrincipal@@UEAA_NXZ
    virtual bool GetEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoAttachableInputObjectSamplePrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAttachableInputObjectSamplePrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAttachableInputObjectSamplePrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnabled@BamoAttachableInputObjectSamplePrincipal@@UEAAX_N@Z
    virtual void SetEnabled(bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoAttachableInputObjectSamplePrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoAttachableInputObjectSampleStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoAttachableInputObjectSampleStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoAttachableInputObjectSamplePrincipal@@MEAAJPEAVBamoAttachableInputObjectSampleStub@@@Z
    virtual long InitializeProxyUnderLock(BamoAttachableInputObjectSampleStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoAttachableInputObjectSamplePrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoAttachableInputObjectSamplePrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoAttachableInputObjectSamplePrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoAttachableInputObjectSamplePrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoAttachableInputObjectSamplePrincipal@@MEAAJPEAVBamoAttachableInputObjectSampleStub@@@Z
    virtual long OnPropertiesRefreshed(BamoAttachableInputObjectSampleStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoAttachableInputObjectSamplePrincipal@@MEAAJPEAVBamoAttachableInputObjectSampleStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoAttachableInputObjectSampleStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoAttachableInputObjectSamplePrincipal@@MEAAJPEAVBamoAttachableInputObjectSampleStub@@@Z
    virtual long OnStubDisconnected(BamoAttachableInputObjectSampleStub *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoAttachableInputObjectSamplePrincipal@@MEAA@XZ
    virtual ~BamoAttachableInputObjectSamplePrincipal();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAttachableInputObjectSamplePrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
