#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class PenDockListenerPartnerWinRTStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PenDockListenerPartnerWinRTStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PenDockListenerPartnerWinRTStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PenDockListenerPartnerWinRTStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellDefault@PenDockListenerPartnerWinRTStatics@@UEAAJPEAPEAUIPenListenerPartner@Input@Devices@Internal@Windows@@@Z
    virtual long GetShellDefault(::Windows::Internal::Devices::Input::IPenListenerPartner * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PenDockListenerPartnerWinRTStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@PenDockListenerPartnerWinRTStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@PenDockListenerPartnerWinRTStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PenDockListenerPartnerWinRTStatics@@QEAA@XZ
    PenDockListenerPartnerWinRTStatics();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PenDockListenerPartnerWinRTStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PenDockListenerPartnerWinRTStatics@@UEAAKXZ
    virtual unsigned long Release();
};
