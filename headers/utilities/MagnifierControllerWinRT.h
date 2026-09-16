#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 23 member(s).
class MagnifierControllerWinRT {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MagnifierControllerWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@MagnifierControllerWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MagnifierControllerWinRT@@QEAA@XZ
    MagnifierControllerWinRT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@MagnifierControllerWinRT@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PanGestureDetected@MagnifierControllerWinRT@@UEAAJPEAVBamoMagnifierControllerPrincipal@@PEAVBamoMagnifierControllerStub@@W4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@8@@Z
    virtual long PanGestureDetected(BamoMagnifierControllerPrincipal *, BamoMagnifierControllerStub *, int, unsigned int, WindissectOpaque const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MagnifierControllerWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MagnifierControllerWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MagnifierControllerWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleDetected@MagnifierControllerWinRT@@UEAAJPEAVBamoMagnifierControllerPrincipal@@PEAVBamoMagnifierControllerStub@@AEBUPoint@Foundation@Windows@@@Z
    virtual long ToggleDetected(BamoMagnifierControllerPrincipal *, BamoMagnifierControllerStub *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZoomGestureDetected@MagnifierControllerWinRT@@UEAAJPEAVBamoMagnifierControllerPrincipal@@PEAVBamoMagnifierControllerStub@@W4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@8@@Z
    virtual long ZoomGestureDetected(BamoMagnifierControllerPrincipal *, BamoMagnifierControllerStub *, int, unsigned int, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MagnifierControllerWinRT@@UEAA@XZ
    virtual ~MagnifierControllerWinRT();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPanDetectedHandler@MagnifierControllerWinRT@@AEAAJPEAU?$ITypedEventHandler@PEAVMagnifierController@Input@Internal@UI@Windows@@PEAVMagnifierGestureEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddPanDetectedHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToggleDetectedHandler@MagnifierControllerWinRT@@AEAAJPEAU?$ITypedEventHandler@PEAVMagnifierController@Input@Internal@UI@Windows@@PEAVMagnifierToggleEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddToggleDetectedHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddZoomDetectedHandler@MagnifierControllerWinRT@@AEAAJPEAU?$ITypedEventHandler@PEAVMagnifierController@Input@Internal@UI@Windows@@PEAVMagnifierGestureEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddZoomDetectedHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGesturesEnabled@MagnifierControllerWinRT@@AEBAJPEAE@Z
    long GetGesturesEnabled(unsigned char *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToggleEnabled@MagnifierControllerWinRT@@AEBAJPEAE@Z
    long GetToggleEnabled(unsigned char *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutGesturesEnabled@MagnifierControllerWinRT@@AEAAJE@Z
    long PutGesturesEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutToggleEnabled@MagnifierControllerWinRT@@AEAAJE@Z
    long PutToggleEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePanDetectedHandler@MagnifierControllerWinRT@@AEAAJUEventRegistrationToken@@@Z
    long RemovePanDetectedHandler(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveToggleDetectedHandler@MagnifierControllerWinRT@@AEAAJUEventRegistrationToken@@@Z
    long RemoveToggleDetectedHandler(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveZoomDetectedHandler@MagnifierControllerWinRT@@AEAAJUEventRegistrationToken@@@Z
    long RemoveZoomDetectedHandler(EventRegistrationToken);
};
