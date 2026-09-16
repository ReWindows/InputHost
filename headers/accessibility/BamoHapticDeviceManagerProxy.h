#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 29 member(s).
class BamoHapticDeviceManagerProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoHapticDeviceManagerProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMouseDevices@BamoHapticDeviceManagerProxy@@UEAAPEAVBamoList_SimpleHapticsControllerPrincipal_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Proxy * GetMouseDevices();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPenDevices@BamoHapticDeviceManagerProxy@@UEAAPEAVBamoList_PenDevicePrincipal_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Proxy * GetPenDevices();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTouchpadDevices@BamoHapticDeviceManagerProxy@@UEAAPEAVBamoList_SimpleHapticsControllerPrincipal_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Proxy * GetTouchpadDevices();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoHapticDeviceManagerProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoHapticDeviceManagerProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoHapticDeviceManagerProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoHapticDeviceManagerProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnMouseDevicesChanged@BamoHapticDeviceManagerProxy@@MEAAJXZ
    virtual long OnMouseDevicesChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnMouseDevicesChanging@BamoHapticDeviceManagerProxy@@MEAAJPEAVBamoList_SimpleHapticsControllerPrincipal_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z
    virtual long OnMouseDevicesChanging(::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Proxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPenDevicesChanged@BamoHapticDeviceManagerProxy@@MEAAJXZ
    virtual long OnPenDevicesChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPenDevicesChanging@BamoHapticDeviceManagerProxy@@MEAAJPEAVBamoList_PenDevicePrincipal_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z
    virtual long OnPenDevicesChanging(::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Proxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnTouchpadDevicesChanged@BamoHapticDeviceManagerProxy@@MEAAJXZ
    virtual long OnTouchpadDevicesChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnTouchpadDevicesChanging@BamoHapticDeviceManagerProxy@@MEAAJPEAVBamoList_SimpleHapticsControllerPrincipal_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z
    virtual long OnTouchpadDevicesChanging(::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Proxy *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoHapticDeviceManagerProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnMouseDevicesChanged@BamoHapticDeviceManagerProxy@@AEAAXXZ
    void LogOnMouseDevicesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnMouseDevicesChanging@BamoHapticDeviceManagerProxy@@AEAAXPEAVBamoList_SimpleHapticsControllerPrincipal_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z
    void LogOnMouseDevicesChanging(::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Proxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnPenDevicesChanged@BamoHapticDeviceManagerProxy@@AEAAXXZ
    void LogOnPenDevicesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnPenDevicesChanging@BamoHapticDeviceManagerProxy@@AEAAXPEAVBamoList_PenDevicePrincipal_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z
    void LogOnPenDevicesChanging(::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Proxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTouchpadDevicesChanged@BamoHapticDeviceManagerProxy@@AEAAXXZ
    void LogOnTouchpadDevicesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTouchpadDevicesChanging@BamoHapticDeviceManagerProxy@@AEAAXPEAVBamoList_SimpleHapticsControllerPrincipal_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z
    void LogOnTouchpadDevicesChanging(::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Proxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoHapticDeviceManagerProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoHapticDeviceManagerProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoHapticDeviceManagerProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
