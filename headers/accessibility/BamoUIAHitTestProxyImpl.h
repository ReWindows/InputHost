#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
namespace BamoImpl {
class BamoUIAHitTestProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoUIAHitTestProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoUIAHitTestProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoUIAHitTestProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoUIAHitTestProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoUIAHitTestProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestUIAHitTest@BamoUIAHitTestProxyImpl@BamoImpl@@QEAAJII@Z
    long RequestUIAHitTest(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoUIAHitTestProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveUIAHitTestResponse@BamoUIAHitTestProxyImpl@BamoImpl@@AEAAXAEBU_GUID@@@Z
    void LogReceiveUIAHitTestResponse(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendRequestUIAHitTest@BamoUIAHitTestProxyImpl@BamoImpl@@AEAAXII@Z
    void LogSendRequestUIAHitTest(unsigned int, unsigned int);
};
} // namespace BamoImpl
