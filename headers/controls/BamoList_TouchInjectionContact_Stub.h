#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 13 member(s).
namespace Microsoft::Bamo::Lib::ISMBamos_AutoBamos {
class BamoList_TouchInjectionContact_Stub {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoList_TouchInjectionContact_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoList_TouchInjectionContact_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoList_TouchInjectionContact_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteClear@BamoList_TouchInjectionContact_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJXZ
    virtual long RemoteClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteInsert@BamoList_TouchInjectionContact_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z
    virtual long RemoteInsert(unsigned int, ::Windows::UI::Internal::Input::TouchInjectionContact const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteRemove@BamoList_TouchInjectionContact_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJI@Z
    virtual long RemoteRemove(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteReplace@BamoList_TouchInjectionContact_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z
    virtual long RemoteReplace(unsigned int, ::Windows::UI::Internal::Input::TouchInjectionContact const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoList_TouchInjectionContact_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@EEBAPEAVBamoStubImpl@BamoImpl@5@XZ
    virtual ::Microsoft::BamoImpl::BamoStubImpl * GetImpl() const;
};
} // namespace Microsoft::Bamo::Lib::ISMBamos_AutoBamos
