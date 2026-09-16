#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class MagnifierControllerWinRTStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MagnifierControllerWinRTStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@MagnifierControllerWinRTStatics@@UEAAJPEAPEAUIMagnifierController@Input@Internal@UI@Windows@@@Z
    virtual long Create(::Windows::UI::Internal::Input::IMagnifierController * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForInputSite@MagnifierControllerWinRTStatics@@UEAAJPEAUIInputSite@Input@Internal@UI@Windows@@PEAPEAUIMagnifierController@3456@@Z
    virtual long CreateForInputSite(::Windows::UI::Internal::Input::IInputSite *, ::Windows::UI::Internal::Input::IMagnifierController * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MagnifierControllerWinRTStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MagnifierControllerWinRTStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MagnifierControllerWinRTStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@MagnifierControllerWinRTStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@MagnifierControllerWinRTStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MagnifierControllerWinRTStatics@@QEAA@XZ
    MagnifierControllerWinRTStatics();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MagnifierControllerWinRTStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MagnifierControllerWinRTStatics@@UEAAKXZ
    virtual unsigned long Release();
};
