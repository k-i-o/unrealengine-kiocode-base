#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ObjectiveMarker_Beam_F2S_SideQuest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BFGCore_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ObjectiveMarker_Beam_F2S_SideQuest.BP_ObjectiveMarker_Beam_F2S_SideQuest_C
// 0x0070 (0x04E8 - 0x0478)
class ABP_ObjectiveMarker_Beam_F2S_SideQuest_C final : public ABFGObjectiveMarker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0478(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               PFX_Beam_QuestMarker_01;                           // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Fade_OUT_2_fade_OUT_B56D690B4EF61F14139F60A5961FB577; // 0x0488(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Fade_OUT_2__Direction_B56D690B4EF61F14139F60A5961FB577; // 0x048C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22D4[0x3];                                     // 0x048D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Fade_OUT_2;                                        // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fade_OUT_fade_OUT_4B9F5F6246CAC7BBCD424CA9D817E580; // 0x0498(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Fade_OUT__Direction_4B9F5F6246CAC7BBCD424CA9D817E580; // 0x049C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22D5[0x3];                                     // 0x049D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Fade_OUT;                                          // 0x04A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fade_IN_fade_IN_1A26C4074812CE5625C70F94E24DD75A;  // 0x04A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Fade_IN__Direction_1A26C4074812CE5625C70F94E24DD75A; // 0x04AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22D6[0x3];                                     // 0x04AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Fade_IN;                                           // 0x04B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Marker_Text;                                       // 0x04B8(0x0018)(Edit, BlueprintVisible)
	bool                                          IsVisible;                                         // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22D7[0x3];                                     // 0x04D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         UpdateCurrentDeltaTSeconds;                        // 0x04D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UpdateFrequencySeconds;                            // 0x04D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22D8[0x4];                                     // 0x04DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Dyn_beam_material;                                 // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ObjectiveMarker_Beam_F2S_SideQuest(int32 EntryPoint);
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
		return StaticBPGeneratedClassImpl<"BP_ObjectiveMarker_Beam_F2S_SideQuest_C">();
	}
	static class ABP_ObjectiveMarker_Beam_F2S_SideQuest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ObjectiveMarker_Beam_F2S_SideQuest_C>();
	}
};
static_assert(alignof(ABP_ObjectiveMarker_Beam_F2S_SideQuest_C) == 0x000008, "Wrong alignment on ABP_ObjectiveMarker_Beam_F2S_SideQuest_C");
static_assert(sizeof(ABP_ObjectiveMarker_Beam_F2S_SideQuest_C) == 0x0004E8, "Wrong size on ABP_ObjectiveMarker_Beam_F2S_SideQuest_C");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_SideQuest_C, UberGraphFrame) == 0x000478, "Member 'ABP_ObjectiveMarker_Beam_F2S_SideQuest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_SideQuest_C, PFX_Beam_QuestMarker_01) == 0x000480, "Member 'ABP_ObjectiveMarker_Beam_F2S_SideQuest_C::PFX_Beam_QuestMarker_01' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_SideQuest_C, Fade_OUT_2_fade_OUT_B56D690B4EF61F14139F60A5961FB577) == 0x000488, "Member 'ABP_ObjectiveMarker_Beam_F2S_SideQuest_C::Fade_OUT_2_fade_OUT_B56D690B4EF61F14139F60A5961FB577' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_SideQuest_C, Fade_OUT_2__Direction_B56D690B4EF61F14139F60A5961FB577) == 0x00048C, "Member 'ABP_ObjectiveMarker_Beam_F2S_SideQuest_C::Fade_OUT_2__Direction_B56D690B4EF61F14139F60A5961FB577' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_SideQuest_C, Fade_OUT_2) == 0x000490, "Member 'ABP_ObjectiveMarker_Beam_F2S_SideQuest_C::Fade_OUT_2' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_SideQuest_C, Fade_OUT_fade_OUT_4B9F5F6246CAC7BBCD424CA9D817E580) == 0x000498, "Member 'ABP_ObjectiveMarker_Beam_F2S_SideQuest_C::Fade_OUT_fade_OUT_4B9F5F6246CAC7BBCD424CA9D817E580' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_SideQuest_C, Fade_OUT__Direction_4B9F5F6246CAC7BBCD424CA9D817E580) == 0x00049C, "Member 'ABP_ObjectiveMarker_Beam_F2S_SideQuest_C::Fade_OUT__Direction_4B9F5F6246CAC7BBCD424CA9D817E580' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_SideQuest_C, Fade_OUT) == 0x0004A0, "Member 'ABP_ObjectiveMarker_Beam_F2S_SideQuest_C::Fade_OUT' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_SideQuest_C, Fade_IN_fade_IN_1A26C4074812CE5625C70F94E24DD75A) == 0x0004A8, "Member 'ABP_ObjectiveMarker_Beam_F2S_SideQuest_C::Fade_IN_fade_IN_1A26C4074812CE5625C70F94E24DD75A' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_SideQuest_C, Fade_IN__Direction_1A26C4074812CE5625C70F94E24DD75A) == 0x0004AC, "Member 'ABP_ObjectiveMarker_Beam_F2S_SideQuest_C::Fade_IN__Direction_1A26C4074812CE5625C70F94E24DD75A' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_SideQuest_C, Fade_IN) == 0x0004B0, "Member 'ABP_ObjectiveMarker_Beam_F2S_SideQuest_C::Fade_IN' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_SideQuest_C, Marker_Text) == 0x0004B8, "Member 'ABP_ObjectiveMarker_Beam_F2S_SideQuest_C::Marker_Text' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_SideQuest_C, IsVisible) == 0x0004D0, "Member 'ABP_ObjectiveMarker_Beam_F2S_SideQuest_C::IsVisible' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_SideQuest_C, UpdateCurrentDeltaTSeconds) == 0x0004D4, "Member 'ABP_ObjectiveMarker_Beam_F2S_SideQuest_C::UpdateCurrentDeltaTSeconds' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_SideQuest_C, UpdateFrequencySeconds) == 0x0004D8, "Member 'ABP_ObjectiveMarker_Beam_F2S_SideQuest_C::UpdateFrequencySeconds' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_F2S_SideQuest_C, Dyn_beam_material) == 0x0004E0, "Member 'ABP_ObjectiveMarker_Beam_F2S_SideQuest_C::Dyn_beam_material' has a wrong offset!");

}

