#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HazPlus_Condensed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_HazPlus_Condensed.UI_HazPlus_Condensed_C
// 0x0050 (0x02B0 - 0x0260)
class UUI_HazPlus_Condensed_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUniformGridPanel*                      Icon_Grid;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Root_Overlay;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ToolTip_Button;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FDifficultyMutatorItem>         Mutators;                                          // 0x0280(0x0010)(Edit, BlueprintVisible)
	struct FMargin                                Icon_Padding;                                      // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Icon_Size;                                         // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Font_Size;                                         // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Text_Offset;                                       // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_HazPlus_Condensed(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetMutators(TArray<struct FDifficultyMutatorItem>& InMutator);
	class UWidget* GetToolTip();
	void GetMutators(TArray<struct FDifficultyMutatorItem>* OutResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_HazPlus_Condensed_C">();
	}
	static class UUI_HazPlus_Condensed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_HazPlus_Condensed_C>();
	}
};
static_assert(alignof(UUI_HazPlus_Condensed_C) == 0x000008, "Wrong alignment on UUI_HazPlus_Condensed_C");
static_assert(sizeof(UUI_HazPlus_Condensed_C) == 0x0002B0, "Wrong size on UUI_HazPlus_Condensed_C");
static_assert(offsetof(UUI_HazPlus_Condensed_C, UberGraphFrame) == 0x000260, "Member 'UUI_HazPlus_Condensed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_HazPlus_Condensed_C, Icon_Grid) == 0x000268, "Member 'UUI_HazPlus_Condensed_C::Icon_Grid' has a wrong offset!");
static_assert(offsetof(UUI_HazPlus_Condensed_C, Root_Overlay) == 0x000270, "Member 'UUI_HazPlus_Condensed_C::Root_Overlay' has a wrong offset!");
static_assert(offsetof(UUI_HazPlus_Condensed_C, ToolTip_Button) == 0x000278, "Member 'UUI_HazPlus_Condensed_C::ToolTip_Button' has a wrong offset!");
static_assert(offsetof(UUI_HazPlus_Condensed_C, Mutators) == 0x000280, "Member 'UUI_HazPlus_Condensed_C::Mutators' has a wrong offset!");
static_assert(offsetof(UUI_HazPlus_Condensed_C, Icon_Padding) == 0x000290, "Member 'UUI_HazPlus_Condensed_C::Icon_Padding' has a wrong offset!");
static_assert(offsetof(UUI_HazPlus_Condensed_C, Icon_Size) == 0x0002A0, "Member 'UUI_HazPlus_Condensed_C::Icon_Size' has a wrong offset!");
static_assert(offsetof(UUI_HazPlus_Condensed_C, Font_Size) == 0x0002A4, "Member 'UUI_HazPlus_Condensed_C::Font_Size' has a wrong offset!");
static_assert(offsetof(UUI_HazPlus_Condensed_C, Text_Offset) == 0x0002A8, "Member 'UUI_HazPlus_Condensed_C::Text_Offset' has a wrong offset!");

}

