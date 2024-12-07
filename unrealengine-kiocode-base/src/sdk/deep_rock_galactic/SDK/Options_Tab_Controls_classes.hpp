#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Options_Tab_Controls

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Options_Tab_Controls.Options_Tab_Controls_C
// 0x0180 (0x03E0 - 0x0260)
class UOptions_Tab_Controls_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_Option_C*                        Basic_Option_C_0;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        Basic_Option_C_1;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonWithControls_C*            BTN_ResetToDefaults;                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Controller;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           KeyboardAndMouse;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OpenChat;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_Con_AimAcceleration;                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_Con_AimSensitivity;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_Con_ForceFeedback;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_Con_InnerDeadZone;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_Con_InvertY;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_PC_HoldToSprint;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_PC_InvertMouseWheel;                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_PC_InvertMouseY;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_PC_MouseSensitivity;                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_PC_MouseSmoothing;                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_ToggleLaser;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Option_C*                        OPT_ToggleTerrainScanner;                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_Gamepad_CustomizeControls_C*   Options_AllKeybindings_Controller;                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_Controller_AimAcceleration_Outer_C* Options_Controller_AimAcceleration_Outer;          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_Controller_AimDeadZone_C*      Options_Controller_AimDeadZone;                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_Controller_AimSensitivity_C*   Options_Controller_AimSensitivity;                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_Controller_ForceFeedbackScale_C* Options_Controller_ForceFeedbackScale;             // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_Ctrl_InvertMouse_C*            Options_Ctrl_InvertMouse;                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_Ctrl_InvertMouse_C*            Options_Ctrl_InvertMouse_C_0;                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_DownedTurnDirection_C*         Options_DownedTurnDirection;                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_DownedTurnDirection_C*         Options_DownedTurnDirection_C_1;                   // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_Gamepad_EnableChat_C*          Options_Gamepad_EnableChat;                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_Gamepad_EnableQuickSwap_C*     Options_Gamepad_EnableQuickSwap;                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_GrapplingHookEquipPrevious_C*  Options_GrapplingHookEquipPrevious;                // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_HoldToSprint_C*                Options_HoldToSprint;                              // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_InvertFlightControls_C*        Options_InvertFlightControls;                      // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_InvertMouseWheel_C*            Options_InvertMouseWheel_277;                      // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_Mouse_SeparateAxis_C*          Options_Mouse_SeparateAxis;                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_MouseKeyboard_CustomizeControls_C* Options_MouseKeyboard_CustomizeControls;           // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_MouseSmooting_C*               Options_MouseSmooting;                             // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_MouseY_Sensitivity_C*          Options_MouseY_Sensitivity;                        // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_SonyInput_C*                   Options_SonyInput;                                 // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_Gamepad_SwapThumbsticks_C*     Options_SwapThumbsticks;                           // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_ToggleLaserpointer_C*          Options_ToggleLaserpointer;                        // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_ToggleTerrainScanner_C*        Options_ToggleTerrainScanner;                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_ZiplineGunEquipPrevious_C*     Options_ZiplineGunEquipPrevious;                   // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             OrderPanel;                                        // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptions_MouseX_Sensitivity_C*          UI_Sensitivity_172;                                // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             SettingsChanged;                                   // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          In_Mouse_Keyboard_First;                           // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void SettingsChanged__DelegateSignature();
	void ExecuteUbergraph_Options_Tab_Controls(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__BTN_ResetToDefaults_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void Construct();
	void SetMouseKeyboardFirst(bool InMouseKeyboardFirst);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Options_Tab_Controls_C">();
	}
	static class UOptions_Tab_Controls_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptions_Tab_Controls_C>();
	}
};
static_assert(alignof(UOptions_Tab_Controls_C) == 0x000008, "Wrong alignment on UOptions_Tab_Controls_C");
static_assert(sizeof(UOptions_Tab_Controls_C) == 0x0003E0, "Wrong size on UOptions_Tab_Controls_C");
static_assert(offsetof(UOptions_Tab_Controls_C, UberGraphFrame) == 0x000260, "Member 'UOptions_Tab_Controls_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Basic_Option_C_0) == 0x000268, "Member 'UOptions_Tab_Controls_C::Basic_Option_C_0' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Basic_Option_C_1) == 0x000270, "Member 'UOptions_Tab_Controls_C::Basic_Option_C_1' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, BTN_ResetToDefaults) == 0x000278, "Member 'UOptions_Tab_Controls_C::BTN_ResetToDefaults' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Controller) == 0x000280, "Member 'UOptions_Tab_Controls_C::Controller' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, KeyboardAndMouse) == 0x000288, "Member 'UOptions_Tab_Controls_C::KeyboardAndMouse' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, OpenChat) == 0x000290, "Member 'UOptions_Tab_Controls_C::OpenChat' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, OPT_Con_AimAcceleration) == 0x000298, "Member 'UOptions_Tab_Controls_C::OPT_Con_AimAcceleration' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, OPT_Con_AimSensitivity) == 0x0002A0, "Member 'UOptions_Tab_Controls_C::OPT_Con_AimSensitivity' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, OPT_Con_ForceFeedback) == 0x0002A8, "Member 'UOptions_Tab_Controls_C::OPT_Con_ForceFeedback' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, OPT_Con_InnerDeadZone) == 0x0002B0, "Member 'UOptions_Tab_Controls_C::OPT_Con_InnerDeadZone' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, OPT_Con_InvertY) == 0x0002B8, "Member 'UOptions_Tab_Controls_C::OPT_Con_InvertY' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, OPT_PC_HoldToSprint) == 0x0002C0, "Member 'UOptions_Tab_Controls_C::OPT_PC_HoldToSprint' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, OPT_PC_InvertMouseWheel) == 0x0002C8, "Member 'UOptions_Tab_Controls_C::OPT_PC_InvertMouseWheel' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, OPT_PC_InvertMouseY) == 0x0002D0, "Member 'UOptions_Tab_Controls_C::OPT_PC_InvertMouseY' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, OPT_PC_MouseSensitivity) == 0x0002D8, "Member 'UOptions_Tab_Controls_C::OPT_PC_MouseSensitivity' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, OPT_PC_MouseSmoothing) == 0x0002E0, "Member 'UOptions_Tab_Controls_C::OPT_PC_MouseSmoothing' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, OPT_ToggleLaser) == 0x0002E8, "Member 'UOptions_Tab_Controls_C::OPT_ToggleLaser' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, OPT_ToggleTerrainScanner) == 0x0002F0, "Member 'UOptions_Tab_Controls_C::OPT_ToggleTerrainScanner' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_AllKeybindings_Controller) == 0x0002F8, "Member 'UOptions_Tab_Controls_C::Options_AllKeybindings_Controller' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_Controller_AimAcceleration_Outer) == 0x000300, "Member 'UOptions_Tab_Controls_C::Options_Controller_AimAcceleration_Outer' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_Controller_AimDeadZone) == 0x000308, "Member 'UOptions_Tab_Controls_C::Options_Controller_AimDeadZone' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_Controller_AimSensitivity) == 0x000310, "Member 'UOptions_Tab_Controls_C::Options_Controller_AimSensitivity' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_Controller_ForceFeedbackScale) == 0x000318, "Member 'UOptions_Tab_Controls_C::Options_Controller_ForceFeedbackScale' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_Ctrl_InvertMouse) == 0x000320, "Member 'UOptions_Tab_Controls_C::Options_Ctrl_InvertMouse' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_Ctrl_InvertMouse_C_0) == 0x000328, "Member 'UOptions_Tab_Controls_C::Options_Ctrl_InvertMouse_C_0' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_DownedTurnDirection) == 0x000330, "Member 'UOptions_Tab_Controls_C::Options_DownedTurnDirection' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_DownedTurnDirection_C_1) == 0x000338, "Member 'UOptions_Tab_Controls_C::Options_DownedTurnDirection_C_1' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_Gamepad_EnableChat) == 0x000340, "Member 'UOptions_Tab_Controls_C::Options_Gamepad_EnableChat' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_Gamepad_EnableQuickSwap) == 0x000348, "Member 'UOptions_Tab_Controls_C::Options_Gamepad_EnableQuickSwap' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_GrapplingHookEquipPrevious) == 0x000350, "Member 'UOptions_Tab_Controls_C::Options_GrapplingHookEquipPrevious' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_HoldToSprint) == 0x000358, "Member 'UOptions_Tab_Controls_C::Options_HoldToSprint' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_InvertFlightControls) == 0x000360, "Member 'UOptions_Tab_Controls_C::Options_InvertFlightControls' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_InvertMouseWheel_277) == 0x000368, "Member 'UOptions_Tab_Controls_C::Options_InvertMouseWheel_277' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_Mouse_SeparateAxis) == 0x000370, "Member 'UOptions_Tab_Controls_C::Options_Mouse_SeparateAxis' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_MouseKeyboard_CustomizeControls) == 0x000378, "Member 'UOptions_Tab_Controls_C::Options_MouseKeyboard_CustomizeControls' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_MouseSmooting) == 0x000380, "Member 'UOptions_Tab_Controls_C::Options_MouseSmooting' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_MouseY_Sensitivity) == 0x000388, "Member 'UOptions_Tab_Controls_C::Options_MouseY_Sensitivity' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_SonyInput) == 0x000390, "Member 'UOptions_Tab_Controls_C::Options_SonyInput' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_SwapThumbsticks) == 0x000398, "Member 'UOptions_Tab_Controls_C::Options_SwapThumbsticks' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_ToggleLaserpointer) == 0x0003A0, "Member 'UOptions_Tab_Controls_C::Options_ToggleLaserpointer' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_ToggleTerrainScanner) == 0x0003A8, "Member 'UOptions_Tab_Controls_C::Options_ToggleTerrainScanner' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, Options_ZiplineGunEquipPrevious) == 0x0003B0, "Member 'UOptions_Tab_Controls_C::Options_ZiplineGunEquipPrevious' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, OrderPanel) == 0x0003B8, "Member 'UOptions_Tab_Controls_C::OrderPanel' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, UI_Sensitivity_172) == 0x0003C0, "Member 'UOptions_Tab_Controls_C::UI_Sensitivity_172' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, SettingsChanged) == 0x0003C8, "Member 'UOptions_Tab_Controls_C::SettingsChanged' has a wrong offset!");
static_assert(offsetof(UOptions_Tab_Controls_C, In_Mouse_Keyboard_First) == 0x0003D8, "Member 'UOptions_Tab_Controls_C::In_Mouse_Keyboard_First' has a wrong offset!");

}

