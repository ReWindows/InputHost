#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 29 member(s).
class BamoControllerNavigationClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoControllerNavigationClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@BamoControllerNavigationClientPrincipal@@UEAAAEBUtagRECT@@XZ
    virtual tagRECT const & GetBounds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnabled@BamoControllerNavigationClientPrincipal@@UEAA_NXZ
    virtual bool GetEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFeatures@BamoControllerNavigationClientPrincipal@@UEAAIXZ
    virtual unsigned int GetFeatures();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartPosition@BamoControllerNavigationClientPrincipal@@UEAAAEBUtagPOINT@@XZ
    virtual tagPOINT const & GetStartPosition();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualReferenceId@BamoControllerNavigationClientPrincipal@@UEAA_KXZ
    virtual uint64_t GetVisualReferenceId();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoControllerNavigationClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoControllerNavigationClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBounds@BamoControllerNavigationClientPrincipal@@UEAAXAEBUtagRECT@@@Z
    virtual void SetBounds(tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnabled@BamoControllerNavigationClientPrincipal@@UEAAX_N@Z
    virtual void SetEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFeatures@BamoControllerNavigationClientPrincipal@@UEAAXI@Z
    virtual void SetFeatures(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStartPosition@BamoControllerNavigationClientPrincipal@@UEAAXAEBUtagPOINT@@@Z
    virtual void SetStartPosition(tagPOINT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualReferenceId@BamoControllerNavigationClientPrincipal@@UEAAX_K@Z
    virtual void SetVisualReferenceId(uint64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoControllerNavigationClientPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoControllerNavigationClientStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoControllerNavigationClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoControllerNavigationClientPrincipal@@MEAAJPEAVBamoControllerNavigationClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoControllerNavigationClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoControllerNavigationClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoControllerNavigationClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoControllerNavigationClientPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoControllerNavigationClientPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoControllerNavigationClientPrincipal@@MEAAJPEAVBamoControllerNavigationClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoControllerNavigationClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoControllerNavigationClientPrincipal@@MEAAJPEAVBamoControllerNavigationClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoControllerNavigationClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoControllerNavigationClientPrincipal@@MEAAJPEAVBamoControllerNavigationClientStub@@@Z
    virtual long OnStubDisconnected(BamoControllerNavigationClientStub *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoControllerNavigationClientPrincipal@@MEAA@XZ
    virtual ~BamoControllerNavigationClientPrincipal();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoControllerNavigationClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
