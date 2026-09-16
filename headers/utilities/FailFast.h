#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 6 member(s).
namespace Microsoft::WRL2 {
class FailFast {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Do@FailFast@WRL2@Microsoft@@SAXXZ
    static void Do();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z
    static void ForHR(long, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z
    static void OutOfMemory(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@@Z
    static int SehToFailFastFilter(_EXCEPTION_POINTERS *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z
    static void Unexpected(char const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Do@FailFast@WRL2@Microsoft@@CAXPEBXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@PEBD@Z
    static void _Do(void const *, _EXCEPTION_RECORD *, _CONTEXT *, char const *);
};
} // namespace Microsoft::WRL2
