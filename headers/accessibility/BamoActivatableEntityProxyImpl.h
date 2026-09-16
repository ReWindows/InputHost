#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 13 member(s).
namespace BamoImpl {
class BamoActivatableEntityProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoActivatableEntityProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoActivatableEntityProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoActivatableEntityProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoActivatableEntityProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoActivatableEntityProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLuid@BamoActivatableEntityProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z
    long UpdateLuid(bool, _LUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateParentId@BamoActivatableEntityProxyImpl@BamoImpl@@QEAAJ_N_K@Z
    long UpdateParentId(bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProcessId@BamoActivatableEntityProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateProcessId(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoActivatableEntityProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThreadId@BamoActivatableEntityProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateThreadId(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowId@BamoActivatableEntityProxyImpl@BamoImpl@@QEAAJ_N_K@Z
    long UpdateWindowId(bool, uint64_t);
};
} // namespace BamoImpl
