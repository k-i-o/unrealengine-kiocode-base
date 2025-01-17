#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharSideBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PlayerStates_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharSideBar.CharSideBar_C
// 0x0058 (0x02D8 - 0x0280)
class UCharSideBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 AttackIndicator;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           HealthBar;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HotKeyText;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Icon;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MovementIndicator;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 CharName;                                          // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Highlighted;                                       // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2577[0x3];                                     // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CharID;                                            // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               Image;                                             // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             AttackIndicatorTexture;                            // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__CharSideBar_Icon_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_CharSideBar(int32 EntryPoint);
	void InitializeIcon();
	void StateChange(class APlayerControllerBP_C** PC);
	void UpdateAttackIndicator();
	void UpdateHealth(double Percentage);
	void UpdateMovementIndicator();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharSideBar_C">();
	}
	static class UCharSideBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharSideBar_C>();
	}
};
static_assert(alignof(UCharSideBar_C) == 0x000008, "Wrong alignment on UCharSideBar_C");
static_assert(sizeof(UCharSideBar_C) == 0x0002D8, "Wrong size on UCharSideBar_C");
static_assert(offsetof(UCharSideBar_C, UberGraphFrame) == 0x000280, "Member 'UCharSideBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCharSideBar_C, AttackIndicator) == 0x000288, "Member 'UCharSideBar_C::AttackIndicator' has a wrong offset!");
static_assert(offsetof(UCharSideBar_C, HealthBar) == 0x000290, "Member 'UCharSideBar_C::HealthBar' has a wrong offset!");
static_assert(offsetof(UCharSideBar_C, HotKeyText) == 0x000298, "Member 'UCharSideBar_C::HotKeyText' has a wrong offset!");
static_assert(offsetof(UCharSideBar_C, Icon) == 0x0002A0, "Member 'UCharSideBar_C::Icon' has a wrong offset!");
static_assert(offsetof(UCharSideBar_C, MovementIndicator) == 0x0002A8, "Member 'UCharSideBar_C::MovementIndicator' has a wrong offset!");
static_assert(offsetof(UCharSideBar_C, CharName) == 0x0002B0, "Member 'UCharSideBar_C::CharName' has a wrong offset!");
static_assert(offsetof(UCharSideBar_C, Highlighted) == 0x0002C0, "Member 'UCharSideBar_C::Highlighted' has a wrong offset!");
static_assert(offsetof(UCharSideBar_C, CharID) == 0x0002C4, "Member 'UCharSideBar_C::CharID' has a wrong offset!");
static_assert(offsetof(UCharSideBar_C, Image) == 0x0002C8, "Member 'UCharSideBar_C::Image' has a wrong offset!");
static_assert(offsetof(UCharSideBar_C, AttackIndicatorTexture) == 0x0002D0, "Member 'UCharSideBar_C::AttackIndicatorTexture' has a wrong offset!");

}

