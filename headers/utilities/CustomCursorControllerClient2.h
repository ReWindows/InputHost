#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 13 member(s).
class CustomCursorControllerClient2 {
public:
    class ShapeCacheEntry;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmapCursorShape@CustomCursorControllerClient2@@QEAAJIIIIIIPEBEII0IIPEA_K@Z
    long CreateBitmapCursorShape(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char const *, unsigned int, unsigned int, unsigned char const *, unsigned int, unsigned int, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCustomCursorShape@CustomCursorControllerClient2@@QEAAJPEAUHINSTANCE__@@PEBGPEA_K@Z
    long CreateCustomCursorShape(HINSTANCE__*, unsigned short const *, uint64_t *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CustomCursorControllerClient2@@QEAA@XZ
    CustomCursorControllerClient2();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCustomCursorShape@CustomCursorControllerClient2@@QEAAJ_K@Z
    long DestroyCustomCursorShape(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeBamoConnection@CustomCursorControllerClient2@@QEAAXXZ
    void InitializeBamoConnection();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CustomCursorControllerClient2@@UEAA@XZ
    virtual ~CustomCursorControllerClient2();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateNewCustomShapeId@CustomCursorControllerClient2@@AEAAJPEA_K@Z
    long AllocateNewCustomShapeId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CustomCursorsNotSupported@CustomCursorControllerClient2@@EEAAJPEAVBamoCustomCursorControllerClient2Principal@@PEAVBamoCustomCursorControllerClient2Stub@@@Z
    virtual long CustomCursorsNotSupported(BamoCustomCursorControllerClient2Principal *, BamoCustomCursorControllerClient2Stub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStubDisconnected@CustomCursorControllerClient2@@EEAAJPEAVBamoCustomCursorControllerClient2Principal@@PEAVBamoCustomCursorControllerClient2Stub@@@Z
    virtual long OnStubDisconnected(BamoCustomCursorControllerClient2Principal *, BamoCustomCursorControllerClient2Stub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWithISM@CustomCursorControllerClient2@@AEAAXW4RegisterOperation@1@@Z
    void RegisterWithISM(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShapeExists@CustomCursorControllerClient2@@AEBA_N_K@Z
    bool ShapeExists(uint64_t) const;
};
