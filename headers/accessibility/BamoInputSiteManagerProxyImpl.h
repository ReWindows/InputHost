#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 12 member(s).
namespace BamoImpl {
class BamoInputSiteManagerProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoInputSiteManagerProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoInputSiteManagerProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoInputSiteManagerProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoInputSiteManagerProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoInputSiteManagerProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInputSiteElement@BamoInputSiteManagerProxyImpl@BamoImpl@@QEAAJPEAVBamoInputSiteElementPrincipal@@@Z
    long RegisterInputSiteElement(BamoInputSiteElementPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInputSiteElementWithHint@BamoInputSiteManagerProxyImpl@BamoImpl@@QEAAJPEAVBamoInputSiteElementPrincipal@@AEBUInputSiteId@@@Z
    long RegisterInputSiteElementWithHint(BamoInputSiteElementPrincipal *, InputSiteId const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteManagerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendRegisterInputSiteElement@BamoInputSiteManagerProxyImpl@BamoImpl@@AEAAXI@Z
    void LogSendRegisterInputSiteElement(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendRegisterInputSiteElementWithHint@BamoInputSiteManagerProxyImpl@BamoImpl@@AEAAXIAEBUInputSiteId@@@Z
    void LogSendRegisterInputSiteElementWithHint(unsigned int, InputSiteId const &);
};
} // namespace BamoImpl
