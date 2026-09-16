#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 7 member(s).
namespace InputDeliveryClient {
class InputDeliveryClientConversationHost {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?OnIDFreed@InputDeliveryClientConversationHost@InputDeliveryClient@@UEAAJIIPEAX@Z
    virtual long OnIDFreed(unsigned int, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemMessage@InputDeliveryClientConversationHost@InputDeliveryClient@@UEAAJIIPEBX0I@Z
    virtual long OnItemMessage(unsigned int, unsigned int, void const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnected@InputDeliveryClientConversationHost@InputDeliveryClient@@UEAAJIIIPEAPEAX@Z
    virtual long OnPeerConnected(unsigned int, unsigned int, unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDisconnected@InputDeliveryClientConversationHost@InputDeliveryClient@@UEAAJIPEBX_N@Z
    virtual long OnPeerDisconnected(unsigned int, void const *, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPortConnectionFailed@InputDeliveryClientConversationHost@InputDeliveryClient@@UEAAJJIII@Z
    virtual long OnPortConnectionFailed(long, unsigned int, unsigned int, unsigned int);
};
} // namespace InputDeliveryClient
