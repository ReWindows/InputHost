#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 14 member(s).
class BamoAsyncResult_PROPVARIANT_Proxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAsyncResult_PROPVARIANT_Proxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAsyncResult_PROPVARIANT_Proxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAsyncResult_PROPVARIANT_Proxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetError@BamoAsyncResult_PROPVARIANT_Proxy@@UEAAJH@Z
    virtual long SetError(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResult@BamoAsyncResult_PROPVARIANT_Proxy@@UEAAJAEBUtagPROPVARIANT@@@Z
    virtual long SetResult(tagPROPVARIANT const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAsyncResult_PROPVARIANT_Proxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoAsyncResult_PROPVARIANT_Proxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoAsyncResult_PROPVARIANT_Proxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoAsyncResult_PROPVARIANT_Proxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
