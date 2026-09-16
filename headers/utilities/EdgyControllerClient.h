#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 7 member(s).
class EdgyControllerClient {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EdgyControllerClient@@QEAA@PEAVEdgyController@@PEBGPEAVBamoConnection@ISMBamos_AutoBamos@@@Z
    EdgyControllerClient(EdgyController *, unsigned short const *, ::ISMBamos_AutoBamos::BamoConnection *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EdgyControllerClient@@UEAA@XZ
    virtual ~EdgyControllerClient();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EdgyGestureDetected@EdgyControllerClient@@MEAAJPEAVBamoEdgyControllerClientStub@@PEBGIAEBUD2D_VECTOR_2F@@_K23II@Z
    virtual long EdgyGestureDetected(BamoEdgyControllerClientStub *, unsigned short const *, unsigned int, D2D_VECTOR_2F const &, uint64_t, D2D_VECTOR_2F const &, uint64_t, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@EdgyControllerClient@@MEAAJPEAVBamoEdgyControllerClientStub@@@Z
    virtual long OnStubDisconnected(BamoEdgyControllerClientStub *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWithISM@EdgyControllerClient@@AEAAXPEAVInputSystemClientConnection@@W4RegisterOperation@1@@Z
    void RegisterWithISM(InputSystemClientConnection *, int);
};
