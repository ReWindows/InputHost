#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
class BamoCustomCursorControllerClient2Principal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoCustomCursorControllerClient2Principal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoCustomCursorControllerClient2Principal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoCustomCursorControllerClient2Principal@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallEpilogUnderLock@BamoCustomCursorControllerClient2Principal@@IEAAJXZ
    long OnCallEpilogUnderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallPrologUnderLock@BamoCustomCursorControllerClient2Principal@@IEAAJXZ
    long OnCallPrologUnderLock();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoCustomCursorControllerClient2Principal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
