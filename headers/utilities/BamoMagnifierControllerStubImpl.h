#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
namespace BamoImpl {
class BamoMagnifierControllerStubImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcknowledgeGestureReceived@BamoMagnifierControllerStubImpl@BamoImpl@@QEAAJXZ
    long AcknowledgeGestureReceived();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoMagnifierControllerStubImpl@BamoImpl@@UEBAPEAVBamoStub@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoMagnifierControllerStubImpl@BamoImpl@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoMagnifierControllerStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoMagnifierControllerStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoMagnifierControllerStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendAcknowledgeGestureReceived@BamoMagnifierControllerStubImpl@BamoImpl@@AEAAXXZ
    void LogSendAcknowledgeGestureReceived();
};
} // namespace BamoImpl
