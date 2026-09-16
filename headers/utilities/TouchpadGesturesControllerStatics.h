#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class TouchpadGesturesControllerStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TouchpadGesturesControllerStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForProcess@TouchpadGesturesControllerStatics@@UEAAJPEAPEAUITouchpadGesturesController@Input@UI@Windows@@@Z
    virtual long CreateForProcess(::Windows::UI::Input::ITouchpadGesturesController * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TouchpadGesturesControllerStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TouchpadGesturesControllerStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TouchpadGesturesControllerStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@TouchpadGesturesControllerStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@TouchpadGesturesControllerStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@TouchpadGesturesControllerStatics@@UEAAJPEAE@Z
    virtual long IsSupported(unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TouchpadGesturesControllerStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TouchpadGesturesControllerStatics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TouchpadGesturesControllerStatics@@QEAA@XZ
    TouchpadGesturesControllerStatics();
};
