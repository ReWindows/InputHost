#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 20 member(s).
namespace BamoImpl {
class BamoResizeControllerClientProxyImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationStarted@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJI_K0@Z
    long AnimationStarted(unsigned int, uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoResizeControllerClientProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoResizeControllerClientProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoResizeControllerClientProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoResizeControllerClientProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoResizeControllerClientProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeCancelled@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@4567@AEBUtagPOINT@@2@Z
    long ResizeCancelled(unsigned int, int, int, tagPOINT const &, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeEnded@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@0@Z
    long ResizeEnded(unsigned int, tagPOINT const &, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeInProgress@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@0@Z
    long ResizeInProgress(unsigned int, tagPOINT const &, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeStarted@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@4567@AEBUtagPOINT@@2@Z
    long ResizeStarted(unsigned int, int, int, tagPOINT const &, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHitTestConfiguration@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJ_NW4HitTestConfiguration@Input@Internal@UI@Windows@@@Z
    long UpdateHitTestConfiguration(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoResizeControllerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateType@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z
    long UpdateType(bool, _GUID const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendAnimationStarted@BamoResizeControllerClientProxyImpl@BamoImpl@@AEAAXI_K0@Z
    void LogSendAnimationStarted(unsigned int, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendResizeCancelled@BamoResizeControllerClientProxyImpl@BamoImpl@@AEAAXIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@4567@AEBUtagPOINT@@2@Z
    void LogSendResizeCancelled(unsigned int, int, int, tagPOINT const &, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendResizeEnded@BamoResizeControllerClientProxyImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@0@Z
    void LogSendResizeEnded(unsigned int, tagPOINT const &, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendResizeInProgress@BamoResizeControllerClientProxyImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@0@Z
    void LogSendResizeInProgress(unsigned int, tagPOINT const &, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendResizeStarted@BamoResizeControllerClientProxyImpl@BamoImpl@@AEAAXIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@4567@AEBUtagPOINT@@2@Z
    void LogSendResizeStarted(unsigned int, int, int, tagPOINT const &, tagPOINT const &);
};
} // namespace BamoImpl
