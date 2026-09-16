// Flat C exports observed in InputHost.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef INPUTHOST_C_H
#define INPUTHOST_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: DllGetActivationFactory (ABI unverified)
// Export: #ordinal2601 (ABI unverified)
// Export: ControllerNavigationEnable (ABI unverified)
// Export: #ordinal2605 (ABI unverified)
// Export: ControllerNavigationDisable (ABI unverified)
// Export: #ordinal2604 (ABI unverified)
// Export: ControllerNavigationSetOnCrossedBoundsCallback (ABI unverified)
// Export: DllCanUnloadNow (ABI unverified)
// Export: CreateInputDeviceWatcher (ABI unverified)
// Export: SetInputFocus (ABI unverified)
// Export: std::_Func_impl_no_alloc<<lambda_50286592a7f64b38ae551459c92428d5>,void,Microsoft::WRL::ComPtr<BamoInputSystemProxy> &>::_Move (ABI unverified)
// Export: CreateInputHostForProcess (ABI unverified)
// Export: CreateGenericInputHost (ABI unverified)
// Export: CreateDragOperationPrivate (ABI unverified)
// Export: CreatePointerInputHost (ABI unverified)
// Export: CreateTouchInputHost (ABI unverified)
// Export: SetInputDeviceIndicatorState (ABI unverified)
// Export: TouchInputHostCreate (ABI unverified)
// Export: CreateComboButtonProxy (ABI unverified)
// Export: CreateInputHost (ABI unverified)
// Export: CreateMPCManagerClient (ABI unverified)
// Export: CreateViewHitTestRequestClient (ABI unverified)
// Export: SetInputButtonEnabledOnIdle (ABI unverified)
// Export: SetInputDeviceRepeatParameters (ABI unverified)
// Export: ViewHitTestClientCreate (ABI unverified)
// Export: #ordinal2610 (ABI unverified)
// Export: ControllerNavigationEnableHwnd (ABI unverified)
// Export: #ordinal2608 (ABI unverified)
// Export: ControllerNavigationEnableVisualReference (ABI unverified)
// Export: #ordinal2602 (ABI unverified)
// Export: ControllerNavigationPause (ABI unverified)
// Export: #ordinal2603 (ABI unverified)
// Export: ControllerNavigationResume (ABI unverified)
// Export: #ordinal2607 (ABI unverified)
// Export: ControllerNavigationResumeWithBoundsCallback (ABI unverified)
// Export: #ordinal2609 (ABI unverified)
// Export: ControllerNavigationResumeWithBoundsCallbackVisualReference (ABI unverified)
// Export: #ordinal2606 (ABI unverified)
// Export: IsControllerNavigationEnabled (ABI unverified)
// Export: CreateCursorClient (ABI unverified)
// Export: CreateCursorManager (ABI unverified)
// Export: DllGetClassObject (ABI unverified)
// Export: CreateInputSystemClientConnection (ABI unverified)
// Export: CreateHeatGripServiceClient (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // INPUTHOST_C_H
