#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
class ComboButtonProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ComboButtonProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ComboButtonProxy@@SAJPEAUIComboButtonProxyOwner@@PEAPEAV1@@Z
    static long Create(IComboButtonProxyOwner *, ComboButtonProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MessageProc@ComboButtonProxy@@SAJPEAXPEBXH@Z
    static long MessageProc(void *, void const *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ComboButtonProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterComboButton@ComboButtonProxy@@UEAAJ_NUButtonRegistrationABI@@@Z
    virtual long RegisterComboButton(bool, ButtonRegistrationABI);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ComboButtonProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterComboButton@ComboButtonProxy@@UEAAJI@Z
    virtual long UnregisterComboButton(unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ComboButtonProxy@@IEAAJXZ
    long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComboButtonProxy@@MEAA@XZ
    virtual ~ComboButtonProxy();
};
