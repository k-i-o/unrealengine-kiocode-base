#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FieldSystemEngine

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class FieldSystemEngine.FieldSystemActor
// 0x0008 (0x03E0 - 0x03D8)
class AFieldSystemActor final : public AActor
{
public:
	class UFieldSystemComponent*                  FieldSystemComponent;                              // 0x03D8(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FieldSystemActor">();
	}
	static class AFieldSystemActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFieldSystemActor>();
	}
};
static_assert(alignof(AFieldSystemActor) == 0x000008, "Wrong alignment on AFieldSystemActor");
static_assert(sizeof(AFieldSystemActor) == 0x0003E0, "Wrong size on AFieldSystemActor");
static_assert(offsetof(AFieldSystemActor, FieldSystemComponent) == 0x0003D8, "Member 'AFieldSystemActor::FieldSystemComponent' has a wrong offset!");

// Class FieldSystemEngine.FieldSystemComponent
// 0x0018 (0x0680 - 0x0668)
class UFieldSystemComponent final : public UPrimitiveComponent
{
public:
	class UFieldSystem*                           FieldSystem;                                       // 0x0668(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2005[0x10];                                    // 0x0670(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude);
	void ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude);
	void ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude);
	void ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius, int32 MaxLevelPerCommand);
	void ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FieldSystemComponent">();
	}
	static class UFieldSystemComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFieldSystemComponent>();
	}
};
static_assert(alignof(UFieldSystemComponent) == 0x000008, "Wrong alignment on UFieldSystemComponent");
static_assert(sizeof(UFieldSystemComponent) == 0x000680, "Wrong size on UFieldSystemComponent");
static_assert(offsetof(UFieldSystemComponent, FieldSystem) == 0x000668, "Member 'UFieldSystemComponent::FieldSystem' has a wrong offset!");

}

