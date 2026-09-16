#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class VirtualTouchpadControllerWinRTFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VirtualTouchpadControllerWinRTFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@VirtualTouchpadControllerWinRTFactory@@UEAAJPEAUIInputSite@Input@Internal@UI@Windows@@PEAPEAUIVirtualTouchpadController@3456@@Z
    virtual long CreateInstance(::Windows::UI::Internal::Input::IInputSite *, ::Windows::UI::Internal::Input::IVirtualTouchpadController * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@VirtualTouchpadControllerWinRTFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@VirtualTouchpadControllerWinRTFactory@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@VirtualTouchpadControllerWinRTFactory@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@VirtualTouchpadControllerWinRTFactory@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@VirtualTouchpadControllerWinRTFactory@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VirtualTouchpadControllerWinRTFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VirtualTouchpadControllerWinRTFactory@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VirtualTouchpadControllerWinRTFactory@@QEAA@XZ
    VirtualTouchpadControllerWinRTFactory();
};
