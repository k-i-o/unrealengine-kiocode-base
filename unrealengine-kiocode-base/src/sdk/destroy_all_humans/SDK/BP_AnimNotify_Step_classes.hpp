#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimNotify_Step

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// DynamicClass BP_AnimNotify_Step.BP_AnimNotify_Step_C
// 0x0090 (0x00C8 - 0x0038)
class UBP_AnimNotify_Step_C : public UAnimNotify
{
public:
	class FName                                   Bone;                                              // 0x0038(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsLeftStep;                                       // 0x0040(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2057[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Decal_ROTATION_Offset;                             // 0x0044(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Decal_Position_Offset;                             // 0x0050(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PFX_Position_Offset;                               // 0x005C(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               PFX_ROTATION_Offset;                               // 0x0068(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_2058[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FRotator>            MAP_Bones_Rotation;                                // 0x0078(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	void GetBFGEffectActor(class USkeletalMeshComponent* bpp__MeshComp__pf, class UBFGActorComponent_Effect** bpp__BFGEffectComp__pf, class UBFGEffectBlackboard** bpp__BlackBoard__pf) const;
	void New_CheckWalkOnPhysicsObject(class USkeletalMeshComponent* bpp__MeshComp__pf, bool* bpp__WakOnPhysics__pf, int32* bpp__Surface__pf) const;
	bool Received_Notify(class USkeletalMeshComponent* bpp__MeshComp__pf, class UAnimSequenceBase* bpp__Animation__pf) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BP_AnimNotify_Step_C">();
	}
	static class UBP_AnimNotify_Step_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AnimNotify_Step_C>();
	}
};
static_assert(alignof(UBP_AnimNotify_Step_C) == 0x000008, "Wrong alignment on UBP_AnimNotify_Step_C");
static_assert(sizeof(UBP_AnimNotify_Step_C) == 0x0000C8, "Wrong size on UBP_AnimNotify_Step_C");
static_assert(offsetof(UBP_AnimNotify_Step_C, Bone) == 0x000038, "Member 'UBP_AnimNotify_Step_C::Bone' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_Step_C, bIsLeftStep) == 0x000040, "Member 'UBP_AnimNotify_Step_C::bIsLeftStep' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_Step_C, Decal_ROTATION_Offset) == 0x000044, "Member 'UBP_AnimNotify_Step_C::Decal_ROTATION_Offset' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_Step_C, Decal_Position_Offset) == 0x000050, "Member 'UBP_AnimNotify_Step_C::Decal_Position_Offset' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_Step_C, PFX_Position_Offset) == 0x00005C, "Member 'UBP_AnimNotify_Step_C::PFX_Position_Offset' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_Step_C, PFX_ROTATION_Offset) == 0x000068, "Member 'UBP_AnimNotify_Step_C::PFX_ROTATION_Offset' has a wrong offset!");
static_assert(offsetof(UBP_AnimNotify_Step_C, MAP_Bones_Rotation) == 0x000078, "Member 'UBP_AnimNotify_Step_C::MAP_Bones_Rotation' has a wrong offset!");

}

