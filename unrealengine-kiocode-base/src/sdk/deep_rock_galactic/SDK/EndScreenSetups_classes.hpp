#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EndScreenSetups

#include "Basic.hpp"

#include "EndScreenMoveSet_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EndScreenSetups.EndScreenSetups_C
// 0x0048 (0x00F8 - 0x00B0)
class UEndScreenSetups_C final : public UActorComponent
{
public:
	TArray<struct FEndScreenMoveSet>              VictorySets;                                       // 0x00B0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FEndScreenMoveSet>              DefeatSets;                                        // 0x00C0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FEndScreenMoveSet>              AvailableVictorySets;                              // 0x00D0(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	TArray<struct FEndScreenMoveSet>              AvailableDefeatSets;                               // 0x00E0(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FRandomStream                          RandStream;                                        // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)

public:
	void RandomAnimElement(TArray<class UAnimSequence*>& Array, class UAnimSequence** Output);
	void GetEndScreenMoveSet(bool Survived, class UVictoryPose* VictPose, struct FRandomStream& Param_RandStream, struct FEndScreenMove* Selected);
	void RandomWeightedMoveSet(TArray<struct FEndScreenMoveSet>& Array, struct FEndScreenMove* Selected);
	void ResetMovesets(int32 NewSeed);
	void SplitMoveSetAnims(const TArray<TSoftObjectPtr<class UAnimSequence>>& TargetArray, class UAnimSequence** Selected1, TArray<TSoftObjectPtr<class UAnimSequence>>* Rest1);
	void LoadAnimSeq(TSoftObjectPtr<class UAnimSequence> Soft, class UAnimSequence** Hard);
	void LoadAnimSeqArray(TArray<TSoftObjectPtr<class UAnimSequence>>& Soft, TArray<class UAnimSequence*>* Hard);
	void LoadActorClass(TSoftClassPtr<class UClass> Soft, class UClass** Hard);
	void LoadVictoryAnims(class UVictoryPose* InputPin, struct FRandomStream& Param_RandStream, struct FEndScreenMove* EndScreenMove);
	void GetRandomWalkAnim(class UVictoryPose* VicPose, struct FRandomStream& Param_RandStream, TSoftObjectPtr<class UAnimSequence>* Walk);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EndScreenSetups_C">();
	}
	static class UEndScreenSetups_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEndScreenSetups_C>();
	}
};
static_assert(alignof(UEndScreenSetups_C) == 0x000008, "Wrong alignment on UEndScreenSetups_C");
static_assert(sizeof(UEndScreenSetups_C) == 0x0000F8, "Wrong size on UEndScreenSetups_C");
static_assert(offsetof(UEndScreenSetups_C, VictorySets) == 0x0000B0, "Member 'UEndScreenSetups_C::VictorySets' has a wrong offset!");
static_assert(offsetof(UEndScreenSetups_C, DefeatSets) == 0x0000C0, "Member 'UEndScreenSetups_C::DefeatSets' has a wrong offset!");
static_assert(offsetof(UEndScreenSetups_C, AvailableVictorySets) == 0x0000D0, "Member 'UEndScreenSetups_C::AvailableVictorySets' has a wrong offset!");
static_assert(offsetof(UEndScreenSetups_C, AvailableDefeatSets) == 0x0000E0, "Member 'UEndScreenSetups_C::AvailableDefeatSets' has a wrong offset!");
static_assert(offsetof(UEndScreenSetups_C, RandStream) == 0x0000F0, "Member 'UEndScreenSetups_C::RandStream' has a wrong offset!");

}
