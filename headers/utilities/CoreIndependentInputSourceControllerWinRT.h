#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 16 member(s).
class CoreIndependentInputSourceControllerWinRT {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CoreIndependentInputSourceControllerWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreIndependentInputSourceControllerWinRT@@QEAA@XZ
    CoreIndependentInputSourceControllerWinRT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CoreIndependentInputSourceControllerWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CoreIndependentInputSourceControllerWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CoreIndependentInputSourceControllerWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CoreIndependentInputSourceControllerWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@PEAUIVisual@Composition@UI@Windows@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, ::Windows::UI::Composition::IVisual *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreIndependentInputSourceControllerWinRT@@UEAA@XZ
    virtual ~CoreIndependentInputSourceControllerWinRT();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsPalmRejectionEnabled@CoreIndependentInputSourceControllerWinRT@@AEBAJPEAE@Z
    long GetIsPalmRejectionEnabled(unsigned char *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsTransparentForUncontrolledInput@CoreIndependentInputSourceControllerWinRT@@AEBAJPEAE@Z
    long GetIsTransparentForUncontrolledInput(unsigned char *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@CoreIndependentInputSourceControllerWinRT@@AEBAJPEAPEAUICoreInputSourceBase@Core@UI@Windows@@@Z
    long GetSource(::Windows::UI::Core::ICoreInputSourceBase * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutIsPalmRejectionEnabled@CoreIndependentInputSourceControllerWinRT@@AEAAJE@Z
    long PutIsPalmRejectionEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutIsTransparentForUncontrolledInput@CoreIndependentInputSourceControllerWinRT@@AEAAJE@Z
    long PutIsTransparentForUncontrolledInput(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetControlledInputImpl@CoreIndependentInputSourceControllerWinRT@@AEAAJW4CoreInputDeviceTypes@Core@UI@Windows@@W4CoreIndependentInputFilters@345@1@Z
    long SetControlledInputImpl(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMouseConfig@CoreIndependentInputSourceControllerWinRT@@AEAAJW4CoreInputDeviceTypes@Core@UI@Windows@@W4CoreIndependentInputFilters@345@1@Z
    long UpdateMouseConfig(int, int, int);
};
