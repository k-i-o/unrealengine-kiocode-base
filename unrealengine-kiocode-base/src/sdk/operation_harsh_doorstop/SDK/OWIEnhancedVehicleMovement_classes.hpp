#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OWIEnhancedVehicleMovement

#include "Basic.hpp"

#include "PhysXVehicles_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "OWIEnhancedVehicleMovement_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Class OWIEnhancedVehicleMovement.VehicleMovementNWheeledVehicle
// 0x0000 (0x0290 - 0x0290)
class AVehicleMovementNWheeledVehicle final : public AWheeledVehicle
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VehicleMovementNWheeledVehicle">();
	}
	static class AVehicleMovementNWheeledVehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVehicleMovementNWheeledVehicle>();
	}
};
static_assert(alignof(AVehicleMovementNWheeledVehicle) == 0x000008, "Wrong alignment on AVehicleMovementNWheeledVehicle");
static_assert(sizeof(AVehicleMovementNWheeledVehicle) == 0x000290, "Wrong size on AVehicleMovementNWheeledVehicle");

// Class OWIEnhancedVehicleMovement.VehicleMovementTankVehicle
// 0x0000 (0x0290 - 0x0290)
class AVehicleMovementTankVehicle final : public AWheeledVehicle
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VehicleMovementTankVehicle">();
	}
	static class AVehicleMovementTankVehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVehicleMovementTankVehicle>();
	}
};
static_assert(alignof(AVehicleMovementTankVehicle) == 0x000008, "Wrong alignment on AVehicleMovementTankVehicle");
static_assert(sizeof(AVehicleMovementTankVehicle) == 0x000290, "Wrong size on AVehicleMovementTankVehicle");

// Class OWIEnhancedVehicleMovement.VehicleMovementWheelTracked
// 0x0010 (0x0100 - 0x00F0)
class UVehicleMovementWheelTracked final : public UVehicleWheel
{
public:
	struct FVector                                SuspensionDirection;                               // 0x00F0(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12D1[0x4];                                     // 0x00FC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VehicleMovementWheelTracked">();
	}
	static class UVehicleMovementWheelTracked* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVehicleMovementWheelTracked>();
	}
};
static_assert(alignof(UVehicleMovementWheelTracked) == 0x000008, "Wrong alignment on UVehicleMovementWheelTracked");
static_assert(sizeof(UVehicleMovementWheelTracked) == 0x000100, "Wrong size on UVehicleMovementWheelTracked");
static_assert(offsetof(UVehicleMovementWheelTracked, SuspensionDirection) == 0x0000F0, "Member 'UVehicleMovementWheelTracked::SuspensionDirection' has a wrong offset!");

// Class OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentNW
// 0x0178 (0x0408 - 0x0290)
class UWheeledVehicleMovementComponentNW final : public UWheeledVehicleMovementComponent
{
public:
	struct FVehicleNWEngineData                   EngineSetup;                                       // 0x0290(0x00A0)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FVehicleNWWheelDifferentialData> DifferentialSetup;                                 // 0x0330(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVehicleNWTransmissionData             TransmissionSetup;                                 // 0x0340(0x0040)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     SteeringCurve;                                     // 0x0380(0x0088)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WheeledVehicleMovementComponentNW">();
	}
	static class UWheeledVehicleMovementComponentNW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWheeledVehicleMovementComponentNW>();
	}
};
static_assert(alignof(UWheeledVehicleMovementComponentNW) == 0x000008, "Wrong alignment on UWheeledVehicleMovementComponentNW");
static_assert(sizeof(UWheeledVehicleMovementComponentNW) == 0x000408, "Wrong size on UWheeledVehicleMovementComponentNW");
static_assert(offsetof(UWheeledVehicleMovementComponentNW, EngineSetup) == 0x000290, "Member 'UWheeledVehicleMovementComponentNW::EngineSetup' has a wrong offset!");
static_assert(offsetof(UWheeledVehicleMovementComponentNW, DifferentialSetup) == 0x000330, "Member 'UWheeledVehicleMovementComponentNW::DifferentialSetup' has a wrong offset!");
static_assert(offsetof(UWheeledVehicleMovementComponentNW, TransmissionSetup) == 0x000340, "Member 'UWheeledVehicleMovementComponentNW::TransmissionSetup' has a wrong offset!");
static_assert(offsetof(UWheeledVehicleMovementComponentNW, SteeringCurve) == 0x000380, "Member 'UWheeledVehicleMovementComponentNW::SteeringCurve' has a wrong offset!");

