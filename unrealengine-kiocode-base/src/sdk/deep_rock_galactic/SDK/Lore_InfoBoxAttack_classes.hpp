#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lore_InfoBoxAttack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Lore_InfoBoxAttack.Lore_InfoBoxAttack_C
// 0x00D0 (0x0330 - 0x0260)
class ULore_InfoBoxAttack_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasic_BG_CutCorner_C*                  Basic_BG_Window_59;                                // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULore_DamageTypeIcon_C*                 Lore_DamageTypeIcon;                               // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Grayed;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_TextBody;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0288(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FDamageTypeDescription                 Icon;                                              // 0x02A0(0x0078)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   GrayText;                                          // 0x0318(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_Lore_InfoBoxAttack(int32 EntryPoint);
	void SetColor(const struct FLinearColor& InColorAndOpacity);
	void PreConstruct(bool IsDesignTime);
	void SetData(const class FText& Param_Text, const struct FDamageTypeDescription& Param_Icon, const class FText& Param_GrayText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lore_InfoBoxAttack_C">();
	}
	static class ULore_InfoBoxAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULore_InfoBoxAttack_C>();
	}
};
static_assert(alignof(ULore_InfoBoxAttack_C) == 0x000008, "Wrong alignment on ULore_InfoBoxAttack_C");
static_assert(sizeof(ULore_InfoBoxAttack_C) == 0x000330, "Wrong size on ULore_InfoBoxAttack_C");
static_assert(offsetof(ULore_InfoBoxAttack_C, UberGraphFrame) == 0x000260, "Member 'ULore_InfoBoxAttack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULore_InfoBoxAttack_C, Basic_BG_Window_59) == 0x000268, "Member 'ULore_InfoBoxAttack_C::Basic_BG_Window_59' has a wrong offset!");
static_assert(offsetof(ULore_InfoBoxAttack_C, Lore_DamageTypeIcon) == 0x000270, "Member 'ULore_InfoBoxAttack_C::Lore_DamageTypeIcon' has a wrong offset!");
static_assert(offsetof(ULore_InfoBoxAttack_C, TextBlock_Grayed) == 0x000278, "Member 'ULore_InfoBoxAttack_C::TextBlock_Grayed' has a wrong offset!");
static_assert(offsetof(ULore_InfoBoxAttack_C, TextBlock_TextBody) == 0x000280, "Member 'ULore_InfoBoxAttack_C::TextBlock_TextBody' has a wrong offset!");
static_assert(offsetof(ULore_InfoBoxAttack_C, Text) == 0x000288, "Member 'ULore_InfoBoxAttack_C::Text' has a wrong offset!");
static_assert(offsetof(ULore_InfoBoxAttack_C, Icon) == 0x0002A0, "Member 'ULore_InfoBoxAttack_C::Icon' has a wrong offset!");
static_assert(offsetof(ULore_InfoBoxAttack_C, GrayText) == 0x000318, "Member 'ULore_InfoBoxAttack_C::GrayText' has a wrong offset!");

}

