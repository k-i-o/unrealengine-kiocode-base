#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DeployMenu_SquadList

#include "Basic.hpp"

#include "WBP_DeployMenu_SquadList_classes.hpp"
#include "WBP_DeployMenu_SquadList_parameters.hpp"


namespace SDK
{

// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.ExecuteUbergraph_WBP_DeployMenu_SquadList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DeployMenu_SquadList_C::ExecuteUbergraph_WBP_DeployMenu_SquadList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "ExecuteUbergraph_WBP_DeployMenu_SquadList");

	Params::WBP_DeployMenu_SquadList_C_ExecuteUbergraph_WBP_DeployMenu_SquadList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnSquadLockStateUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bNewLockedState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_SquadList_C::OnSquadLockStateUpdated(bool bNewLockedState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "OnSquadLockStateUpdated");

	Params::WBP_DeployMenu_SquadList_C_OnSquadLockStateUpdated Parms{};

	Parms.bNewLockedState = bNewLockedState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnSquadLeaderUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHDPlayerState*                   NewLeaderPS                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHDPlayerState*                   PrevLeaderPS                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DeployMenu_SquadList_C::OnSquadLeaderUpdated(class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "OnSquadLeaderUpdated");

	Params::WBP_DeployMenu_SquadList_C_OnSquadLeaderUpdated Parms{};

	Parms.NewLeaderPS = NewLeaderPS;
	Parms.PrevLeaderPS = PrevLeaderPS;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnSquadNameUpdated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             NewSquadName                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             PreviousSquadName                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_DeployMenu_SquadList_C::OnSquadNameUpdated(const class FText& NewSquadName, const class FText& PreviousSquadName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "OnSquadNameUpdated");

	Params::WBP_DeployMenu_SquadList_C_OnSquadNameUpdated Parms{};

	Parms.NewSquadName = std::move(NewSquadName);
	Parms.PreviousSquadName = std::move(PreviousSquadName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnSquadSet
// (Event, Protected, BlueprintEvent)

void UWBP_DeployMenu_SquadList_C::OnSquadSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "OnSquadSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SquadMembersListCollapsed
// (BlueprintCallable, BlueprintEvent)

void UWBP_DeployMenu_SquadList_C::SquadMembersListCollapsed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "SquadMembersListCollapsed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SquadMembersListExpanded
// (BlueprintCallable, BlueprintEvent)

void UWBP_DeployMenu_SquadList_C::SquadMembersListExpanded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "SquadMembersListExpanded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_SquadList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "PreConstruct");

	Params::WBP_DeployMenu_SquadList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.BndEvt__ExpandBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DeployMenu_SquadList_C::BndEvt__ExpandBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "BndEvt__ExpandBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.BndEvt__LeaveSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DeployMenu_SquadList_C::BndEvt__LeaveSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "BndEvt__LeaveSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.DeconstructSquadMember
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USquadMemberInfo*                 RemovedMemberData                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DeployMenu_SquadList_C::DeconstructSquadMember(class USquadMemberInfo* RemovedMemberData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "DeconstructSquadMember");

	Params::WBP_DeployMenu_SquadList_C_DeconstructSquadMember Parms{};

	Parms.RemovedMemberData = RemovedMemberData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.GenerateSquadMember
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USquadMemberInfo*                 MemberData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DeployMenu_SquadList_C::GenerateSquadMember(class USquadMemberInfo* MemberData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "GenerateSquadMember");

	Params::WBP_DeployMenu_SquadList_C_GenerateSquadMember Parms{};

	Parms.MemberData = MemberData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.BndEvt__LockUnlockSQOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DeployMenu_SquadList_C::BndEvt__LockUnlockSQOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "BndEvt__LockUnlockSQOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.ExpandList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bExpandParent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_SquadList_C::ExpandList(bool bExpandParent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "ExpandList");

	Params::WBP_DeployMenu_SquadList_C_ExpandList Parms{};

	Parms.bExpandParent = bExpandParent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.CollapseList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCollapseParent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_SquadList_C::CollapseList(bool bCollapseParent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "CollapseList");

	Params::WBP_DeployMenu_SquadList_C_CollapseList Parms{};

	Parms.bCollapseParent = bCollapseParent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.AddNewSquadMemberItemWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USquadMemberInfo*                 MemberData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DeployMenu_SquadList_C::AddNewSquadMemberItemWidget(class USquadMemberInfo* MemberData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "AddNewSquadMemberItemWidget");

	Params::WBP_DeployMenu_SquadList_C_AddNewSquadMemberItemWidget Parms{};

	Parms.MemberData = MemberData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.RemoveSquadMemberItemWidgetFromList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USquadMemberInfo*                 RemovedMemberData                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DeployMenu_SquadList_C::RemoveSquadMemberItemWidgetFromList(class USquadMemberInfo* RemovedMemberData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "RemoveSquadMemberItemWidgetFromList");

	Params::WBP_DeployMenu_SquadList_C_RemoveSquadMemberItemWidgetFromList Parms{};

	Parms.RemovedMemberData = RemovedMemberData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SetSquadNameText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             NewSquadName                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_DeployMenu_SquadList_C::SetSquadNameText(const class FText& NewSquadName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "SetSquadNameText");

	Params::WBP_DeployMenu_SquadList_C_SetSquadNameText Parms{};

	Parms.NewSquadName = std::move(NewSquadName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.CollapseListIfEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCollapseParentIfEmpty                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_SquadList_C::CollapseListIfEmpty(bool bCollapseParentIfEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "CollapseListIfEmpty");

	Params::WBP_DeployMenu_SquadList_C_CollapseListIfEmpty Parms{};

	Parms.bCollapseParentIfEmpty = bCollapseParentIfEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.UpdateSquadMemberCountText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_DeployMenu_SquadList_C::UpdateSquadMemberCountText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "UpdateSquadMemberCountText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.UpdateJoinLeaveBtnState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_DeployMenu_SquadList_C::UpdateJoinLeaveBtnState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "UpdateJoinLeaveBtnState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.IsOwningPlayerRegisteredSquadMember
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bIgnorePendingRemoval                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bRegisteredMember                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_SquadList_C::IsOwningPlayerRegisteredSquadMember(bool bIgnorePendingRemoval, bool* bRegisteredMember)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "IsOwningPlayerRegisteredSquadMember");

	Params::WBP_DeployMenu_SquadList_C_IsOwningPlayerRegisteredSquadMember Parms{};

	Parms.bIgnorePendingRemoval = bIgnorePendingRemoval;

	UObject::ProcessEvent(Func, &Parms);

	if (bRegisteredMember != nullptr)
		*bRegisteredMember = Parms.bRegisteredMember;
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.IsOwningPlayerRegisteredSquadLeader
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bSquadLeader                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_SquadList_C::IsOwningPlayerRegisteredSquadLeader(bool* bSquadLeader)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "IsOwningPlayerRegisteredSquadLeader");

