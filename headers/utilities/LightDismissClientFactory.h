#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class LightDismissClientFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@LightDismissClientFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@LightDismissClientFactory@@UEAAJPEAUIInputSite@Input@Internal@UI@Windows@@PEAPEAUILightDismissAction@3456@@Z
    virtual long CreateInstance(::Windows::UI::Internal::Input::IInputSite *, ::Windows::UI::Internal::Input::ILightDismissAction * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@LightDismissClientFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@LightDismissClientFactory@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@LightDismissClientFactory@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@LightDismissClientFactory@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@LightDismissClientFactory@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LightDismissClientFactory@@QEAA@XZ
    LightDismissClientFactory();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@LightDismissClientFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@LightDismissClientFactory@@UEAAKXZ
    virtual unsigned long Release();
};
