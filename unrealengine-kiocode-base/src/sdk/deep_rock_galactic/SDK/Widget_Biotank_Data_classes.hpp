#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Widget_Biotank_Data

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UI_HackingPod_Screen_Base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Widget_Biotank_Data.Widget_Biotank_Data_C
// 0x0020 (0x0288 - 0x0268)
class UWidget_Biotank_Data_C final : public UUI_HackingPod_Screen_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Widget_Biotank_Data_C;              // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewAnimation;                                      // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Caution;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void HackingStarted();
	void ExecuteUbergraph_Widget_Biotank_Data(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Widget_Biotank_Data_C">();
	}
	static class UWidget_Biotank_Data_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWidget_Biotank_Data_C>();
	}
};
static_assert(alignof(UWidget_Biotank_Data_C) == 0x000008, "Wrong alignment on UWidget_Biotank_Data_C");
static_assert(sizeof(UWidget_Biotank_Data_C) == 0x000288, "Wrong size on UWidget_Biotank_Data_C");
static_assert(offsetof(UWidget_Biotank_Data_C, UberGraphFrame_Widget_Biotank_Data_C) == 0x000268, "Member 'UWidget_Biotank_Data_C::UberGraphFrame_Widget_Biotank_Data_C' has a wrong offset!");
static_assert(offsetof(UWidget_Biotank_Data_C, NewAnimation) == 0x000270, "Member 'UWidget_Biotank_Data_C::NewAnimation' has a wrong offset!");
static_assert(offsetof(UWidget_Biotank_Data_C, Image) == 0x000278, "Member 'UWidget_Biotank_Data_C::Image' has a wrong offset!");
static_assert(offsetof(UWidget_Biotank_Data_C, IMG_Caution) == 0x000280, "Member 'UWidget_Biotank_Data_C::IMG_Caution' has a wrong offset!");

}
