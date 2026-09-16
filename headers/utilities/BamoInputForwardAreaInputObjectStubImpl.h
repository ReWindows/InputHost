#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 7 member(s).
namespace BamoImpl {
class BamoInputForwardAreaInputObjectStubImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoInputForwardAreaInputObjectStubImpl@BamoImpl@@UEBAPEAVBamoStub@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoInputForwardAreaInputObjectStubImpl@BamoImpl@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoInputForwardAreaInputObjectStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoInputForwardAreaInputObjectStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoInputForwardAreaInputObjectStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
};
} // namespace BamoImpl
