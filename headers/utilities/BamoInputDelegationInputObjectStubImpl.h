#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
namespace BamoImpl {
class BamoInputDelegationInputObjectStubImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoInputDelegationInputObjectStubImpl@BamoImpl@@UEBAPEAVBamoStub@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoInputDelegationInputObjectStubImpl@BamoImpl@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoInputDelegationInputObjectStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoInputDelegationInputObjectStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoInputDelegationInputObjectStubImpl@BamoImpl@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessIDDelegation@BamoInputDelegationInputObjectStubImpl@BamoImpl@@QEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z
    long SetProcessIDDelegation(unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewIDDelegation@BamoInputDelegationInputObjectStubImpl@BamoImpl@@QEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z
    long SetViewIDDelegation(unsigned int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendSetProcessIDDelegation@BamoInputDelegationInputObjectStubImpl@BamoImpl@@AEAAXIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z
    void LogSendSetProcessIDDelegation(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendSetViewIDDelegation@BamoInputDelegationInputObjectStubImpl@BamoImpl@@AEAAXIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z
    void LogSendSetViewIDDelegation(unsigned int, int);
};
} // namespace BamoImpl
