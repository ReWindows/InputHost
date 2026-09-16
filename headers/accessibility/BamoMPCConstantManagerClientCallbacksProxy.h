#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 13 member(s).
class BamoMPCConstantManagerClientCallbacksProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoMPCConstantManagerClientCallbacksProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConstantChanged@BamoMPCConstantManagerClientCallbacksProxy@@UEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@2@Z
    virtual long OnConstantChanged(int, unsigned short const *, tagPROPVARIANT const &, tagPROPVARIANT const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoMPCConstantManagerClientCallbacksProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoMPCConstantManagerClientCallbacksProxy@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoMPCConstantManagerClientCallbacksProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoMPCConstantManagerClientCallbacksProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoMPCConstantManagerClientCallbacksProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoMPCConstantManagerClientCallbacksProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
