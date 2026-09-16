#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 19 member(s).
namespace BamoImpl {
class BamoDeviceDockClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoDeviceDockClientPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoDeviceDockClientPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDockDeviceAdded@BamoDeviceDockClientPrincipalImpl@BamoImpl@@QEAAJII@Z
    long OnDockDeviceAdded(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDockDeviceRemoved@BamoDeviceDockClientPrincipalImpl@BamoImpl@@QEAAJI@Z
    long OnDockDeviceRemoved(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDockInput@BamoDeviceDockClientPrincipalImpl@BamoImpl@@QEAAJIPEBUDockInputInfo@@@Z
    long OnDockInput(unsigned int, DockInputInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDockableDeviceAdded@BamoDeviceDockClientPrincipalImpl@BamoImpl@@QEAAJII@Z
    long OnDockableDeviceAdded(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDockableDeviceRemoved@BamoDeviceDockClientPrincipalImpl@BamoImpl@@QEAAJI@Z
    long OnDockableDeviceRemoved(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnumerationCompleted@BamoDeviceDockClientPrincipalImpl@BamoImpl@@QEAAJXZ
    long OnEnumerationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoDeviceDockClientPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoDeviceDockClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoDeviceDockClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveOnDockDeviceAdded@BamoDeviceDockClientPrincipalImpl@BamoImpl@@AEAAXIPEAVBamoDockDeviceProxy@@@Z
    void LogReceiveOnDockDeviceAdded(unsigned int, BamoDockDeviceProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveOnDockDeviceRemoved@BamoDeviceDockClientPrincipalImpl@BamoImpl@@AEAAXI@Z
    void LogReceiveOnDockDeviceRemoved(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveOnDockInput@BamoDeviceDockClientPrincipalImpl@BamoImpl@@AEAAXIAEBUDockInputInfo@@@Z
    void LogReceiveOnDockInput(unsigned int, DockInputInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveOnDockableDeviceAdded@BamoDeviceDockClientPrincipalImpl@BamoImpl@@AEAAXIPEAVBamoDockableDeviceProxy@@@Z
    void LogReceiveOnDockableDeviceAdded(unsigned int, BamoDockableDeviceProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveOnDockableDeviceRemoved@BamoDeviceDockClientPrincipalImpl@BamoImpl@@AEAAXI@Z
    void LogReceiveOnDockableDeviceRemoved(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveOnEnumerationCompleted@BamoDeviceDockClientPrincipalImpl@BamoImpl@@AEAAXXZ
    void LogReceiveOnEnumerationCompleted();
};
} // namespace BamoImpl
