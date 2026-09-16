#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class CoreIndependentInputSourceControllerWinRTStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CoreIndependentInputSourceControllerWinRTStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreIndependentInputSourceControllerWinRTStatics@@QEAA@XZ
    CoreIndependentInputSourceControllerWinRTStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForIVisualElement@CoreIndependentInputSourceControllerWinRTStatics@@UEAAJPEAUIVisualElement@Composition@UI@Windows@@PEAPEAUICoreIndependentInputSourceController@Core@45@@Z
    virtual long CreateForIVisualElement(::Windows::UI::Composition::IVisualElement *, ::Windows::UI::Core::ICoreIndependentInputSourceController * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForVisual@CoreIndependentInputSourceControllerWinRTStatics@@UEAAJPEAUIVisual@Composition@UI@Windows@@PEAPEAUICoreIndependentInputSourceController@Core@45@@Z
    virtual long CreateForVisual(::Windows::UI::Composition::IVisual *, ::Windows::UI::Core::ICoreIndependentInputSourceController * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CoreIndependentInputSourceControllerWinRTStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CoreIndependentInputSourceControllerWinRTStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CoreIndependentInputSourceControllerWinRTStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CoreIndependentInputSourceControllerWinRTStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@CoreIndependentInputSourceControllerWinRTStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CoreIndependentInputSourceControllerWinRTStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CoreIndependentInputSourceControllerWinRTStatics@@UEAAKXZ
    virtual unsigned long Release();
};
