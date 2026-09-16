#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class InputAnimationTargetStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputAnimationTargetStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForInputSite@InputAnimationTargetStatics@@UEAAJPEAUIInputSite@Input@Internal@UI@Windows@@PEAPEAUIInputAnimationTarget@3456@@Z
    virtual long GetForInputSite(::Windows::UI::Internal::Input::IInputSite *, ::Windows::UI::Internal::Input::IInputAnimationTarget * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InputAnimationTargetStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputAnimationObject@InputAnimationTargetStatics@@UEAAJPEAUICompositor@Composition@UI@Windows@@UGestureAnimationData@Input@Internal@45@PEAPEAUIAnimationObject@345@@Z
    virtual long GetInputAnimationObject(::Windows::UI::Composition::ICompositor *, ::Windows::UI::Internal::Input::GestureAnimationData, ::Windows::UI::Composition::IAnimationObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InputAnimationTargetStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InputAnimationTargetStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputAnimationTargetStatics@@QEAA@XZ
    InputAnimationTargetStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@InputAnimationTargetStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@InputAnimationTargetStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputAnimationTargetStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputAnimationTargetStatics@@UEAAKXZ
    virtual unsigned long Release();
};
