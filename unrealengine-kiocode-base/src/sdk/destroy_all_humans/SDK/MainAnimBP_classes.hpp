#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainAnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass MainAnimBP.MainAnimBP_C
// 0x08E0 (0x0C30 - 0x0350)
class UMainAnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2469[0x8];                                     // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0358(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0360(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0368(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_15;                 // 0x0388(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_14;                 // 0x03B0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x03D8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x0400(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x0428(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x0450(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x0478(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x04A0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x04C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x04F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0518(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0540(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0568(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0590(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x05B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x05E0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x0608(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_9;                       // 0x0650(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x0670(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_8;                       // 0x06B8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x06D8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x0720(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x0740(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x0788(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x07A8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x07F0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x0810(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0858(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0878(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x08C0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x08E0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0928(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0948(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0990(0x0020)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x09B0(0x00E0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0A90(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0AD8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0B20(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0B40(0x00C8)()
	class AMyCharacter_C*                         MyCharacter;                                       // 0x0C08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          HasToPlayTakeDamageAnim;                           // 0x0C10(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Hastoplaydieanim;                                  // 0x0C11(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasToPlayAttackAnim;                               // 0x0C12(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWalking;                                         // 0x0C13(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnemiesAppearing;                                  // 0x0C14(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_246A[0x3];                                     // 0x0C15(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        EnemiesAppearTimer;                                // 0x0C18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasToPlayWindAbility;                              // 0x0C20(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PreviewingAttack;                                  // 0x0C21(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PrevFireball;                                      // 0x0C22(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CastedFireball;                                    // 0x0C23(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SkipSpawn;                                         // 0x0C24(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void AnimNotify_AttackParticles();
	void AnimNotify_DamageTaken();
	void AnimNotify_Desintegrate();
	void AnimNotify_FinishedDeath();
	void AnimNotify_FinishedSummon();
	void AnimNotify_FireBall01();
	void AnimNotify_Fireball02();
	void AnimNotify_FireBall03();
	void AnimNotify_Main_Player_Death();
	void AnimNotify_minionsAppear();
	void AnimNotify_Monk_Damage();
	void AnimNotify_Monk_walk();
	void AnimNotify_MonkAttack();
	void AnimNotify_StartSummoning();
	void AnimNotify_WindPush();
	void AnimNotify_WindPushFinished();
	void AnimNotify_WindPushStart();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MainAnimBP_AnimGraphNode_TransitionResult_1CCBFED04407E3AF2D5B2BBA0C8C178B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MainAnimBP_AnimGraphNode_TransitionResult_5A41ECD84B22DBFB64940DAC7F46A4EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MainAnimBP_AnimGraphNode_TransitionResult_644005AC47F3E303C92A749BE7809D8F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MainAnimBP_AnimGraphNode_TransitionResult_977329D548ED0F8B9D4861AE4DF77B6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MainAnimBP_AnimGraphNode_TransitionResult_A32864C444EE0AD406B1928238D62912();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MainAnimBP_AnimGraphNode_TransitionResult_A43472FC4F006BD3F398A9B8B27803B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MainAnimBP_AnimGraphNode_TransitionResult_BBB9F2B9402A3B32A25EC1BF5DD1C397();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MainAnimBP_AnimGraphNode_TransitionResult_BFCB1EC948D776623FE0CA983DBFCEB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MainAnimBP_AnimGraphNode_TransitionResult_C96146224A6B7F115533DE84C56FC87E();
	void ExecuteUbergraph_MainAnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainAnimBP_C">();
	}
	static class UMainAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainAnimBP_C>();
	}
};
static_assert(alignof(UMainAnimBP_C) == 0x000010, "Wrong alignment on UMainAnimBP_C");
static_assert(sizeof(UMainAnimBP_C) == 0x000C30, "Wrong size on UMainAnimBP_C");
static_assert(offsetof(UMainAnimBP_C, UberGraphFrame) == 0x000350, "Member 'UMainAnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'UMainAnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'UMainAnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_Root) == 0x000368, "Member 'UMainAnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_TransitionResult_15) == 0x000388, "Member 'UMainAnimBP_C::AnimGraphNode_TransitionResult_15' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_TransitionResult_14) == 0x0003B0, "Member 'UMainAnimBP_C::AnimGraphNode_TransitionResult_14' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_TransitionResult_13) == 0x0003D8, "Member 'UMainAnimBP_C::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_TransitionResult_12) == 0x000400, "Member 'UMainAnimBP_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_TransitionResult_11) == 0x000428, "Member 'UMainAnimBP_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_TransitionResult_10) == 0x000450, "Member 'UMainAnimBP_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_TransitionResult_9) == 0x000478, "Member 'UMainAnimBP_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_TransitionResult_8) == 0x0004A0, "Member 'UMainAnimBP_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_TransitionResult_7) == 0x0004C8, "Member 'UMainAnimBP_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_TransitionResult_6) == 0x0004F0, "Member 'UMainAnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_TransitionResult_5) == 0x000518, "Member 'UMainAnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_TransitionResult_4) == 0x000540, "Member 'UMainAnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_TransitionResult_3) == 0x000568, "Member 'UMainAnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_TransitionResult_2) == 0x000590, "Member 'UMainAnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_TransitionResult_1) == 0x0005B8, "Member 'UMainAnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_TransitionResult) == 0x0005E0, "Member 'UMainAnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_SequencePlayer_10) == 0x000608, "Member 'UMainAnimBP_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_StateResult_9) == 0x000650, "Member 'UMainAnimBP_C::AnimGraphNode_StateResult_9' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_SequencePlayer_9) == 0x000670, "Member 'UMainAnimBP_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_StateResult_8) == 0x0006B8, "Member 'UMainAnimBP_C::AnimGraphNode_StateResult_8' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_SequencePlayer_8) == 0x0006D8, "Member 'UMainAnimBP_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_StateResult_7) == 0x000720, "Member 'UMainAnimBP_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_SequencePlayer_7) == 0x000740, "Member 'UMainAnimBP_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_StateResult_6) == 0x000788, "Member 'UMainAnimBP_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x0007A8, "Member 'UMainAnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_StateResult_5) == 0x0007F0, "Member 'UMainAnimBP_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x000810, "Member 'UMainAnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_StateResult_4) == 0x000858, "Member 'UMainAnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x000878, "Member 'UMainAnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_StateResult_3) == 0x0008C0, "Member 'UMainAnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x0008E0, "Member 'UMainAnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_StateResult_2) == 0x000928, "Member 'UMainAnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000948, "Member 'UMainAnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_StateResult_1) == 0x000990, "Member 'UMainAnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x0009B0, "Member 'UMainAnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000A90, "Member 'UMainAnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_SequencePlayer) == 0x000AD8, "Member 'UMainAnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_StateResult) == 0x000B20, "Member 'UMainAnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, AnimGraphNode_StateMachine) == 0x000B40, "Member 'UMainAnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, MyCharacter) == 0x000C08, "Member 'UMainAnimBP_C::MyCharacter' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, HasToPlayTakeDamageAnim) == 0x000C10, "Member 'UMainAnimBP_C::HasToPlayTakeDamageAnim' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, Hastoplaydieanim) == 0x000C11, "Member 'UMainAnimBP_C::Hastoplaydieanim' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, HasToPlayAttackAnim) == 0x000C12, "Member 'UMainAnimBP_C::HasToPlayAttackAnim' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, IsWalking) == 0x000C13, "Member 'UMainAnimBP_C::IsWalking' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, EnemiesAppearing) == 0x000C14, "Member 'UMainAnimBP_C::EnemiesAppearing' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, EnemiesAppearTimer) == 0x000C18, "Member 'UMainAnimBP_C::EnemiesAppearTimer' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, HasToPlayWindAbility) == 0x000C20, "Member 'UMainAnimBP_C::HasToPlayWindAbility' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, PreviewingAttack) == 0x000C21, "Member 'UMainAnimBP_C::PreviewingAttack' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, PrevFireball) == 0x000C22, "Member 'UMainAnimBP_C::PrevFireball' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, CastedFireball) == 0x000C23, "Member 'UMainAnimBP_C::CastedFireball' has a wrong offset!");
static_assert(offsetof(UMainAnimBP_C, SkipSpawn) == 0x000C24, "Member 'UMainAnimBP_C::SkipSpawn' has a wrong offset!");

}

