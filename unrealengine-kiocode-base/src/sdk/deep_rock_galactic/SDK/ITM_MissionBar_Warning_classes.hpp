#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_MissionBar_Warning

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "ENUM_MenuColors_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_MissionBar_Warning.ITM_MissionBar_Warning_C
// 0x0038 (0x0298 - 0x0260)
class UITM_MissionBar_Warning_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Blink;                                             // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             DATA_Warning;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GradientBG;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconMutator;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconWarning;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Is_Mutator;                                        // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ITM_MissionBar_Warning(int32 EntryPoint);
	void SetMutator(class UMissionMutator* Mutator);
	void SetWarning(class UMissionWarning* Warning);
	void PreConstruct(bool IsDesignTime);
	void Update(const class FText& Title, class UTexture2D* Icon, ENUM_MenuColors Color);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_MissionBar_Warning_C">();
	}
	static class UITM_MissionBar_Warning_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_MissionBar_Warning_C>();
	}
};
static_assert(alignof(UITM_MissionBar_Warning_C) == 0x000008, "Wrong alignment on UITM_MissionBar_Warning_C");
static_assert(sizeof(UITM_MissionBar_Warning_C) == 0x000298, "Wrong size on UITM_MissionBar_Warning_C");
static_assert(offsetof(UITM_MissionBar_Warning_C, UberGraphFrame) == 0x000260, "Member 'UITM_MissionBar_Warning_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_MissionBar_Warning_C, Blink) == 0x000268, "Member 'UITM_MissionBar_Warning_C::Blink' has a wrong offset!");
static_assert(offsetof(UITM_MissionBar_Warning_C, DATA_Warning) == 0x000270, "Member 'UITM_MissionBar_Warning_C::DATA_Warning' has a wrong offset!");
static_assert(offsetof(UITM_MissionBar_Warning_C, GradientBG) == 0x000278, "Member 'UITM_MissionBar_Warning_C::GradientBG' has a wrong offset!");
static_assert(offsetof(UITM_MissionBar_Warning_C, IconMutator) == 0x000280, "Member 'UITM_MissionBar_Warning_C::IconMutator' has a wrong offset!");
static_assert(offsetof(UITM_MissionBar_Warning_C, IconWarning) == 0x000288, "Member 'UITM_MissionBar_Warning_C::IconWarning' has a wrong offset!");
static_assert(offsetof(UITM_MissionBar_Warning_C, Is_Mutator) == 0x000290, "Member 'UITM_MissionBar_Warning_C::Is_Mutator' has a wrong offset!");

}

