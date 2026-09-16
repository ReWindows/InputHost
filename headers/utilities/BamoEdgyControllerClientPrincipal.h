#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 32 member(s).
class BamoEdgyControllerClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoEdgyControllerClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BamoEdgyControllerClientPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z
    BamoEdgyControllerClientPrincipal(::ISMBamos_AutoBamos::BamoConnection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGestureDirection@BamoEdgyControllerClientPrincipal@@UEAAAEBUD2D_VECTOR_2F@@XZ
    virtual D2D_VECTOR_2F const & GetGestureDirection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGestureDistance@BamoEdgyControllerClientPrincipal@@UEAAIXZ
    virtual unsigned int GetGestureDistance();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRouting@BamoEdgyControllerClientPrincipal@@UEAAIXZ
    virtual unsigned int GetRouting();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRunState@BamoEdgyControllerClientPrincipal@@UEAAIXZ
    virtual unsigned int GetRunState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVertex0@BamoEdgyControllerClientPrincipal@@UEAAAEBUD2D_VECTOR_2F@@XZ
    virtual D2D_VECTOR_2F const & GetVertex0();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVertex1@BamoEdgyControllerClientPrincipal@@UEAAAEBUD2D_VECTOR_2F@@XZ
    virtual D2D_VECTOR_2F const & GetVertex1();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoEdgyControllerClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoEdgyControllerClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGestureDirection@BamoEdgyControllerClientPrincipal@@UEAAXAEBUD2D_VECTOR_2F@@@Z
    virtual void SetGestureDirection(D2D_VECTOR_2F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGestureDistance@BamoEdgyControllerClientPrincipal@@UEAAXI@Z
    virtual void SetGestureDistance(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRouting@BamoEdgyControllerClientPrincipal@@UEAAXI@Z
    virtual void SetRouting(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRunState@BamoEdgyControllerClientPrincipal@@UEAAXI@Z
    virtual void SetRunState(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVertex0@BamoEdgyControllerClientPrincipal@@UEAAXAEBUD2D_VECTOR_2F@@@Z
    virtual void SetVertex0(D2D_VECTOR_2F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVertex1@BamoEdgyControllerClientPrincipal@@UEAAXAEBUD2D_VECTOR_2F@@@Z
    virtual void SetVertex1(D2D_VECTOR_2F const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoEdgyControllerClientPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerClientStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoEdgyControllerClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoEdgyControllerClientPrincipal@@MEAAJPEAVBamoEdgyControllerClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoEdgyControllerClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoEdgyControllerClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoEdgyControllerClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoEdgyControllerClientPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoEdgyControllerClientPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoEdgyControllerClientPrincipal@@MEAAJPEAVBamoEdgyControllerClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoEdgyControllerClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoEdgyControllerClientPrincipal@@MEAAJPEAVBamoEdgyControllerClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoEdgyControllerClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoEdgyControllerClientPrincipal@@MEAAJPEAVBamoEdgyControllerClientStub@@@Z
    virtual long OnStubDisconnected(BamoEdgyControllerClientStub *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoEdgyControllerClientPrincipal@@MEAA@XZ
    virtual ~BamoEdgyControllerClientPrincipal();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoEdgyControllerClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
