#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 31 member(s).
class ShellGesturesController {
public:
    class Api;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPointerMovedHandler@ShellGesturesController@@QEAAJPEAU?$ITypedEventHandler@PEAVShellGesturesController@Input@Internal@UI@Windows@@PEAVPointerEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddPointerMovedHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPointerPressedHandler@ShellGesturesController@@QEAAJPEAU?$ITypedEventHandler@PEAVShellGesturesController@Input@Internal@UI@Windows@@PEAVPointerEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddPointerPressedHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPointerReleasedHandler@ShellGesturesController@@QEAAJPEAU?$ITypedEventHandler@PEAVShellGesturesController@Input@Internal@UI@Windows@@PEAVPointerEventArgs@Core@45@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddPointerReleasedHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ShellGesturesController@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTouchpadGlobalActionPerformedHandler@ShellGesturesController@@QEAAJPEAU?$ITypedEventHandler@PEAVShellGesturesController@Input@Internal@UI@Windows@@PEAVTouchpadGlobalActionEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddTouchpadGlobalActionPerformedHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckConfiguration@ShellGesturesController@@QEAAJXZ
    long CheckConfiguration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ShellGesturesController@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInputSinkInitializedIfNeeded@ShellGesturesController@@QEAAJXZ
    long EnsureInputSinkInitializedIfNeeded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuppressionRegions@ShellGesturesController@@QEAAJPEAIPEAPEAURect@Foundation@Windows@@@Z
    long GetSuppressionRegions(unsigned int *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTouchGesturesEnabled@ShellGesturesController@@QEBAJPEAE@Z
    long GetTouchGesturesEnabled(unsigned char *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTouchpadGesturesEnabled@ShellGesturesController@@QEBAJPEAE@Z
    long GetTouchpadGesturesEnabled(unsigned char *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTouchpadSupportedGestures@ShellGesturesController@@QEBAJPEAW4TouchpadGlobalGestureKinds@Input@Internal@UI@Windows@@@Z
    long GetTouchpadSupportedGestures(int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@ShellGesturesController@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ShellGesturesController@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ShellGesturesController@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePointerMovedHandler@ShellGesturesController@@QEAAJUEventRegistrationToken@@@Z
    long RemovePointerMovedHandler(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePointerPressedHandler@ShellGesturesController@@QEAAJUEventRegistrationToken@@@Z
    long RemovePointerPressedHandler(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePointerReleasedHandler@ShellGesturesController@@QEAAJUEventRegistrationToken@@@Z
    long RemovePointerReleasedHandler(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTouchpadGlobalActionPerformedHandler@ShellGesturesController@@QEAAJUEventRegistrationToken@@@Z
    long RemoveTouchpadGlobalActionPerformedHandler(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ShellGesturesController@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuppressionRegions@ShellGesturesController@@QEAAJIPEAURect@Foundation@Windows@@@Z
    long SetSuppressionRegions(unsigned int, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTouchGesturesEnabled@ShellGesturesController@@QEAAJE@Z
    long SetTouchGesturesEnabled(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTouchpadGesturesEnabled@ShellGesturesController@@QEAAJE@Z
    long SetTouchpadGesturesEnabled(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTouchpadSupportedGestures@ShellGesturesController@@QEAAJW4TouchpadGlobalGestureKinds@Input@Internal@UI@Windows@@@Z
    long SetTouchpadSupportedGestures(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShellGesturesController@@QEAA@XZ
    ShellGesturesController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldBeTouchpadCapable@ShellGesturesController@@QEAA_NXZ
    bool ShouldBeTouchpadCapable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchpadActionPerformed@ShellGesturesController@@UEAAJPEAVBamoShellGesturesClientPrincipal@@PEAVBamoShellGesturesClientStub@@_JW4TouchpadGlobalAction@Input@Internal@UI@Windows@@@Z
    virtual long TouchpadActionPerformed(BamoShellGesturesClientPrincipal *, BamoShellGesturesClientStub *, int64_t, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShellGesturesController@@UEAA@XZ
    virtual ~ShellGesturesController();
};
