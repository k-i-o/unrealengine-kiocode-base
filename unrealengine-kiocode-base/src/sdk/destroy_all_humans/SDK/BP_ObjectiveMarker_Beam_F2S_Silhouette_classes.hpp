#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ObjectiveMarker_Beam_F2S_Silhouette

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BFGCore_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ObjectiveMarker_Beam_F2S_Silhouette.BP_ObjectiveMarker_Beam_F2S_Silhouette_C
// 0x0078 (0x04F0 - 0x0478)
class ABP_ObjectiveMarker_Beam_F2S_Silhouette_C final : public ABFGObjectiveMarker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0478(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               PFX_Beam_QuestMarker_01;                           // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Fade_OUT_2_fade_OUT_A12EA90C41BC5A0973D06E84BF5FB346; // 0x0488(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Fade_OUT_2__Direction_A12EA90C41BC5A0973D06E84BF5FB346; // 0x048C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22EA[0x3];                                     // 0x048D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Fade_OUT_2;                                        // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fade_OUT_fade_OUT_DEBABA364798AEFD12F3C295C5397457; // 0x0498(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Fade_OUT__Direction_DEBABA364798AEFD12F3C295C5397457; // 0x049C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22EB[0x3];                                     // 0x049D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Fade_OUT;                                          // 0x04A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fade_IN_fade_IN_FD3BDF564396A07ADB68BC96CC9F2719;  // 0x04A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Fade_IN__Direction_FD3BDF564396A07ADB68BC96CC9F2719; // 0x04AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22EC[0x3];                                     // 0x04AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Fade_IN;                                           // 0x04B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Marker_Text;                                       // 0x04B8(0x0018)(Edit, BlueprintVisible)
	bool                                          IsVisible;                                         // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22ED[0x3];                                     // 0x04D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         UpdateCurrentDeltaTSeconds;                        // 0x04D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UpdateFrequencySeconds;                            // 0x04D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22EE[0x4];                                     // 0x04DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Dyn_beam_material;                                 // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Silhouette_Fade_Start;                             // 0x04E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Silhouette_Fade_End;                               // 0x04EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S_Silhouette(int32 EntryPoint);
	void HideMarker();
	void RequestRemoveMarker();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ShowMarker();
	void Fade_OUT_2__UpdateFunc();
	void Fade_OUT_2__FinishedFunc();
	void Fade_OUT__UpdateFunc();
	void Fade_OUT__FinishedFunc();
	void Fade_IN__UpdateFunc();
	void Fade_IN__FinishedFunc();
	void UserConstructionScript();
	void Debug_ShoudShowBeams(bool* ShowBeams);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ObjectiveMarker_Beam_F2S_Silhouette_C">();
	}
	static class ABP_ObjectiveMarker_Beam_F2S_Silhouette_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ObjectiveMarker_Beam_F2S_Silhouette_C>();
	}
};
static_assert(alignof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C) == 0x000008, "Wrong alignment on ABP_ObjectiveMarker_Beam_F2S_Silhouette_C");
static_assert(sizeof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C) == 0x0004F0, "Wrong size on ABP_ObjectiveMarker_Beam_F2S_Silhouette_C");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C, UberGraphFrame) == 0x000478, "Member 'ABP_ObjectiveMarker_Beam_F2S_Silhouette_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C, PFX_Beam_QuestMarker_01) == 0x000480, "Member 'ABP_ObjectiveMarker_Beam_F2S_Silhouette_C::PFX_Beam_QuestMarker_01' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C, Fade_OUT_2_fade_OUT_A12EA90C41BC5A0973D06E84BF5FB346) == 0x000488, "Member 'ABP_ObjectiveMarker_Beam_F2S_Silhouette_C::Fade_OUT_2_fade_OUT_A12EA90C41BC5A0973D06E84BF5FB346' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C, Fade_OUT_2__Direction_A12EA90C41BC5A0973D06E84BF5FB346) == 0x00048C, "Member 'ABP_ObjectiveMarker_Beam_F2S_Silhouette_C::Fade_OUT_2__Direction_A12EA90C41BC5A0973D06E84BF5FB346' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C, Fade_OUT_2) == 0x000490, "Member 'ABP_ObjectiveMarker_Beam_F2S_Silhouette_C::Fade_OUT_2' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C, Fade_OUT_fade_OUT_DEBABA364798AEFD12F3C295C5397457) == 0x000498, "Member 'ABP_ObjectiveMarker_Beam_F2S_Silhouette_C::Fade_OUT_fade_OUT_DEBABA364798AEFD12F3C295C5397457' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C, Fade_OUT__Direction_DEBABA364798AEFD12F3C295C5397457) == 0x00049C, "Member 'ABP_ObjectiveMarker_Beam_F2S_Silhouette_C::Fade_OUT__Direction_DEBABA364798AEFD12F3C295C5397457' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C, Fade_OUT) == 0x0004A0, "Member 'ABP_ObjectiveMarker_Beam_F2S_Silhouette_C::Fade_OUT' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C, Fade_IN_fade_IN_FD3BDF564396A07ADB68BC96CC9F2719) == 0x0004A8, "Member 'ABP_ObjectiveMarker_Beam_F2S_Silhouette_C::Fade_IN_fade_IN_FD3BDF564396A07ADB68BC96CC9F2719' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C, Fade_IN__Direction_FD3BDF564396A07ADB68BC96CC9F2719) == 0x0004AC, "Member 'ABP_ObjectiveMarker_Beam_F2S_Silhouette_C::Fade_IN__Direction_FD3BDF564396A07ADB68BC96CC9F2719' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C, Fade_IN) == 0x0004B0, "Member 'ABP_ObjectiveMarker_Beam_F2S_Silhouette_C::Fade_IN' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C, Marker_Text) == 0x0004B8, "Member 'ABP_ObjectiveMarker_Beam_F2S_Silhouette_C::Marker_Text' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C, IsVisible) == 0x0004D0, "Member 'ABP_ObjectiveMarker_Beam_F2S_Silhouette_C::IsVisible' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C, UpdateCurrentDeltaTSeconds) == 0x0004D4, "Member 'ABP_ObjectiveMarker_Beam_F2S_Silhouette_C::UpdateCurrentDeltaTSeconds' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C, UpdateFrequencySeconds) == 0x0004D8, "Member 'ABP_ObjectiveMarker_Beam_F2S_Silhouette_C::UpdateFrequencySeconds' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C, Dyn_beam_material) == 0x0004E0, "Member 'ABP_ObjectiveMarker_Beam_F2S_Silhouette_C::Dyn_beam_material' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C, Silhouette_Fade_Start) == 0x0004E8, "Member 'ABP_ObjectiveMarker_Beam_F2S_Silhouette_C::Silhouette_Fade_Start' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_Silhouette_C, Silhouette_Fade_End) == 0x0004EC, "Member 'ABP_ObjectiveMarker_Beam_F2S_Silhouette_C::Silhouette_Fade_End' has a wrong offset!");

}
