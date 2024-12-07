#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_SocialMediaButtons

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_SocialMediaButtons.ITM_SocialMediaButtons_C
// 0x0008 (0x0268 - 0x0260)
class UITM_SocialMediaButtons_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_ITM_SocialMediaButtons(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_SocialMediaButtons_C">();
	}
	static class UITM_SocialMediaButtons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_SocialMediaButtons_C>();
	}
};
static_assert(alignof(UITM_SocialMediaButtons_C) == 0x000008, "Wrong alignment on UITM_SocialMediaButtons_C");
static_assert(sizeof(UITM_SocialMediaButtons_C) == 0x000268, "Wrong size on UITM_SocialMediaButtons_C");
static_assert(offsetof(UITM_SocialMediaButtons_C, UberGraphFrame) == 0x000260, "Member 'UITM_SocialMediaButtons_C::UberGraphFrame' has a wrong offset!");

}

