#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 20 member(s).
class BamoSimpleHapticsControllerImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BamoSimpleHapticsControllerImpl@@QEAA@XZ
    BamoSimpleHapticsControllerImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@BamoSimpleHapticsControllerImpl@@UEAAJPEAVContextSession@WRL2@Microsoft@@PEAVBamoSimpleHapticsControllerProxy@@@Z
    virtual long RuntimeClassInitialize(WindissectOpaque *, BamoSimpleHapticsControllerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendHapticFeedback@BamoSimpleHapticsControllerImpl@@UEAAJPEAUISimpleHapticsControllerFeedback@Haptics@Devices@Windows@@@Z
    virtual long SendHapticFeedback(::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendHapticFeedbackForDuration@BamoSimpleHapticsControllerImpl@@UEAAJPEAUISimpleHapticsControllerFeedback@Haptics@Devices@Windows@@NUTimeSpan@Foundation@5@@Z
    virtual long SendHapticFeedbackForDuration(::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback *, double, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerImpl@@UEAAJPEAUISimpleHapticsControllerFeedback@Haptics@Devices@Windows@@NHUTimeSpan@Foundation@5@@Z
    virtual long SendHapticFeedbackForPlayCount(::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback *, double, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendHapticFeedbackWithIntensity@BamoSimpleHapticsControllerImpl@@UEAAJPEAUISimpleHapticsControllerFeedback@Haptics@Devices@Windows@@N@Z
    virtual long SendHapticFeedbackWithIntensity(::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback *, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopFeedback@BamoSimpleHapticsControllerImpl@@UEAAJXZ
    virtual long StopFeedback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@BamoSimpleHapticsControllerImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsIntensitySupported@BamoSimpleHapticsControllerImpl@@UEAAJPEAE@Z
    virtual long get_IsIntensitySupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPlayCountSupported@BamoSimpleHapticsControllerImpl@@UEAAJPEAE@Z
    virtual long get_IsPlayCountSupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPlayDurationSupported@BamoSimpleHapticsControllerImpl@@UEAAJPEAE@Z
    virtual long get_IsPlayDurationSupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReplayPauseIntervalSupported@BamoSimpleHapticsControllerImpl@@UEAAJPEAE@Z
    virtual long get_IsReplayPauseIntervalSupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedFeedback@BamoSimpleHapticsControllerImpl@@UEAAJPEAPEAU?$IVectorView@PEAVSimpleHapticsControllerFeedback@Haptics@Devices@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_SupportedFeedback(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoSimpleHapticsControllerImpl@@UEAA@XZ
    virtual ~BamoSimpleHapticsControllerImpl();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInkFeedback@BamoSimpleHapticsControllerImpl@@AEAA_NPEAUISimpleHapticsControllerFeedback@Haptics@Devices@Windows@@@Z
    bool IsInkFeedback(::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMouseFeedbackEnabled@BamoSimpleHapticsControllerImpl@@AEAA_NXZ
    bool IsMouseFeedbackEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPenFeedbackEnabled@BamoSimpleHapticsControllerImpl@@AEAA_NPEAUISimpleHapticsControllerFeedback@Haptics@Devices@Windows@@@Z
    bool IsPenFeedbackEnabled(::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTouchpadFeedbackEnabled@BamoSimpleHapticsControllerImpl@@AEAA_NXZ
    bool IsTouchpadFeedbackEnabled();
};
