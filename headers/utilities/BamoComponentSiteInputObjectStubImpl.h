#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 7 member(s).
namespace BamoImpl {
class BamoComponentSiteInputObjectStubImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoComponentSiteInputObjectStubImpl@BamoImpl@@UEBAPEAVBamoStub@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoComponentSiteInputObjectStubImpl@BamoImpl@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoComponentSiteInputObjectStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoComponentSiteInputObjectStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoComponentSiteInputObjectStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
};
} // namespace BamoImpl
