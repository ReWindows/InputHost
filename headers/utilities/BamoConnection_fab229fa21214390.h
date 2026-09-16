#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 10 member(s).
namespace MPCManagerBamo_AutoBamos {
class BamoConnection {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocatePeer@BamoConnection@MPCManagerBamo_AutoBamos@@MEAAJPEAPEAVBamoPeer@2@@Z
    virtual long AllocatePeer(::MPCManagerBamo_AutoBamos::BamoPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnected@BamoConnection@MPCManagerBamo_AutoBamos@@MEAAJPEAVBamoPeer@2@PEA_NPEAPEAVBamoPrincipal@Bamo@Microsoft@@@Z
    virtual long OnPeerConnected(::MPCManagerBamo_AutoBamos::BamoPeer *, bool *, ::Microsoft::Bamo::BamoPrincipal * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPeerDisconnected@BamoConnection@MPCManagerBamo_AutoBamos@@MEAAJPEAVBamoPeer@2@_N@Z
    virtual long OnPeerDisconnected(::MPCManagerBamo_AutoBamos::BamoPeer *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerRequestsConnect@BamoConnection@MPCManagerBamo_AutoBamos@@MEAAJIPEAIPEAPEAUMsgString@@@Z
    virtual long OnPeerRequestsConnect(unsigned int, unsigned int *, MsgString * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Do_not_derive_from_BaseBamoConnection_directly@BamoConnection@MPCManagerBamo_AutoBamos@@EEBAXXZ
    virtual void Do_not_derive_from_BaseBamoConnection_directly() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoConnection@MPCManagerBamo_AutoBamos@@EEBAPEAVBaseBamoConnectionImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BaseBamoConnectionImpl * GetImpl() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProtocolId@BamoConnection@MPCManagerBamo_AutoBamos@@EEBAAEBU_GUID@@XZ
    virtual _GUID const & GetProtocolId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBootstrapProxyCallout@BamoConnection@MPCManagerBamo_AutoBamos@@EEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z
    virtual long SetBootstrapProxyCallout(::Microsoft::Bamo::BamoProxy *);
};
} // namespace MPCManagerBamo_AutoBamos
