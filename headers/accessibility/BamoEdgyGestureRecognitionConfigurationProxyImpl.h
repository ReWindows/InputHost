#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 12 member(s).
namespace BamoImpl {
class BamoEdgyGestureRecognitionConfigurationProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureDirection@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NPEBUVector2@Numerics@Foundation@Windows@@@Z
    long UpdateGestureDirection(bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureMinimumDistanceInHimetrics@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateGestureMinimumDistanceInHimetrics(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGestureTimeoutInMilliseconds@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NI@Z
    long UpdateGestureTimeoutInMilliseconds(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOrientationBiasInDegrees@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NM@Z
    long UpdateOrientationBiasInDegrees(bool, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
};
} // namespace BamoImpl
