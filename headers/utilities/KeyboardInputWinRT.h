#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 23 member(s).
class KeyboardInputWinRT {
public:
    class Api;
    class Private;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@KeyboardInputWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@KeyboardInputWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentKeyState@KeyboardInputWinRT@@QEAA?AW4CoreVirtualKeyStates@Core@UI@Windows@@W4VirtualKey@System@5@@Z
    int GetCurrentKeyState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyState@KeyboardInputWinRT@@QEAA?AW4CoreVirtualKeyStates@Core@UI@Windows@@W4VirtualKey@System@5@@Z
    int GetKeyState(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0KeyboardInputWinRT@@QEAA@XZ
    KeyboardInputWinRT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@KeyboardInputWinRT@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@KeyboardInputWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@KeyboardInputWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@KeyboardInputWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1KeyboardInputWinRT@@UEAA@XZ
    virtual ~KeyboardInputWinRT();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppUsingGamepadApiToken@KeyboardInputWinRT@@CAJPEAE@Z
    static long GetAppUsingGamepadApiToken(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTextInputProducerForHwnd_Callback@KeyboardInputWinRT@@AEAAJPEAUHWND__@@@Z
    long InitializeTextInputProducerForHwnd_Callback(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCharacterEvent_Callback@KeyboardInputWinRT@@AEAA_N_K_J_N@Z
    bool OnCharacterEvent_Callback(uint64_t, int64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenuKeyEvent_Callback@KeyboardInputWinRT@@AEAA_NXZ
    bool OnContextMenuKeyEvent_Callback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHwndUpdated_Callback@KeyboardInputWinRT@@EEAAXPEAUHWND__@@@Z
    virtual void OnHwndUpdated_Callback(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDownEvent_Callback@KeyboardInputWinRT@@AEAA_N_K_J_N2@Z
    bool OnKeyDownEvent_Callback(uint64_t, int64_t, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUpEvent_Callback@KeyboardInputWinRT@@AEAA_N_K_J_N2@Z
    bool OnKeyUpEvent_Callback(uint64_t, int64_t, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreTranslateKeyboardMessage_Callback@KeyboardInputWinRT@@EEAAXPEAUWindowsMessageDeliveryMessage@@PEA_N@Z
    virtual void OnPreTranslateKeyboardMessage_Callback(WindowsMessageDeliveryMessage *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMessage_Callback@KeyboardInputWinRT@@EEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    virtual bool OnWindowMessage_Callback(WindowsMessageDeliveryMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessKeyGeneratedSystemEvents_Callback@KeyboardInputWinRT@@AEAAJPEAUIKeyEventArgs@Core@UI@Windows@@_NPEAE@Z
    long ProcessKeyGeneratedSystemEvents_Callback(::Windows::UI::Core::IKeyEventArgs *, bool, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldGenerateSystemEventForGamepad@KeyboardInputWinRT@@CA_NXZ
    static bool ShouldGenerateSystemEventForGamepad();
};
