#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 35 member(s).
class CursorClient {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CursorClient@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CursorClient@@SAJPEAPEAUICursorClient@@@Z
    static long Create(ICursorClient * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmapCursorShape@CursorClient@@UEAAJIIIIIIPEBEII0IIPEA_K@Z
    virtual long CreateBitmapCursorShape(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char const *, unsigned int, unsigned int, unsigned char const *, unsigned int, unsigned int, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCustomCursorShape@CursorClient@@UEAAJPEAUHINSTANCE__@@PEBGPEA_K@Z
    virtual long CreateCustomCursorShape(HINSTANCE__*, unsigned short const *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCustomCursorShape@CursorClient@@UEAAJ_K@Z
    virtual long DestroyCustomCursorShape(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeCustomCursorBamoConnection@CursorClient@@UEAAXXZ
    virtual void InitializeCustomCursorBamoConnection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCustomCursorSupported@CursorClient@@UEAA_NXZ
    virtual bool IsCustomCursorSupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@CursorClient@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnConnected(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@CursorClient@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnDisconnected(IMessageProxy *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertyChanged@CursorClient@@UEAAJPEAUIMessageProxy@@G@Z
    virtual long OnPropertyChanged(IMessageProxy *, unsigned short);
    // Category: Method | Source: PE Export
    // Symbol: ?OnProxyCreated@CursorClient@@UEAAJPEAUIMessageProxy@@@Z
    virtual long OnProxyCreated(IMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpdateCursor@CursorClient@@UEAAJII@Z
    virtual long OnUpdateCursor(unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CursorClient@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CursorClient@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportClosestInteractiveBounds@CursorClient@@UEAAJUCursorId@@UtagRECT@@@Z
    virtual long ReportClosestInteractiveBounds(CursorId, tagRECT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCursor@CursorClient@@UEAAJ_K@Z
    virtual long SetCursor(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCursorLocked@CursorClient@@UEAAJ_N@Z
    virtual long SetCursorLocked(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCursorVisible@CursorClient@@UEAAJ_N@Z
    virtual long SetCursorVisible(bool);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CursorClient@@IEAA@XZ
    CursorClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CursorClient@@IEAAJXZ
    long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCursorVisible@CursorClient@@IEAA_N_K_N@Z
    bool IsCursorVisible(uint64_t, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CursorClient@@MEAA@XZ
    virtual ~CursorClient();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndpoint@CursorClient@@AEAAJXZ
    long GetEndpoint();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGlyph@CursorClient@@AEAAJUCursorId@@@Z
    long SetGlyph(CursorId);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocked@CursorClient@@AEAAJUCursorId@@@Z
    long SetLocked(CursorId);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibility@CursorClient@@AEAAJUCursorId@@@Z
    long SetVisibility(CursorId);
};
