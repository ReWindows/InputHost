#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class TouchHitTestingProviderWinRTStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TouchHitTestingProviderWinRTStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForInputSite@TouchHitTestingProviderWinRTStatics@@UEAAJPEAUIInputSite@Input@Internal@UI@Windows@@PEAPEAUITouchHitTestingProvider@3456@@Z
    virtual long GetForInputSite(::Windows::UI::Internal::Input::IInputSite *, ::Windows::UI::Internal::Input::ITouchHitTestingProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TouchHitTestingProviderWinRTStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TouchHitTestingProviderWinRTStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TouchHitTestingProviderWinRTStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@TouchHitTestingProviderWinRTStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@TouchHitTestingProviderWinRTStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TouchHitTestingProviderWinRTStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TouchHitTestingProviderWinRTStatics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TouchHitTestingProviderWinRTStatics@@QEAA@XZ
    TouchHitTestingProviderWinRTStatics();
};
