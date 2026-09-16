#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputHost.dll by Windissect. 40 member(s).
class InputSiteWinRTStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InputSiteWinRTStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectIsland@InputSiteWinRTStatics@@UEAAJPEAUIInputSite@Input@Internal@UI@Windows@@0@Z
    virtual long ConnectIsland(::Windows::UI::Internal::Input::IInputSite *, ::Windows::UI::Internal::Input::IInputSite *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectIslandToCoreWindow@InputSiteWinRTStatics@@UEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIInputSite@Input@Internal@45@PEA_K@Z
    virtual long ConnectIslandToCoreWindow(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Internal::Input::IInputSite *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForDCompVisual@InputSiteWinRTStatics@@UEAAJPEAUIDCompositionVisual@@PEAPEAUIInputSitePartner@@@Z
    virtual long CreateForDCompVisual(IDCompositionVisual *, IInputSitePartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForIslandSite@InputSiteWinRTStatics@@UEAAJPEAUIInspectable@@UInputSiteForIslandSiteConfiguration@Input@Internal@UI@Windows@@PEAPEAUIInputSite@4567@@Z
    virtual long CreateForIslandSite(IInspectable *, ::Windows::UI::Internal::Input::InputSiteForIslandSiteConfiguration, ::Windows::UI::Internal::Input::IInputSite * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCoreComponentInputSource@InputSiteWinRTStatics@@UEAAJPEAUICoreInputSourceBase@Core@UI@Windows@@PEAPEAUIInputSite@Input@Internal@45@@Z
    virtual long GetForCoreComponentInputSource(::Windows::UI::Core::ICoreInputSourceBase *, ::Windows::UI::Internal::Input::IInputSite * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCoreIndependentInputSource@InputSiteWinRTStatics@@UEAAJPEAUICoreInputSourceBase@Core@UI@Windows@@PEAPEAUIInputSite@Input@Internal@45@@Z
    virtual long GetForCoreIndependentInputSource(::Windows::UI::Core::ICoreInputSourceBase *, ::Windows::UI::Internal::Input::IInputSite * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCoreWindow@InputSiteWinRTStatics@@UEAAJPEAUICoreWindow@Core@UI@Windows@@PEAPEAUIInputSite@Input@Internal@45@@Z
    virtual long GetForCoreWindow(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Internal::Input::IInputSite * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentProcess@InputSiteWinRTStatics@@UEAAJPEAPEAUIInputSite@Input@Internal@UI@Windows@@@Z
    virtual long GetForCurrentProcess(::Windows::UI::Internal::Input::IInputSite * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForHwnd@InputSiteWinRTStatics@@UEAAJ_KPEAPEAUIInputSite@Input@Internal@UI@Windows@@@Z
    virtual long GetForHwnd(uint64_t, ::Windows::UI::Internal::Input::IInputSite * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForVisual@InputSiteWinRTStatics@@UEAAJPEAUIVisual@Composition@UI@Windows@@PEAPEAUIInputSite@Input@Internal@45@@Z
    virtual long GetForVisual(::Windows::UI::Composition::IVisual *, ::Windows::UI::Internal::Input::IInputSite * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InputSiteWinRTStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateForIsland@InputSiteWinRTStatics@@UEAAJPEAUIInspectable@@PEAPEAUIInputSite@Input@Internal@UI@Windows@@@Z
    virtual long GetOrCreateForIsland(IInspectable *, ::Windows::UI::Internal::Input::IInputSite * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InputSiteWinRTStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InputSiteWinRTStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputSiteWinRTStatics@@QEAA@XZ
    InputSiteWinRTStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@InputSiteWinRTStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@InputSiteWinRTStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InputSiteWinRTStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InputSiteWinRTStatics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterInputSite@InputSiteWinRTStatics@@SAXPEAVInputSiteWinRT@@@Z
    static void UnregisterInputSite(InputSiteWinRT *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDllDetachCallback@InputSiteWinRTStatics@@CAXXZ
    static void EnsureDllDetachCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetInputSiteForVisualHelper@InputSiteWinRTStatics@@CA?AV?$ComPtr@VInputSiteWinRT@@@WRL@Microsoft@@PEAUIVisual@Composition@UI@Windows@@@Z
    static WindissectOpaque TryGetInputSiteForVisualHelper(::Windows::UI::Composition::IVisual *);
};
