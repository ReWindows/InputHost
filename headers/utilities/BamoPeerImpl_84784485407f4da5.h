#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 18 member(s).
namespace BamoImpl::MPCManagerBamo_AutoBamos {
class BamoPeerImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Materialize_BamoAsyncHRESULTProxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@QEAAJI@Z
    long Materialize_BamoAsyncHRESULTProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Materialize_BamoAsyncResult_PROPVARIANT_Proxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@QEAAJI@Z
    long Materialize_BamoAsyncResult_PROPVARIANT_Proxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Materialize_BamoAsyncResult_string_Proxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@QEAAJI@Z
    long Materialize_BamoAsyncResult_string_Proxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Materialize_BamoMPCConstantManagerClientCallbacksProxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@QEAAJI@Z
    long Materialize_BamoMPCConstantManagerClientCallbacksProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Materialize_BamoMPCConstantManagerClientProxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@QEAAJI@Z
    long Materialize_BamoMPCConstantManagerClientProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Materialize_BamoMPCManagerClientProxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@QEAAJI@Z
    long Materialize_BamoMPCManagerClientProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Materialize_BamoMPCManagerProxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@QEAAJI@Z
    long Materialize_BamoMPCManagerProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendAckProxyReference@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAXI_N@Z
    virtual void SendAckProxyReference(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCheckProtocol@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAXAEBU_GUID@@@Z
    virtual void SendCheckProtocol(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendDisposeProxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAXI_N@Z
    virtual void SendDisposeProxy(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendProxyDisposed@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAXI@Z
    virtual void SendProxyDisposed(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRequestDisposeProxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAXI@Z
    virtual void SendRequestDisposeProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendSetBootstrapProxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAXI@Z
    virtual void SendSetBootstrapProxy(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogResumeOutboundMessages@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@EEBAXII@Z
    virtual void LogResumeOutboundMessages(unsigned int, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSuspendOutboundMessages@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@EEBAXII@Z
    virtual void LogSuspendOutboundMessages(unsigned int, unsigned int) const;
};
} // namespace BamoImpl::MPCManagerBamo_AutoBamos
