#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 48 member(s).
namespace BamoImpl {
class BamoPenEventsClientPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoPenEventsClientPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DockEventsEnabledChanged@BamoPenEventsClientPrincipalImpl@BamoImpl@@QEAAJ_N@Z
    long DockEventsEnabledChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Docked@BamoPenEventsClientPrincipalImpl@BamoImpl@@QEAAJ_N@Z
    long Docked(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoPenEventsClientPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoPenEventsClientPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxy@BamoPenEventsClientPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void PushStateToProxy(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoPenEventsClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoPenEventsClientPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDockedEventsRequired@BamoPenEventsClientPrincipalImpl@BamoImpl@@QEAAX_N@Z
    void SetDockedEventsRequired(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsShell@BamoPenEventsClientPrincipalImpl@BamoImpl@@QEAAX_N@Z
    void SetIsShell(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUndockedEventsRequired@BamoPenEventsClientPrincipalImpl@BamoImpl@@QEAAX_N@Z
    void SetUndockedEventsRequired(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TailButtonClicked@BamoPenEventsClientPrincipalImpl@BamoImpl@@QEAAJ_N@Z
    long TailButtonClicked(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TailButtonDoubleClicked@BamoPenEventsClientPrincipalImpl@BamoImpl@@QEAAJ_N@Z
    long TailButtonDoubleClicked(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TailButtonEventsEnabledChanged@BamoPenEventsClientPrincipalImpl@BamoImpl@@QEAAJ_N@Z
    long TailButtonEventsEnabledChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TailButtonLongPressed@BamoPenEventsClientPrincipalImpl@BamoImpl@@QEAAJ_N@Z
    long TailButtonLongPressed(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TipToGlass@BamoPenEventsClientPrincipalImpl@BamoImpl@@QEAAJI@Z
    long TipToGlass(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Undocked@BamoPenEventsClientPrincipalImpl@BamoImpl@@QEAAJ_N@Z
    long Undocked(bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveDockEventsEnabledChanged@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogReceiveDockEventsEnabledChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveDocked@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogReceiveDocked(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveTailButtonClicked@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogReceiveTailButtonClicked(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveTailButtonDoubleClicked@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogReceiveTailButtonDoubleClicked(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveTailButtonEventsEnabledChanged@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogReceiveTailButtonEventsEnabledChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveTailButtonLongPressed@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogReceiveTailButtonLongPressed(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveTipToGlass@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAXI@Z
    void LogReceiveTipToGlass(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogReceiveUndocked@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogReceiveUndocked(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetDockedEventsRequired@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetDockedEventsRequired(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetIsShell@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetIsShell(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetTailButtonClickedEventsRequired@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetTailButtonClickedEventsRequired(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetTailButtonDoubleClickedEventsRequired@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetTailButtonDoubleClickedEventsRequired(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetTailButtonLongPressedEventsRequired@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetTailButtonLongPressedEventsRequired(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetTipToGlassEventsRequired@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetTipToGlassEventsRequired(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetUndockedEventsRequired@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAX_N@Z
    void LogSetUndockedEventsRequired(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDockedEventsRequiredRemoteCache@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateDockedEventsRequiredRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDockedEventsRequiredRemoteCacheStatic@BamoPenEventsClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateDockedEventsRequiredRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsShellRemoteCache@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateIsShellRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsShellRemoteCacheStatic@BamoPenEventsClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateIsShellRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTailButtonClickedEventsRequiredRemoteCache@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateTailButtonClickedEventsRequiredRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTailButtonClickedEventsRequiredRemoteCacheStatic@BamoPenEventsClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateTailButtonClickedEventsRequiredRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTailButtonDoubleClickedEventsRequiredRemoteCache@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateTailButtonDoubleClickedEventsRequiredRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTailButtonDoubleClickedEventsRequiredRemoteCacheStatic@BamoPenEventsClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateTailButtonDoubleClickedEventsRequiredRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTailButtonLongPressedEventsRequiredRemoteCache@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateTailButtonLongPressedEventsRequiredRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTailButtonLongPressedEventsRequiredRemoteCacheStatic@BamoPenEventsClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateTailButtonLongPressedEventsRequiredRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTipToGlassEventsRequiredRemoteCache@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateTipToGlassEventsRequiredRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTipToGlassEventsRequiredRemoteCacheStatic@BamoPenEventsClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateTipToGlassEventsRequiredRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUndockedEventsRequiredRemoteCache@BamoPenEventsClientPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z
    void UpdateUndockedEventsRequiredRemoteCache(::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUndockedEventsRequiredRemoteCacheStatic@BamoPenEventsClientPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z
    static long UpdateUndockedEventsRequiredRemoteCacheStatic(::Microsoft::BamoImpl::BamoStubImpl *, WindissectOpaque *);
};
} // namespace BamoImpl
