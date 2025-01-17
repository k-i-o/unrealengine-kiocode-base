#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DialogueManagerBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DialogueManagerBP.DialogueManagerBP_C
// 0x0058 (0x02E8 - 0x0290)
class ADialogueManagerBP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDialogueWidget_C*                      Dialogue;                                          // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 DialogueText;                                      // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	double                                        TextDisplaySpeed;                                  // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TimeBetweenSentences;                              // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AutoAdvance;                                       // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25AC[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterial*>                      Gif;                                               // 0x02D0(0x0010)(Edit, BlueprintVisible)
	bool                                          Text_Centered;                                     // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Show_Gif;                                          // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DialogueManagerBP(int32 EntryPoint);
	void HideDialogue();
	void Parse_String(const class FString& String, TArray<class FString>* Parsed_Strings1);
	void ParseHighlight(const class FString& In, class FString* Out);
	void ReceiveBeginPlay();
	void Show_Ananas_Alt_Gif();
	void Show_Ananas_Gif();
	void Show_Cauldron_Gif();
	void Show_Dialogue();
	void Show_Monk_Gif();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DialogueManagerBP_C">();
	}
	static class ADialogueManagerBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADialogueManagerBP_C>();
	}
};
static_assert(alignof(ADialogueManagerBP_C) == 0x000008, "Wrong alignment on ADialogueManagerBP_C");
static_assert(sizeof(ADialogueManagerBP_C) == 0x0002E8, "Wrong size on ADialogueManagerBP_C");
static_assert(offsetof(ADialogueManagerBP_C, UberGraphFrame) == 0x000290, "Member 'ADialogueManagerBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADialogueManagerBP_C, DefaultSceneRoot) == 0x000298, "Member 'ADialogueManagerBP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ADialogueManagerBP_C, Dialogue) == 0x0002A0, "Member 'ADialogueManagerBP_C::Dialogue' has a wrong offset!");
static_assert(offsetof(ADialogueManagerBP_C, DialogueText) == 0x0002A8, "Member 'ADialogueManagerBP_C::DialogueText' has a wrong offset!");
static_assert(offsetof(ADialogueManagerBP_C, TextDisplaySpeed) == 0x0002B8, "Member 'ADialogueManagerBP_C::TextDisplaySpeed' has a wrong offset!");
static_assert(offsetof(ADialogueManagerBP_C, TimeBetweenSentences) == 0x0002C0, "Member 'ADialogueManagerBP_C::TimeBetweenSentences' has a wrong offset!");
static_assert(offsetof(ADialogueManagerBP_C, AutoAdvance) == 0x0002C8, "Member 'ADialogueManagerBP_C::AutoAdvance' has a wrong offset!");
static_assert(offsetof(ADialogueManagerBP_C, Gif) == 0x0002D0, "Member 'ADialogueManagerBP_C::Gif' has a wrong offset!");
static_assert(offsetof(ADialogueManagerBP_C, Text_Centered) == 0x0002E0, "Member 'ADialogueManagerBP_C::Text_Centered' has a wrong offset!");
static_assert(offsetof(ADialogueManagerBP_C, Show_Gif) == 0x0002E1, "Member 'ADialogueManagerBP_C::Show_Gif' has a wrong offset!");

}

