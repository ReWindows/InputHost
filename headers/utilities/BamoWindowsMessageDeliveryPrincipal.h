#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class BamoWindowsMessageDeliveryPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoWindowsMessageDeliveryPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwnd@BamoWindowsMessageDeliveryPrincipal@@UEAA_KXZ
    virtual uint64_t GetHwnd();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@BamoWindowsMessageDeliveryPrincipal@@UEAA?AW4WindowsMessageDeliveryType@Input@Internal@UI@Windows@@XZ
    virtual int GetType();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoWindowsMessageDeliveryPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoWindowsMessageDeliveryPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHwnd@BamoWindowsMessageDeliveryPrincipal@@UEAAX_K@Z
    virtual void SetHwnd(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetType@BamoWindowsMessageDeliveryPrincipal@@UEAAXW4WindowsMessageDeliveryType@Input@Internal@UI@Windows@@@Z
    virtual void SetType(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoWindowsMessageDeliveryPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoWindowsMessageDeliveryStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoWindowsMessageDeliveryStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoWindowsMessageDeliveryPrincipal@@MEAAJPEAVBamoWindowsMessageDeliveryStub@@@Z
    virtual long InitializeProxyUnderLock(BamoWindowsMessageDeliveryStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoWindowsMessageDeliveryPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoWindowsMessageDeliveryPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoWindowsMessageDeliveryPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoWindowsMessageDeliveryPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoWindowsMessageDeliveryPrincipal@@MEAAJPEAVBamoWindowsMessageDeliveryStub@@@Z
    virtual long OnPropertiesRefreshed(BamoWindowsMessageDeliveryStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoWindowsMessageDeliveryPrincipal@@MEAAJPEAVBamoWindowsMessageDeliveryStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoWindowsMessageDeliveryStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoWindowsMessageDeliveryPrincipal@@MEAAJPEAVBamoWindowsMessageDeliveryStub@@@Z
    virtual long OnStubDisconnected(BamoWindowsMessageDeliveryStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoWindowsMessageDeliveryPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
