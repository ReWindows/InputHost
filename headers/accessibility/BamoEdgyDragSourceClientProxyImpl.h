#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 13 member(s).
namespace BamoImpl {
class BamoEdgyDragSourceClientProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateControlPoints@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@I@Z
    long UpdateControlPoints(bool, tagPOINT const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureRecognitionConfiguration@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateGestureRecognitionConfiguration(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateId@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z
    long UpdateId(bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateType@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z
    long UpdateType(bool, _GUID const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ
    virtual ~BamoEdgyDragSourceClientProxyImpl();
};
} // namespace BamoImpl
