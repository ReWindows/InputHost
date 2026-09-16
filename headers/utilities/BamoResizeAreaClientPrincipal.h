#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class BamoResizeAreaClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoResizeAreaClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegion@BamoResizeAreaClientPrincipal@@UEAA?AW4InputResizeRegion@Input@Internal@UI@Windows@@XZ
    virtual int GetRegion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@BamoResizeAreaClientPrincipal@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetType();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoResizeAreaClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoResizeAreaClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRegion@BamoResizeAreaClientPrincipal@@UEAAXW4InputResizeRegion@Input@Internal@UI@Windows@@@Z
    virtual void SetRegion(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetType@BamoResizeAreaClientPrincipal@@UEAAXAEBU_GUID@@@Z
    virtual void SetType(_GUID const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoResizeAreaClientPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoResizeAreaClientStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoResizeAreaClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoResizeAreaClientPrincipal@@MEAAJPEAVBamoResizeAreaClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoResizeAreaClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoResizeAreaClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoResizeAreaClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoResizeAreaClientPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoResizeAreaClientPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoResizeAreaClientPrincipal@@MEAAJPEAVBamoResizeAreaClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoResizeAreaClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoResizeAreaClientPrincipal@@MEAAJPEAVBamoResizeAreaClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoResizeAreaClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoResizeAreaClientPrincipal@@MEAAJPEAVBamoResizeAreaClientStub@@@Z
    virtual long OnStubDisconnected(BamoResizeAreaClientStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoResizeAreaClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
