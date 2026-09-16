#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 12 member(s).
class WindowsMessageDeliveryAdapter {
public:
    class TargetInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@WindowsMessageDeliveryAdapter@@SAJPEAVContextRuntimeClass@WRL2@Microsoft@@PEBGPEAUIWindowsMessageDeliveryTargetPrivate@@PEAUHWND__@@PEAPEAU6@@Z
    static long Create(WindissectOpaque *, unsigned short const *, IWindowsMessageDeliveryTargetPrivate *, HWND__*, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Detach@WindowsMessageDeliveryAdapter@@SAXPEAUHWND__@@@Z
    static void Detach(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@WindowsMessageDeliveryAdapter@@SAPEAV1@PEAUHWND__@@@Z
    static WindowsMessageDeliveryAdapter * Get(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Subclass@WindowsMessageDeliveryAdapter@@SAJPEAVContextRuntimeClass@WRL2@Microsoft@@PEAUIWindowsMessageDeliveryTargetPrivate@@PEAUHWND__@@@Z
    static long Subclass(WindissectOpaque *, IWindowsMessageDeliveryTargetPrivate *, HWND__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowsMessageDeliveryAdapter@@QEAA@XZ
    WindowsMessageDeliveryAdapter();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModuleHandleW@WindowsMessageDeliveryAdapter@@CAJPEAPEAUHINSTANCE__@@@Z
    static long GetModuleHandleW(HINSTANCE__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessWindowMessage_NoLock_Callback@WindowsMessageDeliveryAdapter@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t ProcessWindowMessage_NoLock_Callback(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInputWindowClass@WindowsMessageDeliveryAdapter@@CAXPEBG@Z
    static void RegisterInputWindowClass(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticSubclassWndProc_NoLock@WindowsMessageDeliveryAdapter@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t StaticSubclassWndProc_NoLock(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticWndProc@WindowsMessageDeliveryAdapter@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t StaticWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubclassWindow@WindowsMessageDeliveryAdapter@@AEAAXPEAUHWND__@@@Z
    void SubclassWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubclassWindow@WindowsMessageDeliveryAdapter@@AEAAXPEAUHWND__@@@Z
    void UnsubclassWindow(HWND__*);
};
