#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 38 member(s).
class BamoActivatableEntityProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoActivatableEntityProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnection@BamoActivatableEntityProxy@@QEBAPEAVBamoConnection@ISMBamos_AutoBamos@@XZ
    ::ISMBamos_AutoBamos::BamoConnection * GetConnection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLuid@BamoActivatableEntityProxy@@UEAAAEBU_LUID@@XZ
    virtual _LUID const & GetLuid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentId@BamoActivatableEntityProxy@@UEAA_KXZ
    virtual uint64_t GetParentId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessId@BamoActivatableEntityProxy@@UEAAIXZ
    virtual unsigned int GetProcessId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadId@BamoActivatableEntityProxy@@UEAAIXZ
    virtual unsigned int GetThreadId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowId@BamoActivatableEntityProxy@@UEAA_KXZ
    virtual uint64_t GetWindowId();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoActivatableEntityProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoActivatableEntityProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoActivatableEntityProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoActivatableEntityProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnLuidChanged@BamoActivatableEntityProxy@@MEAAJXZ
    virtual long OnLuidChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnLuidChanging@BamoActivatableEntityProxy@@MEAAJAEBU_LUID@@@Z
    virtual long OnLuidChanging(_LUID const &);
    // Category: Method | Source: PE Export
    // Symbol: ?OnParentIdChanged@BamoActivatableEntityProxy@@MEAAJXZ
    virtual long OnParentIdChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnParentIdChanging@BamoActivatableEntityProxy@@MEAAJ_K@Z
    virtual long OnParentIdChanging(uint64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?OnProcessIdChanged@BamoActivatableEntityProxy@@MEAAJXZ
    virtual long OnProcessIdChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnProcessIdChanging@BamoActivatableEntityProxy@@MEAAJI@Z
    virtual long OnProcessIdChanging(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnThreadIdChanged@BamoActivatableEntityProxy@@MEAAJXZ
    virtual long OnThreadIdChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnThreadIdChanging@BamoActivatableEntityProxy@@MEAAJI@Z
    virtual long OnThreadIdChanging(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnWindowIdChanged@BamoActivatableEntityProxy@@MEAAJXZ
    virtual long OnWindowIdChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnWindowIdChanging@BamoActivatableEntityProxy@@MEAAJ_K@Z
    virtual long OnWindowIdChanging(uint64_t);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoActivatableEntityProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnLuidChanged@BamoActivatableEntityProxy@@AEAAXXZ
    void LogOnLuidChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnLuidChanging@BamoActivatableEntityProxy@@AEAAXAEBU_LUID@@@Z
    void LogOnLuidChanging(_LUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnParentIdChanged@BamoActivatableEntityProxy@@AEAAXXZ
    void LogOnParentIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnParentIdChanging@BamoActivatableEntityProxy@@AEAAX_K@Z
    void LogOnParentIdChanging(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnProcessIdChanged@BamoActivatableEntityProxy@@AEAAXXZ
    void LogOnProcessIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnProcessIdChanging@BamoActivatableEntityProxy@@AEAAXI@Z
    void LogOnProcessIdChanging(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnThreadIdChanged@BamoActivatableEntityProxy@@AEAAXXZ
    void LogOnThreadIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnThreadIdChanging@BamoActivatableEntityProxy@@AEAAXI@Z
    void LogOnThreadIdChanging(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnWindowIdChanged@BamoActivatableEntityProxy@@AEAAXXZ
    void LogOnWindowIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnWindowIdChanging@BamoActivatableEntityProxy@@AEAAX_K@Z
    void LogOnWindowIdChanging(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoActivatableEntityProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoActivatableEntityProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoActivatableEntityProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
