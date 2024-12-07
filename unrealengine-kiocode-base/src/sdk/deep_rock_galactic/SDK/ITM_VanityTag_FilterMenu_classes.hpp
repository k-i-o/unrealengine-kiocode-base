#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_VanityTag_FilterMenu

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_VanityTag_FilterMenu.ITM_VanityTag_FilterMenu_C
// 0x0038 (0x0298 - 0x0260)
class UITM_VanityTag_FilterMenu_C final : public UUserWidget
{
public:
	class UVerticalBox*                           Menu_Category_Box;                                 // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectionChanged;                                // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UITM_VanityTag_Category_C*>      CategoryWidgets;                                   // 0x0278(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnRequestClose;                                    // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Clear();
	struct FDetailedTagSet GetSelectedTags();
	void EntryChanged();
	void SetAllTags(const struct FDetailedTagSet& InAllTags, const struct FDetailedTagSet& InSelectedTags);
	void OnRequestClose__DelegateSignature();
	void OnSelectionChanged__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_VanityTag_FilterMenu_C">();
	}
	static class UITM_VanityTag_FilterMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_VanityTag_FilterMenu_C>();
	}
};
static_assert(alignof(UITM_VanityTag_FilterMenu_C) == 0x000008, "Wrong alignment on UITM_VanityTag_FilterMenu_C");
static_assert(sizeof(UITM_VanityTag_FilterMenu_C) == 0x000298, "Wrong size on UITM_VanityTag_FilterMenu_C");
static_assert(offsetof(UITM_VanityTag_FilterMenu_C, Menu_Category_Box) == 0x000260, "Member 'UITM_VanityTag_FilterMenu_C::Menu_Category_Box' has a wrong offset!");
static_assert(offsetof(UITM_VanityTag_FilterMenu_C, OnSelectionChanged) == 0x000268, "Member 'UITM_VanityTag_FilterMenu_C::OnSelectionChanged' has a wrong offset!");
static_assert(offsetof(UITM_VanityTag_FilterMenu_C, CategoryWidgets) == 0x000278, "Member 'UITM_VanityTag_FilterMenu_C::CategoryWidgets' has a wrong offset!");
static_assert(offsetof(UITM_VanityTag_FilterMenu_C, OnRequestClose) == 0x000288, "Member 'UITM_VanityTag_FilterMenu_C::OnRequestClose' has a wrong offset!");

}

