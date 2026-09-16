#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 26 member(s).
class ViewHitTestRequestClient {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ViewHitTestRequestClient@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ViewHitTestRequestClient@@SAJPEAUIViewHitTestRequestClientOwner@@PEAPEAUIViewHitTestRequestClient@@@Z
    static long Create(IViewHitTestRequestClientOwner *, IViewHitTestRequestClient * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ViewHitTestRequestClient@@UEAAJXZ
    virtual long Destroy();
    // Category: Method | Source: PE Export
    // Symbol: ?NotifyProxyConnectRequested@ViewHitTestRequestClient@@UEAAJII@Z
    virtual long NotifyProxyConnectRequested(unsigned int, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?NotifyProxyCreated@ViewHitTestRequestClient@@UEAAJII@Z
    virtual long NotifyProxyCreated(unsigned int, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?NotifyProxyDisposed@ViewHitTestRequestClient@@UEAAJII@Z
    virtual long NotifyProxyDisposed(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestedViewHitTest@ViewHitTestRequestClient@@UEAAJUViewHitTestInfo@@@Z
    virtual long OnRequestedViewHitTest(ViewHitTestInfo);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ViewHitTestRequestClient@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ViewHitTestRequestClient@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestViewHitTest@ViewHitTestRequestClient@@UEAAJUViewHitTestInfo@@@Z
    virtual long RequestViewHitTest(ViewHitTestInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestViewHitTestSync@ViewHitTestRequestClient@@UEAAJUViewHitTestInfo@@PEAI@Z
    virtual long RequestViewHitTestSync(ViewHitTestInfo, unsigned int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullRemoteViewHitTestRequestProxy@ViewHitTestRequestClient@@IEAAJPEAPEAUIRemoteViewHitTestRequest@@@Z
    long PullRemoteViewHitTestRequestProxy(IRemoteViewHitTestRequest * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullRemoteViewHitTestRequestSyncProxy@ViewHitTestRequestClient@@IEAAJPEAPEAUIRemoteViewHitTestRequest@@@Z
    long PullRemoteViewHitTestRequestSyncProxy(IRemoteViewHitTestRequest * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewHitTestRequestClient@@MEAA@XZ
    virtual ~ViewHitTestRequestClient();
};
