#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 17 member(s).
class BamoDragManagerClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoDragManagerClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BamoDragManagerClientPrincipal@@QEAA@PEAVBamoDragManagerClientPrincipalOwner@@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z
    BamoDragManagerClientPrincipal(BamoDragManagerClientPrincipalOwner *, ::ISMBamos_AutoBamos::BamoConnection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoDragManagerClientPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceType@BamoDragManagerClientPrincipal@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetSourceType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuppressionRegions@BamoDragManagerClientPrincipal@@UEAAXPEAPEBUtagRECT@@PEAI@Z
    virtual void GetSuppressionRegions(tagRECT const * *, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoDragManagerClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoDragManagerClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceType@BamoDragManagerClientPrincipal@@UEAAXAEBU_GUID@@@Z
    virtual void SetSourceType(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuppressionRegions@BamoDragManagerClientPrincipal@@UEAAJPEBUtagRECT@@I@Z
    virtual long SetSuppressionRegions(tagRECT const *, unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallEpilogUnderLock@BamoDragManagerClientPrincipal@@IEAAJXZ
    long OnCallEpilogUnderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallPrologUnderLock@BamoDragManagerClientPrincipal@@IEAAJXZ
    long OnCallPrologUnderLock();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoDragManagerClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
