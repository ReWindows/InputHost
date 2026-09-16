#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class ActivationConfigurationInputObjectWinRTStatics {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ActivationConfigurationInputObjectWinRTStatics@@QEAA@XZ
    ActivationConfigurationInputObjectWinRTStatics();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ActivationConfigurationInputObjectWinRTStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForInputSite@ActivationConfigurationInputObjectWinRTStatics@@UEAAJPEAUIInputSite@Input@Internal@UI@Windows@@PEAPEAUIActivationConfigurationInputObject@3456@@Z
    virtual long GetForInputSite(::Windows::UI::Internal::Input::IInputSite *, ::Windows::UI::Internal::Input::IActivationConfigurationInputObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ActivationConfigurationInputObjectWinRTStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ActivationConfigurationInputObjectWinRTStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ActivationConfigurationInputObjectWinRTStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@ActivationConfigurationInputObjectWinRTStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@ActivationConfigurationInputObjectWinRTStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ActivationConfigurationInputObjectWinRTStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ActivationConfigurationInputObjectWinRTStatics@@UEAAKXZ
    virtual unsigned long Release();
};
