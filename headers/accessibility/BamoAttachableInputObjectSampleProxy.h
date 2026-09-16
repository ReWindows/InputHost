#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 20 member(s).
class BamoAttachableInputObjectSampleProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAttachableInputObjectSampleProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnabled@BamoAttachableInputObjectSampleProxy@@UEAA_NXZ
    virtual bool GetEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@BamoAttachableInputObjectSampleProxy@@UEAAJ_J0PEBG@Z
    virtual long OnInput(int64_t, int64_t, unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAttachableInputObjectSampleProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAttachableInputObjectSampleProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoAttachableInputObjectSampleProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoAttachableInputObjectSampleProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEnabledChanged@BamoAttachableInputObjectSampleProxy@@MEAAJXZ
    virtual long OnEnabledChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEnabledChanging@BamoAttachableInputObjectSampleProxy@@MEAAJ_N@Z
    virtual long OnEnabledChanging(bool);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAttachableInputObjectSampleProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnEnabledChanged@BamoAttachableInputObjectSampleProxy@@AEAAXXZ
    void LogOnEnabledChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnEnabledChanging@BamoAttachableInputObjectSampleProxy@@AEAAX_N@Z
    void LogOnEnabledChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoAttachableInputObjectSampleProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoAttachableInputObjectSampleProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoAttachableInputObjectSampleProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
