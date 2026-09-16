#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
namespace BamoImpl {
class BamoSystemButtonEventControllerStubImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoSystemButtonEventControllerStubImpl@BamoImpl@@UEBAPEAVBamoStub@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoSystemButtonEventControllerStubImpl@BamoImpl@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoSystemButtonEventControllerStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContinueProcessing@BamoSystemButtonEventControllerStubImpl@BamoImpl@@QEAAJAEBUSystemButtonEventInfo@@@Z
    long OnContinueProcessing(SystemButtonEventInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoSystemButtonEventControllerStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoSystemButtonEventControllerStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendOnContinueProcessing@BamoSystemButtonEventControllerStubImpl@BamoImpl@@AEAAXAEBUSystemButtonEventInfo@@@Z
    void LogSendOnContinueProcessing(SystemButtonEventInfo const &);
};
} // namespace BamoImpl
