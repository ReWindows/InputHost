#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 13 member(s).
class InputEdgyNotificationSource {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputEdgyNotificationSource@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InputEdgyNotificationSource@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EdgyRecognized@InputEdgyNotificationSource@@UEAAJPEAVBamoEdgyNotificationSourceClientPrincipal@@PEAVBamoEdgyNotificationSourceClientStub@@AEBUPoint@Foundation@Windows@@@Z
    virtual long EdgyRecognized(BamoEdgyNotificationSourceClientPrincipal *, BamoEdgyNotificationSourceClientStub *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsLifetime@InputEdgyNotificationSource@@UEBA_NXZ
    virtual bool OwnsLifetime() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputEdgyNotificationSource@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputEdgyNotificationSource@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InputEdgyNotificationSource@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIInputSitePrivate_NoLock@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IInputSitePrivate_NoLock *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputEdgyNotificationSource@@UEAA@XZ
    virtual ~InputEdgyNotificationSource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEdgyRecognizedEventHandler@InputEdgyNotificationSource@@AEAAJPEAU?$ITypedEventHandler@PEAVInputEdgyNotificationSource@Input@Internal@UI@Windows@@PEAVEdgyRecognizedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long AddEdgyRecognizedEventHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEdgyRecognizedEventHandler@InputEdgyNotificationSource@@AEAAJUEventRegistrationToken@@@Z
    long RemoveEdgyRecognizedEventHandler(EventRegistrationToken);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConfiguration@InputEdgyNotificationSource@@AEAAXPEAVEdgyGestureRecognitionConfiguration@@@Z
    void SetConfiguration(EdgyGestureRecognitionConfiguration *);
};
