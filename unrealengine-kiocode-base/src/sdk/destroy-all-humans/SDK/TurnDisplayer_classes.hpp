#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TurnDisplayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TurnDisplayer.TurnDisplayer_C
// 0x0048 (0x02C8 - 0x0280)
class UTurnDisplayer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AllyTurn;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       EnemyTurn;                                         // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           AlliedTurn;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           AllyImage;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           EnemyImage;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           EnemyTurnIcon;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_64;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_TurnDisplayer(int32 EntryPoint);
	void StartEnemyTurn();
	void StartPlayerTurn();
	void TranslateThis();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TurnDisplayer_C">();
	}
	static class UTurnDisplayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTurnDisplayer_C>();
	}
};
static_assert(alignof(UTurnDisplayer_C) == 0x000008, "Wrong alignment on UTurnDisplayer_C");
static_assert(sizeof(UTurnDisplayer_C) == 0x0002C8, "Wrong size on UTurnDisplayer_C");
static_assert(offsetof(UTurnDisplayer_C, UberGraphFrame) == 0x000280, "Member 'UTurnDisplayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTurnDisplayer_C, AllyTurn) == 0x000288, "Member 'UTurnDisplayer_C::AllyTurn' has a wrong offset!");
static_assert(offsetof(UTurnDisplayer_C, EnemyTurn) == 0x000290, "Member 'UTurnDisplayer_C::EnemyTurn' has a wrong offset!");
static_assert(offsetof(UTurnDisplayer_C, AlliedTurn) == 0x000298, "Member 'UTurnDisplayer_C::AlliedTurn' has a wrong offset!");
static_assert(offsetof(UTurnDisplayer_C, AllyImage) == 0x0002A0, "Member 'UTurnDisplayer_C::AllyImage' has a wrong offset!");
static_assert(offsetof(UTurnDisplayer_C, EnemyImage) == 0x0002A8, "Member 'UTurnDisplayer_C::EnemyImage' has a wrong offset!");
static_assert(offsetof(UTurnDisplayer_C, EnemyTurnIcon) == 0x0002B0, "Member 'UTurnDisplayer_C::EnemyTurnIcon' has a wrong offset!");
static_assert(offsetof(UTurnDisplayer_C, TextBlock) == 0x0002B8, "Member 'UTurnDisplayer_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UTurnDisplayer_C, TextBlock_64) == 0x0002C0, "Member 'UTurnDisplayer_C::TextBlock_64' has a wrong offset!");

}
