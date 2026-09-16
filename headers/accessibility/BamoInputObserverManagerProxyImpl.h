#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 16 member(s).
namespace BamoImpl {
class BamoInputObserverManagerProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoInputObserverManagerProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoInputObserverManagerProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoInputObserverManagerProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoInputObserverManagerProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoInputObserverManagerProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterObserverClientOfType@BamoInputObserverManagerProxyImpl@BamoImpl@@QEAAJW4InputObserverType@InputObservation@@PEAVBamoInputObserverClientPrincipal@@@Z
    long RegisterObserverClientOfType(int, BamoInputObserverClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuppressInputOfType@BamoInputObserverManagerProxyImpl@BamoImpl@@QEAAJW4InputObserverType@InputObservation@@PEAVBamoInputObserverClientPrincipal@@@Z
    long SuppressInputOfType(int, BamoInputObserverClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterObserverClientOfType@BamoInputObserverManagerProxyImpl@BamoImpl@@QEAAJW4InputObserverType@InputObservation@@PEAVBamoInputObserverClientPrincipal@@@Z
    long UnregisterObserverClientOfType(int, BamoInputObserverClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsuppressInputOfType@BamoInputObserverManagerProxyImpl@BamoImpl@@QEAAJW4InputObserverType@InputObservation@@PEAVBamoInputObserverClientPrincipal@@@Z
    long UnsuppressInputOfType(int, BamoInputObserverClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputObserverManagerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendRegisterObserverClientOfType@BamoInputObserverManagerProxyImpl@BamoImpl@@AEAAXW4InputObserverType@InputObservation@@I@Z
    void LogSendRegisterObserverClientOfType(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendSuppressInputOfType@BamoInputObserverManagerProxyImpl@BamoImpl@@AEAAXW4InputObserverType@InputObservation@@I@Z
    void LogSendSuppressInputOfType(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendUnregisterObserverClientOfType@BamoInputObserverManagerProxyImpl@BamoImpl@@AEAAXW4InputObserverType@InputObservation@@I@Z
    void LogSendUnregisterObserverClientOfType(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendUnsuppressInputOfType@BamoInputObserverManagerProxyImpl@BamoImpl@@AEAAXW4InputObserverType@InputObservation@@I@Z
    void LogSendUnsuppressInputOfType(int, unsigned int);
};
} // namespace BamoImpl
