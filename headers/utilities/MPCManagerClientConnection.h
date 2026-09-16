#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 6 member(s).
class MPCManagerClientConnection {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MPCManagerClientConnection@@UEAA@XZ
    virtual ~MPCManagerClientConnection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnected@MPCManagerClientConnection@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@PEA_NPEAPEAVBamoPrincipal@Bamo@Microsoft@@@Z
    virtual long OnPeerConnected(::MPCManagerBamo_AutoBamos::BamoPeer *, bool *, ::Microsoft::Bamo::BamoPrincipal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDisconnected@MPCManagerClientConnection@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@_N@Z
    virtual long OnPeerDisconnected(::MPCManagerBamo_AutoBamos::BamoPeer *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBootstrapProxy@MPCManagerClientConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z
    virtual long SetBootstrapProxy(::Microsoft::Bamo::BamoProxy *);
};
