#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EndScreenActorController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "EndScreenMove_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass EndScreenActorController.EndScreenActorController_C
// 0x00C0 (0x0170 - 0x00B0)
class UEndScreenActorController_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPlayerTPAnimInstance*                  AnimInstance;                                      // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WalkPlayRate;                                      // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3520[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MisComp_FXspawner_C*                FX;                                                // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          RandomStream;                                      // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	class UClass*                                 AttachmentClass;                                   // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 AttachmentActor;                                   // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PosePlayRate;                                      // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3521[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             SpawnTransfrom;                                    // 0x00F0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsLooping;                                         // 0x0120(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3522[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEndScreenMove                         ActiveMoveSet;                                     // 0x0128(0x0048)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EndScreenActorController(int32 EntryPoint);
	void OnCharacterDestroyed(class AActor* DestroyedActor);
	void CustomEvent_0(class UAnimMontage* Montage, bool bInterrupted);
	void PropPoseDone(class UAnimMontage* Montage, bool bInterrupted);
	void WalkFinished(class UAnimMontage* Montage, bool bInterrupted);
	void BreakFinished(class UAnimMontage* Montage, bool bInterrupted);
	void PoseFinished(class UAnimMontage* Montage, bool bInterrupted);
	void Play(class APlayerCharacter* PlayerCharacter, bool SurvivedInPod, const struct FTransform& SpawnTransform, const struct FEndScreenMove& ESMoveSet, int32 Seed);
	void ReceiveBeginPlay();
	void RandomAnimElement(TArray<class UAnimSequence*>& Array, class UAnimSequence** Output);
	void InitFXLights(const struct FTransform& SpawnTransform, bool Survived);
	void Cleanup();
	void SpawnAttachmentIfNeeded();
	void Reset();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EndScreenActorController_C">();
	}
	static class UEndScreenActorController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEndScreenActorController_C>();
	}
};
static_assert(alignof(UEndScreenActorController_C) == 0x000010, "Wrong alignment on UEndScreenActorController_C");
static_assert(sizeof(UEndScreenActorController_C) == 0x000170, "Wrong size on UEndScreenActorController_C");
static_assert(offsetof(UEndScreenActorController_C, UberGraphFrame) == 0x0000B0, "Member 'UEndScreenActorController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEndScreenActorController_C, AnimInstance) == 0x0000B8, "Member 'UEndScreenActorController_C::AnimInstance' has a wrong offset!");
static_assert(offsetof(UEndScreenActorController_C, WalkPlayRate) == 0x0000C0, "Member 'UEndScreenActorController_C::WalkPlayRate' has a wrong offset!");
static_assert(offsetof(UEndScreenActorController_C, FX) == 0x0000C8, "Member 'UEndScreenActorController_C::FX' has a wrong offset!");
static_assert(offsetof(UEndScreenActorController_C, RandomStream) == 0x0000D0, "Member 'UEndScreenActorController_C::RandomStream' has a wrong offset!");
static_assert(offsetof(UEndScreenActorController_C, AttachmentClass) == 0x0000D8, "Member 'UEndScreenActorController_C::AttachmentClass' has a wrong offset!");
static_assert(offsetof(UEndScreenActorController_C, AttachmentActor) == 0x0000E0, "Member 'UEndScreenActorController_C::AttachmentActor' has a wrong offset!");
static_assert(offsetof(UEndScreenActorController_C, PosePlayRate) == 0x0000E8, "Member 'UEndScreenActorController_C::PosePlayRate' has a wrong offset!");
static_assert(offsetof(UEndScreenActorController_C, SpawnTransfrom) == 0x0000F0, "Member 'UEndScreenActorController_C::SpawnTransfrom' has a wrong offset!");
static_assert(offsetof(UEndScreenActorController_C, IsLooping) == 0x000120, "Member 'UEndScreenActorController_C::IsLooping' has a wrong offset!");
static_assert(offsetof(UEndScreenActorController_C, ActiveMoveSet) == 0x000128, "Member 'UEndScreenActorController_C::ActiveMoveSet' has a wrong offset!");

}
