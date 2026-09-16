#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 18 member(s).
namespace BamoImpl {
class BamoMPCManagerProxyImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableGamepadExclusivity@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJXZ
    long DisableGamepadExclusivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableGamepadExclusivityForProcess@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJI@Z
    long EnableGamepadExclusivityForProcess(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForcePrimaryInputType@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJW4InputType@@@Z
    long ForcePrimaryInputType(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoMPCManagerProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GiveSpatialDataToPID@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJI@Z
    long GiveSpatialDataToPID(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoMPCManagerProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoMPCManagerProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoMPCManagerProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoMPCManagerProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResendGamepadIsSupportedForProcess@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJI@Z
    long ResendGamepadIsSupportedForProcess(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConvertGraspToSystemGesture@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long SetConvertGraspToSystemGesture(bool, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOnlyMixedWorldRouting@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJ_N@Z
    long SetOnlyMixedWorldRouting(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerHomeGesture@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJW4InputType@@I@Z
    long TriggerHomeGesture(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMPCConstantManagerClient@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateMPCConstantManagerClient(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCManagerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoMPCManagerProxyImpl@BamoImpl@@UEAA@XZ
    virtual ~BamoMPCManagerProxyImpl();
};
} // namespace BamoImpl
