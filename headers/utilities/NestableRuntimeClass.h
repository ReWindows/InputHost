#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
namespace Microsoft::WRL2 {
class NestableRuntimeClass {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ
    unsigned long InternalAddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetIids@NestableRuntimeClass@WRL2@Microsoft@@QEAAJPEAKPEAPEAU_GUID@@@Z
    long InternalGetIids(unsigned long *, _GUID * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@NestableRuntimeClass@WRL2@Microsoft@@QEAAJPEAPEAUHSTRING__@@@Z
    long InternalGetRuntimeClassName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long InternalQueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ
    unsigned long InternalRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z
    static long ValidateInterface(IUnknown *, WindissectOpaque const *, WindissectOpaque * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@NestableRuntimeClass@WRL2@Microsoft@@MEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendedQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long ExtendedQueryInterface(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@NestableRuntimeClass@WRL2@Microsoft@@MEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@NestableRuntimeClass@WRL2@Microsoft@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@NestableRuntimeClass@WRL2@Microsoft@@MEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NestableRuntimeClass@WRL2@Microsoft@@IEAA@XZ
    NestableRuntimeClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyObjectResurrected@NestableRuntimeClass@WRL2@Microsoft@@MEAAXXZ
    virtual void NotifyObjectResurrected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalRelease_NoLock@NestableRuntimeClass@WRL2@Microsoft@@MEAAX_N@Z
    virtual void OnFinalRelease_NoLock(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NestableRuntimeClass@WRL2@Microsoft@@MEAA@XZ
    virtual ~NestableRuntimeClass();
};
} // namespace Microsoft::WRL2
