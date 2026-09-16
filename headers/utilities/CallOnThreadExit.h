#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
class CallOnThreadExit {
public:
    class CallbackData;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallOnThreadExitStatic@CallOnThreadExit@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z
    void CallOnThreadExitStatic(_TP_CALLBACK_INSTANCE *, void *, _TP_WAIT *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDllProcessDetach_NotProcessTermination@CallOnThreadExit@@YAXXZ
    void OnDllProcessDetach_NotProcessTermination();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThreadExit@CallOnThreadExit@@YAXXZ
    void OnThreadExit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCallbackModuleReference@CallOnThreadExit@@YAXAEAUCallbackData@1@@Z
    void ReleaseCallbackModuleReference(WindissectOpaque &);
};
