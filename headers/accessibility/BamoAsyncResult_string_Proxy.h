#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 14 member(s).
class BamoAsyncResult_string_Proxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoAsyncResult_string_Proxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoAsyncResult_string_Proxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoAsyncResult_string_Proxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetError@BamoAsyncResult_string_Proxy@@UEAAJH@Z
    virtual long SetError(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResult@BamoAsyncResult_string_Proxy@@UEAAJPEBG@Z
    virtual long SetResult(unsigned short const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoAsyncResult_string_Proxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoAsyncResult_string_Proxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoAsyncResult_string_Proxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoAsyncResult_string_Proxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
