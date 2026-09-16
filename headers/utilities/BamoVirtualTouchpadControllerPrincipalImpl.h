#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 29 member(s).
namespace BamoImpl {
class BamoVirtualTouchpadControllerPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceivingInput@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@QEAAJ_N@Z
    long ReceivingInput(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveReceivingInput@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogReceiveReceivingInput(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetIsActive@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetIsActive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetPrimaryClickZone@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@AEAAXAEBUPhysicalClickZone@Input@Internal@UI@Windows@@@Z
    void LogSetPrimaryClickZone(::Windows::UI::Internal::Input::PhysicalClickZone const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetSecondaryClickZone@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@AEAAXAEBUPhysicalClickZone@Input@Internal@UI@Windows@@@Z
    void LogSetSecondaryClickZone(::Windows::UI::Internal::Input::PhysicalClickZone const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetSize@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@AEAAXAEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@@Z
    void LogSetSize(::Windows::UI::Internal::Input::VirtualTouchpadSize const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetSizeValid@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetSizeValid(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetTypingDefensesEnabled@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetTypingDefensesEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@EEAAXXZ
    virtual void OnZeroReferenceCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsActiveRemoteCache@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIsActiveRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsActiveRemoteCacheStatic@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateIsActiveRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryClickZoneRemoteCache@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdatePrimaryClickZoneRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryClickZoneRemoteCacheStatic@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdatePrimaryClickZoneRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSecondaryClickZoneRemoteCache@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateSecondaryClickZoneRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSecondaryClickZoneRemoteCacheStatic@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateSecondaryClickZoneRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSizeRemoteCache@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateSizeRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSizeRemoteCacheStatic@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateSizeRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSizeValidRemoteCache@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateSizeValidRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSizeValidRemoteCacheStatic@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateSizeValidRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTypingDefensesEnabledRemoteCache@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateTypingDefensesEnabledRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTypingDefensesEnabledRemoteCacheStatic@BamoVirtualTouchpadControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateTypingDefensesEnabledRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl
