#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 12 member(s).
namespace BamoImpl {
class BamoDockDeviceProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoDockDeviceProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoDockDeviceProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoDockDeviceProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoDockDeviceProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoDockDeviceProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDisplayOcclusionLogicalRange@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@@Z
    long UpdateDisplayOcclusionLogicalRange(bool, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDisplayOcclusionSupported@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_N0@Z
    long UpdateDisplayOcclusionSupported(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePanelId@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z
    long UpdatePanelId(bool, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDockDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoDockDeviceProxyImpl@BamoImpl@@UEAA@XZ
    virtual ~BamoDockDeviceProxyImpl();
};
} // namespace BamoImpl
