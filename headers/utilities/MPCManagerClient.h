#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 54 member(s).
class MPCManagerClient {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MPCManagerClient@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableGamepadExclusivity@MPCManagerClient@@UEAAJXZ
    virtual long DisableGamepadExclusivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableGamepadExclusivityForProcess@MPCManagerClient@@UEAAJK@Z
    virtual long EnableGamepadExclusivityForProcess(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForcePrimaryInputType@MPCManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@@Z
    virtual long ForcePrimaryInputType(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentInputProvider@MPCManagerClient@@UEAAJPEAULegacyDeviceInfo@@PEAW4MPCSourceKind@@@Z
    virtual long GetCurrentInputProvider(LegacyDeviceInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MPCManagerClient@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MPCManagerClient@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MPCManagerClient@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GiveSpatialDataToPID@MPCManagerClient@@UEAAJH@Z
    virtual long GiveSpatialDataToPID(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@MPCManagerClient@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@MPCManagerClient@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MPCManagerClient@@QEAA@XZ
    MPCManagerClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonsChangedDuringHomeGesture@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@III_KI@Z
    long OnButtonsChangedDuringHomeGesture(BamoMPCManagerClientStub *, unsigned int, unsigned int, unsigned int, uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHomeGestureDetected@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@II_KII@Z
    long OnHomeGestureDetected(BamoMPCManagerClientStub *, unsigned int, unsigned int, uint64_t, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHomeGestureReadyChanged@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@_NII_KII@Z
    long OnHomeGestureReadyChanged(BamoMPCManagerClientStub *, bool, unsigned int, unsigned int, uint64_t, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ
    void OnServerConnectionChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MPCManagerClient@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MPCManagerClient@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResendGamepadIsSupportedForProcess@MPCManagerClient@@UEAAJK@Z
    virtual long ResendGamepadIsSupportedForProcess(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConvertGraspToSystemGesture@MPCManagerClient@@UEAAJEI@Z
    virtual long SetConvertGraspToSystemGesture(unsigned char, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOnlyMixedWorldRouting@MPCManagerClient@@UEAAJE@Z
    virtual long SetOnlyMixedWorldRouting(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerHomeGesture@MPCManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@I@Z
    virtual long TriggerHomeGesture(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ButtonsChangedDuringHomeGesture@MPCManagerClient@@UEAAJPEAU?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ButtonsChangedDuringHomeGesture(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_HomeGestureReadyChanged@MPCManagerClient@@UEAAJPEAU?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureReadyChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_HomeGestureReadyChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OnHomeGestureDetected@MPCManagerClient@@UEAAJPEAU?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_OnHomeGestureDetected(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ServerConnectionChanged@MPCManagerClient@@UEAAJPEAU?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVServerConnectionArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ServerConnectionChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsServerConnected@MPCManagerClient@@UEAAJPEAE@Z
    virtual long get_IsServerConnected(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MPCConstantManagerClient@MPCManagerClient@@UEAAJPEAPEAUIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Z
    virtual long get_MPCConstantManagerClient(::Windows::Internal::Input::MPCManager::IMPCConstantManagerClient * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ButtonsChangedDuringHomeGesture@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ButtonsChangedDuringHomeGesture(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_HomeGestureReadyChanged@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_HomeGestureReadyChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OnHomeGestureDetected@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OnHomeGestureDetected(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ServerConnectionChanged@MPCManagerClient@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ServerConnectionChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MPCManagerClient@@UEAA@XZ
    virtual ~MPCManagerClient();
};
