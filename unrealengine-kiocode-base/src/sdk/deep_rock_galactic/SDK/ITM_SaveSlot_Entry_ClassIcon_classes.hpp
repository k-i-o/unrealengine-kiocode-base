#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_SaveSlot_Entry_ClassIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ITM_SaveSlot_Entry_ClassIcon.ITM_SaveSlot_Entry_ClassIcon_C
// 0x0090 (0x02F0 - 0x0260)
class UITM_SaveSlot_Entry_ClassIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 PlayerIcon;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Star;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                         ResourceFont;                                      // 0x0278(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UTexture2D*                             Icon;                                              // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           IconTint;                                          // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerCharacterID*                     PlayerCharacter;                                   // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ITM_SaveSlot_Entry_ClassIcon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetPlayerData(class UTexture2D* InIcon, const struct FLinearColor& InIconTint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ITM_SaveSlot_Entry_ClassIcon_C">();
	}
	static class UITM_SaveSlot_Entry_ClassIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UITM_SaveSlot_Entry_ClassIcon_C>();
	}
};
static_assert(alignof(UITM_SaveSlot_Entry_ClassIcon_C) == 0x000008, "Wrong alignment on UITM_SaveSlot_Entry_ClassIcon_C");
static_assert(sizeof(UITM_SaveSlot_Entry_ClassIcon_C) == 0x0002F0, "Wrong size on UITM_SaveSlot_Entry_ClassIcon_C");
static_assert(offsetof(UITM_SaveSlot_Entry_ClassIcon_C, UberGraphFrame) == 0x000260, "Member 'UITM_SaveSlot_Entry_ClassIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_ClassIcon_C, PlayerIcon) == 0x000268, "Member 'UITM_SaveSlot_Entry_ClassIcon_C::PlayerIcon' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_ClassIcon_C, Text_Star) == 0x000270, "Member 'UITM_SaveSlot_Entry_ClassIcon_C::Text_Star' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_ClassIcon_C, ResourceFont) == 0x000278, "Member 'UITM_SaveSlot_Entry_ClassIcon_C::ResourceFont' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_ClassIcon_C, Icon) == 0x0002D0, "Member 'UITM_SaveSlot_Entry_ClassIcon_C::Icon' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_ClassIcon_C, IconTint) == 0x0002D8, "Member 'UITM_SaveSlot_Entry_ClassIcon_C::IconTint' has a wrong offset!");
static_assert(offsetof(UITM_SaveSlot_Entry_ClassIcon_C, PlayerCharacter) == 0x0002E8, "Member 'UITM_SaveSlot_Entry_ClassIcon_C::PlayerCharacter' has a wrong offset!");

}
