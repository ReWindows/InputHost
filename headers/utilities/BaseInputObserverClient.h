#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 6 member(s).
class BaseInputObserverClient {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BaseInputObserverClient@@UEAA@XZ
    virtual ~BaseInputObserverClient();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BaseInputObserverClient@@IEAA@W4InputObserverType@InputObservation@@PEAVInputSystemClientConnection@@@Z
    BaseInputObserverClient(int, InputSystemClientConnection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@BaseInputObserverClient@@MEAAJPEAVBamoInputObserverClientStub@@@Z
    virtual long OnStubDisconnected(BamoInputObserverClientStub *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWithServer@BaseInputObserverClient@@AEAAXPEAVInputSystemClientConnection@@W4RegisterOperation@1@@Z
    void RegisterWithServer(InputSystemClientConnection *, int);
};
