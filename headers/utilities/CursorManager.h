#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 23 member(s).
class CursorManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CursorManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICursorManager@@@Z
    static long Create(ICursorManagerClient *, unsigned long, int, ICursorManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@CursorManager@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnConnected(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreMessageStatic@CursorManager@@SAJPEAX0H@Z
    static long OnCoreMessageStatic(void *, void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@CursorManager@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnDisconnected(IMessageProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@CursorManager@@UEAAJPEAUIMessageProxy@@G@Z
    virtual long OnPropertyChanged(IMessageProxy *, unsigned short);
    // Category: Method | Source: PE Export
    // Symbol: ?OnProxyCreated@CursorManager@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnProxyCreated(IMessageProxy *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CursorManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CursorManager@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CursorManager@@IEAA@PEAUICursorManagerClient@@KW4CursorManagerClientVersion@@@Z
    CursorManager(ICursorManagerClient *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CursorManager@@IEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCursorMessage@CursorManager@@IEAAJPEAUCursorMessage@@@Z
    long OnCursorMessage(CursorMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCursorTargetChanged@CursorManager@@IEAAJPEAUCursorMessage@@@Z
    long OnCursorTargetChanged(CursorMessage *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CursorManager@@MEAA@XZ
    virtual ~CursorManager();
};
