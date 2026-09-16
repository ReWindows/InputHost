#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 25 member(s).
class TouchpadGesturesController {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TouchpadGesturesController@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@TouchpadGesturesController@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TouchpadGesturesController@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TouchpadGesturesController@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TouchpadGesturesController@@QEAAJPEAVContextSession@WRL2@Microsoft@@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TouchpadGesturesController@@QEAA@XZ
    TouchpadGesturesController();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchpadGesturesController@@UEAA@XZ
    virtual ~TouchpadGesturesController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddGlobalActionPerformedHandler@TouchpadGesturesController@@AEAAJPEAU?$ITypedEventHandler@PEAVTouchpadGesturesController@Input@UI@Windows@@PEAVTouchpadGlobalActionEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddGlobalActionPerformedHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPointerMovedHandler@TouchpadGesturesController@@AEAAJPEAU?$ITypedEventHandler@PEAVTouchpadGesturesController@Input@UI@Windows@@PEAVPointerEventArgs@Core@34@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddPointerMovedHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPointerPressedHandler@TouchpadGesturesController@@AEAAJPEAU?$ITypedEventHandler@PEAVTouchpadGesturesController@Input@UI@Windows@@PEAVPointerEventArgs@Core@34@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddPointerPressedHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPointerReleasedHandler@TouchpadGesturesController@@AEAAJPEAU?$ITypedEventHandler@PEAVTouchpadGesturesController@Input@UI@Windows@@PEAVPointerEventArgs@Core@34@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddPointerReleasedHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnabled@TouchpadGesturesController@@AEBAJPEAE@Z
    long GetEnabled(unsigned char *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTouchpadSupportedGestures@TouchpadGesturesController@@AEBAJPEAW4TouchpadGlobalGestureKinds@Input@UI@Windows@@@Z
    long GetTouchpadSupportedGestures(int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalActionPerformed@TouchpadGesturesController@@AEAAJPEAUIShellGesturesController@Input@Internal@UI@Windows@@PEAUITouchpadGlobalActionEventArgs@3456@@Z
    long OnGlobalActionPerformed(::Windows::UI::Internal::Input::IShellGesturesController *, ::Windows::UI::Internal::Input::ITouchpadGlobalActionEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@TouchpadGesturesController@@AEAAJPEAUIShellGesturesController@Input@Internal@UI@Windows@@PEAUIPointerEventArgs@Core@56@@Z
    long OnPointerMoved(::Windows::UI::Internal::Input::IShellGesturesController *, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@TouchpadGesturesController@@AEAAJPEAUIShellGesturesController@Input@Internal@UI@Windows@@PEAUIPointerEventArgs@Core@56@@Z
    long OnPointerPressed(::Windows::UI::Internal::Input::IShellGesturesController *, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@TouchpadGesturesController@@AEAAJPEAUIShellGesturesController@Input@Internal@UI@Windows@@PEAUIPointerEventArgs@Core@56@@Z
    long OnPointerReleased(::Windows::UI::Internal::Input::IShellGesturesController *, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGlobalActionPerformedHandler@TouchpadGesturesController@@AEAAJUEventRegistrationToken@@@Z
    long RemoveGlobalActionPerformedHandler(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePointerMovedHandler@TouchpadGesturesController@@AEAAJUEventRegistrationToken@@@Z
    long RemovePointerMovedHandler(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePointerPressedHandler@TouchpadGesturesController@@AEAAJUEventRegistrationToken@@@Z
    long RemovePointerPressedHandler(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePointerReleasedHandler@TouchpadGesturesController@@AEAAJUEventRegistrationToken@@@Z
    long RemovePointerReleasedHandler(EventRegistrationToken);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnabled@TouchpadGesturesController@@AEAAJE@Z
    long SetEnabled(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTouchpadSupportedGestures@TouchpadGesturesController@@AEAAJW4TouchpadGlobalGestureKinds@Input@UI@Windows@@@Z
    long SetTouchpadSupportedGestures(int);
};
