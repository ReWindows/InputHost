#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 24 member(s).
class BamoActivationConfigurationInputObjectProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoActivationConfigurationInputObjectProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivatePolicy@BamoActivationConfigurationInputObjectProxy@@UEAAIXZ
    virtual unsigned int GetActivatePolicy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEatPolicy@BamoActivationConfigurationInputObjectProxy@@UEAAIXZ
    virtual unsigned int GetEatPolicy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoActivationConfigurationInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoActivationConfigurationInputObjectProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnActivatePolicyChanged@BamoActivationConfigurationInputObjectProxy@@MEAAJXZ
    virtual long OnActivatePolicyChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnActivatePolicyChanging@BamoActivationConfigurationInputObjectProxy@@MEAAJI@Z
    virtual long OnActivatePolicyChanging(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoActivationConfigurationInputObjectProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoActivationConfigurationInputObjectProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEatPolicyChanged@BamoActivationConfigurationInputObjectProxy@@MEAAJXZ
    virtual long OnEatPolicyChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEatPolicyChanging@BamoActivationConfigurationInputObjectProxy@@MEAAJI@Z
    virtual long OnEatPolicyChanging(unsigned int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoActivationConfigurationInputObjectProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnActivatePolicyChanged@BamoActivationConfigurationInputObjectProxy@@AEAAXXZ
    void LogOnActivatePolicyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnActivatePolicyChanging@BamoActivationConfigurationInputObjectProxy@@AEAAXI@Z
    void LogOnActivatePolicyChanging(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnEatPolicyChanged@BamoActivationConfigurationInputObjectProxy@@AEAAXXZ
    void LogOnEatPolicyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnEatPolicyChanging@BamoActivationConfigurationInputObjectProxy@@AEAAXI@Z
    void LogOnEatPolicyChanging(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoActivationConfigurationInputObjectProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoActivationConfigurationInputObjectProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoActivationConfigurationInputObjectProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