// Class OWIEnhancedVehicleMovement.WheeledVehicleMovementComponentTank
// 0x0128 (0x03B8 - 0x0290)
class UWheeledVehicleMovementComponentTank final : public UWheeledVehicleMovementComponent
{
public:
	struct FVehicleTankEngineData                 EngineSetup;                                       // 0x0290(0x00A0)(Edit, NativeAccessSpecifierPublic)
	struct FVehicleTankTransmissionData           TransmissionSetup;                                 // 0x0330(0x0040)(Edit, NativeAccessSpecifierPublic)
	float                                         RawBothTracksThrottleInput;                        // 0x0370(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         RawLeftTrackThrottleInput;                         // 0x0374(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         RawRightTrackThrottleInput;                        // 0x0378(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         BothTracksThrottleInput;                           // 0x037C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         LeftTrackThrottleInput;                            // 0x0380(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         RightTrackThrottleInput;                           // 0x0384(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<float>                                 WheelSpeeds;                                       // 0x0388(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<float>                                 WheelAngles;                                       // 0x0398(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         LeftTrackSpeed;                                    // 0x03A8(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         RightTrackSpeed;                                   // 0x03AC(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_12D2[0x8];                                     // 0x03B0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetBothTracksThrottleInput(float InThrottle);
	void SetLeftTrackThrottleInput(float InThrottle);
	void SetRightTrackThrottleInput(float InThrottle);

	float GetLeftTrackSpeed() const;
	float GetRightTrackSpeed() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WheeledVehicleMovementComponentTank">();
	}
	static class UWheeledVehicleMovementComponentTank* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWheeledVehicleMovementComponentTank>();
	}
};
static_assert(alignof(UWheeledVehicleMovementComponentTank) == 0x000008, "Wrong alignment on UWheeledVehicleMovementComponentTank");
static_assert(sizeof(UWheeledVehicleMovementComponentTank) == 0x0003B8, "Wrong size on UWheeledVehicleMovementComponentTank");
static_assert(offsetof(UWheeledVehicleMovementComponentTank, EngineSetup) == 0x000290, "Member 'UWheeledVehicleMovementComponentTank::EngineSetup' has a wrong offset!");
static_assert(offsetof(UWheeledVehicleMovementComponentTank, TransmissionSetup) == 0x000330, "Member 'UWheeledVehicleMovementComponentTank::TransmissionSetup' has a wrong offset!");
static_assert(offsetof(UWheeledVehicleMovementComponentTank, RawBothTracksThrottleInput) == 0x000370, "Member 'UWheeledVehicleMovementComponentTank::RawBothTracksThrottleInput' has a wrong offset!");
static_assert(offsetof(UWheeledVehicleMovementComponentTank, RawLeftTrackThrottleInput) == 0x000374, "Member 'UWheeledVehicleMovementComponentTank::RawLeftTrackThrottleInput' has a wrong offset!");
static_assert(offsetof(UWheeledVehicleMovementComponentTank, RawRightTrackThrottleInput) == 0x000378, "Member 'UWheeledVehicleMovementComponentTank::RawRightTrackThrottleInput' has a wrong offset!");
static_assert(offsetof(UWheeledVehicleMovementComponentTank, BothTracksThrottleInput) == 0x00037C, "Member 'UWheeledVehicleMovementComponentTank::BothTracksThrottleInput' has a wrong offset!");
static_assert(offsetof(UWheeledVehicleMovementComponentTank, LeftTrackThrottleInput) == 0x000380, "Member 'UWheeledVehicleMovementComponentTank::LeftTrackThrottleInput' has a wrong offset!");
static_assert(offsetof(UWheeledVehicleMovementComponentTank, RightTrackThrottleInput) == 0x000384, "Member 'UWheeledVehicleMovementComponentTank::RightTrackThrottleInput' has a wrong offset!");
static_assert(offsetof(UWheeledVehicleMovementComponentTank, WheelSpeeds) == 0x000388, "Member 'UWheeledVehicleMovementComponentTank::WheelSpeeds' has a wrong offset!");
static_assert(offsetof(UWheeledVehicleMovementComponentTank, WheelAngles) == 0x000398, "Member 'UWheeledVehicleMovementComponentTank::WheelAngles' has a wrong offset!");
static_assert(offsetof(UWheeledVehicleMovementComponentTank, LeftTrackSpeed) == 0x0003A8, "Member 'UWheeledVehicleMovementComponentTank::LeftTrackSpeed' has a wrong offset!");
static_assert(offsetof(UWheeledVehicleMovementComponentTank, RightTrackSpeed) == 0x0003AC, "Member 'UWheeledVehicleMovementComponentTank::RightTrackSpeed' has a wrong offset!");

}
