#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 10 member(s).
namespace BamoImpl::ISMBamos_AutoBamos {
class BamoConnectionImpl {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocatePeerThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z
    virtual long AllocatePeerThunk(::Microsoft::Bamo::BaseBamoPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDefaultPlaceholderPeer@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z
    virtual long InitializeDefaultPlaceholderPeer(::Microsoft::Bamo::BaseBamoPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnectedThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@PEA_NPEAPEAVBamoPrincipal@Bamo@5@@Z
    virtual long OnPeerConnectedThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, bool *, ::Microsoft::Bamo::BamoPrincipal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDisconnectedThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@_N@Z
    virtual long OnPeerDisconnectedThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerRequestsConnectThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJIPEAIPEAPEAUMsgString@@@Z
    virtual long OnPeerRequestsConnectThunk(unsigned int, unsigned int *, MsgString * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnPeerConnected@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@AEAAXPEAVBamoPeer@2@@Z
    void LogOnPeerConnected(::ISMBamos_AutoBamos::BamoPeer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnPeerDisconnected@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@AEAAXPEAVBamoPeer@2@@Z
    void LogOnPeerDisconnected(::ISMBamos_AutoBamos::BamoPeer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnPeerRequestsConnect@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@AEAAXIIJ@Z
    void LogOnPeerRequestsConnect(unsigned int, unsigned int, long);
};
} // namespace BamoImpl::ISMBamos_AutoBamos
