#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
class HapticFeedbackSettingsWinRT {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HapticFeedbackSettingsWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@HapticFeedbackSettingsWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HapticFeedbackSettingsWinRT@@QEAA@XZ
    HapticFeedbackSettingsWinRT();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HapticFeedbackSettingsWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HapticFeedbackSettingsWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@HapticFeedbackSettingsWinRT@@QEAAJPEAVContextSession@WRL2@Microsoft@@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HapticFeedbackSettingsWinRT@@UEAA@XZ
    virtual ~HapticFeedbackSettingsWinRT();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveHapticSettings@HapticFeedbackSettingsWinRT@@AEAAJPEAUtagINPUT_HAPTIC_SETTINGS@@@Z
    long RetrieveHapticSettings(tagINPUT_HAPTIC_SETTINGS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHapticSettings@HapticFeedbackSettingsWinRT@@AEAAJAEAUtagINPUT_HAPTIC_SETTINGS@@@Z
    long SetHapticSettings(tagINPUT_HAPTIC_SETTINGS &);
};
