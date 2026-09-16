#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 13 member(s).
class BamoLightDismissClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoLightDismissClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BamoLightDismissClientPrincipal@@QEAA@PEAVBamoLightDismissClientPrincipalOwner@@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z
    BamoLightDismissClientPrincipal(BamoLightDismissClientPrincipalOwner *, ::ISMBamos_AutoBamos::BamoConnection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoLightDismissClientPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoLightDismissClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoLightDismissClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallEpilogUnderLock@BamoLightDismissClientPrincipal@@IEAAJXZ
    long OnCallEpilogUnderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallPrologUnderLock@BamoLightDismissClientPrincipal@@IEAAJXZ
    long OnCallPrologUnderLock();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoLightDismissClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
