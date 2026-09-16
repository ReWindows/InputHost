#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 14 member(s).
class InputDelegationInputObjectWinRT {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputDelegationInputObjectWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InputDelegationInputObjectWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputDelegationInputObjectWinRT@@QEAA@XZ
    InputDelegationInputObjectWinRT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@InputDelegationInputObjectWinRT@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputDelegationInputObjectWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputDelegationInputObjectWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InputDelegationInputObjectWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputDelegationInputObjectWinRT@@UEAA@XZ
    virtual ~InputDelegationInputObjectWinRT();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGamepadInput@InputDelegationInputObjectWinRT@@MEAAJPEAVBamoInputDelegationInputObjectPrincipal@@PEAVBamoInputDelegationInputObjectStub@@G_N@Z
    virtual long OnGamepadInput(BamoInputDelegationInputObjectPrincipal *, BamoInputDelegationInputObjectStub *, unsigned short, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGamepadInterceptionStarted@InputDelegationInputObjectWinRT@@MEAAJPEAVBamoInputDelegationInputObjectPrincipal@@PEAVBamoInputDelegationInputObjectStub@@@Z
    virtual long OnGamepadInterceptionStarted(BamoInputDelegationInputObjectPrincipal *, BamoInputDelegationInputObjectStub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputDelegated@InputDelegationInputObjectWinRT@@MEAAJPEAVBamoInputDelegationInputObjectPrincipal@@PEAVBamoInputDelegationInputObjectStub@@II_N@Z
    virtual long OnInputDelegated(BamoInputDelegationInputObjectPrincipal *, BamoInputDelegationInputObjectStub *, unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@InputDelegationInputObjectWinRT@@MEAAJPEAVBamoInputDelegationInputObjectPrincipal@@PEAVBamoInputDelegationInputObjectStub@@@Z
    virtual long OnStubDisconnected(BamoInputDelegationInputObjectPrincipal *, BamoInputDelegationInputObjectStub *);
};
