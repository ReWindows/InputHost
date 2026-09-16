#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 22 member(s).
class BamoShellGesturesClientPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoShellGesturesClientPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputSinkData@BamoShellGesturesClientPrincipal@@UEAAAEBUInputSinkData@@XZ
    virtual InputSinkData const & GetInputSinkData();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoShellGesturesClientPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuppressionRegions@BamoShellGesturesClientPrincipal@@UEAAXPEAPEBUtagRECT@@PEAI@Z
    virtual void GetSuppressionRegions(tagRECT const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTouchEnabled@BamoShellGesturesClientPrincipal@@UEAA_NXZ
    virtual bool GetTouchEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTouchpadEnabled@BamoShellGesturesClientPrincipal@@UEAA_NXZ
    virtual bool GetTouchpadEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTouchpadSupportedGestures@BamoShellGesturesClientPrincipal@@UEAA?AW4TouchpadGlobalGestureKinds@Input@Internal@UI@Windows@@XZ
    virtual int GetTouchpadSupportedGestures();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoShellGesturesClientPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoShellGesturesClientPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputSinkData@BamoShellGesturesClientPrincipal@@UEAAXAEBUInputSinkData@@@Z
    virtual void SetInputSinkData(InputSinkData const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuppressionRegions@BamoShellGesturesClientPrincipal@@UEAAJPEBUtagRECT@@I@Z
    virtual long SetSuppressionRegions(tagRECT const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTouchEnabled@BamoShellGesturesClientPrincipal@@UEAAX_N@Z
    virtual void SetTouchEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTouchpadEnabled@BamoShellGesturesClientPrincipal@@UEAAX_N@Z
    virtual void SetTouchpadEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTouchpadSupportedGestures@BamoShellGesturesClientPrincipal@@UEAAXW4TouchpadGlobalGestureKinds@Input@Internal@UI@Windows@@@Z
    virtual void SetTouchpadSupportedGestures(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallEpilogUnderLock@BamoShellGesturesClientPrincipal@@IEAAJXZ
    long OnCallEpilogUnderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallPrologUnderLock@BamoShellGesturesClientPrincipal@@IEAAJXZ
    long OnCallPrologUnderLock();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoShellGesturesClientPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
