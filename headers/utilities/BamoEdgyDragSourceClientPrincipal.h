#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 26 member(s).
class BamoEdgyDragSourceClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoEdgyDragSourceClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlPoints@BamoEdgyDragSourceClientPrincipal@@UEAAXPEAPEBUtagPOINT@@PEAI@Z
    virtual void GetControlPoints(tagPOINT const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGestureRecognitionConfiguration@BamoEdgyDragSourceClientPrincipal@@UEAAPEAVBamoEdgyGestureRecognitionConfigurationPrincipal@@XZ
    virtual BamoEdgyGestureRecognitionConfigurationPrincipal * GetGestureRecognitionConfiguration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@BamoEdgyDragSourceClientPrincipal@@UEAA_KXZ
    virtual uint64_t GetId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@BamoEdgyDragSourceClientPrincipal@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetType();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoEdgyDragSourceClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoEdgyDragSourceClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlPoints@BamoEdgyDragSourceClientPrincipal@@UEAAJPEBUtagPOINT@@I@Z
    virtual long SetControlPoints(tagPOINT const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGestureRecognitionConfiguration@BamoEdgyDragSourceClientPrincipal@@UEAAXPEAVBamoEdgyGestureRecognitionConfigurationPrincipal@@@Z
    virtual void SetGestureRecognitionConfiguration(BamoEdgyGestureRecognitionConfigurationPrincipal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetId@BamoEdgyDragSourceClientPrincipal@@UEAAX_K@Z
    virtual void SetId(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetType@BamoEdgyDragSourceClientPrincipal@@UEAAXAEBU_GUID@@@Z
    virtual void SetType(_GUID const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoEdgyDragSourceClientPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyDragSourceClientStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoEdgyDragSourceClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoEdgyDragSourceClientPrincipal@@MEAAJPEAVBamoEdgyDragSourceClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoEdgyDragSourceClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoEdgyDragSourceClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoEdgyDragSourceClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoEdgyDragSourceClientPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoEdgyDragSourceClientPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoEdgyDragSourceClientPrincipal@@MEAAJPEAVBamoEdgyDragSourceClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoEdgyDragSourceClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoEdgyDragSourceClientPrincipal@@MEAAJPEAVBamoEdgyDragSourceClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoEdgyDragSourceClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoEdgyDragSourceClientPrincipal@@MEAAJPEAVBamoEdgyDragSourceClientStub@@@Z
    virtual long OnStubDisconnected(BamoEdgyDragSourceClientStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoEdgyDragSourceClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
