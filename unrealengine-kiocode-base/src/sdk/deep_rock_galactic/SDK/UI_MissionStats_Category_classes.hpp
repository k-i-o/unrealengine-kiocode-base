#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MissionStats_Category

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "ENUM_MenuColors_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_MissionStats_Category.UI_MissionStats_Category_C
// 0x0040 (0x02A0 - 0x0260)
class UUI_MissionStats_Category_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             AllText;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Background;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             CategoryIcon;                                      // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          CategorySelected;                                  // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAllCategory;                                     // 0x0289(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4363[0x6];                                     // 0x028A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             On_Clicked;                                        // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void On_Clicked__DelegateSignature(class UUI_MissionStats_Category_C* CategoryWidget, bool Is_Selected);
	void Click();
	void GetCategoryIcon(class UTexture2D** Param_CategoryIcon);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void IsSelected(bool* Param_CategorySelected);
	void PreConstruct(bool IsDesignTime);
	void Set_Selected(bool Param_CategorySelected);
	void Construct();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void Set_Hovered(bool Param_IsHovered);
	void ExecuteUbergraph_UI_MissionStats_Category(int32 EntryPoint);

	bool IsInteractable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_MissionStats_Category_C">();
	}
	static class UUI_MissionStats_Category_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_MissionStats_Category_C>();
	}
};
static_assert(alignof(UUI_MissionStats_Category_C) == 0x000008, "Wrong alignment on UUI_MissionStats_Category_C");
static_assert(sizeof(UUI_MissionStats_Category_C) == 0x0002A0, "Wrong size on UUI_MissionStats_Category_C");
static_assert(offsetof(UUI_MissionStats_Category_C, UberGraphFrame) == 0x000260, "Member 'UUI_MissionStats_Category_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_MissionStats_Category_C, AllText) == 0x000268, "Member 'UUI_MissionStats_Category_C::AllText' has a wrong offset!");
static_assert(offsetof(UUI_MissionStats_Category_C, Background) == 0x000270, "Member 'UUI_MissionStats_Category_C::Background' has a wrong offset!");
static_assert(offsetof(UUI_MissionStats_Category_C, Icon) == 0x000278, "Member 'UUI_MissionStats_Category_C::Icon' has a wrong offset!");
static_assert(offsetof(UUI_MissionStats_Category_C, CategoryIcon) == 0x000280, "Member 'UUI_MissionStats_Category_C::CategoryIcon' has a wrong offset!");
static_assert(offsetof(UUI_MissionStats_Category_C, CategorySelected) == 0x000288, "Member 'UUI_MissionStats_Category_C::CategorySelected' has a wrong offset!");
static_assert(offsetof(UUI_MissionStats_Category_C, IsAllCategory) == 0x000289, "Member 'UUI_MissionStats_Category_C::IsAllCategory' has a wrong offset!");
static_assert(offsetof(UUI_MissionStats_Category_C, On_Clicked) == 0x000290, "Member 'UUI_MissionStats_Category_C::On_Clicked' has a wrong offset!");

}
