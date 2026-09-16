#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 23 member(s).
namespace Microsoft::Bamo::Lib::ISMBamos_AutoBamos {
class BamoList_TouchInjectionContact_Principal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRemoteClear@BamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJXZ
    virtual long BroadcastRemoteClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRemoteInsert@BamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z
    virtual long BroadcastRemoteInsert(unsigned int, ::Windows::UI::Internal::Input::TouchInjectionContact const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRemoteRemove@BamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJI@Z
    virtual long BroadcastRemoteRemove(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastRemoteReplace@BamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z
    virtual long BroadcastRemoteReplace(unsigned int, ::Windows::UI::Internal::Input::TouchInjectionContact const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@MEAAJPEAVBamoPeer@2@PEAPEAVBamoList_TouchInjectionContact_Stub@2345@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, ::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Stub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@MEAAJPEAVBamoList_TouchInjectionContact_Stub@2345@@Z
    virtual long InitializeProxyUnderLock(::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Stub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@MEAAJPEAVBamoList_TouchInjectionContact_Stub@2345@@Z
    virtual long OnPropertiesRefreshed(::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Stub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@MEAAJPEAVBamoList_TouchInjectionContact_Stub@2345@@Z
    virtual long OnStubConnectedUnderLock(::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Stub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@MEAAJPEAVBamoList_TouchInjectionContact_Stub@2345@@Z
    virtual long OnStubDisconnected(::Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Stub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoList_TouchInjectionContact_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@EEBAPEAVBamoPrincipalImpl@BamoImpl@5@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
} // namespace Microsoft::Bamo::Lib::ISMBamos_AutoBamos
