#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 16 member(s).
namespace Microsoft::BamoImpl {
class BaseBamoPeerImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AckProxyReference@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI_N@Z
    long AckProxyReference(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPrincipalReady@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z
    long ClearPrincipalReady(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearProxyReady@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z
    long ClearProxyReady(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisposeProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI_N@Z
    long DisposeProxy(unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ
    IMessageCallSendHost * GetSendHost() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z
    void Initialize(::Microsoft::BamoImpl::BaseBamoConnectionImpl *, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkPrincipalReadyOnPropertiesRefreshed@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z
    long MarkPrincipalReadyOnPropertiesRefreshed(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkProxyReady@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z
    long MarkProxyReady(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkProxyReadyOnPropertiesRefreshed@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z
    long MarkProxyReadyOnPropertiesRefreshed(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ
    void OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProxyDisposed@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z
    long ProxyDisposed(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestDisposeProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z
    long RequestDisposeProxy(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBootstrapProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z
    long SetBootstrapProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z
    ::Microsoft::BamoImpl::BamoProxyImpl * TryGetProxy(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ
    virtual ~BaseBamoPeerImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ
    virtual void OnZeroReferenceCount();
};
} // namespace Microsoft::BamoImpl
