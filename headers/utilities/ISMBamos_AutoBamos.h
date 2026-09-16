#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace Microsoft::Bamo::Lib::BamoImpl {
class ISMBamos_AutoBamos {
public:
    class BamoList_ActivatableEntityPrincipal_ProxyImpl;
    class BamoList_PenDevicePrincipal_ProxyImpl;
    class BamoList_SimpleHapticsControllerFeedback_ProxyImpl;
    class BamoList_SimpleHapticsControllerPrincipal_ProxyImpl;
    class BamoList_TouchInjectionContact_PrincipalImpl;
    class BamoList_TouchInjectionContact_StubImpl;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateList_PenDevicePrincipal_Proxy@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@YAXPEAVBaseBamoConnectionImpl@25@PEAVBamoPeer@1@PEAPEAVBamoProxy@45@@Z
    void CreateList_PenDevicePrincipal_Proxy(::Microsoft::BamoImpl::BaseBamoConnectionImpl *, WindissectOpaque *, ::Microsoft::Bamo::BamoProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateList_SimpleHapticsControllerFeedback_Proxy@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@YAXPEAVBaseBamoConnectionImpl@25@PEAVBamoPeer@1@PEAPEAVBamoProxy@45@@Z
    void CreateList_SimpleHapticsControllerFeedback_Proxy(::Microsoft::BamoImpl::BaseBamoConnectionImpl *, WindissectOpaque *, ::Microsoft::Bamo::BamoProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateList_SimpleHapticsControllerPrincipal_Proxy@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@YAXPEAVBaseBamoConnectionImpl@25@PEAVBamoPeer@1@PEAPEAVBamoProxy@45@@Z
    void CreateList_SimpleHapticsControllerPrincipal_Proxy(::Microsoft::BamoImpl::BaseBamoConnectionImpl *, WindissectOpaque *, ::Microsoft::Bamo::BamoProxy * *);
};
} // namespace Microsoft::Bamo::Lib::BamoImpl
