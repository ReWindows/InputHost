#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 15 member(s).
namespace KeyboardInputWinRT {
class Private {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeAcceleratorKeyEventHandlers@Private@KeyboardInputWinRT@@UEAAJPEAUIAcceleratorKeyEventArgs@Core@UI@Windows@@@Z
    virtual long InvokeAcceleratorKeyEventHandlers(::Windows::UI::Core::IAcceleratorKeyEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCharacterReceivedEventHandlers@Private@KeyboardInputWinRT@@UEAAJPEAUICharacterReceivedEventArgs@Core@UI@Windows@@@Z
    virtual long InvokeCharacterReceivedEventHandlers(::Windows::UI::Core::ICharacterReceivedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeKeyDownEventHandlers@Private@KeyboardInputWinRT@@UEAAJPEAUIKeyEventArgs@Core@UI@Windows@@@Z
    virtual long InvokeKeyDownEventHandlers(::Windows::UI::Core::IKeyEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeKeyUpEventHandlers@Private@KeyboardInputWinRT@@UEAAJPEAUIKeyEventArgs@Core@UI@Windows@@@Z
    virtual long InvokeKeyUpEventHandlers(::Windows::UI::Core::IKeyEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeNavigationFocusEventHandlers@Private@KeyboardInputWinRT@@UEAAJPEAUINavigationFocusEventArgs@Core@UI@Windows@@@Z
    virtual long InvokeNavigationFocusEventHandlers(::Windows::UI::Core::INavigationFocusEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeSystemKeyDownEventHandlers@Private@KeyboardInputWinRT@@UEAAJPEAUIKeyEventArgs@Core@UI@Windows@@@Z
    virtual long InvokeSystemKeyDownEventHandlers(::Windows::UI::Core::IKeyEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeSystemKeyUpEventHandlers@Private@KeyboardInputWinRT@@UEAAJPEAUIKeyEventArgs@Core@UI@Windows@@@Z
    virtual long InvokeSystemKeyUpEventHandlers(::Windows::UI::Core::IKeyEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnableNonCUIDepartFocus@Private@KeyboardInputWinRT@@UEAAJE@Z
    virtual long OnEnableNonCUIDepartFocus(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextInputProducerFocusChanged@Private@KeyboardInputWinRT@@UEAAJE@Z
    virtual long OnTextInputProducerFocusChanged(unsigned char);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Private@KeyboardInputWinRT@@QEAA@XZ
    Private();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GetHostType@Private@KeyboardInputWinRT@@UEAAJPEAH@Z
    virtual long get_GetHostType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextInputProducer@Private@KeyboardInputWinRT@@UEAAJPEAPEAUITextInputProducer@Core@UI@Windows@@@Z
    virtual long get_TextInputProducer(::Windows::UI::Core::ITextInputProducer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewInstanceId@Private@KeyboardInputWinRT@@UEAAJPEAI@Z
    virtual long get_ViewInstanceId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowHandle@Private@KeyboardInputWinRT@@UEAAJPEAPEAUHWND__@@@Z
    virtual long get_WindowHandle(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TextInputProducer@Private@KeyboardInputWinRT@@UEAAJPEAUITextInputProducer@Core@UI@Windows@@@Z
    virtual long put_TextInputProducer(::Windows::UI::Core::ITextInputProducer *);
};
} // namespace KeyboardInputWinRT
