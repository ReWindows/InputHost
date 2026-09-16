#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 16 member(s).
namespace BamoImpl {
class BamoMPCConstantManagerClientProxyImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveInputTypeList@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJPEAVBamoAsyncResult_string_Principal@@@Z
    long GetActiveInputTypeList(BamoAsyncResult_string_Principal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConstant@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEBGPEAVBamoAsyncResult_PROPVARIANT_Principal@@@Z
    long GetConstant(int, unsigned short const *, BamoAsyncResult_PROPVARIANT_Principal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConstantsForInputType@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEAVBamoAsyncResult_string_Principal@@@Z
    long GetConstantsForInputType(int, BamoAsyncResult_string_Principal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEBAPEAVBamoProxy@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoProxy * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipal@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPlaceholderProxyReset@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXXZ
    virtual void PushStateToPrincipalOnPlaceholderProxyReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToPrincipalOnPropertiesRefresh@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z
    virtual void PushStateToPrincipalOnPropertiesRefresh(IMessageCallSendHost *, ::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllConstantsForInputTypeToDefault@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEAVBamoAsyncHRESULTPrincipal@@@Z
    long SetAllConstantsForInputTypeToDefault(int, BamoAsyncHRESULTPrincipal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConstant@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTPrincipal@@@Z
    long SetConstant(int, unsigned short const *, tagPROPVARIANT const &, BamoAsyncHRESULTPrincipal *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConstantToDefault@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEBGPEAVBamoAsyncHRESULTPrincipal@@@Z
    long SetConstantToDefault(int, unsigned short const *, BamoAsyncHRESULTPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z
    virtual void UpdateStateOfProxyOnPlaceholderProxyHookUp(::Microsoft::BamoImpl::BamoProxyImpl *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA@XZ
    virtual ~BamoMPCConstantManagerClientProxyImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCallbacksRemoteCache@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@AEAAXXZ
    void UpdateCallbacksRemoteCache();
};
} // namespace BamoImpl
