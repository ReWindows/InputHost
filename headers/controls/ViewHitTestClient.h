#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 31 member(s).
class ViewHitTestClient {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ViewHitTestClient@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ViewHitTestClient@@SAJPEAUIViewHitTestClientOwner@@PEAPEAUIViewHitTestClient@@@Z
    static long Create(IViewHitTestClientOwner *, IViewHitTestClient * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ViewHitTestClient@@UEAAJXZ
    virtual long Destroy();
    // Category: Method | Source: PE Export
    // Symbol: ?NotifyProxyConnectRequested@ViewHitTestClient@@UEAAJII@Z
    virtual long NotifyProxyConnectRequested(unsigned int, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?NotifyProxyCreated@ViewHitTestClient@@UEAAJII@Z
    virtual long NotifyProxyCreated(unsigned int, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?NotifyProxyDisposed@ViewHitTestClient@@UEAAJII@Z
    virtual long NotifyProxyDisposed(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@ViewHitTestClient@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnConnected(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@ViewHitTestClient@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnDisconnected(IMessageProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@ViewHitTestClient@@UEAAJPEAUIMessageProxy@@G@Z
    virtual long OnPropertyChanged(IMessageProxy *, unsigned short);
    // Category: Method | Source: PE Export
    // Symbol: ?OnProxyCreated@ViewHitTestClient@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnProxyCreated(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewHitTest@ViewHitTestClient@@UEAAJUViewHitTestInfo@@@Z
    virtual long OnViewHitTest(ViewHitTestInfo);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ViewHitTestClient@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ViewHitTestClient@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewActivationDeclined@ViewHitTestClient@@UEAAJI@Z
    virtual long ViewActivationDeclined(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewActivationStart@ViewHitTestClient@@UEAAJII@Z
    virtual long ViewActivationStart(unsigned int, unsigned int);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewHitTestClient@@MEAA@XZ
    virtual ~ViewHitTestClient();
};
