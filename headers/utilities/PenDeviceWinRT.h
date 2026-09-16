#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 8 member(s).
class PenDeviceWinRT {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PenDeviceWinRT@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@PenDeviceWinRT@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PenDeviceWinRT@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PenDeviceWinRT@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBamoDeviceProxy@PenDeviceWinRT@@QEAAXPEAVBamoPenDeviceProxy@@@Z
    void SetBamoDeviceProxy(BamoPenDeviceProxy *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PenDeviceWinRT@@UEAA@XZ
    virtual ~PenDeviceWinRT();
};
