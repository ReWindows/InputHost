#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 14 member(s).
namespace BamoImpl {
class BamoPenEventsDispatcherProxyImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachClient@BamoPenEventsDispatcherProxyImpl@BamoImpl@@QEAAJPEAVBamoPenEventsClientPrincipal@@@Z
    long AttachClient(BamoPenEventsClientPrincipal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoPenEventsDispatcherProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoPenEventsDispatcherProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoPenEventsDispatcherProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoPenEventsDispatcherProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoPenEventsDispatcherProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetButtonRoutingPolicy@BamoPenEventsDispatcherProxyImpl@BamoImpl@@QEAAJW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z
    long SetButtonRoutingPolicy(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDockRoutingPolicy@BamoPenEventsDispatcherProxyImpl@BamoImpl@@QEAAJW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z
    long SetDockRoutingPolicy(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoPenEventsDispatcherProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendAttachClient@BamoPenEventsDispatcherProxyImpl@BamoImpl@@AEAAXI@Z
    void LogSendAttachClient(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendSetButtonRoutingPolicy@BamoPenEventsDispatcherProxyImpl@BamoImpl@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z
    void LogSendSetButtonRoutingPolicy(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendSetDockRoutingPolicy@BamoPenEventsDispatcherProxyImpl@BamoImpl@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z
    void LogSendSetDockRoutingPolicy(int);
};
} // namespace BamoImpl
