#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 28 member(s).
class VirtualTouchpadControllerWinRT {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VirtualTouchpadControllerWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@VirtualTouchpadControllerWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@VirtualTouchpadControllerWinRT@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VirtualTouchpadControllerWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceivingInput@VirtualTouchpadControllerWinRT@@UEAAJPEAVBamoVirtualTouchpadControllerPrincipal@@PEAVBamoVirtualTouchpadControllerStub@@_N@Z
    virtual long ReceivingInput(BamoVirtualTouchpadControllerPrincipal *, BamoVirtualTouchpadControllerStub *, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VirtualTouchpadControllerWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@VirtualTouchpadControllerWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VirtualTouchpadControllerWinRT@@QEAA@XZ
    VirtualTouchpadControllerWinRT();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VirtualTouchpadControllerWinRT@@UEAA@XZ
    virtual ~VirtualTouchpadControllerWinRT();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddReceivingInputChangedHandler@VirtualTouchpadControllerWinRT@@AEAAJPEAU?$ITypedEventHandler@PEAVVirtualTouchpadController@Input@Internal@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddReceivingInputChangedHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUserSettingsChangedHandler@VirtualTouchpadControllerWinRT@@AEAAJPEAU?$ITypedEventHandler@PEAVVirtualTouchpadController@Input@Internal@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddUserSettingsChangedHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsActive@VirtualTouchpadControllerWinRT@@AEBAJPEAE@Z
    long GetIsActive(unsigned char *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryClickZone@VirtualTouchpadControllerWinRT@@AEBAJPEAUPhysicalClickZone@Input@Internal@UI@Windows@@@Z
    long GetPrimaryClickZone(::Windows::UI::Internal::Input::PhysicalClickZone *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReceivingInput@VirtualTouchpadControllerWinRT@@AEBAJPEAE@Z
    long GetReceivingInput(unsigned char *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSecondaryClickZone@VirtualTouchpadControllerWinRT@@AEBAJPEAUPhysicalClickZone@Input@Internal@UI@Windows@@@Z
    long GetSecondaryClickZone(::Windows::UI::Internal::Input::PhysicalClickZone *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@VirtualTouchpadControllerWinRT@@AEBAJPEAUVirtualTouchpadSize@Input@Internal@UI@Windows@@@Z
    long GetSize(::Windows::UI::Internal::Input::VirtualTouchpadSize *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypingDefensesEnabled@VirtualTouchpadControllerWinRT@@AEBAJPEAE@Z
    long GetTypingDefensesEnabled(unsigned char *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserSettings@VirtualTouchpadControllerWinRT@@AEBAJPEAUTouchpadUserSettings@Input@Internal@UI@Windows@@@Z
    long GetUserSettings(::Windows::UI::Internal::Input::TouchpadUserSettings *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutIsActive@VirtualTouchpadControllerWinRT@@AEAAJE@Z
    long PutIsActive(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutPrimaryClickZone@VirtualTouchpadControllerWinRT@@AEAAJUPhysicalClickZone@Input@Internal@UI@Windows@@@Z
    long PutPrimaryClickZone(::Windows::UI::Internal::Input::PhysicalClickZone);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutSecondaryClickZone@VirtualTouchpadControllerWinRT@@AEAAJUPhysicalClickZone@Input@Internal@UI@Windows@@@Z
    long PutSecondaryClickZone(::Windows::UI::Internal::Input::PhysicalClickZone);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutSize@VirtualTouchpadControllerWinRT@@AEAAJUVirtualTouchpadSize@Input@Internal@UI@Windows@@@Z
    long PutSize(::Windows::UI::Internal::Input::VirtualTouchpadSize);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutTypingDefensesEnabled@VirtualTouchpadControllerWinRT@@AEAAJE@Z
    long PutTypingDefensesEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveReceivingInputChangedHandler@VirtualTouchpadControllerWinRT@@AEAAJUEventRegistrationToken@@@Z
    long RemoveReceivingInputChangedHandler(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveUserSettingsChangedHandler@VirtualTouchpadControllerWinRT@@AEAAJUEventRegistrationToken@@@Z
    long RemoveUserSettingsChangedHandler(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SettingsChangeStatic_NoLock@VirtualTouchpadControllerWinRT@@CAJPEAX@Z
    static long SettingsChangeStatic_NoLock(void *);
};
