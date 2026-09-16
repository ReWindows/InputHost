#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 12 member(s).
class ShellHandwritingHost {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ShellHandwritingHost@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ShellHandwritingHost@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@ShellHandwritingHost@@UEAAJPEAVBamoShellHandwritingHostClientPrincipal@@PEAVBamoShellHandwritingHostClientStub@@@Z
    virtual long OnStubDisconnected(BamoShellHandwritingHostClientPrincipal *, BamoShellHandwritingHostClientStub *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ShellHandwritingHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ShellHandwritingHost@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ShellHandwritingHost@@QEAAJPEAVContextSession@WRL2@Microsoft@@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferInkPoints@ShellHandwritingHost@@UEAAJPEAVBamoShellHandwritingHostClientPrincipal@@PEAVBamoShellHandwritingHostClientStub@@PEBUSyntheticPenInfo@Input@Internal@UI@Windows@@I@Z
    virtual long TransferInkPoints(BamoShellHandwritingHostClientPrincipal *, BamoShellHandwritingHostClientStub *, ::Windows::UI::Internal::Input::SyntheticPenInfo const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShellHandwritingHost@@UEAA@XZ
    virtual ~ShellHandwritingHost();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTransferInkPointsHandler@ShellHandwritingHost@@AEAAJPEAU?$ITypedEventHandler@PEAVShellHandwritingHost@Input@Internal@UI@Windows@@PEAVShellHandwritingTransferEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddTransferInkPointsHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWithISM@ShellHandwritingHost@@AEAAXPEAVInputSystemClientConnection@@W4RegisterOperation@1@@Z
    void RegisterWithISM(InputSystemClientConnection *, int);
};
