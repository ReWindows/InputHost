#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class PointerCursorControllerWinRTStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PointerCursorControllerWinRTStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForInputSite@PointerCursorControllerWinRTStatics@@UEAAJPEAUIInputSite@Input@Internal@UI@Windows@@PEAPEAUIPointerCursorController@3456@@Z
    virtual long GetForInputSite(::Windows::UI::Internal::Input::IInputSite *, ::Windows::UI::Internal::Input::IPointerCursorController * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PointerCursorControllerWinRTStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PointerCursorControllerWinRTStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PointerCursorControllerWinRTStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@PointerCursorControllerWinRTStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@PointerCursorControllerWinRTStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PointerCursorControllerWinRTStatics@@QEAA@XZ
    PointerCursorControllerWinRTStatics();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PointerCursorControllerWinRTStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PointerCursorControllerWinRTStatics@@UEAAKXZ
    virtual unsigned long Release();
};
