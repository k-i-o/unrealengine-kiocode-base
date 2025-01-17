#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mask_Bucket

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mask_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Mask_Bucket.Mask_Bucket_C
// 0x0010 (0x0240 - 0x0230)
class AMask_Bucket_C final : public AMask_base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Mask_Bucket_Hank;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Mask_Bucket(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Mask_Bucket_C">();
	}
	static class AMask_Bucket_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMask_Bucket_C>();
	}
};
static_assert(alignof(AMask_Bucket_C) == 0x000008, "Wrong alignment on AMask_Bucket_C");
static_assert(sizeof(AMask_Bucket_C) == 0x000240, "Wrong size on AMask_Bucket_C");
static_assert(offsetof(AMask_Bucket_C, UberGraphFrame) == 0x000230, "Member 'AMask_Bucket_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMask_Bucket_C, Mask_Bucket_Hank) == 0x000238, "Member 'AMask_Bucket_C::Mask_Bucket_Hank' has a wrong offset!");

}

