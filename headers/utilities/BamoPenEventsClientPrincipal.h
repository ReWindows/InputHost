#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 34 member(s).
class BamoPenEventsClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoPenEventsClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDockedEventsRequired@BamoPenEventsClientPrincipal@@UEAA_NXZ
    virtual bool GetDockedEventsRequired();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsShell@BamoPenEventsClientPrincipal@@UEAA_NXZ
    virtual bool GetIsShell();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoPenEventsClientPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTailButtonClickedEventsRequired@BamoPenEventsClientPrincipal@@UEAA_NXZ
    virtual bool GetTailButtonClickedEventsRequired();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTailButtonDoubleClickedEventsRequired@BamoPenEventsClientPrincipal@@UEAA_NXZ
    virtual bool GetTailButtonDoubleClickedEventsRequired();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTailButtonLongPressedEventsRequired@BamoPenEventsClientPrincipal@@UEAA_NXZ
    virtual bool GetTailButtonLongPressedEventsRequired();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTipToGlassEventsRequired@BamoPenEventsClientPrincipal@@UEAA_NXZ
    virtual bool GetTipToGlassEventsRequired();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUndockedEventsRequired@BamoPenEventsClientPrincipal@@UEAA_NXZ
    virtual bool GetUndockedEventsRequired();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoPenEventsClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoPenEventsClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDockedEventsRequired@BamoPenEventsClientPrincipal@@UEAAX_N@Z
    virtual void SetDockedEventsRequired(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsShell@BamoPenEventsClientPrincipal@@UEAAX_N@Z
    virtual void SetIsShell(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTailButtonClickedEventsRequired@BamoPenEventsClientPrincipal@@UEAAX_N@Z
    virtual void SetTailButtonClickedEventsRequired(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTailButtonDoubleClickedEventsRequired@BamoPenEventsClientPrincipal@@UEAAX_N@Z
    virtual void SetTailButtonDoubleClickedEventsRequired(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTailButtonLongPressedEventsRequired@BamoPenEventsClientPrincipal@@UEAAX_N@Z
    virtual void SetTailButtonLongPressedEventsRequired(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTipToGlassEventsRequired@BamoPenEventsClientPrincipal@@UEAAX_N@Z
    virtual void SetTipToGlassEventsRequired(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUndockedEventsRequired@BamoPenEventsClientPrincipal@@UEAAX_N@Z
    virtual void SetUndockedEventsRequired(bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoPenEventsClientPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoPenEventsClientStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoPenEventsClientStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoPenEventsClientPrincipal@@MEAAJPEAVBamoPenEventsClientStub@@@Z
    virtual long InitializeProxyUnderLock(BamoPenEventsClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoPenEventsClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoPenEventsClientPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoPenEventsClientPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoPenEventsClientPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoPenEventsClientPrincipal@@MEAAJPEAVBamoPenEventsClientStub@@@Z
    virtual long OnPropertiesRefreshed(BamoPenEventsClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoPenEventsClientPrincipal@@MEAAJPEAVBamoPenEventsClientStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoPenEventsClientStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoPenEventsClientPrincipal@@MEAAJPEAVBamoPenEventsClientStub@@@Z
    virtual long OnStubDisconnected(BamoPenEventsClientStub *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoPenEventsClientPrincipal@@MEAA@XZ
    virtual ~BamoPenEventsClientPrincipal();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoPenEventsClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
