#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class ContainerInfoInputObjectWinRTStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ContainerInfoInputObjectWinRTStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContainerInfoInputObjectWinRTStatics@@QEAA@XZ
    ContainerInfoInputObjectWinRTStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForInputSite@ContainerInfoInputObjectWinRTStatics@@UEAAJPEAUIInputSite@Input@Internal@UI@Windows@@U_GUID@@_KPEAPEAUIContainerInfoInputObject@3456@@Z
    virtual long GetForInputSite(::Windows::UI::Internal::Input::IInputSite *, _GUID, uint64_t, ::Windows::UI::Internal::Input::IContainerInfoInputObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ContainerInfoInputObjectWinRTStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ContainerInfoInputObjectWinRTStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ContainerInfoInputObjectWinRTStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@ContainerInfoInputObjectWinRTStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@ContainerInfoInputObjectWinRTStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ContainerInfoInputObjectWinRTStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ContainerInfoInputObjectWinRTStatics@@UEAAKXZ
    virtual unsigned long Release();
};
