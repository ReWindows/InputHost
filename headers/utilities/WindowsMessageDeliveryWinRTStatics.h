#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class WindowsMessageDeliveryWinRTStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WindowsMessageDeliveryWinRTStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForInputSite@WindowsMessageDeliveryWinRTStatics@@UEAAJPEAUIInputSite@Input@Internal@UI@Windows@@_KW4WindowsMessageDeliveryType@3456@PEAPEAUIWindowsMessageDelivery@3456@@Z
    virtual long CreateForInputSite(::Windows::UI::Internal::Input::IInputSite *, uint64_t, int, ::Windows::UI::Internal::Input::IWindowsMessageDelivery * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WindowsMessageDeliveryWinRTStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WindowsMessageDeliveryWinRTStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WindowsMessageDeliveryWinRTStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@WindowsMessageDeliveryWinRTStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@WindowsMessageDeliveryWinRTStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WindowsMessageDeliveryWinRTStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WindowsMessageDeliveryWinRTStatics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetForInputSite@WindowsMessageDeliveryWinRTStatics@@UEAAJPEAUIInputSite@Input@Internal@UI@Windows@@PEAPEAUIWindowsMessageDelivery@3456@@Z
    virtual long TryGetForInputSite(::Windows::UI::Internal::Input::IInputSite *, ::Windows::UI::Internal::Input::IWindowsMessageDelivery * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowsMessageDeliveryWinRTStatics@@QEAA@XZ
    WindowsMessageDeliveryWinRTStatics();
};
