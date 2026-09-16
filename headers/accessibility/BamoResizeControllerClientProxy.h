#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 29 member(s).
class BamoResizeControllerClientProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoResizeControllerClientProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationStarted@BamoResizeControllerClientProxy@@UEAAJI_K0@Z
    virtual long AnimationStarted(unsigned int, uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHitTestConfiguration@BamoResizeControllerClientProxy@@UEAA?AW4HitTestConfiguration@Input@Internal@UI@Windows@@XZ
    virtual int GetHitTestConfiguration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@BamoResizeControllerClientProxy@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetType();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoResizeControllerClientProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoResizeControllerClientProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeCancelled@BamoResizeControllerClientProxy@@UEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@3456@AEBUtagPOINT@@2@Z
    virtual long ResizeCancelled(unsigned int, int, int, tagPOINT const &, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeEnded@BamoResizeControllerClientProxy@@UEAAJIAEBUtagPOINT@@0@Z
    virtual long ResizeEnded(unsigned int, tagPOINT const &, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeInProgress@BamoResizeControllerClientProxy@@UEAAJIAEBUtagPOINT@@0@Z
    virtual long ResizeInProgress(unsigned int, tagPOINT const &, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeStarted@BamoResizeControllerClientProxy@@UEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@3456@AEBUtagPOINT@@2@Z
    virtual long ResizeStarted(unsigned int, int, int, tagPOINT const &, tagPOINT const &);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoResizeControllerClientProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoResizeControllerClientProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnHitTestConfigurationChanged@BamoResizeControllerClientProxy@@MEAAJXZ
    virtual long OnHitTestConfigurationChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnHitTestConfigurationChanging@BamoResizeControllerClientProxy@@MEAAJW4HitTestConfiguration@Input@Internal@UI@Windows@@@Z
    virtual long OnHitTestConfigurationChanging(int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnTypeChanged@BamoResizeControllerClientProxy@@MEAAJXZ
    virtual long OnTypeChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnTypeChanging@BamoResizeControllerClientProxy@@MEAAJAEBU_GUID@@@Z
    virtual long OnTypeChanging(_GUID const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoResizeControllerClientProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnHitTestConfigurationChanged@BamoResizeControllerClientProxy@@AEAAXXZ
    void LogOnHitTestConfigurationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnHitTestConfigurationChanging@BamoResizeControllerClientProxy@@AEAAXW4HitTestConfiguration@Input@Internal@UI@Windows@@@Z
    void LogOnHitTestConfigurationChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTypeChanged@BamoResizeControllerClientProxy@@AEAAXXZ
    void LogOnTypeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTypeChanging@BamoResizeControllerClientProxy@@AEAAXAEBU_GUID@@@Z
    void LogOnTypeChanging(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoResizeControllerClientProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoResizeControllerClientProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoResizeControllerClientProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
