#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class BamoAnimationTargetClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAnimationTargetClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@BamoAnimationTargetClientPrincipal@@UEAAAEBUGestureAnimationData@Input@Internal@UI@Windows@@XZ
    virtual ::Windows::UI::Internal::Input::GestureAnimationData const & GetData();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@BamoAnimationTargetClientPrincipal@@UEAA_KXZ
    virtual uint64_t GetId();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAnimationTargetClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAnimationTargetClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetData@BamoAnimationTargetClientPrincipal@@UEAAXAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z
    virtual void SetData(::Windows::UI::Internal::Input::GestureAnimationData const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetId@BamoAnimationTargetClientPrincipal@@UEAAX_K@Z
    virtual void SetId(uint64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoAnimationTargetClientPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoAnimationTargetClientStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoAnimationTargetClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoAnimationTargetClientPrincipal@@MEAAJPEAVBamoAnimationTargetClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoAnimationTargetClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoAnimationTargetClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoAnimationTargetClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoAnimationTargetClientPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoAnimationTargetClientPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoAnimationTargetClientPrincipal@@MEAAJPEAVBamoAnimationTargetClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoAnimationTargetClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoAnimationTargetClientPrincipal@@MEAAJPEAVBamoAnimationTargetClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoAnimationTargetClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoAnimationTargetClientPrincipal@@MEAAJPEAVBamoAnimationTargetClientStub@@@Z
    virtual long OnStubDisconnected(BamoAnimationTargetClientStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAnimationTargetClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
