#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 34 member(s).
class BamoDragSourceClientProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoDragSourceClientProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlPoints@BamoDragSourceClientProxy@@UEAAXPEAPEBUtagPOINT@@PEAI@Z
    virtual void GetControlPoints(tagPOINT const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHitTestConfiguration@BamoDragSourceClientProxy@@UEAA?AW4HitTestConfiguration@Input@Internal@UI@Windows@@XZ
    virtual int GetHitTestConfiguration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetId@BamoDragSourceClientProxy@@UEAA_KXZ
    virtual uint64_t GetId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@BamoDragSourceClientProxy@@UEAAAEBU_GUID@@XZ
    virtual _GUID const & GetType();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoDragSourceClientProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoDragSourceClientProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoDragSourceClientProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoDragSourceClientProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnControlPointsChanged@BamoDragSourceClientProxy@@MEAAJXZ
    virtual long OnControlPointsChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnControlPointsChanging@BamoDragSourceClientProxy@@MEAAJPEBUtagPOINT@@I@Z
    virtual long OnControlPointsChanging(tagPOINT const *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnHitTestConfigurationChanged@BamoDragSourceClientProxy@@MEAAJXZ
    virtual long OnHitTestConfigurationChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnHitTestConfigurationChanging@BamoDragSourceClientProxy@@MEAAJW4HitTestConfiguration@Input@Internal@UI@Windows@@@Z
    virtual long OnHitTestConfigurationChanging(int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnIdChanged@BamoDragSourceClientProxy@@MEAAJXZ
    virtual long OnIdChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnIdChanging@BamoDragSourceClientProxy@@MEAAJ_K@Z
    virtual long OnIdChanging(uint64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?OnTypeChanged@BamoDragSourceClientProxy@@MEAAJXZ
    virtual long OnTypeChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnTypeChanging@BamoDragSourceClientProxy@@MEAAJAEBU_GUID@@@Z
    virtual long OnTypeChanging(_GUID const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoDragSourceClientProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnControlPointsChanged@BamoDragSourceClientProxy@@AEAAXXZ
    void LogOnControlPointsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnControlPointsChanging@BamoDragSourceClientProxy@@AEAAXI@Z
    void LogOnControlPointsChanging(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnHitTestConfigurationChanged@BamoDragSourceClientProxy@@AEAAXXZ
    void LogOnHitTestConfigurationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnHitTestConfigurationChanging@BamoDragSourceClientProxy@@AEAAXW4HitTestConfiguration@Input@Internal@UI@Windows@@@Z
    void LogOnHitTestConfigurationChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnIdChanged@BamoDragSourceClientProxy@@AEAAXXZ
    void LogOnIdChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnIdChanging@BamoDragSourceClientProxy@@AEAAX_K@Z
    void LogOnIdChanging(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTypeChanged@BamoDragSourceClientProxy@@AEAAXXZ
    void LogOnTypeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTypeChanging@BamoDragSourceClientProxy@@AEAAXAEBU_GUID@@@Z
    void LogOnTypeChanging(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoDragSourceClientProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoDragSourceClientProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoDragSourceClientProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
