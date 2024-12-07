#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Basic_Menu_WindowBG

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Basic_Menu_WindowBG.Basic_Menu_WindowBG_C
// 0x0010 (0x0270 - 0x0260)
class UBasic_Menu_WindowBG_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                ColorBar;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_Basic_Menu_WindowBG(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Basic_Menu_WindowBG_C">();
	}
	static class UBasic_Menu_WindowBG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBasic_Menu_WindowBG_C>();
	}
};
static_assert(alignof(UBasic_Menu_WindowBG_C) == 0x000008, "Wrong alignment on UBasic_Menu_WindowBG_C");
static_assert(sizeof(UBasic_Menu_WindowBG_C) == 0x000270, "Wrong size on UBasic_Menu_WindowBG_C");
static_assert(offsetof(UBasic_Menu_WindowBG_C, UberGraphFrame) == 0x000260, "Member 'UBasic_Menu_WindowBG_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBasic_Menu_WindowBG_C, ColorBar) == 0x000268, "Member 'UBasic_Menu_WindowBG_C::ColorBar' has a wrong offset!");

}