	Params::WBP_DeployMenu_SquadList_C_IsOwningPlayerRegisteredSquadLeader Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bSquadLeader != nullptr)
		*bSquadLeader = Parms.bSquadLeader;
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.TestSQPrereqs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_DeployMenu_SquadList_C::TestSQPrereqs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "TestSQPrereqs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.TestSquadAndMemberPrereqs
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_DeployMenu_SquadList_C::TestSquadAndMemberPrereqs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "TestSquadAndMemberPrereqs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.TestPrereqsForAllMembers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_DeployMenu_SquadList_C::TestPrereqsForAllMembers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "TestPrereqsForAllMembers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.IsOwningPlayerInMemberWidgetList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bOwnsMemberWidget                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_SquadList_C::IsOwningPlayerInMemberWidgetList(bool* bOwnsMemberWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "IsOwningPlayerInMemberWidgetList");

	Params::WBP_DeployMenu_SquadList_C_IsOwningPlayerInMemberWidgetList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bOwnsMemberWidget != nullptr)
		*bOwnsMemberWidget = Parms.bOwnsMemberWidget;
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SetupSQOptions
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_DeployMenu_SquadList_C::SetupSQOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "SetupSQOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.HasAnySquadMembers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bValidMembersPresent                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_SquadList_C::HasAnySquadMembers(bool* bValidMembersPresent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "HasAnySquadMembers");

	Params::WBP_DeployMenu_SquadList_C_HasAnySquadMembers Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bValidMembersPresent != nullptr)
		*bValidMembersPresent = Parms.bValidMembersPresent;
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.UpdateLockUnlockBtnState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_DeployMenu_SquadList_C::UpdateLockUnlockBtnState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "UpdateLockUnlockBtnState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.WasListCollapsedByUser
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_bCollapsedByUser                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_SquadList_C::WasListCollapsedByUser(bool* Param_bCollapsedByUser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "WasListCollapsedByUser");

	Params::WBP_DeployMenu_SquadList_C_WasListCollapsedByUser Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bCollapsedByUser != nullptr)
		*Param_bCollapsedByUser = Parms.Param_bCollapsedByUser;
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.KickSquadMember
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHDPlayerState*                   MemberPSToKick                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DeployMenu_SquadList_C::KickSquadMember(class AHDPlayerState* MemberPSToKick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "KickSquadMember");

	Params::WBP_DeployMenu_SquadList_C_KickSquadMember Parms{};

	Parms.MemberPSToKick = MemberPSToKick;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.LockSquad
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_DeployMenu_SquadList_C::LockSquad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "LockSquad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.UnlockSquad
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_DeployMenu_SquadList_C::UnlockSquad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "UnlockSquad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.SetSquadLockedState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewLocked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_SquadList_C::SetSquadLockedState(bool bNewLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "SetSquadLockedState");

	Params::WBP_DeployMenu_SquadList_C_SetSquadLockedState Parms{};

	Parms.bNewLocked = bNewLocked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.IsSquadValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bValidSQ                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_SquadList_C::IsSquadValid(bool* bValidSQ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "IsSquadValid");

	Params::WBP_DeployMenu_SquadList_C_IsSquadValid Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bValidSQ != nullptr)
		*bValidSQ = Parms.bValidSQ;
}


// Function WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext                    Context                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_DeployMenu_SquadList_C::OnPaint(struct FPaintContext& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_SquadList_C", "OnPaint");

	Params::WBP_DeployMenu_SquadList_C_OnPaint Parms{};

	Parms.Context = std::move(Context);

	UObject::ProcessEvent(Func, &Parms);

	Context = std::move(Parms.Context);
}

}
