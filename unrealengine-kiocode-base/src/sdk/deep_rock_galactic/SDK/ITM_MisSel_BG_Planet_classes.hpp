#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_MisSel_BG_Planet

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_MisSel_BG_Planet.ITM_MisSel_BG_Planet_C
// 0x0008 (0x0268 - 0x0260)
class UITM_MisSel_BG_Planet_C final : public UUserWidget
{
public:
	class UImage*                                 BGimage;                                           // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_MisSel_BG_Planet_C">();
	}
	static class UITM_MisSel_BG_Planet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_MisSel_BG_Planet_C>();
	}
};
static_assert(alignof(UITM_MisSel_BG_Planet_C) == 0x000008, "Wrong alignment on UITM_MisSel_BG_Planet_C");
static_assert(sizeof(UITM_MisSel_BG_Planet_C) == 0x000268, "Wrong size on UITM_MisSel_BG_Planet_C");
static_assert(offsetof(UITM_MisSel_BG_Planet_C, BGimage) == 0x000260, "Member 'UITM_MisSel_BG_Planet_C::BGimage' has a wrong offset!");

}

