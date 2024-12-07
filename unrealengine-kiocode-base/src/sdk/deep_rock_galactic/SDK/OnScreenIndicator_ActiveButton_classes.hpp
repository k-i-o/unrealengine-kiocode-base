#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnScreenIndicator_ActiveButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OnScreenIndicator_ActiveButton.OnScreenIndicator_ActiveButton_C
// 0x0020 (0x0288 - 0x0268)
class UOnScreenIndicator_ActiveButton_C final : public UFSDInWorldWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Arrow;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootCanvas;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_OnScreenIndicator_ActiveButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OnScreenIndicator_ActiveButton_C">();
	}
	static class UOnScreenIndicator_ActiveButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnScreenIndicator_ActiveButton_C>();
	}
};
static_assert(alignof(UOnScreenIndicator_ActiveButton_C) == 0x000008, "Wrong alignment on UOnScreenIndicator_ActiveButton_C");
static_assert(sizeof(UOnScreenIndicator_ActiveButton_C) == 0x000288, "Wrong size on UOnScreenIndicator_ActiveButton_C");
static_assert(offsetof(UOnScreenIndicator_ActiveButton_C, UberGraphFrame) == 0x000268, "Member 'UOnScreenIndicator_ActiveButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOnScreenIndicator_ActiveButton_C, Image_Arrow) == 0x000270, "Member 'UOnScreenIndicator_ActiveButton_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UOnScreenIndicator_ActiveButton_C, Image_Icon) == 0x000278, "Member 'UOnScreenIndicator_ActiveButton_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UOnScreenIndicator_ActiveButton_C, RootCanvas) == 0x000280, "Member 'UOnScreenIndicator_ActiveButton_C::RootCanvas' has a wrong offset!");

}

