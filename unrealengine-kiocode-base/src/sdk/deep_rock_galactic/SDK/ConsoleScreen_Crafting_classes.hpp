#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConsoleScreen_Crafting

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ConsoleScreen_Crafting.ConsoleScreen_Crafting_C
// 0x0078 (0x02D8 - 0x0260)
class UConsoleScreen_Crafting_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShopRotate;                                        // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Pan03;                                             // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Pan02;                                             // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Pan01;                                             // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Blink;                                             // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UConsoleScreen_Notification_C*          ConsoleScreen_Notification;                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Ad;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Blink;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_0;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Shadow;                                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTexture2D*>                     NewVar_0;                                          // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                             NewVar_1;                                          // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Show_Shop_Sign;                                    // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void SetShowShopSign(bool Param_Show_Shop_Sign);
	void Construct();
	void Notification_Change();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ConsoleScreen_Crafting(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConsoleScreen_Crafting_C">();
	}
	static class UConsoleScreen_Crafting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConsoleScreen_Crafting_C>();
	}
};
static_assert(alignof(UConsoleScreen_Crafting_C) == 0x000008, "Wrong alignment on UConsoleScreen_Crafting_C");
static_assert(sizeof(UConsoleScreen_Crafting_C) == 0x0002D8, "Wrong size on UConsoleScreen_Crafting_C");
static_assert(offsetof(UConsoleScreen_Crafting_C, UberGraphFrame) == 0x000260, "Member 'UConsoleScreen_Crafting_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Crafting_C, ShopRotate) == 0x000268, "Member 'UConsoleScreen_Crafting_C::ShopRotate' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Crafting_C, Pan03) == 0x000270, "Member 'UConsoleScreen_Crafting_C::Pan03' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Crafting_C, Pan02) == 0x000278, "Member 'UConsoleScreen_Crafting_C::Pan02' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Crafting_C, Pan01) == 0x000280, "Member 'UConsoleScreen_Crafting_C::Pan01' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Crafting_C, Blink) == 0x000288, "Member 'UConsoleScreen_Crafting_C::Blink' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Crafting_C, ConsoleScreen_Notification) == 0x000290, "Member 'UConsoleScreen_Crafting_C::ConsoleScreen_Notification' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Crafting_C, Image_Ad) == 0x000298, "Member 'UConsoleScreen_Crafting_C::Image_Ad' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Crafting_C, Image_Blink) == 0x0002A0, "Member 'UConsoleScreen_Crafting_C::Image_Blink' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Crafting_C, Overlay_0) == 0x0002A8, "Member 'UConsoleScreen_Crafting_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Crafting_C, Shadow) == 0x0002B0, "Member 'UConsoleScreen_Crafting_C::Shadow' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Crafting_C, NewVar_0) == 0x0002B8, "Member 'UConsoleScreen_Crafting_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Crafting_C, NewVar_1) == 0x0002C8, "Member 'UConsoleScreen_Crafting_C::NewVar_1' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Crafting_C, Show_Shop_Sign) == 0x0002D0, "Member 'UConsoleScreen_Crafting_C::Show_Shop_Sign' has a wrong offset!");

}
