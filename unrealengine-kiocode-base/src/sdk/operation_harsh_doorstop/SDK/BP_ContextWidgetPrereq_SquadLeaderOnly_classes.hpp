#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ContextWidgetPrereq_SquadLeaderOnly

#include "Basic.hpp"

#include "DonkehFrameworkUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ContextWidgetPrereq_SquadLeaderOnly.BP_ContextWidgetPrereq_SquadLeaderOnly_C
// 0x0018 (0x0048 - 0x0030)
class UBP_ContextWidgetPrereq_SquadLeaderOnly_C final : public UDFContextualWidgetPrerequisiteBase
{
public:
	class AHDSquadState*                          MemberSQState;                                     // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHDPlayerState*                         MemberPSToTest;                                    // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInitialized;                                      // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SetupContext(class AHDSquadState* InMemberSQState, class AHDPlayerState* InMemberPSToTest);

	bool SatisfiesPrerequisite() const;
	void IsValidContext(bool* bValidData) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ContextWidgetPrereq_SquadLeaderOnly_C">();
	}
	static class UBP_ContextWidgetPrereq_SquadLeaderOnly_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ContextWidgetPrereq_SquadLeaderOnly_C>();
	}
};
static_assert(alignof(UBP_ContextWidgetPrereq_SquadLeaderOnly_C) == 0x000008, "Wrong alignment on UBP_ContextWidgetPrereq_SquadLeaderOnly_C");
static_assert(sizeof(UBP_ContextWidgetPrereq_SquadLeaderOnly_C) == 0x000048, "Wrong size on UBP_ContextWidgetPrereq_SquadLeaderOnly_C");
static_assert(offsetof(UBP_ContextWidgetPrereq_SquadLeaderOnly_C, MemberSQState) == 0x000030, "Member 'UBP_ContextWidgetPrereq_SquadLeaderOnly_C::MemberSQState' has a wrong offset!");
static_assert(offsetof(UBP_ContextWidgetPrereq_SquadLeaderOnly_C, MemberPSToTest) == 0x000038, "Member 'UBP_ContextWidgetPrereq_SquadLeaderOnly_C::MemberPSToTest' has a wrong offset!");
static_assert(offsetof(UBP_ContextWidgetPrereq_SquadLeaderOnly_C, bInitialized) == 0x000040, "Member 'UBP_ContextWidgetPrereq_SquadLeaderOnly_C::bInitialized' has a wrong offset!");

}

