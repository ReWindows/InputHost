#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 9 member(s).
class InputRedirectionClient {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputRedirectionClient@@QEAA@XZ
    InputRedirectionClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@InputRedirectionClient@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnConnected(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@InputRedirectionClient@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnDisconnected(IMessageProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@InputRedirectionClient@@UEAAJPEAUIMessageProxy@@G@Z
    virtual long OnPropertyChanged(IMessageProxy *, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputRedirectionState@InputRedirectionClient@@QEAAJW4InputRedirectionState@@@Z
    long SetInputRedirectionState(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputRedirectionClient@@UEAA@XZ
    virtual ~InputRedirectionClient();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateInputRedirectionConnection@InputRedirectionClient@@AEAAJXZ
    long ValidateInputRedirectionConnection();
};
