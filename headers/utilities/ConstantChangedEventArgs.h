#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 20 member(s).
namespace Windows::Internal::Input::MPCManager {
class ConstantChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@QEAA@W4InputType@1234@$$QEAVHString@Wrappers@WRL@Microsoft@@PEAUIPropertyValue@Foundation@4@2@Z
    ConstantChangedEventArgs(int, ::Microsoft::WRL::Wrappers::HString &&, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ConstantName@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ConstantName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultValue@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAPEAUIPropertyValue@Foundation@5@@Z
    virtual long get_DefaultValue(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputType@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAW4InputType@2345@@Z
    virtual long get_InputType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAPEAUIPropertyValue@Foundation@5@@Z
    virtual long get_Value(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAA@XZ
    virtual ~ConstantChangedEventArgs();
};
} // namespace Windows::Internal::Input::MPCManager
