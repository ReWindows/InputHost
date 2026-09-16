#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 26 member(s).
class MPCConstantManagerClient {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MPCConstantManagerClient@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveInputTypeListAsync@MPCConstantManagerClient@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long GetActiveInputTypeListAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@6@@Z
    virtual long GetConstantAsync(int, HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConstantsForInputTypeAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAPEAU?$IAsyncOperation@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@6@@Z
    virtual long GetConstantsForInputTypeAsync(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MPCConstantManagerClient@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MPCConstantManagerClient@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MPCConstantManagerClient@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MPCConstantManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z
    MPCConstantManagerClient(MPCManagerClientConnection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConstantChanged@MPCConstantManagerClient@@QEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@3@Z
    long OnConstantChanged(BamoMPCConstantManagerClientCallbacksStub *, int, unsigned short const *, tagPROPVARIANT const &, tagPROPVARIANT const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MPCConstantManagerClient@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MPCConstantManagerClient@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllConstantsForInputTypeToDefaultAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long SetAllConstantsForInputTypeToDefaultAsync(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAUIPropertyValue@Foundation@6@PEAPEAUIAsyncAction@96@@Z
    virtual long SetConstantAsync(int, HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConstantToDefaultAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long SetConstantToDefaultAsync(int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ConstantChanged@MPCConstantManagerClient@@UEAAJPEAU?$ITypedEventHandler@PEAVMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@PEAVConstantChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ConstantChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ConstantChanged@MPCConstantManagerClient@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ConstantChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MPCConstantManagerClient@@UEAA@XZ
    virtual ~MPCConstantManagerClient();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ
    void CleanupPrincipals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePROPVARIANTFromPropertyValue@MPCConstantManagerClient@@CAJPEAUIPropertyValue@Foundation@Windows@@PEAUtagPROPVARIANT@@@Z
    static long CreatePROPVARIANTFromPropertyValue(WindissectOpaque *, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePropertyValueFromPROPVARIANT@MPCConstantManagerClient@@CAJAEBUtagPROPVARIANT@@PEAPEAUIPropertyValue@Foundation@Windows@@@Z
    static long CreatePropertyValueFromPROPVARIANT(tagPROPVARIANT const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBamoCallbacks@MPCConstantManagerClient@@AEAAJXZ
    long EnsureBamoCallbacks();
};
