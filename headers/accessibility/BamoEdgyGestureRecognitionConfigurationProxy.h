#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 34 member(s).
class BamoEdgyGestureRecognitionConfigurationProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BamoEdgyGestureRecognitionConfigurationProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGestureDirection@BamoEdgyGestureRecognitionConfigurationProxy@@UEAAAEBUVector2@Numerics@Foundation@Windows@@XZ
    virtual WindissectOpaque & GetGestureDirection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGestureMinimumDistanceInHimetrics@BamoEdgyGestureRecognitionConfigurationProxy@@UEAAIXZ
    virtual unsigned int GetGestureMinimumDistanceInHimetrics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGestureTimeoutInMilliseconds@BamoEdgyGestureRecognitionConfigurationProxy@@UEAAIXZ
    virtual unsigned int GetGestureTimeoutInMilliseconds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrientationBiasInDegrees@BamoEdgyGestureRecognitionConfigurationProxy@@UEAAMXZ
    virtual float GetOrientationBiasInDegrees();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BamoEdgyGestureRecognitionConfigurationProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoEdgyGestureRecognitionConfigurationProxy@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallEpilog@BamoEdgyGestureRecognitionConfigurationProxy@@MEAAJXZ
    virtual long OnCallEpilog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnCallProlog@BamoEdgyGestureRecognitionConfigurationProxy@@MEAAJXZ
    virtual long OnCallProlog();
    // Category: Method | Source: PE Export
    // Symbol: ?OnGestureDirectionChanged@BamoEdgyGestureRecognitionConfigurationProxy@@MEAAJXZ
    virtual long OnGestureDirectionChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnGestureDirectionChanging@BamoEdgyGestureRecognitionConfigurationProxy@@MEAAJAEBUVector2@Numerics@Foundation@Windows@@@Z
    virtual long OnGestureDirectionChanging(WindissectOpaque &);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGestureMinimumDistanceInHimetricsChanged@BamoEdgyGestureRecognitionConfigurationProxy@@MEAAJXZ
    virtual long OnGestureMinimumDistanceInHimetricsChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnGestureMinimumDistanceInHimetricsChanging@BamoEdgyGestureRecognitionConfigurationProxy@@MEAAJI@Z
    virtual long OnGestureMinimumDistanceInHimetricsChanging(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnGestureTimeoutInMillisecondsChanged@BamoEdgyGestureRecognitionConfigurationProxy@@MEAAJXZ
    virtual long OnGestureTimeoutInMillisecondsChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnGestureTimeoutInMillisecondsChanging@BamoEdgyGestureRecognitionConfigurationProxy@@MEAAJI@Z
    virtual long OnGestureTimeoutInMillisecondsChanging(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnOrientationBiasInDegreesChanged@BamoEdgyGestureRecognitionConfigurationProxy@@MEAAJXZ
    virtual long OnOrientationBiasInDegreesChanged();
    // Category: Method | Source: PE Export
    // Symbol: ?OnOrientationBiasInDegreesChanging@BamoEdgyGestureRecognitionConfigurationProxy@@MEAAJM@Z
    virtual long OnOrientationBiasInDegreesChanging(float);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@BamoEdgyGestureRecognitionConfigurationProxy@@EEBAPEAVBamoProxyImpl@BamoImpl@Microsoft@@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * GetImpl() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnGestureDirectionChanged@BamoEdgyGestureRecognitionConfigurationProxy@@AEAAXXZ
    void LogOnGestureDirectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnGestureDirectionChanging@BamoEdgyGestureRecognitionConfigurationProxy@@AEAAXAEBUVector2@Numerics@Foundation@Windows@@@Z
    void LogOnGestureDirectionChanging(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnGestureMinimumDistanceInHimetricsChanged@BamoEdgyGestureRecognitionConfigurationProxy@@AEAAXXZ
    void LogOnGestureMinimumDistanceInHimetricsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnGestureMinimumDistanceInHimetricsChanging@BamoEdgyGestureRecognitionConfigurationProxy@@AEAAXI@Z
    void LogOnGestureMinimumDistanceInHimetricsChanging(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnGestureTimeoutInMillisecondsChanged@BamoEdgyGestureRecognitionConfigurationProxy@@AEAAXXZ
    void LogOnGestureTimeoutInMillisecondsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnGestureTimeoutInMillisecondsChanging@BamoEdgyGestureRecognitionConfigurationProxy@@AEAAXI@Z
    void LogOnGestureTimeoutInMillisecondsChanging(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnOrientationBiasInDegreesChanged@BamoEdgyGestureRecognitionConfigurationProxy@@AEAAXXZ
    void LogOnOrientationBiasInDegreesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnOrientationBiasInDegreesChanging@BamoEdgyGestureRecognitionConfigurationProxy@@AEAAXM@Z
    void LogOnOrientationBiasInDegreesChanging(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectedCallout@BamoEdgyGestureRecognitionConfigurationProxy@@EEAAJXZ
    virtual long OnConnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectedCallout@BamoEdgyGestureRecognitionConfigurationProxy@@EEAAJXZ
    virtual long OnDisconnectedCallout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertiesRefreshedCallout@BamoEdgyGestureRecognitionConfigurationProxy@@EEAAJXZ
    virtual long OnPropertiesRefreshedCallout();
};
