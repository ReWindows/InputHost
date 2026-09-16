#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class InputResizeControllerStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputResizeControllerStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForInputSite@InputResizeControllerStatics@@UEAAJPEAUIInputSite@Input@Internal@UI@Windows@@PEAPEAUIInputResizeController@3456@@Z
    virtual long GetForInputSite(::Windows::UI::Internal::Input::IInputSite *, ::Windows::UI::Internal::Input::IInputResizeController * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InputResizeControllerStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InputResizeControllerStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InputResizeControllerStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputResizeControllerStatics@@QEAA@XZ
    InputResizeControllerStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@InputResizeControllerStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@InputResizeControllerStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputResizeControllerStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputResizeControllerStatics@@UEAAKXZ
    virtual unsigned long Release();
};
