#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
class SystemIslandInputSiteWinRT {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SystemIslandInputSiteWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInputWindow_Callback@SystemIslandInputSiteWinRT@@UEAAJPEAUHWND__@@I@Z
    virtual long CreateInputWindow_Callback(HWND__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SystemIslandInputSiteWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMessage_Callback@SystemIslandInputSiteWinRT@@UEAA_NPEAUWindowsMessageDeliveryMessage@@@Z
    virtual bool OnWindowMessage_Callback(WindowsMessageDeliveryMessage *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SystemIslandInputSiteWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SystemIslandInputSiteWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SystemIslandInputSiteWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUICompositionIslandPartner@Internal@Composition@UI@Windows@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, ::Windows::UI::Composition::Internal::ICompositionIslandPartner *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SystemIslandInputSiteWinRT@@QEAA@XZ
    SystemIslandInputSiteWinRT();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemIslandInputSiteWinRT@@UEAA@XZ
    virtual ~SystemIslandInputSiteWinRT();
};
