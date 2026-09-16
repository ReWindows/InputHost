#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
namespace BamoImpl {
class BamoInputInjectionClientStubImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoInputInjectionClientStubImpl@BamoImpl@@UEBAPEAVBamoStub@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoInputInjectionClientStubImpl@BamoImpl@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InjectTouchInput@BamoInputInjectionClientStubImpl@BamoImpl@@QEAAJPEAVBamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z
    long InjectTouchInput(::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Principal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoInputInjectionClientStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoInputInjectionClientStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoInputInjectionClientStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendInjectTouchInput@BamoInputInjectionClientStubImpl@BamoImpl@@AEAAXI@Z
    void LogSendInjectTouchInput(unsigned int);
};
} // namespace BamoImpl
