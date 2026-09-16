#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 11 member(s).
class InputSiteWinRT {
public:
    class Partner;
    class PartnerCom;
    class Private_NoLock;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputSiteWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InputSiteWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachInputObject@InputSiteWinRT@@QEAAXAEAVBaseInputObjectWinRT@@@Z
    void DetachInputObject(BaseInputObjectWinRT &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputSiteWinRT@@QEAA@XZ
    InputSiteWinRT();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputSiteWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputSiteWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputSiteWinRT@@UEAA@XZ
    virtual ~InputSiteWinRT();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSiteThread@InputSiteWinRT@@IEBA_NXZ
    bool IsSiteThread() const;
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractionObject@InputSiteWinRT@@AEAAPEAUICompositionInteractionPartner@Composition@UI@Windows@@XZ
    ::Windows::UI::Composition::ICompositionInteractionPartner * GetInteractionObject();
};
