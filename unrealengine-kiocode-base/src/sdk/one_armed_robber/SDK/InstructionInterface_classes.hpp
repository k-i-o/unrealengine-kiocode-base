#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InstructionInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass InstructionInterface.InstructionInterface_C
// 0x0000 (0x0028 - 0x0028)
class IInstructionInterface_C final : public IInterface
{
public:
	void NewInstruction();
	void OverrideInstruction();
	void AnnounceNewInstructionWidget(const class FString& Title);
	void GetCurrentInstruction(struct FInstructionStruct* Instruction);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InstructionInterface_C">();
	}
	static class IInstructionInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInstructionInterface_C>();
	}
};
static_assert(alignof(IInstructionInterface_C) == 0x000008, "Wrong alignment on IInstructionInterface_C");
static_assert(sizeof(IInstructionInterface_C) == 0x000028, "Wrong size on IInstructionInterface_C");

}

