#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 14 member(s).
namespace BamoImpl {
class BamoResizeContextualProcessorProxyImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelResize@BamoResizeContextualProcessorProxyImpl@BamoImpl@@QEAAJIPEAVBamoResizeControllerClientPrincipal@@@Z
    long CancelResize(unsigned int, BamoResizeControllerClientPrincipal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoResizeContextualProcessorProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoResizeContextualProcessorProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoResizeContextualProcessorProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoResizeContextualProcessorProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoResizeContextualProcessorProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@BamoResizeContextualProcessorProxyImpl@BamoImpl@@QEAAJIPEAVBamoResizeControllerClientPrincipal@@@Z
    long StartAnimation(unsigned int, BamoResizeControllerClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartResize@BamoResizeContextualProcessorProxyImpl@BamoImpl@@QEAAJIPEAVBamoResizeControllerClientPrincipal@@@Z
    long StartResize(unsigned int, BamoResizeControllerClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoResizeContextualProcessorProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendCancelResize@BamoResizeContextualProcessorProxyImpl@BamoImpl@@AEAAXII@Z
    void LogSendCancelResize(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendStartAnimation@BamoResizeContextualProcessorProxyImpl@BamoImpl@@AEAAXII@Z
    void LogSendStartAnimation(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendStartResize@BamoResizeContextualProcessorProxyImpl@BamoImpl@@AEAAXII@Z
    void LogSendStartResize(unsigned int, unsigned int);
};
} // namespace BamoImpl
