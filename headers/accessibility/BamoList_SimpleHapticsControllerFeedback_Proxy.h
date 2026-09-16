#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 13 member(s).
namespace Microsoft::Bamo::Lib::ISMBamos_AutoBamos {
class BamoList_SimpleHapticsControllerFeedback_Proxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoList_SimpleHapticsControllerFeedback_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnection@BamoList_SimpleHapticsControllerFeedback_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ
    ::ISMBamos_AutoBamos::BamoConnection * GetConnection() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoList_SimpleHapticsControllerFeedback_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoList_SimpleHapticsControllerFeedback_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoList_SimpleHapticsControllerFeedback_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoList_SimpleHapticsControllerFeedback_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@MEAAJXZ
    virtual long OnCallProlog();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoList_SimpleHapticsControllerFeedback_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@EEBAPEAVBamoProxyImpl@BamoImpl@5@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoList_SimpleHapticsControllerFeedback_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoList_SimpleHapticsControllerFeedback_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoList_SimpleHapticsControllerFeedback_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
} // namespace Microsoft::Bamo::Lib::ISMBamos_AutoBamos
