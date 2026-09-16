#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class ShellGesturesControllerFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ShellGesturesControllerFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForInputSite@ShellGesturesControllerFactory@@UEAAJPEAUIInputSite@Input@Internal@UI@Windows@@PEAPEAUIShellGesturesController@3456@@Z
    virtual long CreateForInputSite(::Windows::UI::Internal::Input::IInputSite *, ::Windows::UI::Internal::Input::IShellGesturesController * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ShellGesturesControllerFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ShellGesturesControllerFactory@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ShellGesturesControllerFactory@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@ShellGesturesControllerFactory@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@ShellGesturesControllerFactory@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ShellGesturesControllerFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ShellGesturesControllerFactory@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShellGesturesControllerFactory@@QEAA@XZ
    ShellGesturesControllerFactory();
};
