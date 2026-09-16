#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class ShellHandwritingHostFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ShellHandwritingHostFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ShellHandwritingHostFactory@@UEAAJPEAPEAUIShellHandwritingHost@Input@Internal@UI@Windows@@@Z
    virtual long Create(::Windows::UI::Internal::Input::IShellHandwritingHost * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ShellHandwritingHostFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ShellHandwritingHostFactory@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ShellHandwritingHostFactory@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@ShellHandwritingHostFactory@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@ShellHandwritingHostFactory@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ShellHandwritingHostFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ShellHandwritingHostFactory@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShellHandwritingHostFactory@@QEAA@XZ
    ShellHandwritingHostFactory();
};
