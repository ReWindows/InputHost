#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 14 member(s).
namespace BamoImpl {
class BamoControllerNavigationManagerProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoControllerNavigationManagerProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoControllerNavigationManagerProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoControllerNavigationManagerProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoControllerNavigationManagerProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoControllerNavigationManagerProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterClient@BamoControllerNavigationManagerProxyImpl@BamoImpl@@QEAAJPEAVBamoControllerNavigationClientPrincipal@@@Z
    long RegisterClient(BamoControllerNavigationClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterOverride@BamoControllerNavigationManagerProxyImpl@BamoImpl@@QEAAJPEAVBamoControllerNavigationOverridePrincipal@@@Z
    long RegisterOverride(BamoControllerNavigationOverridePrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEnabled@BamoControllerNavigationManagerProxyImpl@BamoImpl@@QEAAJ_N0@Z
    long UpdateEnabled(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaused@BamoControllerNavigationManagerProxyImpl@BamoImpl@@QEAAJ_N0@Z
    long UpdatePaused(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoControllerNavigationManagerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendRegisterClient@BamoControllerNavigationManagerProxyImpl@BamoImpl@@AEAAXI@Z
    void LogSendRegisterClient(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendRegisterOverride@BamoControllerNavigationManagerProxyImpl@BamoImpl@@AEAAXI@Z
    void LogSendRegisterOverride(unsigned int);
};
} // namespace BamoImpl
