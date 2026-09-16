#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 12 member(s).
namespace BamoImpl {
class BamoInputSpacePayloadProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoInputSpacePayloadProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputSpace@BamoInputSpacePayloadProxyImpl@BamoImpl@@QEAAJ_NPEBUINPUT_SPACE@@@Z
    long UpdateInputSpace(bool, INPUT_SPACE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegions@BamoInputSpacePayloadProxyImpl@BamoImpl@@QEAAJ_NPEBUINPUT_SPACE_REGION@@I@Z
    long UpdateRegions(bool, INPUT_SPACE_REGION const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAA@XZ
    virtual ~BamoInputSpacePayloadProxyImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssignRegions@BamoInputSpacePayloadProxyImpl@BamoImpl@@AEAAJPEBUINPUT_SPACE_REGION@@I@Z
    long AssignRegions(INPUT_SPACE_REGION const *, unsigned int);
};
} // namespace BamoImpl
