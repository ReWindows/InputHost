#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class EdgyControllerFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EdgyControllerFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@EdgyControllerFactory@@UEAAJPEAUHSTRING__@@PEAPEAUIEdgyController@Input@Internal@UI@Windows@@@Z
    virtual long Create(HSTRING__*, ::Windows::UI::Internal::Input::IEdgyController * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EdgyControllerFactory@@QEAA@XZ
    EdgyControllerFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@EdgyControllerFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@EdgyControllerFactory@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@EdgyControllerFactory@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@EdgyControllerFactory@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@EdgyControllerFactory@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EdgyControllerFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EdgyControllerFactory@@UEAAKXZ
    virtual unsigned long Release();
};
