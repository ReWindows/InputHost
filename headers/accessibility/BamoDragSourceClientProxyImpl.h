#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 13 member(s).
namespace BamoImpl {
class BamoDragSourceClientProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoDragSourceClientProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoDragSourceClientProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoDragSourceClientProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoDragSourceClientProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoDragSourceClientProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateControlPoints@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@I@Z
    long UpdateControlPoints(bool, tagPOINT const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHitTestConfiguration@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NW4HitTestConfiguration@Input@Internal@UI@Windows@@@Z
    long UpdateHitTestConfiguration(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateId@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z
    long UpdateId(bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDragSourceClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateType@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z
    long UpdateType(bool, _GUID const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ
    virtual ~BamoDragSourceClientProxyImpl();
};
} // namespace BamoImpl
