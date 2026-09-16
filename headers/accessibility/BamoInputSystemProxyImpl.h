#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 25 member(s).
namespace BamoImpl {
class BamoInputSystemProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoInputSystemProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoInputSystemProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoInputSystemProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoInputSystemProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoInputSystemProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActivationWatcher@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateActivationWatcher(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateControllerNavigationManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateControllerNavigationManager(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDeviceDockServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateDeviceDockServer(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEdgyControllerServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateEdgyControllerServer(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureServices@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateGestureServices(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHapticDeviceManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateHapticDeviceManager(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeatGripService@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateHeatGripService(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputDeliveryServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateInputDeliveryServer(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputObserverManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateInputObserverManager(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputSiteManager@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateInputSiteManager(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePenEventsDispatcher@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdatePenEventsDispatcher(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateResizeContextualProcessor@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateResizeContextualProcessor(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShellHandwritingHostServer@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateShellHandwritingHostServer(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSystemProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSystemCursorController@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateSystemCursorController(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTestCommands@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateTestCommands(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUIAHitTest@BamoInputSystemProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateUIAHitTest(bool, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ
    virtual ~BamoInputSystemProxyImpl();
};
} // namespace BamoImpl
