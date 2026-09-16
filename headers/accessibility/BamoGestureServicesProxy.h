#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class BamoGestureServicesProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoGestureServicesProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApproveProcessesForAnimation@BamoGestureServicesProxy@@UEAAJPEBIIPEAVBamoDragManagerClientPrincipal@@@Z
    virtual long ApproveProcessesForAnimation(unsigned int const *, unsigned int, BamoDragManagerClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelOperation@BamoGestureServicesProxy@@UEAAJIPEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z
    virtual long CancelOperation(unsigned int, BamoDragManagerClientPrincipal *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessResult@BamoGestureServicesProxy@@UEAAJIAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientPrincipal@@@Z
    virtual long ProcessResult(unsigned int, ::Windows::UI::Internal::Input::DragOperationResult const &, BamoDragManagerClientPrincipal *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoGestureServicesProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterGestureDragClient@BamoGestureServicesProxy@@UEAAJ_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@3456@PEAVBamoDragManagerClientPrincipal@@@Z
    virtual long RegisterGestureDragClient(uint64_t, int, int, BamoDragManagerClientPrincipal *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoGestureServicesProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevokeProcessesForAnimation@BamoGestureServicesProxy@@UEAAJPEBIIPEAVBamoDragManagerClientPrincipal@@@Z
    virtual long RevokeProcessesForAnimation(unsigned int const *, unsigned int, BamoDragManagerClientPrincipal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@BamoGestureServicesProxy@@UEAAJIPEBQEAVBamoAnimationTargetClientPrincipal@@IPEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z
    virtual long StartAnimation(unsigned int, BamoAnimationTargetClientPrincipal * const *, unsigned int, BamoDragManagerClientPrincipal *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartOperation@BamoGestureServicesProxy@@UEAAJI_N_K1PEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z
    virtual long StartOperation(unsigned int, bool, uint64_t, uint64_t, BamoDragManagerClientPrincipal *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterGestureDragClient@BamoGestureServicesProxy@@UEAAJ_KPEAVBamoDragManagerClientPrincipal@@@Z
    virtual long UnregisterGestureDragClient(uint64_t, BamoDragManagerClientPrincipal *);
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoGestureServicesProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoGestureServicesProxy@@MEAAJXZ
    virtual long OnCallProlog();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoGestureServicesProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoGestureServicesProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoGestureServicesProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoGestureServicesProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
