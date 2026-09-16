#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 3 member(s).
namespace PenDeviceWinRT {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@PenDeviceWinRT@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PenId@Api@PenDeviceWinRT@@UEAAJPEAU_GUID@@@Z
    virtual long get_PenId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SimpleHapticsController@Api@PenDeviceWinRT@@UEAAJPEAPEAUISimpleHapticsController@Haptics@Devices@Windows@@@Z
    virtual long get_SimpleHapticsController(::Windows::Devices::Haptics::ISimpleHapticsController * *);
};
} // namespace PenDeviceWinRT
