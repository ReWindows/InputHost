#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 19 member(s).
class BamoCursorSuppressionPolicyObjectProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoCursorSuppressionPolicyObjectProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuppressionPolicy@BamoCursorSuppressionPolicyObjectProxy@@UEAA?AW4SuppressionPolicy@Input@Internal@UI@Windows@@XZ
    virtual int GetSuppressionPolicy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoCursorSuppressionPolicyObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoCursorSuppressionPolicyObjectProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoCursorSuppressionPolicyObjectProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoCursorSuppressionPolicyObjectProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnSuppressionPolicyChanged@BamoCursorSuppressionPolicyObjectProxy@@MEAAJXZ
    virtual long OnSuppressionPolicyChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnSuppressionPolicyChanging@BamoCursorSuppressionPolicyObjectProxy@@MEAAJW4SuppressionPolicy@Input@Internal@UI@Windows@@@Z
    virtual long OnSuppressionPolicyChanging(int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoCursorSuppressionPolicyObjectProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnSuppressionPolicyChanged@BamoCursorSuppressionPolicyObjectProxy@@AEAAXXZ
    void LogOnSuppressionPolicyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnSuppressionPolicyChanging@BamoCursorSuppressionPolicyObjectProxy@@AEAAXW4SuppressionPolicy@Input@Internal@UI@Windows@@@Z
    void LogOnSuppressionPolicyChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoCursorSuppressionPolicyObjectProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoCursorSuppressionPolicyObjectProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoCursorSuppressionPolicyObjectProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
