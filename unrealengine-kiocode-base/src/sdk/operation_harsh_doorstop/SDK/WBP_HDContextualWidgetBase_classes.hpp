#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HDContextualWidgetBase

#include "Basic.hpp"

#include "DonkehFrameworkUI_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HDContextualWidgetBase.WBP_HDContextualWidgetBase_C
// 0x0010 (0x0250 - 0x0240)
class UWBP_HDContextualWidgetBase_C : public UDFContextualWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	ESlateVisibility                              VisibilitySatisfiedPrereqs;                        // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsEnabledSatisfiedPrereqs;                        // 0x0249(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESlateVisibility                              VisibilityUnsatisfiedPrereqs;                      // 0x024A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsEnabledUnsatisfiedPrereqs;                      // 0x024B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_HDContextualWidgetBase(int32 EntryPoint);
	void PrerequisiteNotMet(const class UDFContextualWidgetPrerequisiteBase* FailedPrereq);
	void PrerequisitesMet();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HDContextualWidgetBase_C">();
	}
	static class UWBP_HDContextualWidgetBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HDContextualWidgetBase_C>();
	}
};
static_assert(alignof(UWBP_HDContextualWidgetBase_C) == 0x000008, "Wrong alignment on UWBP_HDContextualWidgetBase_C");
static_assert(sizeof(UWBP_HDContextualWidgetBase_C) == 0x000250, "Wrong size on UWBP_HDContextualWidgetBase_C");
static_assert(offsetof(UWBP_HDContextualWidgetBase_C, UberGraphFrame) == 0x000240, "Member 'UWBP_HDContextualWidgetBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_HDContextualWidgetBase_C, VisibilitySatisfiedPrereqs) == 0x000248, "Member 'UWBP_HDContextualWidgetBase_C::VisibilitySatisfiedPrereqs' has a wrong offset!");
static_assert(offsetof(UWBP_HDContextualWidgetBase_C, bIsEnabledSatisfiedPrereqs) == 0x000249, "Member 'UWBP_HDContextualWidgetBase_C::bIsEnabledSatisfiedPrereqs' has a wrong offset!");
static_assert(offsetof(UWBP_HDContextualWidgetBase_C, VisibilityUnsatisfiedPrereqs) == 0x00024A, "Member 'UWBP_HDContextualWidgetBase_C::VisibilityUnsatisfiedPrereqs' has a wrong offset!");
static_assert(offsetof(UWBP_HDContextualWidgetBase_C, bIsEnabledUnsatisfiedPrereqs) == 0x00024B, "Member 'UWBP_HDContextualWidgetBase_C::bIsEnabledUnsatisfiedPrereqs' has a wrong offset!");

}
