#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 26 member(s).
class BamoDragSourceClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoDragSourceClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlPoints@BamoDragSourceClientPrincipal@@UEAAXPEAPEBUtagPOINT@@PEAI@Z
    virtual void GetControlPoints(tagPOINT const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHitTestConfiguration@BamoDragSourceClientPrincipal@@UEAA?AW4HitTestConfiguration@Input@Internal@UI@Windows@@XZ
    virtual int GetHitTestConfiguration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@BamoDragSourceClientPrincipal@@UEAA_KXZ
    virtual uint64_t GetId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@BamoDragSourceClientPrincipal@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetType();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoDragSourceClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoDragSourceClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlPoints@BamoDragSourceClientPrincipal@@UEAAJPEBUtagPOINT@@I@Z
    virtual long SetControlPoints(tagPOINT const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHitTestConfiguration@BamoDragSourceClientPrincipal@@UEAAXW4HitTestConfiguration@Input@Internal@UI@Windows@@@Z
    virtual void SetHitTestConfiguration(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetId@BamoDragSourceClientPrincipal@@UEAAX_K@Z
    virtual void SetId(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetType@BamoDragSourceClientPrincipal@@UEAAXAEBU_GUID@@@Z
    virtual void SetType(_GUID const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoDragSourceClientPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoDragSourceClientStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoDragSourceClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoDragSourceClientPrincipal@@MEAAJPEAVBamoDragSourceClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoDragSourceClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoDragSourceClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoDragSourceClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoDragSourceClientPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoDragSourceClientPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoDragSourceClientPrincipal@@MEAAJPEAVBamoDragSourceClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoDragSourceClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoDragSourceClientPrincipal@@MEAAJPEAVBamoDragSourceClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoDragSourceClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoDragSourceClientPrincipal@@MEAAJPEAVBamoDragSourceClientStub@@@Z
    virtual long OnStubDisconnected(BamoDragSourceClientStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoDragSourceClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
