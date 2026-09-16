#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
namespace BamoImpl {
class BamoHeatGripServiceProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoHeatGripServiceProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoHeatGripServiceProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoHeatGripServiceProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoHeatGripServiceProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoHeatGripServiceProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestGripStatusForPanel@BamoHeatGripServiceProxyImpl@BamoImpl@@QEAAJAEBUHeatPanelInfo@@@Z
    long RequestGripStatusForPanel(HeatPanelInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoHeatGripServiceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveGripStatusForPanelReceived@BamoHeatGripServiceProxyImpl@BamoImpl@@AEAAXAEBUHeatGripReport@@@Z
    void LogReceiveGripStatusForPanelReceived(HeatGripReport const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendRequestGripStatusForPanel@BamoHeatGripServiceProxyImpl@BamoImpl@@AEAAXAEBUHeatPanelInfo@@@Z
    void LogSendRequestGripStatusForPanel(HeatPanelInfo const &);
};
} // namespace BamoImpl
