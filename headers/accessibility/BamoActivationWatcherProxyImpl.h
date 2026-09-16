#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 14 member(s).
namespace BamoImpl {
class BamoActivationWatcherProxyImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivationRequested@BamoActivationWatcherProxyImpl@BamoImpl@@QEAAJII@Z
    long ActivationRequested(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoActivationWatcherProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoActivationWatcherProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoActivationWatcherProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoActivationWatcherProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoActivationWatcherProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActivatableEntityList@BamoActivationWatcherProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateActivatableEntityList(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActivatedEntity@BamoActivationWatcherProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateActivatedEntity(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoActivationWatcherProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTopLevelActivatedEntity@BamoActivationWatcherProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateTopLevelActivatedEntity(bool, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoActivationWatcherProxyImpl@BamoImpl@@UEAA@XZ
    virtual ~BamoActivationWatcherProxyImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveActivationRequested@BamoActivationWatcherProxyImpl@BamoImpl@@AEAAXPEAVBamoActivatableEntityProxy@@0@Z
    void LogReceiveActivationRequested(BamoActivatableEntityProxy *, BamoActivatableEntityProxy *);
};
} // namespace BamoImpl
