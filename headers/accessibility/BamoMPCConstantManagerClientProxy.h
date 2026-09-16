#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 20 member(s).
class BamoMPCConstantManagerClientProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoMPCConstantManagerClientProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveInputTypeList@BamoMPCConstantManagerClientProxy@@UEAAJPEAVBamoAsyncResult_string_Principal@@@Z
    virtual long GetActiveInputTypeList(BamoAsyncResult_string_Principal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbacks@BamoMPCConstantManagerClientProxy@@UEAAPEAVBamoMPCConstantManagerClientCallbacksPrincipal@@XZ
    virtual BamoMPCConstantManagerClientCallbacksPrincipal * GetCallbacks();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConstant@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEBGPEAVBamoAsyncResult_PROPVARIANT_Principal@@@Z
    virtual long GetConstant(int, unsigned short const *, BamoAsyncResult_PROPVARIANT_Principal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConstantsForInputType@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEAVBamoAsyncResult_string_Principal@@@Z
    virtual long GetConstantsForInputType(int, BamoAsyncResult_string_Principal *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoMPCConstantManagerClientProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoMPCConstantManagerClientProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllConstantsForInputTypeToDefault@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEAVBamoAsyncHRESULTPrincipal@@@Z
    virtual long SetAllConstantsForInputTypeToDefault(int, BamoAsyncHRESULTPrincipal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCallbacks@BamoMPCConstantManagerClientProxy@@UEAAXPEAVBamoMPCConstantManagerClientCallbacksPrincipal@@@Z
    virtual void SetCallbacks(BamoMPCConstantManagerClientCallbacksPrincipal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConstant@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTPrincipal@@@Z
    virtual long SetConstant(int, unsigned short const *, tagPROPVARIANT const &, BamoAsyncHRESULTPrincipal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConstantToDefault@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEBGPEAVBamoAsyncHRESULTPrincipal@@@Z
    virtual long SetConstantToDefault(int, unsigned short const *, BamoAsyncHRESULTPrincipal *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoMPCConstantManagerClientProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoMPCConstantManagerClientProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoMPCConstantManagerClientProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoMPCConstantManagerClientProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
