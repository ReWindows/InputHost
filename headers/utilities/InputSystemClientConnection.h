#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 10 member(s).
class InputSystemClientConnection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@InputSystemClientConnection@@SA?AV?$ComPtr@VInputSystemClientConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z
    static WindissectOpaque Create(IMessageSession *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentThread@InputSystemClientConnection@@SA?AV?$ComPtr@VInputSystemClientConnection@@@WRL@Microsoft@@XZ
    static WindissectOpaque GetForCurrentThread();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputSystemClientConnection@@UEAA@XZ
    virtual ~InputSystemClientConnection();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputSystemClientConnection@@IEAA@XZ
    InputSystemClientConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@InputSystemClientConnection@@MEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnected@InputSystemClientConnection@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEA_NPEAPEAVBamoPrincipal@Bamo@Microsoft@@@Z
    virtual long OnPeerConnected(::ISMBamos_AutoBamos::BamoPeer *, bool *, ::Microsoft::Bamo::BamoPrincipal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDisconnected@InputSystemClientConnection@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@_N@Z
    virtual long OnPeerDisconnected(::ISMBamos_AutoBamos::BamoPeer *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBootstrapProxy@InputSystemClientConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z
    virtual long SetBootstrapProxy(::Microsoft::Bamo::BamoProxy *);
};
