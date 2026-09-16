#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class EdgyGestureRecognitionConfigurationFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EdgyGestureRecognitionConfigurationFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@EdgyGestureRecognitionConfigurationFactory@@UEAAJPEAPEAUIEdgyGestureRecognitionConfiguration@Input@Internal@UI@Windows@@@Z
    virtual long Create(::Windows::UI::Internal::Input::IEdgyGestureRecognitionConfiguration * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EdgyGestureRecognitionConfigurationFactory@@QEAA@XZ
    EdgyGestureRecognitionConfigurationFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@EdgyGestureRecognitionConfigurationFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@EdgyGestureRecognitionConfigurationFactory@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@EdgyGestureRecognitionConfigurationFactory@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@EdgyGestureRecognitionConfigurationFactory@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@EdgyGestureRecognitionConfigurationFactory@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EdgyGestureRecognitionConfigurationFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EdgyGestureRecognitionConfigurationFactory@@UEAAKXZ
    virtual unsigned long Release();
};
