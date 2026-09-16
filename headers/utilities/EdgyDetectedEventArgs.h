#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 21 member(s).
class EdgyDetectedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EdgyDetectedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@EdgyDetectedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@EdgyDetectedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@EdgyDetectedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EdgyDetectedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EdgyDetectedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@EdgyDetectedEventArgs@@UEAAJPEBGIUD2D_VECTOR_2F@@_K12W4EdgyInputRouting@Input@Internal@UI@Windows@@W4EdgyExperienceRunState@4567@@Z
    virtual long RuntimeClassInitialize(unsigned short const *, unsigned int, D2D_VECTOR_2F, uint64_t, D2D_VECTOR_2F, uint64_t, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DetectedPoint@EdgyDetectedEventArgs@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_DetectedPoint(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DetectedTime@EdgyDetectedEventArgs@@UEAAJPEA_K@Z
    virtual long get_DetectedTime(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EdgeId@EdgyDetectedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_EdgeId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExperienceRunState@EdgyDetectedEventArgs@@UEAAJPEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@@Z
    virtual long get_ExperienceRunState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputRouting@EdgyDetectedEventArgs@@UEAAJPEAW4EdgyInputRouting@Input@Internal@UI@Windows@@@Z
    virtual long get_InputRouting(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerId@EdgyDetectedEventArgs@@UEAAJPEAI@Z
    virtual long get_PointerId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartPoint@EdgyDetectedEventArgs@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_StartPoint(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartTime@EdgyDetectedEventArgs@@UEAAJPEA_K@Z
    virtual long get_StartTime(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EdgyDetectedEventArgs@@UEAA@XZ
    virtual ~EdgyDetectedEventArgs();
};
