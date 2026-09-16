#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 29 member(s).
class BamoDockDeviceProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoDockDeviceProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayOcclusionLogicalRange@BamoDockDeviceProxy@@UEAAAEBUtagRECT@@XZ
    virtual tagRECT const & GetDisplayOcclusionLogicalRange();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayOcclusionSupported@BamoDockDeviceProxy@@UEAA_NXZ
    virtual bool GetDisplayOcclusionSupported();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPanelId@BamoDockDeviceProxy@@UEAAPEBGXZ
    virtual unsigned short const * GetPanelId();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoDockDeviceProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoDockDeviceProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoDockDeviceProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoDockDeviceProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnDisplayOcclusionLogicalRangeChanged@BamoDockDeviceProxy@@MEAAJXZ
    virtual long OnDisplayOcclusionLogicalRangeChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnDisplayOcclusionLogicalRangeChanging@BamoDockDeviceProxy@@MEAAJAEBUtagRECT@@@Z
    virtual long OnDisplayOcclusionLogicalRangeChanging(tagRECT const &);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDisplayOcclusionSupportedChanged@BamoDockDeviceProxy@@MEAAJXZ
    virtual long OnDisplayOcclusionSupportedChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnDisplayOcclusionSupportedChanging@BamoDockDeviceProxy@@MEAAJ_N@Z
    virtual long OnDisplayOcclusionSupportedChanging(bool);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPanelIdChanged@BamoDockDeviceProxy@@MEAAJXZ
    virtual long OnPanelIdChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPanelIdChanging@BamoDockDeviceProxy@@MEAAJPEBG@Z
    virtual long OnPanelIdChanging(unsigned short const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoDockDeviceProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnDisplayOcclusionLogicalRangeChanged@BamoDockDeviceProxy@@AEAAXXZ
    void LogOnDisplayOcclusionLogicalRangeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnDisplayOcclusionLogicalRangeChanging@BamoDockDeviceProxy@@AEAAXAEBUtagRECT@@@Z
    void LogOnDisplayOcclusionLogicalRangeChanging(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnDisplayOcclusionSupportedChanged@BamoDockDeviceProxy@@AEAAXXZ
    void LogOnDisplayOcclusionSupportedChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnDisplayOcclusionSupportedChanging@BamoDockDeviceProxy@@AEAAX_N@Z
    void LogOnDisplayOcclusionSupportedChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnPanelIdChanged@BamoDockDeviceProxy@@AEAAXXZ
    void LogOnPanelIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnPanelIdChanging@BamoDockDeviceProxy@@AEAAXPEBG@Z
    void LogOnPanelIdChanging(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoDockDeviceProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoDockDeviceProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoDockDeviceProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
