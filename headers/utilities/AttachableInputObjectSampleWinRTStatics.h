#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 28 member(s).
class AttachableInputObjectSampleWinRTStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AttachableInputObjectSampleWinRTStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AttachableInputObjectSampleWinRTStatics@@QEAA@XZ
    AttachableInputObjectSampleWinRTStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@AttachableInputObjectSampleWinRTStatics@@UEAAJPEAUIInputSite@Input@Internal@UI@Windows@@PEAPEAUIAttachableInputObjectSample@3456@@Z
    virtual long CreateInstance(::Windows::UI::Internal::Input::IInputSite *, ::Windows::UI::Internal::Input::IAttachableInputObjectSample * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AttachableInputObjectSampleWinRTStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AttachableInputObjectSampleWinRTStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AttachableInputObjectSampleWinRTStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@AttachableInputObjectSampleWinRTStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@AttachableInputObjectSampleWinRTStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AttachableInputObjectSampleWinRTStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AttachableInputObjectSampleWinRTStatics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestHitTest@AttachableInputObjectSampleWinRTStatics@@UEAAJUPoint@Foundation@Windows@@PEAUHSTRING__@@@Z
    virtual long RequestHitTest(WindissectOpaque, HSTRING__*);
};
