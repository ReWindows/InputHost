#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
class InputDeliveryClient {
public:
    class InputDeliveryClientConversationHost;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInputSource@InputDeliveryClient@@UEAA?AUtagInputRoutingInfo@@AEBUtagMsgRoutingInfo@@V?$ComPtr@UIInputDeliveryClientInputCallback@@@WRL@Microsoft@@@Z
    virtual tagInputRoutingInfo CreateInputSource(tagMsgRoutingInfo const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyInputSource@InputDeliveryClient@@UEAAXAEBUtagInputRoutingInfo@@@Z
    virtual void DestroyInputSource(tagInputRoutingInfo const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputDeliveryClient@@QEAA@XZ
    InputDeliveryClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InputDeliveryClient@@UEAAJPEAUIInputDeliveryClientHost@@PEBGW4TestMode@1@@Z
    virtual long RuntimeClassInitialize(IInputDeliveryClientHost *, unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSupportedInput@InputDeliveryClient@@UEAAXUtagInputRoutingInfo@@KK@Z
    virtual void SetSupportedInput(tagInputRoutingInfo, unsigned long, unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInputSources@InputDeliveryClient@@AEAAXXZ
    void RegisterInputSources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInputSourcesStatic@InputDeliveryClient@@CAJPEAX@Z
    static long RegisterInputSourcesStatic(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMessageToServer@InputDeliveryClient@@AEAAXPEAXI@Z
    void SendMessageToServer(void *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputDeliveryClient@@EEAA@XZ
    virtual ~InputDeliveryClient();
};
