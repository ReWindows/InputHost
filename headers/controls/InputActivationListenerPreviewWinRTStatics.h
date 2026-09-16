#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class InputActivationListenerPreviewWinRTStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputActivationListenerPreviewWinRTStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForApplicationWindow@InputActivationListenerPreviewWinRTStatics@@UEAAJPEAUIAppWindow@WindowManagement@UI@Windows@@PEAPEAUIInputActivationListener@Input@45@@Z
    virtual long CreateForApplicationWindow(::Windows::UI::WindowManagement::IAppWindow *, ::Windows::UI::Input::IInputActivationListener * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InputActivationListenerPreviewWinRTStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InputActivationListenerPreviewWinRTStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InputActivationListenerPreviewWinRTStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputActivationListenerPreviewWinRTStatics@@QEAA@XZ
    InputActivationListenerPreviewWinRTStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@InputActivationListenerPreviewWinRTStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@InputActivationListenerPreviewWinRTStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputActivationListenerPreviewWinRTStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputActivationListenerPreviewWinRTStatics@@UEAAKXZ
    virtual unsigned long Release();
};
