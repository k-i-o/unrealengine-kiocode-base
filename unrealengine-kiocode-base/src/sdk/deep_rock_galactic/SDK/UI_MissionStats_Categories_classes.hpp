#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MissionStats_Categories

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_MissionStats_Categories.UI_MissionStats_Categories_C
// 0x0058 (0x02B8 - 0x0260)
class UUI_MissionStats_Categories_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_ArrowButton02_C*                 ArrowLeft;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasic_ArrowButton02_C*                 ArrowRight;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         CategoryParent;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTexture2D*>                     CategoryIcons;                                     // 0x0280(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UUI_MissionStats_Category_C*>    Widgets;                                           // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnSelectedChanged;                                 // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUI_MissionStats_Category_C*            SelectedCategory;                                  // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_MissionStats_Categories(int32 EntryPoint);
	void OnSelectedChanged__DelegateSignature();
	void SelectNext(bool ForwardDirection);
	void Add_Vertical_Bar();
	void Add_Category(class UTexture2D* CategoryIcon, bool IsAllCategory, class UUI_MissionStats_Category_C** CategoryWidget);
	void GetCategorySelection(TArray<class UTexture2D*>* Selection);
	void PreConstruct(bool IsDesignTime);
	void Set_Categories(const TArray<class UTexture2D*>& Param_CategoryIcons);
	void Setup_Widget_Events(class UUI_MissionStats_Category_C* Widget);
	void On_Category_Clicked(class UUI_MissionStats_Category_C* CategoryWidget, bool Is_Selected);
	void BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_MissionStats_Categories_C">();
	}
	static class UUI_MissionStats_Categories_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_MissionStats_Categories_C>();
	}
};
static_assert(alignof(UUI_MissionStats_Categories_C) == 0x000008, "Wrong alignment on UUI_MissionStats_Categories_C");
static_assert(sizeof(UUI_MissionStats_Categories_C) == 0x0002B8, "Wrong size on UUI_MissionStats_Categories_C");
static_assert(offsetof(UUI_MissionStats_Categories_C, UberGraphFrame) == 0x000260, "Member 'UUI_MissionStats_Categories_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_MissionStats_Categories_C, ArrowLeft) == 0x000268, "Member 'UUI_MissionStats_Categories_C::ArrowLeft' has a wrong offset!");
static_assert(offsetof(UUI_MissionStats_Categories_C, ArrowRight) == 0x000270, "Member 'UUI_MissionStats_Categories_C::ArrowRight' has a wrong offset!");
static_assert(offsetof(UUI_MissionStats_Categories_C, CategoryParent) == 0x000278, "Member 'UUI_MissionStats_Categories_C::CategoryParent' has a wrong offset!");
static_assert(offsetof(UUI_MissionStats_Categories_C, CategoryIcons) == 0x000280, "Member 'UUI_MissionStats_Categories_C::CategoryIcons' has a wrong offset!");
static_assert(offsetof(UUI_MissionStats_Categories_C, Widgets) == 0x000290, "Member 'UUI_MissionStats_Categories_C::Widgets' has a wrong offset!");
static_assert(offsetof(UUI_MissionStats_Categories_C, OnSelectedChanged) == 0x0002A0, "Member 'UUI_MissionStats_Categories_C::OnSelectedChanged' has a wrong offset!");
static_assert(offsetof(UUI_MissionStats_Categories_C, SelectedCategory) == 0x0002B0, "Member 'UUI_MissionStats_Categories_C::SelectedCategory' has a wrong offset!");

}

