#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Invitation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DiscordSDK_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Invitation.BP_Invitation_C
// 0x00D8 (0x0378 - 0x02A0)
class UBP_Invitation_C final : public UWindowWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hide;                                              // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Show;                                              // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 AvatarImage;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Menu_ColorBar_C*                 Basic_Menu_ColorBar;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Menu_MinimalWindow_C*            BasicWindow_Minimal;                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonScalable2_C*               BTN_Ignore;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonScalable2_C*               BTN_No;                                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ButtonScalable2_C*               BTN_Yes;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         buttons;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         buttons2;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DATA_Content;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DATA_Header;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         DataBox;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDiscordUserDataSDK                    UserData_New;                                      // 0x0310(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Initialized;                                       // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AC8[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              TimeStarted;                                       // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ImageReady;                                        // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Initializing;                                      // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AC9[0x3];                                     // 0x0371(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InviteTime;                                        // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ImageReady__DelegateSignature(const class FString& URL);
	void ExecuteUbergraph_BP_Invitation(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void HideUIDelayed();
	void BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void OnReadyImage(const class FString& URL);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4(class UTexture2DDynamic* Texture);
	void OnFail_1E7B4EA94EB1E25E604B80A4114A24A4(class UTexture2DDynamic* Texture);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Initialize(const struct FDiscordUserDataSDK& User_Data, float TimeElapsed);
	void ReplyInvite(int32 Reply);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Invitation_C">();
	}
	static class UBP_Invitation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Invitation_C>();
	}
};
static_assert(alignof(UBP_Invitation_C) == 0x000008, "Wrong alignment on UBP_Invitation_C");
static_assert(sizeof(UBP_Invitation_C) == 0x000378, "Wrong size on UBP_Invitation_C");
static_assert(offsetof(UBP_Invitation_C, UberGraphFrame) == 0x0002A0, "Member 'UBP_Invitation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Invitation_C, Hide) == 0x0002A8, "Member 'UBP_Invitation_C::Hide' has a wrong offset!");
static_assert(offsetof(UBP_Invitation_C, Show) == 0x0002B0, "Member 'UBP_Invitation_C::Show' has a wrong offset!");
static_assert(offsetof(UBP_Invitation_C, AvatarImage) == 0x0002B8, "Member 'UBP_Invitation_C::AvatarImage' has a wrong offset!");
static_assert(offsetof(UBP_Invitation_C, Basic_Menu_ColorBar) == 0x0002C0, "Member 'UBP_Invitation_C::Basic_Menu_ColorBar' has a wrong offset!");
static_assert(offsetof(UBP_Invitation_C, BasicWindow_Minimal) == 0x0002C8, "Member 'UBP_Invitation_C::BasicWindow_Minimal' has a wrong offset!");
static_assert(offsetof(UBP_Invitation_C, BTN_Ignore) == 0x0002D0, "Member 'UBP_Invitation_C::BTN_Ignore' has a wrong offset!");
static_assert(offsetof(UBP_Invitation_C, BTN_No) == 0x0002D8, "Member 'UBP_Invitation_C::BTN_No' has a wrong offset!");
static_assert(offsetof(UBP_Invitation_C, BTN_Yes) == 0x0002E0, "Member 'UBP_Invitation_C::BTN_Yes' has a wrong offset!");
static_assert(offsetof(UBP_Invitation_C, buttons) == 0x0002E8, "Member 'UBP_Invitation_C::buttons' has a wrong offset!");
static_assert(offsetof(UBP_Invitation_C, buttons2) == 0x0002F0, "Member 'UBP_Invitation_C::buttons2' has a wrong offset!");
static_assert(offsetof(UBP_Invitation_C, DATA_Content) == 0x0002F8, "Member 'UBP_Invitation_C::DATA_Content' has a wrong offset!");
static_assert(offsetof(UBP_Invitation_C, DATA_Header) == 0x000300, "Member 'UBP_Invitation_C::DATA_Header' has a wrong offset!");
static_assert(offsetof(UBP_Invitation_C, DataBox) == 0x000308, "Member 'UBP_Invitation_C::DataBox' has a wrong offset!");
static_assert(offsetof(UBP_Invitation_C, UserData_New) == 0x000310, "Member 'UBP_Invitation_C::UserData_New' has a wrong offset!");
static_assert(offsetof(UBP_Invitation_C, Initialized) == 0x000350, "Member 'UBP_Invitation_C::Initialized' has a wrong offset!");
static_assert(offsetof(UBP_Invitation_C, TimeStarted) == 0x000358, "Member 'UBP_Invitation_C::TimeStarted' has a wrong offset!");
static_assert(offsetof(UBP_Invitation_C, ImageReady) == 0x000360, "Member 'UBP_Invitation_C::ImageReady' has a wrong offset!");
static_assert(offsetof(UBP_Invitation_C, Initializing) == 0x000370, "Member 'UBP_Invitation_C::Initializing' has a wrong offset!");
static_assert(offsetof(UBP_Invitation_C, InviteTime) == 0x000374, "Member 'UBP_Invitation_C::InviteTime' has a wrong offset!");

}
