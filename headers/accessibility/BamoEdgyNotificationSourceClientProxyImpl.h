#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 13 member(s).
namespace BamoImpl {
class BamoEdgyNotificationSourceClientProxyImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EdgyRecognized@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJAEBUPoint@Foundation@Windows@@@Z
    long EdgyRecognized(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateGestureRecognitionConfiguration(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRoutingMode@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ_NW4EdgyRoutingMode@Input@Internal@UI@Windows@@@Z
    long UpdateRoutingMode(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@UEAA@XZ
    virtual ~BamoEdgyNotificationSourceClientProxyImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendEdgyRecognized@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@AEAAXAEBUPoint@Foundation@Windows@@@Z
    void LogSendEdgyRecognized(WindissectOpaque const &);
};
} // namespace BamoImpl
