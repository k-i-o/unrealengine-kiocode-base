#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SCREEN_CharacterSelection_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SCREEN_CharacterSelection_Base.SCREEN_CharacterSelection_Base_C
// 0x0018 (0x02B8 - 0x02A0)
class USCREEN_CharacterSelection_Base_C : public UWindowWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             Back;                                              // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Back__DelegateSignature();
	void ExecuteUbergraph_SCREEN_CharacterSelection_Base(int32 EntryPoint);
	void Show();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SCREEN_CharacterSelection_Base_C">();
	}
	static class USCREEN_CharacterSelection_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USCREEN_CharacterSelection_Base_C>();
	}
};
static_assert(alignof(USCREEN_CharacterSelection_Base_C) == 0x000008, "Wrong alignment on USCREEN_CharacterSelection_Base_C");
static_assert(sizeof(USCREEN_CharacterSelection_Base_C) == 0x0002B8, "Wrong size on USCREEN_CharacterSelection_Base_C");
static_assert(offsetof(USCREEN_CharacterSelection_Base_C, UberGraphFrame) == 0x0002A0, "Member 'USCREEN_CharacterSelection_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USCREEN_CharacterSelection_Base_C, Back) == 0x0002A8, "Member 'USCREEN_CharacterSelection_Base_C::Back' has a wrong offset!");

}

