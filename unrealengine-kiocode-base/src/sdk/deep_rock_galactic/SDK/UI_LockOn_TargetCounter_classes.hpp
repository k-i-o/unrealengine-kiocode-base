#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_LockOn_TargetCounter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_LockOn_TargetCounter.UI_LockOn_TargetCounter_C
// 0x0028 (0x0288 - 0x0260)
class UUI_LockOn_TargetCounter_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimPing;                                          // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      Background;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ImageTinted_C*                      Foreground;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsOn;                                              // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void Refresh();
	void PreConstruct(bool IsDesignTime);
	void SetOn(bool InIsOn);
	void Ping();
	void ExecuteUbergraph_UI_LockOn_TargetCounter(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_LockOn_TargetCounter_C">();
	}
	static class UUI_LockOn_TargetCounter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_LockOn_TargetCounter_C>();
	}
};
static_assert(alignof(UUI_LockOn_TargetCounter_C) == 0x000008, "Wrong alignment on UUI_LockOn_TargetCounter_C");
static_assert(sizeof(UUI_LockOn_TargetCounter_C) == 0x000288, "Wrong size on UUI_LockOn_TargetCounter_C");
static_assert(offsetof(UUI_LockOn_TargetCounter_C, UberGraphFrame) == 0x000260, "Member 'UUI_LockOn_TargetCounter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_LockOn_TargetCounter_C, AnimPing) == 0x000268, "Member 'UUI_LockOn_TargetCounter_C::AnimPing' has a wrong offset!");
static_assert(offsetof(UUI_LockOn_TargetCounter_C, Background) == 0x000270, "Member 'UUI_LockOn_TargetCounter_C::Background' has a wrong offset!");
static_assert(offsetof(UUI_LockOn_TargetCounter_C, Foreground) == 0x000278, "Member 'UUI_LockOn_TargetCounter_C::Foreground' has a wrong offset!");
static_assert(offsetof(UUI_LockOn_TargetCounter_C, IsOn) == 0x000280, "Member 'UUI_LockOn_TargetCounter_C::IsOn' has a wrong offset!");

}

