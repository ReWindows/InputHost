#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class InputManualResizeAreaStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputManualResizeAreaStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForInputSite@InputManualResizeAreaStatics@@UEAAJPEAUIInputSite@Input@Internal@UI@Windows@@PEAPEAUIInputManualResizeArea@3456@@Z
    virtual long GetForInputSite(::Windows::UI::Internal::Input::IInputSite *, ::Windows::UI::Internal::Input::IInputManualResizeArea * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InputManualResizeAreaStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InputManualResizeAreaStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InputManualResizeAreaStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputManualResizeAreaStatics@@QEAA@XZ
    InputManualResizeAreaStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@InputManualResizeAreaStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@InputManualResizeAreaStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputManualResizeAreaStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputManualResizeAreaStatics@@UEAAKXZ
    virtual unsigned long Release();
};
