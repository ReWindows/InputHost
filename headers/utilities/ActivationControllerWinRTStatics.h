#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class ActivationControllerWinRTStatics {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ActivationControllerWinRTStatics@@QEAA@XZ
    ActivationControllerWinRTStatics();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ActivationControllerWinRTStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForHwnd@ActivationControllerWinRTStatics@@UEAAJ_KPEAPEAUIActivationController@Input@Internal@UI@Windows@@@Z
    virtual long GetForHwnd(uint64_t, ::Windows::UI::Internal::Input::IActivationController * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ActivationControllerWinRTStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ActivationControllerWinRTStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ActivationControllerWinRTStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@ActivationControllerWinRTStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@ActivationControllerWinRTStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ActivationControllerWinRTStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ActivationControllerWinRTStatics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetForHwnd@ActivationControllerWinRTStatics@@UEAAJ_KPEAPEAUIActivationController@Input@Internal@UI@Windows@@@Z
    virtual long TryGetForHwnd(uint64_t, ::Windows::UI::Internal::Input::IActivationController * *);
};
