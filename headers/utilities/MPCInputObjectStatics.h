#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class MPCInputObjectStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MPCInputObjectStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForInputSite@MPCInputObjectStatics@@UEAAJPEAUIInputSite@Input@Internal@UI@Windows@@PEAPEAUIMPCInputObject@3456@@Z
    virtual long GetForInputSite(::Windows::UI::Internal::Input::IInputSite *, ::Windows::UI::Internal::Input::IMPCInputObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MPCInputObjectStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MPCInputObjectStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MPCInputObjectStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@MPCInputObjectStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@MPCInputObjectStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MPCInputObjectStatics@@QEAA@XZ
    MPCInputObjectStatics();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MPCInputObjectStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MPCInputObjectStatics@@UEAAKXZ
    virtual unsigned long Release();
};
