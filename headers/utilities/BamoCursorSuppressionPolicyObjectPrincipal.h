#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 20 member(s).
class BamoCursorSuppressionPolicyObjectPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoCursorSuppressionPolicyObjectPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuppressionPolicy@BamoCursorSuppressionPolicyObjectPrincipal@@UEAA?AW4SuppressionPolicy@Input@Internal@UI@Windows@@XZ
    virtual int GetSuppressionPolicy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoCursorSuppressionPolicyObjectPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoCursorSuppressionPolicyObjectPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuppressionPolicy@BamoCursorSuppressionPolicyObjectPrincipal@@UEAAXW4SuppressionPolicy@Input@Internal@UI@Windows@@@Z
    virtual void SetSuppressionPolicy(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoCursorSuppressionPolicyObjectPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoCursorSuppressionPolicyObjectStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoCursorSuppressionPolicyObjectStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoCursorSuppressionPolicyObjectPrincipal@@MEAAJPEAVBamoCursorSuppressionPolicyObjectStub@@@Z
    virtual long InitializeProxyUnderLock(BamoCursorSuppressionPolicyObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoCursorSuppressionPolicyObjectPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoCursorSuppressionPolicyObjectPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoCursorSuppressionPolicyObjectPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoCursorSuppressionPolicyObjectPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoCursorSuppressionPolicyObjectPrincipal@@MEAAJPEAVBamoCursorSuppressionPolicyObjectStub@@@Z
    virtual long OnPropertiesRefreshed(BamoCursorSuppressionPolicyObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoCursorSuppressionPolicyObjectPrincipal@@MEAAJPEAVBamoCursorSuppressionPolicyObjectStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoCursorSuppressionPolicyObjectStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoCursorSuppressionPolicyObjectPrincipal@@MEAAJPEAVBamoCursorSuppressionPolicyObjectStub@@@Z
    virtual long OnStubDisconnected(BamoCursorSuppressionPolicyObjectStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoCursorSuppressionPolicyObjectPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
