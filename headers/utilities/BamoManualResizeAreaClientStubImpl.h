#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
namespace BamoImpl {
class BamoManualResizeAreaClientStubImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoManualResizeAreaClientStubImpl@BamoImpl@@UEBAPEAVBamoStub@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoManualResizeAreaClientStubImpl@BamoImpl@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoManualResizeAreaClientStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoManualResizeAreaClientStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoManualResizeAreaClientStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartManualResize@BamoManualResizeAreaClientStubImpl@BamoImpl@@QEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@@Z
    long StartManualResize(unsigned int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendStartManualResize@BamoManualResizeAreaClientStubImpl@BamoImpl@@AEAAXIW4InputResizeRegion@Input@Internal@UI@Windows@@@Z
    void LogSendStartManualResize(unsigned int, int);
};
} // namespace BamoImpl
