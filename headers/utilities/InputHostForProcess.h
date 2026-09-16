#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 7 member(s).
class InputHostForProcess {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputHost@InputHostForProcess@@QEAAPEAUIInputHost@@XZ
    IInputHost * GetInputHost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@InputHostForProcess@@SAPEAV1@XZ
    static InputHostForProcess * GetInstance();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputHostForProcess@@QEAA@XZ
    InputHostForProcess();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputHostDestroyed@InputHostForProcess@@SAXXZ
    static void OnInputHostDestroyed();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputHostForProcess@@UEAA@XZ
    virtual ~InputHostForProcess();
};
