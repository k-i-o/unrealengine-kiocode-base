#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_TopBar_Resources

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_TopBar_Resources.ITM_TopBar_Resources_C
// 0x0078 (0x02D8 - 0x0260)
class UITM_TopBar_Resources_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         ParentBox;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UResourceData*>                  Resources;                                         // 0x0270(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TMap<class UResourceData*, class UITM_TopBar_ResourceCounter_C*> ResourceWidgets;                                   // 0x0280(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IsDesignTime;                                      // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HideWhenZero;                                      // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DoCountAnim;                                       // 0x02D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ITM_TopBar_Resources(int32 EntryPoint);
	void UpdateResourceBehavior(bool Param_HideWhenZero, bool Param_DoCountAnim);
	void PreConstruct(bool Param_IsDesignTime);
	void SetResources(TArray<class UResourceData*>& InResources);
	void AddResource(class UResourceData* InResource, bool InHideWhenZero);
	void GetResourceAmount(class UResourceData* Resource, float* Amount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_TopBar_Resources_C">();
	}
	static class UITM_TopBar_Resources_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_TopBar_Resources_C>();
	}
};
static_assert(alignof(UITM_TopBar_Resources_C) == 0x000008, "Wrong alignment on UITM_TopBar_Resources_C");
static_assert(sizeof(UITM_TopBar_Resources_C) == 0x0002D8, "Wrong size on UITM_TopBar_Resources_C");
static_assert(offsetof(UITM_TopBar_Resources_C, UberGraphFrame) == 0x000260, "Member 'UITM_TopBar_Resources_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_TopBar_Resources_C, ParentBox) == 0x000268, "Member 'UITM_TopBar_Resources_C::ParentBox' has a wrong offset!");
static_assert(offsetof(UITM_TopBar_Resources_C, Resources) == 0x000270, "Member 'UITM_TopBar_Resources_C::Resources' has a wrong offset!");
static_assert(offsetof(UITM_TopBar_Resources_C, ResourceWidgets) == 0x000280, "Member 'UITM_TopBar_Resources_C::ResourceWidgets' has a wrong offset!");
static_assert(offsetof(UITM_TopBar_Resources_C, IsDesignTime) == 0x0002D0, "Member 'UITM_TopBar_Resources_C::IsDesignTime' has a wrong offset!");
static_assert(offsetof(UITM_TopBar_Resources_C, HideWhenZero) == 0x0002D1, "Member 'UITM_TopBar_Resources_C::HideWhenZero' has a wrong offset!");
static_assert(offsetof(UITM_TopBar_Resources_C, DoCountAnim) == 0x0002D2, "Member 'UITM_TopBar_Resources_C::DoCountAnim' has a wrong offset!");

}
