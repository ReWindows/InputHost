#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 7 member(s).
class BamoSimpleHapticsControllerFeedbackList {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSupportedFeedback@BamoSimpleHapticsControllerFeedbackList@@QEAAJPEAPEAU?$IVectorView@PEAVSimpleHapticsControllerFeedback@Haptics@Devices@Windows@@@Collections@Foundation@Windows@@@Z
    long GetSupportedFeedback(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BamoSimpleHapticsControllerFeedbackList@@UEAA@XZ
    virtual ~BamoSimpleHapticsControllerFeedbackList();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@BamoSimpleHapticsControllerFeedbackList@@MEAAJXZ
    virtual long OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInserted@BamoSimpleHapticsControllerFeedbackList@@MEAAJI@Z
    virtual long OnInserted(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoved@BamoSimpleHapticsControllerFeedbackList@@MEAAJIAEBUSimpleHapticsControllerFeedback@@@Z
    virtual long OnRemoved(unsigned int, SimpleHapticsControllerFeedback const &);
};
