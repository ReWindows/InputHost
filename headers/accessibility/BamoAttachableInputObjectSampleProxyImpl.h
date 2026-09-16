#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
namespace BamoImpl {
class BamoAttachableInputObjectSampleProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoAttachableInputObjectSampleProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@BamoAttachableInputObjectSampleProxyImpl@BamoImpl@@QEAAJ_J0PEBG@Z
    long OnInput(int64_t, int64_t, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoAttachableInputObjectSampleProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoAttachableInputObjectSampleProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoAttachableInputObjectSampleProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoAttachableInputObjectSampleProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEnabled@BamoAttachableInputObjectSampleProxyImpl@BamoImpl@@QEAAJ_N0@Z
    long UpdateEnabled(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoAttachableInputObjectSampleProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendOnInput@BamoAttachableInputObjectSampleProxyImpl@BamoImpl@@AEAAX_J0PEBG@Z
    void LogSendOnInput(int64_t, int64_t, unsigned short const *);
};
} // namespace BamoImpl
