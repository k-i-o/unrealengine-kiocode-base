#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HazPlus_Row

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_HazPlus_Row.UI_HazPlus_Row_C
// 0x0010 (0x0270 - 0x0260)
class UUI_HazPlus_Row_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         Mutators_HBox;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_HazPlus_Row(int32 EntryPoint);
	void SetMutators(const TArray<struct FDifficultyMutatorItem>& Array);
	void PreConstruct(bool IsDesignTime);
	void OnDifficultyChanged_Event_0(const struct FGameDifficulty& Setting);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_HazPlus_Row_C">();
	}
	static class UUI_HazPlus_Row_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_HazPlus_Row_C>();
	}
};
static_assert(alignof(UUI_HazPlus_Row_C) == 0x000008, "Wrong alignment on UUI_HazPlus_Row_C");
static_assert(sizeof(UUI_HazPlus_Row_C) == 0x000270, "Wrong size on UUI_HazPlus_Row_C");
static_assert(offsetof(UUI_HazPlus_Row_C, UberGraphFrame) == 0x000260, "Member 'UUI_HazPlus_Row_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_HazPlus_Row_C, Mutators_HBox) == 0x000268, "Member 'UUI_HazPlus_Row_C::Mutators_HBox' has a wrong offset!");

}

