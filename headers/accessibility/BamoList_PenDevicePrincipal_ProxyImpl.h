#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 14 member(s).
namespace Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos {
class BamoList_PenDevicePrincipal_ProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoList_PenDevicePrincipal_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEBAPEAVBamoProxy@56@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoList_PenDevicePrincipal_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoList_PenDevicePrincipal_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoList_PenDevicePrincipal_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoList_PenDevicePrincipal_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@36@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteInsert@BamoList_PenDevicePrincipal_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJII@Z
    long RemoteInsert(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteReplace@BamoList_PenDevicePrincipal_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJII@Z
    long RemoteReplace(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoList_PenDevicePrincipal_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXPEAVBamoProxyImpl@36@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveRemoteClear@BamoList_PenDevicePrincipal_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@AEAAXXZ
    void LogReceiveRemoteClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveRemoteInsert@BamoList_PenDevicePrincipal_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@AEAAXIPEAVBamoPenDeviceProxy@@@Z
    void LogReceiveRemoteInsert(unsigned int, BamoPenDeviceProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveRemoteRemove@BamoList_PenDevicePrincipal_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@AEAAXI@Z
    void LogReceiveRemoteRemove(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveRemoteReplace@BamoList_PenDevicePrincipal_ProxyImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@AEAAXIPEAVBamoPenDeviceProxy@@@Z
    void LogReceiveRemoteReplace(unsigned int, BamoPenDeviceProxy *);
};
} // namespace Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos
