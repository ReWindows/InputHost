#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 5 member(s).
namespace ISMBamos_AutoBamos {
class BamoPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnection@BamoPeer@ISMBamos_AutoBamos@@QEBAPEAVBamoConnection@2@XZ
    ::ISMBamos_AutoBamos::BamoConnection * GetConnection() const;
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoPeer@ISMBamos_AutoBamos@@EEBAPEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BaseBamoPeerImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetBootstrapProxy@BamoPeer@ISMBamos_AutoBamos@@EEBAXI@Z
    virtual void LogSetBootstrapProxy(unsigned int) const;
};
} // namespace ISMBamos_AutoBamos
