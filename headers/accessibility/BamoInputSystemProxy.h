#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 94 member(s).
class BamoInputSystemProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoInputSystemProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivationWatcher@BamoInputSystemProxy@@UEAAPEAVBamoActivationWatcherProxy@@XZ
    virtual BamoActivationWatcherProxy * GetActivationWatcher();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControllerNavigationManager@BamoInputSystemProxy@@UEAAPEAVBamoControllerNavigationManagerProxy@@XZ
    virtual BamoControllerNavigationManagerProxy * GetControllerNavigationManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceDockServer@BamoInputSystemProxy@@UEAAPEAVBamoDeviceDockServerProxy@@XZ
    virtual BamoDeviceDockServerProxy * GetDeviceDockServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEdgyControllerServer@BamoInputSystemProxy@@UEAAPEAVBamoEdgyControllerServerProxy@@XZ
    virtual BamoEdgyControllerServerProxy * GetEdgyControllerServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGestureServices@BamoInputSystemProxy@@UEAAPEAVBamoGestureServicesProxy@@XZ
    virtual BamoGestureServicesProxy * GetGestureServices();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHapticDeviceManager@BamoInputSystemProxy@@UEAAPEAVBamoHapticDeviceManagerProxy@@XZ
    virtual BamoHapticDeviceManagerProxy * GetHapticDeviceManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeatGripService@BamoInputSystemProxy@@UEAAPEAVBamoHeatGripServiceProxy@@XZ
    virtual BamoHeatGripServiceProxy * GetHeatGripService();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputDeliveryServer@BamoInputSystemProxy@@UEAAPEAVBamoInputDeliveryServerProxy@@XZ
    virtual BamoInputDeliveryServerProxy * GetInputDeliveryServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputObserverManager@BamoInputSystemProxy@@UEAAPEAVBamoInputObserverManagerProxy@@XZ
    virtual BamoInputObserverManagerProxy * GetInputObserverManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputSiteManager@BamoInputSystemProxy@@UEAAPEAVBamoInputSiteManagerProxy@@XZ
    virtual BamoInputSiteManagerProxy * GetInputSiteManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPenEventsDispatcher@BamoInputSystemProxy@@UEAAPEAVBamoPenEventsDispatcherProxy@@XZ
    virtual BamoPenEventsDispatcherProxy * GetPenEventsDispatcher();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResizeContextualProcessor@BamoInputSystemProxy@@UEAAPEAVBamoResizeContextualProcessorProxy@@XZ
    virtual BamoResizeContextualProcessorProxy * GetResizeContextualProcessor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellHandwritingHostServer@BamoInputSystemProxy@@UEAAPEAVBamoShellHandwritingHostServerProxy@@XZ
    virtual BamoShellHandwritingHostServerProxy * GetShellHandwritingHostServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemCursorController@BamoInputSystemProxy@@UEAAPEAVBamoSystemCursorControllerProxy@@XZ
    virtual BamoSystemCursorControllerProxy * GetSystemCursorController();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTestCommands@BamoInputSystemProxy@@UEAAPEAVBamoTestCommandsProxy@@XZ
    virtual BamoTestCommandsProxy * GetTestCommands();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIAHitTest@BamoInputSystemProxy@@UEAAPEAVBamoUIAHitTestProxy@@XZ
    virtual BamoUIAHitTestProxy * GetUIAHitTest();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoInputSystemProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoInputSystemProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnActivationWatcherChanged@BamoInputSystemProxy@@MEAAJXZ
    virtual long OnActivationWatcherChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnActivationWatcherChanging@BamoInputSystemProxy@@MEAAJPEAVBamoActivationWatcherProxy@@@Z
    virtual long OnActivationWatcherChanging(BamoActivationWatcherProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoInputSystemProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoInputSystemProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnControllerNavigationManagerChanged@BamoInputSystemProxy@@MEAAJXZ
    virtual long OnControllerNavigationManagerChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnControllerNavigationManagerChanging@BamoInputSystemProxy@@MEAAJPEAVBamoControllerNavigationManagerProxy@@@Z
    virtual long OnControllerNavigationManagerChanging(BamoControllerNavigationManagerProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDeviceDockServerChanged@BamoInputSystemProxy@@MEAAJXZ
    virtual long OnDeviceDockServerChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnDeviceDockServerChanging@BamoInputSystemProxy@@MEAAJPEAVBamoDeviceDockServerProxy@@@Z
    virtual long OnDeviceDockServerChanging(BamoDeviceDockServerProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnEdgyControllerServerChanged@BamoInputSystemProxy@@MEAAJXZ
    virtual long OnEdgyControllerServerChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEdgyControllerServerChanging@BamoInputSystemProxy@@MEAAJPEAVBamoEdgyControllerServerProxy@@@Z
    virtual long OnEdgyControllerServerChanging(BamoEdgyControllerServerProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGestureServicesChanged@BamoInputSystemProxy@@MEAAJXZ
    virtual long OnGestureServicesChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnGestureServicesChanging@BamoInputSystemProxy@@MEAAJPEAVBamoGestureServicesProxy@@@Z
    virtual long OnGestureServicesChanging(BamoGestureServicesProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnHapticDeviceManagerChanged@BamoInputSystemProxy@@MEAAJXZ
    virtual long OnHapticDeviceManagerChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnHapticDeviceManagerChanging@BamoInputSystemProxy@@MEAAJPEAVBamoHapticDeviceManagerProxy@@@Z
    virtual long OnHapticDeviceManagerChanging(BamoHapticDeviceManagerProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnHeatGripServiceChanged@BamoInputSystemProxy@@MEAAJXZ
    virtual long OnHeatGripServiceChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnHeatGripServiceChanging@BamoInputSystemProxy@@MEAAJPEAVBamoHeatGripServiceProxy@@@Z
    virtual long OnHeatGripServiceChanging(BamoHeatGripServiceProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInputDeliveryServerChanged@BamoInputSystemProxy@@MEAAJXZ
    virtual long OnInputDeliveryServerChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInputDeliveryServerChanging@BamoInputSystemProxy@@MEAAJPEAVBamoInputDeliveryServerProxy@@@Z
    virtual long OnInputDeliveryServerChanging(BamoInputDeliveryServerProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInputObserverManagerChanged@BamoInputSystemProxy@@MEAAJXZ
    virtual long OnInputObserverManagerChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInputObserverManagerChanging@BamoInputSystemProxy@@MEAAJPEAVBamoInputObserverManagerProxy@@@Z
    virtual long OnInputObserverManagerChanging(BamoInputObserverManagerProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInputSiteManagerChanged@BamoInputSystemProxy@@MEAAJXZ
    virtual long OnInputSiteManagerChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnInputSiteManagerChanging@BamoInputSystemProxy@@MEAAJPEAVBamoInputSiteManagerProxy@@@Z
    virtual long OnInputSiteManagerChanging(BamoInputSiteManagerProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPenEventsDispatcherChanged@BamoInputSystemProxy@@MEAAJXZ
    virtual long OnPenEventsDispatcherChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPenEventsDispatcherChanging@BamoInputSystemProxy@@MEAAJPEAVBamoPenEventsDispatcherProxy@@@Z
    virtual long OnPenEventsDispatcherChanging(BamoPenEventsDispatcherProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnResizeContextualProcessorChanged@BamoInputSystemProxy@@MEAAJXZ
    virtual long OnResizeContextualProcessorChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnResizeContextualProcessorChanging@BamoInputSystemProxy@@MEAAJPEAVBamoResizeContextualProcessorProxy@@@Z
    virtual long OnResizeContextualProcessorChanging(BamoResizeContextualProcessorProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnShellHandwritingHostServerChanged@BamoInputSystemProxy@@MEAAJXZ
    virtual long OnShellHandwritingHostServerChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnShellHandwritingHostServerChanging@BamoInputSystemProxy@@MEAAJPEAVBamoShellHandwritingHostServerProxy@@@Z
    virtual long OnShellHandwritingHostServerChanging(BamoShellHandwritingHostServerProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSystemCursorControllerChanged@BamoInputSystemProxy@@MEAAJXZ
    virtual long OnSystemCursorControllerChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnSystemCursorControllerChanging@BamoInputSystemProxy@@MEAAJPEAVBamoSystemCursorControllerProxy@@@Z
    virtual long OnSystemCursorControllerChanging(BamoSystemCursorControllerProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnTestCommandsChanged@BamoInputSystemProxy@@MEAAJXZ
    virtual long OnTestCommandsChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnTestCommandsChanging@BamoInputSystemProxy@@MEAAJPEAVBamoTestCommandsProxy@@@Z
    virtual long OnTestCommandsChanging(BamoTestCommandsProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUIAHitTestChanged@BamoInputSystemProxy@@MEAAJXZ
    virtual long OnUIAHitTestChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnUIAHitTestChanging@BamoInputSystemProxy@@MEAAJPEAVBamoUIAHitTestProxy@@@Z
    virtual long OnUIAHitTestChanging(BamoUIAHitTestProxy *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoInputSystemProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnActivationWatcherChanged@BamoInputSystemProxy@@AEAAXXZ
    void LogOnActivationWatcherChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnActivationWatcherChanging@BamoInputSystemProxy@@AEAAXPEAVBamoActivationWatcherProxy@@@Z
    void LogOnActivationWatcherChanging(BamoActivationWatcherProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnControllerNavigationManagerChanged@BamoInputSystemProxy@@AEAAXXZ
    void LogOnControllerNavigationManagerChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnControllerNavigationManagerChanging@BamoInputSystemProxy@@AEAAXPEAVBamoControllerNavigationManagerProxy@@@Z
    void LogOnControllerNavigationManagerChanging(BamoControllerNavigationManagerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnDeviceDockServerChanged@BamoInputSystemProxy@@AEAAXXZ
    void LogOnDeviceDockServerChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnDeviceDockServerChanging@BamoInputSystemProxy@@AEAAXPEAVBamoDeviceDockServerProxy@@@Z
    void LogOnDeviceDockServerChanging(BamoDeviceDockServerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnEdgyControllerServerChanged@BamoInputSystemProxy@@AEAAXXZ
    void LogOnEdgyControllerServerChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnEdgyControllerServerChanging@BamoInputSystemProxy@@AEAAXPEAVBamoEdgyControllerServerProxy@@@Z
    void LogOnEdgyControllerServerChanging(BamoEdgyControllerServerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnGestureServicesChanged@BamoInputSystemProxy@@AEAAXXZ
    void LogOnGestureServicesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnGestureServicesChanging@BamoInputSystemProxy@@AEAAXPEAVBamoGestureServicesProxy@@@Z
    void LogOnGestureServicesChanging(BamoGestureServicesProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnHapticDeviceManagerChanged@BamoInputSystemProxy@@AEAAXXZ
    void LogOnHapticDeviceManagerChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnHapticDeviceManagerChanging@BamoInputSystemProxy@@AEAAXPEAVBamoHapticDeviceManagerProxy@@@Z
    void LogOnHapticDeviceManagerChanging(BamoHapticDeviceManagerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnHeatGripServiceChanged@BamoInputSystemProxy@@AEAAXXZ
    void LogOnHeatGripServiceChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnHeatGripServiceChanging@BamoInputSystemProxy@@AEAAXPEAVBamoHeatGripServiceProxy@@@Z
    void LogOnHeatGripServiceChanging(BamoHeatGripServiceProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnInputDeliveryServerChanged@BamoInputSystemProxy@@AEAAXXZ
    void LogOnInputDeliveryServerChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnInputDeliveryServerChanging@BamoInputSystemProxy@@AEAAXPEAVBamoInputDeliveryServerProxy@@@Z
    void LogOnInputDeliveryServerChanging(BamoInputDeliveryServerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnInputObserverManagerChanged@BamoInputSystemProxy@@AEAAXXZ
    void LogOnInputObserverManagerChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnInputObserverManagerChanging@BamoInputSystemProxy@@AEAAXPEAVBamoInputObserverManagerProxy@@@Z
    void LogOnInputObserverManagerChanging(BamoInputObserverManagerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnInputSiteManagerChanged@BamoInputSystemProxy@@AEAAXXZ
    void LogOnInputSiteManagerChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnInputSiteManagerChanging@BamoInputSystemProxy@@AEAAXPEAVBamoInputSiteManagerProxy@@@Z
    void LogOnInputSiteManagerChanging(BamoInputSiteManagerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnPenEventsDispatcherChanged@BamoInputSystemProxy@@AEAAXXZ
    void LogOnPenEventsDispatcherChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnPenEventsDispatcherChanging@BamoInputSystemProxy@@AEAAXPEAVBamoPenEventsDispatcherProxy@@@Z
    void LogOnPenEventsDispatcherChanging(BamoPenEventsDispatcherProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnResizeContextualProcessorChanged@BamoInputSystemProxy@@AEAAXXZ
    void LogOnResizeContextualProcessorChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnResizeContextualProcessorChanging@BamoInputSystemProxy@@AEAAXPEAVBamoResizeContextualProcessorProxy@@@Z
    void LogOnResizeContextualProcessorChanging(BamoResizeContextualProcessorProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnShellHandwritingHostServerChanged@BamoInputSystemProxy@@AEAAXXZ
    void LogOnShellHandwritingHostServerChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnShellHandwritingHostServerChanging@BamoInputSystemProxy@@AEAAXPEAVBamoShellHandwritingHostServerProxy@@@Z
    void LogOnShellHandwritingHostServerChanging(BamoShellHandwritingHostServerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnSystemCursorControllerChanged@BamoInputSystemProxy@@AEAAXXZ
    void LogOnSystemCursorControllerChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnSystemCursorControllerChanging@BamoInputSystemProxy@@AEAAXPEAVBamoSystemCursorControllerProxy@@@Z
    void LogOnSystemCursorControllerChanging(BamoSystemCursorControllerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTestCommandsChanged@BamoInputSystemProxy@@AEAAXXZ
    void LogOnTestCommandsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnTestCommandsChanging@BamoInputSystemProxy@@AEAAXPEAVBamoTestCommandsProxy@@@Z
    void LogOnTestCommandsChanging(BamoTestCommandsProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnUIAHitTestChanged@BamoInputSystemProxy@@AEAAXXZ
    void LogOnUIAHitTestChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnUIAHitTestChanging@BamoInputSystemProxy@@AEAAXPEAVBamoUIAHitTestProxy@@@Z
    void LogOnUIAHitTestChanging(BamoUIAHitTestProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoInputSystemProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoInputSystemProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoInputSystemProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
