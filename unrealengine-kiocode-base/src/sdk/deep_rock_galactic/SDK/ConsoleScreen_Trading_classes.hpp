#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConsoleScreen_Trading

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ConsoleScreen_Trading.ConsoleScreen_Trading_C
// 0x0010 (0x0270 - 0x0260)
class UConsoleScreen_Trading_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UConsoleScreen_BGtemplate_C*            ConsoleScreen_BGtemplate;                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_ConsoleScreen_Trading(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConsoleScreen_Trading_C">();
	}
	static class UConsoleScreen_Trading_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConsoleScreen_Trading_C>();
	}
};
static_assert(alignof(UConsoleScreen_Trading_C) == 0x000008, "Wrong alignment on UConsoleScreen_Trading_C");
static_assert(sizeof(UConsoleScreen_Trading_C) == 0x000270, "Wrong size on UConsoleScreen_Trading_C");
static_assert(offsetof(UConsoleScreen_Trading_C, UberGraphFrame) == 0x000260, "Member 'UConsoleScreen_Trading_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UConsoleScreen_Trading_C, ConsoleScreen_BGtemplate) == 0x000268, "Member 'UConsoleScreen_Trading_C::ConsoleScreen_BGtemplate' has a wrong offset!");

}

