#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MyAbilityBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AbilitySlots_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MyAbilityBP.MyAbilityBP_C
// 0x0058 (0x00F8 - 0x00A0)
class UMyAbilityBP_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         CurrentCooldown;                                   // 0x00A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ended;                                             // 0x00AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAbilitySlots                                 Slot;                                              // 0x00AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25C6[0x2];                                     // 0x00AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Cooldown;                                          // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25C7[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               Icon;                                              // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                 Tooltip;                                           // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UTexture*                               HighlightedIcon;                                   // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                 NameTextKey;                                       // 0x00D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 DescriptionTextKey;                                // 0x00E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	void Clear();
	void ContinueAction();
	void DecreasCooldown();
	void ExecuteUbergraph_MyAbilityBP(int32 EntryPoint);
	void GetCooldown(int32* Output);
	void OnAbilityDeselected();
	void OnAbilitySelected();
	void OnEnd();
	void PreDisplayTarget(const struct FVector& Target);
	void ReceiveBeginPlay();
	void SetCooldown(int32 Input);
	void Unselect();
	void UpdateCooldownHUD();
	void Use(const struct FVector& AbilityTarget);
	void ValidateTarget(const struct FVector& Target, bool* Valid_);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyAbilityBP_C">();
	}
	static class UMyAbilityBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyAbilityBP_C>();
	}
};
static_assert(alignof(UMyAbilityBP_C) == 0x000008, "Wrong alignment on UMyAbilityBP_C");
static_assert(sizeof(UMyAbilityBP_C) == 0x0000F8, "Wrong size on UMyAbilityBP_C");
static_assert(offsetof(UMyAbilityBP_C, UberGraphFrame) == 0x0000A0, "Member 'UMyAbilityBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyAbilityBP_C, CurrentCooldown) == 0x0000A8, "Member 'UMyAbilityBP_C::CurrentCooldown' has a wrong offset!");
static_assert(offsetof(UMyAbilityBP_C, Ended) == 0x0000AC, "Member 'UMyAbilityBP_C::Ended' has a wrong offset!");
static_assert(offsetof(UMyAbilityBP_C, Slot) == 0x0000AD, "Member 'UMyAbilityBP_C::Slot' has a wrong offset!");
static_assert(offsetof(UMyAbilityBP_C, Cooldown) == 0x0000B0, "Member 'UMyAbilityBP_C::Cooldown' has a wrong offset!");
static_assert(offsetof(UMyAbilityBP_C, Icon) == 0x0000B8, "Member 'UMyAbilityBP_C::Icon' has a wrong offset!");
static_assert(offsetof(UMyAbilityBP_C, Tooltip) == 0x0000C0, "Member 'UMyAbilityBP_C::Tooltip' has a wrong offset!");
static_assert(offsetof(UMyAbilityBP_C, HighlightedIcon) == 0x0000D0, "Member 'UMyAbilityBP_C::HighlightedIcon' has a wrong offset!");
static_assert(offsetof(UMyAbilityBP_C, NameTextKey) == 0x0000D8, "Member 'UMyAbilityBP_C::NameTextKey' has a wrong offset!");
static_assert(offsetof(UMyAbilityBP_C, DescriptionTextKey) == 0x0000E8, "Member 'UMyAbilityBP_C::DescriptionTextKey' has a wrong offset!");

}
