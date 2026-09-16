#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 4 member(s).
class CInputTransform {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RelativePointToScreen@CInputTransform@@QEBA?AUTransformedPoint@@AEBU2@@Z
    TransformedPoint RelativePointToScreen(TransformedPoint const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RelativeRectToScreen@CInputTransform@@QEAA?AUTransformedRect@@AEBU2@@Z
    TransformedRect RelativeRectToScreen(TransformedRect const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenPointToRelative@CInputTransform@@QEBA?AUTransformedPoint@@AEBU2@@Z
    TransformedPoint ScreenPointToRelative(TransformedPoint const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenRectToRelative@CInputTransform@@QEAA?AUTransformedRect@@AEBU2@@Z
    TransformedRect ScreenRectToRelative(TransformedRect const &);
};
