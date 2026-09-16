#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 10 member(s).
class PointerCursorControllerWinRT {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PointerCursorControllerWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition_Callback@PointerCursorControllerWinRT@@QEAA?AUPoint@Foundation@Windows@@XZ
    WindissectOpaque GetPosition_Callback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@PointerCursorControllerWinRT@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PointerCursorControllerWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PointerCursorControllerWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PointerCursorControllerWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCursor@PointerCursorControllerWinRT@@QEAAJPEAUICoreCursor@Core@UI@Windows@@@Z
    long SetCursor(::Windows::UI::Core::ICoreCursor *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PointerCursorControllerWinRT@@UEAA@XZ
    virtual ~PointerCursorControllerWinRT();
};
