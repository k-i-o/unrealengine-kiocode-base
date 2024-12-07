#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_OnlineRestricted

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_OnlineRestricted.ITM_OnlineRestricted_C
// 0x0078 (0x02D8 - 0x0260)
class UITM_OnlineRestricted_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UITM_MenuBackground_C*                  Background;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BlockingPriviligeDebug;                            // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_FlatGradientButton_C*            Button_Resolve;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           DescriptionEntryBox;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Label_C*                         Header_Label;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              Informationscalebox;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           OnlineRestrictedDescBox;                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SneakyPSPlusButton;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EBlueprintablePrivilegeResults                CurrentOnlineBlockingReason;                       // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_424D[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EBlueprintablePrivilegeResults>        PreviewBlocks;                                     // 0x02B0(0x0010)(Edit, BlueprintVisible)
	int32                                         FontSize;                                          // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_424E[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ResolveInputName;                                  // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void Handle_Key_Down(const struct FKeyEvent& KeyEvent, bool* OutHandled, struct FEventReply* OutReply);
	void SetFontSize(int32 InFontSize);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void SetBlockSolution(EBlueprintablePrivilegeResults PriviligeResults);
	void SetBlockedReasonString(TArray<EBlueprintablePrivilegeResults>& InResults);
	void Should_Show_Online_Restriction(bool* Should_Show);
	void PreConstruct(bool IsDesignTime);
	void Resolve_Issue();
	void Refresh_Block_Reasons();
	void Construct();
	void BndEvt__Basic_FlatGradientButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void Show_external_resolve_UI_right_away();
	void BndEvt__Button_57_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_OnlineRestricted(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_OnlineRestricted_C">();
	}
	static class UITM_OnlineRestricted_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_OnlineRestricted_C>();
	}
};
static_assert(alignof(UITM_OnlineRestricted_C) == 0x000008, "Wrong alignment on UITM_OnlineRestricted_C");
static_assert(sizeof(UITM_OnlineRestricted_C) == 0x0002D8, "Wrong size on UITM_OnlineRestricted_C");
static_assert(offsetof(UITM_OnlineRestricted_C, UberGraphFrame) == 0x000260, "Member 'UITM_OnlineRestricted_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_OnlineRestricted_C, Background) == 0x000268, "Member 'UITM_OnlineRestricted_C::Background' has a wrong offset!");
static_assert(offsetof(UITM_OnlineRestricted_C, BlockingPriviligeDebug) == 0x000270, "Member 'UITM_OnlineRestricted_C::BlockingPriviligeDebug' has a wrong offset!");
static_assert(offsetof(UITM_OnlineRestricted_C, Button_Resolve) == 0x000278, "Member 'UITM_OnlineRestricted_C::Button_Resolve' has a wrong offset!");
static_assert(offsetof(UITM_OnlineRestricted_C, DescriptionEntryBox) == 0x000280, "Member 'UITM_OnlineRestricted_C::DescriptionEntryBox' has a wrong offset!");
static_assert(offsetof(UITM_OnlineRestricted_C, Header_Label) == 0x000288, "Member 'UITM_OnlineRestricted_C::Header_Label' has a wrong offset!");
static_assert(offsetof(UITM_OnlineRestricted_C, Informationscalebox) == 0x000290, "Member 'UITM_OnlineRestricted_C::Informationscalebox' has a wrong offset!");
static_assert(offsetof(UITM_OnlineRestricted_C, OnlineRestrictedDescBox) == 0x000298, "Member 'UITM_OnlineRestricted_C::OnlineRestrictedDescBox' has a wrong offset!");
static_assert(offsetof(UITM_OnlineRestricted_C, SneakyPSPlusButton) == 0x0002A0, "Member 'UITM_OnlineRestricted_C::SneakyPSPlusButton' has a wrong offset!");
static_assert(offsetof(UITM_OnlineRestricted_C, CurrentOnlineBlockingReason) == 0x0002A8, "Member 'UITM_OnlineRestricted_C::CurrentOnlineBlockingReason' has a wrong offset!");
static_assert(offsetof(UITM_OnlineRestricted_C, PreviewBlocks) == 0x0002B0, "Member 'UITM_OnlineRestricted_C::PreviewBlocks' has a wrong offset!");
static_assert(offsetof(UITM_OnlineRestricted_C, FontSize) == 0x0002C0, "Member 'UITM_OnlineRestricted_C::FontSize' has a wrong offset!");
static_assert(offsetof(UITM_OnlineRestricted_C, ResolveInputName) == 0x0002C8, "Member 'UITM_OnlineRestricted_C::ResolveInputName' has a wrong offset!");

}

