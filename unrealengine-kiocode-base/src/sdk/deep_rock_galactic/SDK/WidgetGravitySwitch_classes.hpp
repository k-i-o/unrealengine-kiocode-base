#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WidgetGravitySwitch

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WidgetGravitySwitch.WidgetGravitySwitch_C
// 0x0018 (0x0278 - 0x0260)
class UWidgetGravitySwitch_C final : public UUserWidget
{
public:
	class UTextBlock*                             NameText;                                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetColor(const struct FLinearColor& Color);
	void SetPlayerName(const class FText& NewName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WidgetGravitySwitch_C">();
	}
	static class UWidgetGravitySwitch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWidgetGravitySwitch_C>();
	}
};
static_assert(alignof(UWidgetGravitySwitch_C) == 0x000008, "Wrong alignment on UWidgetGravitySwitch_C");
static_assert(sizeof(UWidgetGravitySwitch_C) == 0x000278, "Wrong size on UWidgetGravitySwitch_C");
static_assert(offsetof(UWidgetGravitySwitch_C, NameText) == 0x000260, "Member 'UWidgetGravitySwitch_C::NameText' has a wrong offset!");
static_assert(offsetof(UWidgetGravitySwitch_C, TextBlock_0) == 0x000268, "Member 'UWidgetGravitySwitch_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UWidgetGravitySwitch_C, TextBlock_1) == 0x000270, "Member 'UWidgetGravitySwitch_C::TextBlock_1' has a wrong offset!");

}
