#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PK_Bubble

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "BFGCore_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PK_Bubble.BP_PK_Bubble_C
// 0x0120 (0x0568 - 0x0448)
class ABP_PK_Bubble_C final : public ABFGEffectActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Plane;                                             // 0x0458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D;                           // 0x0460(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0468(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MI_initializeMask;                                 // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              StepSize_initial;                                  // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              StepSize_current;                                  // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_B;                                             // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21D0[0x7];                                     // 0x0489(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MI_jumpFlood;                                      // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ParentObject;                                      // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Seam_width;                                        // 0x04A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21D1[0x4];                                     // 0x04A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MI_Render;                                         // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CamOffset;                                         // 0x04B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RT_Size;                                           // 0x04B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Iteration_number;                                  // 0x04B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Distance_normalization_factor;                     // 0x04BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Dyn_RT_A;                                          // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Dyn_RT_B;                                          // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OffsettedPlane_Size;                               // 0x04D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CamOffset_extra;                                   // 0x04D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CaptureFoV;                                        // 0x04D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Half_planeSize;                                    // 0x04DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Object_radius;                                     // 0x04E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Fading_IN;                                         // 0x04E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Active;                                            // 0x04E5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21D2[0x2];                                     // 0x04E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Current_blendValue;                                // 0x04E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21D3[0x4];                                     // 0x04EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APostProcessVolume*                     PP_volume;                                         // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Target_lightIntensity;                             // 0x04F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Spawn_speed;                                       // 0x04FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Dissolve_speed;                                    // 0x0500(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21D4[0x4];                                     // 0x0504(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBFGEffectBlackboard*                   PlayerBlackboard;                                  // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LastLootSlotName;                                  // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EffectWasDisabled;                                 // 0x0518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21D5[0x7];                                     // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 PsyAbilityClass;                                   // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ThrowMode_blendValue;                              // 0x0528(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Default_color;                                     // 0x052C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Charged_color;                                     // 0x053C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LightweightCameraSlotMask;                         // 0x054C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBFGMentalAbility_Psychokinesis*        PKAbility;                                         // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPrimitiveComponent*>            ParentObjects;                                     // 0x0558(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_PK_Bubble(int32 EntryPoint);
	void OnRetrieveFromPool(bool _bAutomaticallyReactivateComponents);
	void OnTriggerEffect();
	void OnStopEffect();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void BubbleChargeUpDsiplay(float TimeDelta);
	void InitializeSingleTexture(class UTextureRenderTarget2D* TextureToInit);
	void InitializeAllTextures();
	void DestroyEffect();
	void UpdatePlaneTransformAndSize();
	void UpdateFading(float TimeDelta);
	void AssignRenderTargetToPlaneMaterial();
	void CalculateIterationCount();
	void CreateRenderTargets();
	void InitLight();
	void InitSceneCapture();
	void InitRenderTargetSize();
	void InitializeLightweightPostProcess();
	void InitializeEffectTopLevel();
	void UpdateTopLevel(float TimeDelta);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PK_Bubble_C">();
	}
	static class ABP_PK_Bubble_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PK_Bubble_C>();
	}
};
static_assert(alignof(ABP_PK_Bubble_C) == 0x000008, "Wrong alignment on ABP_PK_Bubble_C");
static_assert(sizeof(ABP_PK_Bubble_C) == 0x000568, "Wrong size on ABP_PK_Bubble_C");
static_assert(offsetof(ABP_PK_Bubble_C, UberGraphFrame) == 0x000448, "Member 'ABP_PK_Bubble_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, PointLight) == 0x000450, "Member 'ABP_PK_Bubble_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, Plane) == 0x000458, "Member 'ABP_PK_Bubble_C::Plane' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, SceneCaptureComponent2D) == 0x000460, "Member 'ABP_PK_Bubble_C::SceneCaptureComponent2D' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, DefaultSceneRoot) == 0x000468, "Member 'ABP_PK_Bubble_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, MI_initializeMask) == 0x000470, "Member 'ABP_PK_Bubble_C::MI_initializeMask' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, StepSize_initial) == 0x000478, "Member 'ABP_PK_Bubble_C::StepSize_initial' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, StepSize_current) == 0x000480, "Member 'ABP_PK_Bubble_C::StepSize_current' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, Use_B) == 0x000488, "Member 'ABP_PK_Bubble_C::Use_B' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, MI_jumpFlood) == 0x000490, "Member 'ABP_PK_Bubble_C::MI_jumpFlood' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, ParentObject) == 0x000498, "Member 'ABP_PK_Bubble_C::ParentObject' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, Seam_width) == 0x0004A0, "Member 'ABP_PK_Bubble_C::Seam_width' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, MI_Render) == 0x0004A8, "Member 'ABP_PK_Bubble_C::MI_Render' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, CamOffset) == 0x0004B0, "Member 'ABP_PK_Bubble_C::CamOffset' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, RT_Size) == 0x0004B4, "Member 'ABP_PK_Bubble_C::RT_Size' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, Iteration_number) == 0x0004B8, "Member 'ABP_PK_Bubble_C::Iteration_number' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, Distance_normalization_factor) == 0x0004BC, "Member 'ABP_PK_Bubble_C::Distance_normalization_factor' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, Dyn_RT_A) == 0x0004C0, "Member 'ABP_PK_Bubble_C::Dyn_RT_A' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, Dyn_RT_B) == 0x0004C8, "Member 'ABP_PK_Bubble_C::Dyn_RT_B' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, OffsettedPlane_Size) == 0x0004D0, "Member 'ABP_PK_Bubble_C::OffsettedPlane_Size' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, CamOffset_extra) == 0x0004D4, "Member 'ABP_PK_Bubble_C::CamOffset_extra' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, CaptureFoV) == 0x0004D8, "Member 'ABP_PK_Bubble_C::CaptureFoV' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, Half_planeSize) == 0x0004DC, "Member 'ABP_PK_Bubble_C::Half_planeSize' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, Object_radius) == 0x0004E0, "Member 'ABP_PK_Bubble_C::Object_radius' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, Fading_IN) == 0x0004E4, "Member 'ABP_PK_Bubble_C::Fading_IN' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, Active) == 0x0004E5, "Member 'ABP_PK_Bubble_C::Active' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, Current_blendValue) == 0x0004E8, "Member 'ABP_PK_Bubble_C::Current_blendValue' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, PP_volume) == 0x0004F0, "Member 'ABP_PK_Bubble_C::PP_volume' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, Target_lightIntensity) == 0x0004F8, "Member 'ABP_PK_Bubble_C::Target_lightIntensity' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, Spawn_speed) == 0x0004FC, "Member 'ABP_PK_Bubble_C::Spawn_speed' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, Dissolve_speed) == 0x000500, "Member 'ABP_PK_Bubble_C::Dissolve_speed' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, PlayerBlackboard) == 0x000508, "Member 'ABP_PK_Bubble_C::PlayerBlackboard' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, LastLootSlotName) == 0x000510, "Member 'ABP_PK_Bubble_C::LastLootSlotName' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, EffectWasDisabled) == 0x000518, "Member 'ABP_PK_Bubble_C::EffectWasDisabled' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, PsyAbilityClass) == 0x000520, "Member 'ABP_PK_Bubble_C::PsyAbilityClass' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, ThrowMode_blendValue) == 0x000528, "Member 'ABP_PK_Bubble_C::ThrowMode_blendValue' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, Default_color) == 0x00052C, "Member 'ABP_PK_Bubble_C::Default_color' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, Charged_color) == 0x00053C, "Member 'ABP_PK_Bubble_C::Charged_color' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, LightweightCameraSlotMask) == 0x00054C, "Member 'ABP_PK_Bubble_C::LightweightCameraSlotMask' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, PKAbility) == 0x000550, "Member 'ABP_PK_Bubble_C::PKAbility' has a wrong offset!");
static_assert(offsetof(ABP_PK_Bubble_C, ParentObjects) == 0x000558, "Member 'ABP_PK_Bubble_C::ParentObjects' has a wrong offset!");

}

