#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_RewardResourceAditive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_RewardResourceAditive.UI_RewardResourceAditive_C
// 0x0030 (0x0298 - 0x0268)
class UUI_RewardResourceAditive_C final : public URewardWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             ResourceAmount;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ResourceIcon;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResourceData*                          Resource;                                          // 0x0288(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0290(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_RewardResourceAditive(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_RewardResourceAditive_C">();
	}
	static class UUI_RewardResourceAditive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_RewardResourceAditive_C>();
	}
};
static_assert(alignof(UUI_RewardResourceAditive_C) == 0x000008, "Wrong alignment on UUI_RewardResourceAditive_C");
static_assert(sizeof(UUI_RewardResourceAditive_C) == 0x000298, "Wrong size on UUI_RewardResourceAditive_C");
static_assert(offsetof(UUI_RewardResourceAditive_C, UberGraphFrame) == 0x000268, "Member 'UUI_RewardResourceAditive_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_RewardResourceAditive_C, ResourceAmount) == 0x000270, "Member 'UUI_RewardResourceAditive_C::ResourceAmount' has a wrong offset!");
static_assert(offsetof(UUI_RewardResourceAditive_C, ResourceIcon) == 0x000278, "Member 'UUI_RewardResourceAditive_C::ResourceIcon' has a wrong offset!");
static_assert(offsetof(UUI_RewardResourceAditive_C, TextBlock_0) == 0x000280, "Member 'UUI_RewardResourceAditive_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UUI_RewardResourceAditive_C, Resource) == 0x000288, "Member 'UUI_RewardResourceAditive_C::Resource' has a wrong offset!");
static_assert(offsetof(UUI_RewardResourceAditive_C, Amount) == 0x000290, "Member 'UUI_RewardResourceAditive_C::Amount' has a wrong offset!");

}

