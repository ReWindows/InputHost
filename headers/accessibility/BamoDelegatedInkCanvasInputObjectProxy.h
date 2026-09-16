#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 19 member(s).
class BamoDelegatedInkCanvasInputObjectProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoDelegatedInkCanvasInputObjectProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnabled@BamoDelegatedInkCanvasInputObjectProxy@@UEAA_NXZ
    virtual bool GetEnabled();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoDelegatedInkCanvasInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoDelegatedInkCanvasInputObjectProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoDelegatedInkCanvasInputObjectProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoDelegatedInkCanvasInputObjectProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEnabledChanged@BamoDelegatedInkCanvasInputObjectProxy@@MEAAJXZ
    virtual long OnEnabledChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEnabledChanging@BamoDelegatedInkCanvasInputObjectProxy@@MEAAJ_N@Z
    virtual long OnEnabledChanging(bool);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoDelegatedInkCanvasInputObjectProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnEnabledChanged@BamoDelegatedInkCanvasInputObjectProxy@@AEAAXXZ
    void LogOnEnabledChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnEnabledChanging@BamoDelegatedInkCanvasInputObjectProxy@@AEAAX_N@Z
    void LogOnEnabledChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoDelegatedInkCanvasInputObjectProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoDelegatedInkCanvasInputObjectProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoDelegatedInkCanvasInputObjectProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
