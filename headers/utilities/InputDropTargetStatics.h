#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class InputDropTargetStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputDropTargetStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForInputSite@InputDropTargetStatics@@UEAAJPEAUIInputSite@Input@Internal@UI@Windows@@PEAPEAUIInputDropTarget@3456@@Z
    virtual long GetForInputSite(::Windows::UI::Internal::Input::IInputSite *, ::Windows::UI::Internal::Input::IInputDropTarget * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InputDropTargetStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InputDropTargetStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InputDropTargetStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputDropTargetStatics@@QEAA@XZ
    InputDropTargetStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@InputDropTargetStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@InputDropTargetStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputDropTargetStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputDropTargetStatics@@UEAAKXZ
    virtual unsigned long Release();
};
