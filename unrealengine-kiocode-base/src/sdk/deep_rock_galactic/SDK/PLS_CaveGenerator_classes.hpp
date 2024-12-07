#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PLS_CaveGenerator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PLS_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PLS_CaveGenerator.PLS_CaveGenerator_C
// 0x0008 (0x0500 - 0x04F8)
class APLS_CaveGenerator_C final : public APLS_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_PLS_CaveGenerator_C;                // 0x04F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_PLS_CaveGenerator(int32 EntryPoint);
	void CreateSpawn();
	void CreateCaveGraph();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PLS_CaveGenerator_C">();
	}
	static class APLS_CaveGenerator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APLS_CaveGenerator_C>();
	}
};
static_assert(alignof(APLS_CaveGenerator_C) == 0x000008, "Wrong alignment on APLS_CaveGenerator_C");
static_assert(sizeof(APLS_CaveGenerator_C) == 0x000500, "Wrong size on APLS_CaveGenerator_C");
static_assert(offsetof(APLS_CaveGenerator_C, UberGraphFrame_PLS_CaveGenerator_C) == 0x0004F8, "Member 'APLS_CaveGenerator_C::UberGraphFrame_PLS_CaveGenerator_C' has a wrong offset!");

}

