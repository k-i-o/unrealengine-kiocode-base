#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Widget_Biotank_DisplayName

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UI_HackingPod_Screen_Base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Widget_Biotank_DisplayName.Widget_Biotank_DisplayName_C
// 0x0040 (0x02A8 - 0x0268)
class UWidget_Biotank_DisplayName_C final : public UUI_HackingPod_Screen_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Widget_Biotank_DisplayName_C;       // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewAnimation;                                      // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBasic_Label_C*                         DisplayName;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Label_C*                         DisplayName_2;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_Label_C*                         DisplayName_3;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ADisplayCase*                           DisplayCase;                                       // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetCase(class ADisplayCase* Case);
	void ContentUpdated(const struct FDisplayContent& Content);
	void ExecuteUbergraph_Widget_Biotank_DisplayName(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Widget_Biotank_DisplayName_C">();
	}
	static class UWidget_Biotank_DisplayName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWidget_Biotank_DisplayName_C>();
	}
};
static_assert(alignof(UWidget_Biotank_DisplayName_C) == 0x000008, "Wrong alignment on UWidget_Biotank_DisplayName_C");
static_assert(sizeof(UWidget_Biotank_DisplayName_C) == 0x0002A8, "Wrong size on UWidget_Biotank_DisplayName_C");
static_assert(offsetof(UWidget_Biotank_DisplayName_C, UberGraphFrame_Widget_Biotank_DisplayName_C) == 0x000268, "Member 'UWidget_Biotank_DisplayName_C::UberGraphFrame_Widget_Biotank_DisplayName_C' has a wrong offset!");
static_assert(offsetof(UWidget_Biotank_DisplayName_C, NewAnimation) == 0x000270, "Member 'UWidget_Biotank_DisplayName_C::NewAnimation' has a wrong offset!");
static_assert(offsetof(UWidget_Biotank_DisplayName_C, DisplayName) == 0x000278, "Member 'UWidget_Biotank_DisplayName_C::DisplayName' has a wrong offset!");
static_assert(offsetof(UWidget_Biotank_DisplayName_C, DisplayName_2) == 0x000280, "Member 'UWidget_Biotank_DisplayName_C::DisplayName_2' has a wrong offset!");
static_assert(offsetof(UWidget_Biotank_DisplayName_C, DisplayName_3) == 0x000288, "Member 'UWidget_Biotank_DisplayName_C::DisplayName_3' has a wrong offset!");
static_assert(offsetof(UWidget_Biotank_DisplayName_C, Image) == 0x000290, "Member 'UWidget_Biotank_DisplayName_C::Image' has a wrong offset!");
static_assert(offsetof(UWidget_Biotank_DisplayName_C, Image_1) == 0x000298, "Member 'UWidget_Biotank_DisplayName_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWidget_Biotank_DisplayName_C, DisplayCase) == 0x0002A0, "Member 'UWidget_Biotank_DisplayName_C::DisplayCase' has a wrong offset!");

}

