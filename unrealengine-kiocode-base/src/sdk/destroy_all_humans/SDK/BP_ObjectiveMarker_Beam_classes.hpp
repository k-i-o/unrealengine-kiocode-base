#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ObjectiveMarker_Beam

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BFGCore_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ObjectiveMarker_Beam.BP_ObjectiveMarker_Beam_C
// 0x00C8 (0x0540 - 0x0478)
class ABP_ObjectiveMarker_Beam_C final : public ABFGObjectiveMarker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0478(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                   TextRender;                                        // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Billboard;                                         // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Skeletal_Mesh;                                     // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   VisualHelper;                                      // 0x0498(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Marker_Transition_OUT_NewTrack_1_69638F614565F94211DBE3A6154468F4; // 0x04A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Marker_Transition_OUT_Transition_OUT_69638F614565F94211DBE3A6154468F4; // 0x04AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Marker_Transition_OUT__Direction_69638F614565F94211DBE3A6154468F4; // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22C6[0x7];                                     // 0x04B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Marker_Transition_OUT;                             // 0x04B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Marker_Transition_OUT_kill_NewTrack_0_E9B35A7E420E609779F05EAC936B198B; // 0x04C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Marker_Transition_OUT_kill_Transition_OUT_E9B35A7E420E609779F05EAC936B198B; // 0x04C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Marker_Transition_OUT_kill__Direction_E9B35A7E420E609779F05EAC936B198B; // 0x04C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22C7[0x7];                                     // 0x04C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Marker_Transition_OUT_kill;                        // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Marker_Transition_IN_NewTrack_2_0584B4AB4C65A298584B23861ED1FD90; // 0x04D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Marker_Transition_IN_Transition_IN_0584B4AB4C65A298584B23861ED1FD90; // 0x04DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Marker_Transition_IN__Direction_0584B4AB4C65A298584B23861ED1FD90; // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22C8[0x7];                                     // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Marker_Transition_IN;                              // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Marker_Text;                                       // 0x04F0(0x0018)(Edit, BlueprintVisible)
	float                                         Mesh_Rotation_Speed;                               // 0x0508(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsVisible;                                         // 0x050C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22C9[0x3];                                     // 0x050D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Billboard_Material;                                // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Mesh_Scale;                                        // 0x0518(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Billboard_Scale;                                   // 0x0524(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Text_Scale;                                        // 0x0530(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ObjectiveMarker_Beam(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void HideMarker();
	void InpActEvt_I_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_K_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void Marker_Transition_IN__FinishedFunc();
	void Marker_Transition_IN__UpdateFunc();
	void Marker_Transition_OUT__FinishedFunc();
	void Marker_Transition_OUT__UpdateFunc();
	void Marker_Transition_OUT_kill__FinishedFunc();
	void Marker_Transition_OUT_kill__UpdateFunc();
	void RequestRemoveMarker();
	void ShowMarker();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ObjectiveMarker_Beam_C">();
	}
	static class ABP_ObjectiveMarker_Beam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ObjectiveMarker_Beam_C>();
	}
};
static_assert(alignof(ABP_ObjectiveMarker_Beam_C) == 0x000008, "Wrong alignment on ABP_ObjectiveMarker_Beam_C");
static_assert(sizeof(ABP_ObjectiveMarker_Beam_C) == 0x000540, "Wrong size on ABP_ObjectiveMarker_Beam_C");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, UberGraphFrame) == 0x000478, "Member 'ABP_ObjectiveMarker_Beam_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, TextRender) == 0x000480, "Member 'ABP_ObjectiveMarker_Beam_C::TextRender' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Billboard) == 0x000488, "Member 'ABP_ObjectiveMarker_Beam_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Skeletal_Mesh) == 0x000490, "Member 'ABP_ObjectiveMarker_Beam_C::Skeletal_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, VisualHelper) == 0x000498, "Member 'ABP_ObjectiveMarker_Beam_C::VisualHelper' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Marker_Transition_OUT_NewTrack_1_69638F614565F94211DBE3A6154468F4) == 0x0004A0, "Member 'ABP_ObjectiveMarker_Beam_C::Marker_Transition_OUT_NewTrack_1_69638F614565F94211DBE3A6154468F4' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Marker_Transition_OUT_Transition_OUT_69638F614565F94211DBE3A6154468F4) == 0x0004AC, "Member 'ABP_ObjectiveMarker_Beam_C::Marker_Transition_OUT_Transition_OUT_69638F614565F94211DBE3A6154468F4' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Marker_Transition_OUT__Direction_69638F614565F94211DBE3A6154468F4) == 0x0004B0, "Member 'ABP_ObjectiveMarker_Beam_C::Marker_Transition_OUT__Direction_69638F614565F94211DBE3A6154468F4' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Marker_Transition_OUT) == 0x0004B8, "Member 'ABP_ObjectiveMarker_Beam_C::Marker_Transition_OUT' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Marker_Transition_OUT_kill_NewTrack_0_E9B35A7E420E609779F05EAC936B198B) == 0x0004C0, "Member 'ABP_ObjectiveMarker_Beam_C::Marker_Transition_OUT_kill_NewTrack_0_E9B35A7E420E609779F05EAC936B198B' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Marker_Transition_OUT_kill_Transition_OUT_E9B35A7E420E609779F05EAC936B198B) == 0x0004C4, "Member 'ABP_ObjectiveMarker_Beam_C::Marker_Transition_OUT_kill_Transition_OUT_E9B35A7E420E609779F05EAC936B198B' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Marker_Transition_OUT_kill__Direction_E9B35A7E420E609779F05EAC936B198B) == 0x0004C8, "Member 'ABP_ObjectiveMarker_Beam_C::Marker_Transition_OUT_kill__Direction_E9B35A7E420E609779F05EAC936B198B' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Marker_Transition_OUT_kill) == 0x0004D0, "Member 'ABP_ObjectiveMarker_Beam_C::Marker_Transition_OUT_kill' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Marker_Transition_IN_NewTrack_2_0584B4AB4C65A298584B23861ED1FD90) == 0x0004D8, "Member 'ABP_ObjectiveMarker_Beam_C::Marker_Transition_IN_NewTrack_2_0584B4AB4C65A298584B23861ED1FD90' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Marker_Transition_IN_Transition_IN_0584B4AB4C65A298584B23861ED1FD90) == 0x0004DC, "Member 'ABP_ObjectiveMarker_Beam_C::Marker_Transition_IN_Transition_IN_0584B4AB4C65A298584B23861ED1FD90' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Marker_Transition_IN__Direction_0584B4AB4C65A298584B23861ED1FD90) == 0x0004E0, "Member 'ABP_ObjectiveMarker_Beam_C::Marker_Transition_IN__Direction_0584B4AB4C65A298584B23861ED1FD90' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Marker_Transition_IN) == 0x0004E8, "Member 'ABP_ObjectiveMarker_Beam_C::Marker_Transition_IN' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Marker_Text) == 0x0004F0, "Member 'ABP_ObjectiveMarker_Beam_C::Marker_Text' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Mesh_Rotation_Speed) == 0x000508, "Member 'ABP_ObjectiveMarker_Beam_C::Mesh_Rotation_Speed' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, IsVisible) == 0x00050C, "Member 'ABP_ObjectiveMarker_Beam_C::IsVisible' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Billboard_Material) == 0x000510, "Member 'ABP_ObjectiveMarker_Beam_C::Billboard_Material' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Mesh_Scale) == 0x000518, "Member 'ABP_ObjectiveMarker_Beam_C::Mesh_Scale' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Billboard_Scale) == 0x000524, "Member 'ABP_ObjectiveMarker_Beam_C::Billboard_Scale' has a wrong offset!");
static_assert(offsetof(ABP_ObjectiveMarker_Beam_C, Text_Scale) == 0x000530, "Member 'ABP_ObjectiveMarker_Beam_C::Text_Scale' has a wrong offset!");

}
