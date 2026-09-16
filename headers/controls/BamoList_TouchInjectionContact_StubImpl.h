#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
namespace Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos {
class BamoList_TouchInjectionContact_StubImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoList_TouchInjectionContact_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEBAPEAVBamoStub@56@XZ
    virtual ::Microsoft::Bamo::BamoStub * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxyUnderLockThunk@BamoList_TouchInjectionContact_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJXZ
    virtual long InitializeProxyUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedUnderLockThunk@BamoList_TouchInjectionContact_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJXZ
    virtual long OnConnectedUnderLockThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedThunk@BamoList_TouchInjectionContact_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJXZ
    virtual long OnDisconnectedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedThunk@BamoList_TouchInjectionContact_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAJXZ
    virtual long OnPropertiesRefreshedThunk();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteClear@BamoList_TouchInjectionContact_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJXZ
    long RemoteClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteInsert@BamoList_TouchInjectionContact_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z
    long RemoteInsert(unsigned int, ::Windows::UI::Internal::Input::TouchInjectionContact const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteRemove@BamoList_TouchInjectionContact_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJI@Z
    long RemoteRemove(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteReplace@BamoList_TouchInjectionContact_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z
    long RemoteReplace(unsigned int, ::Windows::UI::Internal::Input::TouchInjectionContact const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendRemoteClear@BamoList_TouchInjectionContact_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@AEAAXXZ
    void LogSendRemoteClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendRemoteInsert@BamoList_TouchInjectionContact_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@AEAAXIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z
    void LogSendRemoteInsert(unsigned int, ::Windows::UI::Internal::Input::TouchInjectionContact const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendRemoteRemove@BamoList_TouchInjectionContact_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@AEAAXI@Z
    void LogSendRemoteRemove(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSendRemoteReplace@BamoList_TouchInjectionContact_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@AEAAXIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z
    void LogSendRemoteReplace(unsigned int, ::Windows::UI::Internal::Input::TouchInjectionContact const &);
};
} // namespace Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos
