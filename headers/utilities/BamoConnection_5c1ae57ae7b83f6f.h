#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 12 member(s).
namespace ISMBamos_AutoBamos {
class BamoConnection {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocatePeer@BamoConnection@ISMBamos_AutoBamos@@MEAAJPEAPEAVBamoPeer@2@@Z
    virtual long AllocatePeer(::ISMBamos_AutoBamos::BamoPeer * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoConnection@ISMBamos_AutoBamos@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoConnection@ISMBamos_AutoBamos@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnected@BamoConnection@ISMBamos_AutoBamos@@MEAAJPEAVBamoPeer@2@PEA_NPEAPEAVBamoPrincipal@Bamo@Microsoft@@@Z
    virtual long OnPeerConnected(::ISMBamos_AutoBamos::BamoPeer *, bool *, ::Microsoft::Bamo::BamoPrincipal * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPeerDisconnected@BamoConnection@ISMBamos_AutoBamos@@MEAAJPEAVBamoPeer@2@_N@Z
    virtual long OnPeerDisconnected(::ISMBamos_AutoBamos::BamoPeer *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerRequestsConnect@BamoConnection@ISMBamos_AutoBamos@@MEAAJIPEAIPEAPEAUMsgString@@@Z
    virtual long OnPeerRequestsConnect(unsigned int, unsigned int *, MsgString * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Do_not_derive_from_BaseBamoConnection_directly@BamoConnection@ISMBamos_AutoBamos@@EEBAXXZ
    virtual void Do_not_derive_from_BaseBamoConnection_directly() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoConnection@ISMBamos_AutoBamos@@EEBAPEAVBaseBamoConnectionImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BaseBamoConnectionImpl * GetImpl() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProtocolId@BamoConnection@ISMBamos_AutoBamos@@EEBAAEBU_GUID@@XZ
    virtual _GUID const & GetProtocolId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBootstrapProxyCallout@BamoConnection@ISMBamos_AutoBamos@@EEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z
    virtual long SetBootstrapProxyCallout(::Microsoft::Bamo::BamoProxy *);
};
} // namespace ISMBamos_AutoBamos
