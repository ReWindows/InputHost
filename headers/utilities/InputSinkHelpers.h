#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
class InputSinkHelpers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachInputSinkToVisual@InputSinkHelpers@@SAXPEAUIVisual@Composition@UI@Windows@@PEAX@Z
    static void AttachInputSinkToVisual(::Windows::UI::Composition::IVisual *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputSinkHandleFromVisual@InputSinkHelpers@@SAPEAXPEAUIVisual@Composition@UI@Windows@@@Z
    static void * GetInputSinkHandleFromVisual(::Windows::UI::Composition::IVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLuidAsInputSiteIdFromInputSinkHandle@InputSinkHelpers@@SA_KPEAX@Z
    static uint64_t GetLuidAsInputSiteIdFromInputSinkHandle(void *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionInputQueue@InputSinkHelpers@@CA?AUCOMPOSITION_INPUT_QUEUE@@PEAUHWND__@@@Z
    static COMPOSITION_INPUT_QUEUE CreateCompositionInputQueue(HWND__*);
};
