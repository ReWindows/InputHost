#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 29 member(s).
class BamoControllerNavigationOverridePrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoControllerNavigationOverridePrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBounds@BamoControllerNavigationOverridePrincipal@@UEAAAEBUtagRECT@@XZ
    virtual tagRECT const & GetBounds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFeatures@BamoControllerNavigationOverridePrincipal@@UEAAIXZ
    virtual unsigned int GetFeatures();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPaused@BamoControllerNavigationOverridePrincipal@@UEAA_NXZ
    virtual bool GetPaused();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResumePosition@BamoControllerNavigationOverridePrincipal@@UEAAAEBUtagPOINT@@XZ
    virtual tagPOINT const & GetResumePosition();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualReferenceId@BamoControllerNavigationOverridePrincipal@@UEAA_KXZ
    virtual uint64_t GetVisualReferenceId();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoControllerNavigationOverridePrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoControllerNavigationOverridePrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBounds@BamoControllerNavigationOverridePrincipal@@UEAAXAEBUtagRECT@@@Z
    virtual void SetBounds(tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFeatures@BamoControllerNavigationOverridePrincipal@@UEAAXI@Z
    virtual void SetFeatures(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPaused@BamoControllerNavigationOverridePrincipal@@UEAAX_N@Z
    virtual void SetPaused(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResumePosition@BamoControllerNavigationOverridePrincipal@@UEAAXAEBUtagPOINT@@@Z
    virtual void SetResumePosition(tagPOINT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualReferenceId@BamoControllerNavigationOverridePrincipal@@UEAAX_K@Z
    virtual void SetVisualReferenceId(uint64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoControllerNavigationOverridePrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoControllerNavigationOverrideStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoControllerNavigationOverrideStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoControllerNavigationOverridePrincipal@@MEAAJPEAVBamoControllerNavigationOverrideStub@@@Z
    virtual long InitializeProxyUnderLock(BamoControllerNavigationOverrideStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoControllerNavigationOverridePrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoControllerNavigationOverridePrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoControllerNavigationOverridePrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoControllerNavigationOverridePrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoControllerNavigationOverridePrincipal@@MEAAJPEAVBamoControllerNavigationOverrideStub@@@Z
    virtual long OnPropertiesRefreshed(BamoControllerNavigationOverrideStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoControllerNavigationOverridePrincipal@@MEAAJPEAVBamoControllerNavigationOverrideStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoControllerNavigationOverrideStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoControllerNavigationOverridePrincipal@@MEAAJPEAVBamoControllerNavigationOverrideStub@@@Z
    virtual long OnStubDisconnected(BamoControllerNavigationOverrideStub *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoControllerNavigationOverridePrincipal@@MEAA@XZ
    virtual ~BamoControllerNavigationOverridePrincipal();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoControllerNavigationOverridePrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
