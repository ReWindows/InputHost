#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
class CursorSuppressionPolicyObjectWinRT {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CursorSuppressionPolicyObjectWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CursorSuppressionPolicyObjectWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@CursorSuppressionPolicyObjectWinRT@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CursorSuppressionPolicyObjectWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CursorSuppressionPolicyObjectWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CursorSuppressionPolicyObjectWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CursorSuppressionPolicyObjectWinRT@@UEAA@XZ
    virtual ~CursorSuppressionPolicyObjectWinRT();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuppressionPolicy@CursorSuppressionPolicyObjectWinRT@@AEBAJPEAW4SuppressionPolicy@Input@Internal@UI@Windows@@@Z
    long GetSuppressionPolicy(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuppressionPolicy@CursorSuppressionPolicyObjectWinRT@@AEAAJW4SuppressionPolicy@Input@Internal@UI@Windows@@@Z
    long SetSuppressionPolicy(int);
};
