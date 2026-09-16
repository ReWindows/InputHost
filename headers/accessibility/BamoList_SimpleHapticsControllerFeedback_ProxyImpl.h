#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 12 member(s).
namespace Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos {
class BamoList_SimpleHapticsControllerFeedback_ProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoList_SimpleHapticsControllerFeedback_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEBAPEAVBamoProxy@56@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoList_SimpleHapticsControllerFeedback_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoList_SimpleHapticsControllerFeedback_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoList_SimpleHapticsControllerFeedback_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoList_SimpleHapticsControllerFeedback_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@36@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoList_SimpleHapticsControllerFeedback_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXPEAVBamoProxyImpl@36@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveRemoteClear@BamoList_SimpleHapticsControllerFeedback_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@AEAAXXZ
    void LogReceiveRemoteClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveRemoteInsert@BamoList_SimpleHapticsControllerFeedback_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@AEAAXIAEBUSimpleHapticsControllerFeedback@@@Z
    void LogReceiveRemoteInsert(unsigned int, SimpleHapticsControllerFeedback const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveRemoteRemove@BamoList_SimpleHapticsControllerFeedback_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@AEAAXI@Z
    void LogReceiveRemoteRemove(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveRemoteReplace@BamoList_SimpleHapticsControllerFeedback_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@AEAAXIAEBUSimpleHapticsControllerFeedback@@@Z
    void LogReceiveRemoteReplace(unsigned int, SimpleHapticsControllerFeedback const &);
};
} // namespace Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos
