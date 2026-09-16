#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
namespace InputSiteWinRT {
class Private_NoLock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachInputObject@Private_NoLock@InputSiteWinRT@@UEAAXAEAVBaseInputObjectWinRT@@@Z
    virtual void AttachInputObject(BaseInputObjectWinRT &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachInputObject@Private_NoLock@InputSiteWinRT@@UEAAXAEAVBaseInputObjectWinRT@@@Z
    virtual void DetachInputObject(BaseInputObjectWinRT &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableFurtherProcessingForInput@Private_NoLock@InputSiteWinRT@@UEAAXXZ
    virtual void DisableFurtherProcessingForInput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableFurtherProcessingForInput@Private_NoLock@InputSiteWinRT@@UEAAXXZ
    virtual void EnableFurtherProcessingForInput();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoordinateConversionId@Private_NoLock@InputSiteWinRT@@UEAA_JXZ
    virtual int64_t GetCoordinateConversionId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSiteId@Private_NoLock@InputSiteWinRT@@UEAA_KXZ
    virtual uint64_t GetSiteId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSiteIdNamespace@Private_NoLock@InputSiteWinRT@@UEAA?AW4InputSiteIdNamespace@@XZ
    virtual int GetSiteIdNamespace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSiteThread@Private_NoLock@InputSiteWinRT@@UEAA_NXZ
    virtual bool IsSiteThread();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Private_NoLock@InputSiteWinRT@@QEAA@XZ
    Private_NoLock();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSecondaryIdHint@Private_NoLock@InputSiteWinRT@@UEAAXUInputSiteId@@@Z
    virtual void SetSecondaryIdHint(InputSiteId);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetTargetVisual@Private_NoLock@InputSiteWinRT@@UEAAPEAUIVisual@Composition@UI@Windows@@XZ
    virtual ::Windows::UI::Composition::IVisual * TryGetTargetVisual();
};
} // namespace InputSiteWinRT
