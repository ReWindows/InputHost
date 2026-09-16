#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 12 member(s).
class BamoShellHandwritingHostClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoShellHandwritingHostClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BamoShellHandwritingHostClientPrincipal@@QEAA@PEAVBamoShellHandwritingHostClientPrincipalOwner@@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z
    BamoShellHandwritingHostClientPrincipal(BamoShellHandwritingHostClientPrincipalOwner *, ::ISMBamos_AutoBamos::BamoConnection *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoShellHandwritingHostClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoShellHandwritingHostClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallEpilogUnderLock@BamoShellHandwritingHostClientPrincipal@@IEAAJXZ
    long OnCallEpilogUnderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallPrologUnderLock@BamoShellHandwritingHostClientPrincipal@@IEAAJXZ
    long OnCallPrologUnderLock();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoShellHandwritingHostClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
