#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_JumpBoots

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FSD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_JumpBoots.BP_JumpBoots_C
// 0x0008 (0x0038 - 0x0030)
class UBP_JumpBoots_C final : public USetCooldownPerkActivation
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_JumpBoots(int32 EntryPoint);
	void Receive_ActivatePerk(class APlayerCharacter* Character, float Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_JumpBoots_C">();
	}
	static class UBP_JumpBoots_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_JumpBoots_C>();
	}
};
static_assert(alignof(UBP_JumpBoots_C) == 0x000008, "Wrong alignment on UBP_JumpBoots_C");
static_assert(sizeof(UBP_JumpBoots_C) == 0x000038, "Wrong size on UBP_JumpBoots_C");
static_assert(offsetof(UBP_JumpBoots_C, UberGraphFrame) == 0x000030, "Member 'UBP_JumpBoots_C::UberGraphFrame' has a wrong offset!");

}

