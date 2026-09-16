#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 27 member(s).
class BamoEdgyGestureRecognitionConfigurationPrincipal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoEdgyGestureRecognitionConfigurationPrincipal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGestureDirection@BamoEdgyGestureRecognitionConfigurationPrincipal@@UEAAAEBUVector2@Numerics@Foundation@Windows@@XZ
    virtual WindissectOpaque & GetGestureDirection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGestureMinimumDistanceInHimetrics@BamoEdgyGestureRecognitionConfigurationPrincipal@@UEAAIXZ
    virtual unsigned int GetGestureMinimumDistanceInHimetrics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGestureTimeoutInMilliseconds@BamoEdgyGestureRecognitionConfigurationPrincipal@@UEAAIXZ
    virtual unsigned int GetGestureTimeoutInMilliseconds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoEdgyGestureRecognitionConfigurationPrincipal@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrientationBiasInDegrees@BamoEdgyGestureRecognitionConfigurationPrincipal@@UEAAMXZ
    virtual float GetOrientationBiasInDegrees();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoEdgyGestureRecognitionConfigurationPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoEdgyGestureRecognitionConfigurationPrincipal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGestureDirection@BamoEdgyGestureRecognitionConfigurationPrincipal@@UEAAXAEBUVector2@Numerics@Foundation@Windows@@@Z
    virtual void SetGestureDirection(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGestureMinimumDistanceInHimetrics@BamoEdgyGestureRecognitionConfigurationPrincipal@@UEAAXI@Z
    virtual void SetGestureMinimumDistanceInHimetrics(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGestureTimeoutInMilliseconds@BamoEdgyGestureRecognitionConfigurationPrincipal@@UEAAXI@Z
    virtual void SetGestureTimeoutInMilliseconds(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOrientationBiasInDegrees@BamoEdgyGestureRecognitionConfigurationPrincipal@@UEAAXM@Z
    virtual void SetOrientationBiasInDegrees(float);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoEdgyGestureRecognitionConfigurationPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyGestureRecognitionConfigurationStub@@@Z
    virtual long AllocateStubUnderLock(::ISMBamos_AutoBamos::BamoPeer *, BamoEdgyGestureRecognitionConfigurationStub * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InitializeProxyUnderLock@BamoEdgyGestureRecognitionConfigurationPrincipal@@MEAAJPEAVBamoEdgyGestureRecognitionConfigurationStub@@@Z
    virtual long InitializeProxyUnderLock(BamoEdgyGestureRecognitionConfigurationStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoEdgyGestureRecognitionConfigurationPrincipal@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilogUnderLock@BamoEdgyGestureRecognitionConfigurationPrincipal@@MEAAJXZ
    virtual long OnCallEpilogUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoEdgyGestureRecognitionConfigurationPrincipal@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallPrologUnderLock@BamoEdgyGestureRecognitionConfigurationPrincipal@@MEAAJXZ
    virtual long OnCallPrologUnderLock();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPropertiesRefreshed@BamoEdgyGestureRecognitionConfigurationPrincipal@@MEAAJPEAVBamoEdgyGestureRecognitionConfigurationStub@@@Z
    virtual long OnPropertiesRefreshed(BamoEdgyGestureRecognitionConfigurationStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubConnectedUnderLock@BamoEdgyGestureRecognitionConfigurationPrincipal@@MEAAJPEAVBamoEdgyGestureRecognitionConfigurationStub@@@Z
    virtual long OnStubConnectedUnderLock(BamoEdgyGestureRecognitionConfigurationStub *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnStubDisconnected@BamoEdgyGestureRecognitionConfigurationPrincipal@@MEAAJPEAVBamoEdgyGestureRecognitionConfigurationStub@@@Z
    virtual long OnStubDisconnected(BamoEdgyGestureRecognitionConfigurationStub *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoEdgyGestureRecognitionConfigurationPrincipal@@EEBAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * GetImpl() const;
};
