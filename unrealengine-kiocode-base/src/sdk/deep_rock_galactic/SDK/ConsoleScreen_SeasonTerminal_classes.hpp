#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConsoleScreen_SeasonTerminal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ConsoleScreen_SeasonTerminal.ConsoleScreen_SeasonTerminal_C
// 0x0018 (0x0278 - 0x0260)
class UConsoleScreen_SeasonTerminal_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       TextAnim;                                          // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UConsoleScreen_BGtemplate_C*            ConsoleScreen_BGtemplate;                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ConsoleScreen_SeasonTerminal(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConsoleScreen_SeasonTerminal_C">();
	}
	static class UConsoleScreen_SeasonTerminal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConsoleScreen_SeasonTerminal_C>();
	}
};
static_assert(alignof(UConsoleScreen_SeasonTerminal_C) == 0x000008, "Wrong alignment on UConsoleScreen_SeasonTerminal_C");
static_assert(sizeof(UConsoleScreen_SeasonTerminal_C) == 0x000278, "Wrong size on UConsoleScreen_SeasonTerminal_C");
static_assert(offsetof(UConsoleScreen_SeasonTerminal_C, UberGraphFrame) == 0x000260, "Member 'UConsoleScreen_SeasonTerminal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_SeasonTerminal_C, TextAnim) == 0x000268, "Member 'UConsoleScreen_SeasonTerminal_C::TextAnim' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_SeasonTerminal_C, ConsoleScreen_BGtemplate) == 0x000270, "Member 'UConsoleScreen_SeasonTerminal_C::ConsoleScreen_BGtemplate' has a wrong offset!");

}

