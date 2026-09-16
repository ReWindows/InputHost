#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
namespace BamoImpl {
class BamoActivationControllerStubImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoActivationControllerStubImpl@BamoImpl@@UEBAPEAVBamoStub@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoActivationControllerStubImpl@BamoImpl@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoActivationControllerStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoActivationControllerStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoActivationControllerStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestActivation@BamoActivationControllerStubImpl@BamoImpl@@QEAAJXZ
    long RequestActivation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendRequestActivation@BamoActivationControllerStubImpl@BamoImpl@@AEAAXXZ
    void LogSendRequestActivation();
};
} // namespace BamoImpl
