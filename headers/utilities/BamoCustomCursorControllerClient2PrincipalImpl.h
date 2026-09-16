#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 10 member(s).
namespace BamoImpl {
class BamoCustomCursorControllerClient2PrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoCustomCursorControllerClient2PrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CustomCursorsNotSupported@BamoCustomCursorControllerClient2PrincipalImpl@BamoImpl@@QEAAJXZ
    long CustomCursorsNotSupported();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoCustomCursorControllerClient2PrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoCustomCursorControllerClient2PrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoCustomCursorControllerClient2PrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoCustomCursorControllerClient2PrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveCustomCursorsNotSupported@BamoCustomCursorControllerClient2PrincipalImpl@BamoImpl@@AEAAXXZ
    void LogReceiveCustomCursorsNotSupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BamoCustomCursorControllerClient2PrincipalImpl@BamoImpl@@EEAAXXZ
    virtual void OnZeroReferenceCount();
};
} // namespace BamoImpl
