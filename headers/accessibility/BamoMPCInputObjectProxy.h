#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 27 member(s).
class BamoMPCInputObjectProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoMPCInputObjectProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCalledGetDetectedSourcesAtTimestampRecently@BamoMPCInputObjectProxy@@UEAA_NXZ
    virtual bool GetCalledGetDetectedSourcesAtTimestampRecently();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEventSubscriptions@BamoMPCInputObjectProxy@@UEAAIXZ
    virtual unsigned int GetEventSubscriptions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAugmentedInputEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@45678@_JAEBUHitObjectMsg@45678@@Z
    virtual long OnAugmentedInputEvent(MPCTraceInfo const &, int, ::Windows::UI::Input::Spatial::Internal::AugmentedInputDataMsg const &, int64_t, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@Input@UI@Windows@@AEBUHandStateMsg@45678@AEBUHitObjectMsg@45678@@Z
    virtual long OnHandEvent(MPCTraceInfo const &, int, ::Windows::UI::Input::Spatial::Internal::HandStateMsg const &, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVoiceEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@AEBW4PhrasePriv@Internal@Spatial@Input@UI@Windows@@AEBUPoseDataMsg@45678@AEBUHitObjectMsg@45678@@Z
    virtual long OnVoiceEvent(MPCTraceInfo const &, int const &, ::Windows::UI::Input::Spatial::Internal::PoseDataMsg const &, ::Windows::UI::Input::Spatial::Internal::HitObjectMsg const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoMPCInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoMPCInputObjectProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoMPCInputObjectProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoMPCInputObjectProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCalledGetDetectedSourcesAtTimestampRecentlyChanged@BamoMPCInputObjectProxy@@MEAAJXZ
    virtual long OnCalledGetDetectedSourcesAtTimestampRecentlyChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCalledGetDetectedSourcesAtTimestampRecentlyChanging@BamoMPCInputObjectProxy@@MEAAJ_N@Z
    virtual long OnCalledGetDetectedSourcesAtTimestampRecentlyChanging(bool);
    // Category: Method | Source: PE Export
    // Symbol: ?OnEventSubscriptionsChanged@BamoMPCInputObjectProxy@@MEAAJXZ
    virtual long OnEventSubscriptionsChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnEventSubscriptionsChanging@BamoMPCInputObjectProxy@@MEAAJI@Z
    virtual long OnEventSubscriptionsChanging(unsigned int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoMPCInputObjectProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnCalledGetDetectedSourcesAtTimestampRecentlyChanged@BamoMPCInputObjectProxy@@AEAAXXZ
    void LogOnCalledGetDetectedSourcesAtTimestampRecentlyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnCalledGetDetectedSourcesAtTimestampRecentlyChanging@BamoMPCInputObjectProxy@@AEAAX_N@Z
    void LogOnCalledGetDetectedSourcesAtTimestampRecentlyChanging(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnEventSubscriptionsChanged@BamoMPCInputObjectProxy@@AEAAXXZ
    void LogOnEventSubscriptionsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnEventSubscriptionsChanging@BamoMPCInputObjectProxy@@AEAAXI@Z
    void LogOnEventSubscriptionsChanging(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoMPCInputObjectProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoMPCInputObjectProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoMPCInputObjectProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
