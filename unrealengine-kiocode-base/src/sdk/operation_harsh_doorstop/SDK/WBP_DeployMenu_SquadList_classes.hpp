#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DeployMenu_SquadList

#include "Basic.hpp"

#include "HDMain_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DeployMenu_SquadList.WBP_DeployMenu_SquadList_C
// 0x00E0 (0x0340 - 0x0260)
class UWBP_DeployMenu_SquadList_C final : public UDeployMenu_SquadListBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_1;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               DummyOption;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                DummyOptionBtn;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SQOption_C*                        JoinLeaveSQOption;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                JoinLeaveSQOptionBtn;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             JoinLeaveSQOptionText;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SQOption_C*                        LockUnlockSQOption;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                LockUnlockSQOptionBtn;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LockUnlockSQOptionText;                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         SQOptionsHBox;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SquadMemberCountText;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SquadMembersList;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SquadNameText;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ToggleListVisibilityBtn;                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ToggleListVisibilityImg;                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bExpanded;                                         // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2048[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   SquadTextFormat;                                   // 0x02F0(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                          bExpandListInDesigner;                             // 0x0308(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2049[0x3];                                     // 0x0309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumFakeSquadMemberItems;                           // 0x030C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                SquadMemberItemPadding;                            // 0x0310(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bCollapsedByUser;                                  // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_204A[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_DeployMenu_PlatoonSquadList_C*     ParentContainerWidget;                             // 0x0328(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FMargin                                OptionPadding;                                     // 0x0330(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_DeployMenu_SquadList(int32 EntryPoint);
	void OnSquadLockStateUpdated(bool bNewLockedState);
	void OnSquadLeaderUpdated(class AHDPlayerState* NewLeaderPS, class AHDPlayerState* PrevLeaderPS);
	void OnSquadNameUpdated(const class FText& NewSquadName, const class FText& PreviousSquadName);
	void OnSquadSet();
	void SquadMembersListCollapsed();
	void SquadMembersListExpanded();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ExpandBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LeaveSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void DeconstructSquadMember(class USquadMemberInfo* RemovedMemberData);
	void GenerateSquadMember(class USquadMemberInfo* MemberData);
	void BndEvt__LockUnlockSQOptionBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExpandList(bool bExpandParent);
	void CollapseList(bool bCollapseParent);
	void AddNewSquadMemberItemWidget(class USquadMemberInfo* MemberData);
	void RemoveSquadMemberItemWidgetFromList(class USquadMemberInfo* RemovedMemberData);
	void SetSquadNameText(const class FText& NewSquadName);
	void CollapseListIfEmpty(bool bCollapseParentIfEmpty);
	void UpdateSquadMemberCountText();
	void UpdateJoinLeaveBtnState();
	void IsOwningPlayerRegisteredSquadMember(bool bIgnorePendingRemoval, bool* bRegisteredMember);
	void IsOwningPlayerRegisteredSquadLeader(bool* bSquadLeader);
	void TestSQPrereqs();
	void TestSquadAndMemberPrereqs();
	void TestPrereqsForAllMembers();
	void IsOwningPlayerInMemberWidgetList(bool* bOwnsMemberWidget);
	void SetupSQOptions();
	void HasAnySquadMembers(bool* bValidMembersPresent);
	void UpdateLockUnlockBtnState();
	void WasListCollapsedByUser(bool* Param_bCollapsedByUser);
	void KickSquadMember(class AHDPlayerState* MemberPSToKick);
	void LockSquad();
	void UnlockSquad();
	void SetSquadLockedState(bool bNewLocked);
	void IsSquadValid(bool* bValidSQ);

	void OnPaint(struct FPaintContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DeployMenu_SquadList_C">();
	}
	static class UWBP_DeployMenu_SquadList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DeployMenu_SquadList_C>();
	}
};
static_assert(alignof(UWBP_DeployMenu_SquadList_C) == 0x000008, "Wrong alignment on UWBP_DeployMenu_SquadList_C");
static_assert(sizeof(UWBP_DeployMenu_SquadList_C) == 0x000340, "Wrong size on UWBP_DeployMenu_SquadList_C");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, UberGraphFrame) == 0x000260, "Member 'UWBP_DeployMenu_SquadList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, CanvasPanel_1) == 0x000268, "Member 'UWBP_DeployMenu_SquadList_C::CanvasPanel_1' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, DummyOption) == 0x000270, "Member 'UWBP_DeployMenu_SquadList_C::DummyOption' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, DummyOptionBtn) == 0x000278, "Member 'UWBP_DeployMenu_SquadList_C::DummyOptionBtn' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, Image_5) == 0x000280, "Member 'UWBP_DeployMenu_SquadList_C::Image_5' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, JoinLeaveSQOption) == 0x000288, "Member 'UWBP_DeployMenu_SquadList_C::JoinLeaveSQOption' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, JoinLeaveSQOptionBtn) == 0x000290, "Member 'UWBP_DeployMenu_SquadList_C::JoinLeaveSQOptionBtn' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, JoinLeaveSQOptionText) == 0x000298, "Member 'UWBP_DeployMenu_SquadList_C::JoinLeaveSQOptionText' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, LockUnlockSQOption) == 0x0002A0, "Member 'UWBP_DeployMenu_SquadList_C::LockUnlockSQOption' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, LockUnlockSQOptionBtn) == 0x0002A8, "Member 'UWBP_DeployMenu_SquadList_C::LockUnlockSQOptionBtn' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, LockUnlockSQOptionText) == 0x0002B0, "Member 'UWBP_DeployMenu_SquadList_C::LockUnlockSQOptionText' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, SQOptionsHBox) == 0x0002B8, "Member 'UWBP_DeployMenu_SquadList_C::SQOptionsHBox' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, SquadMemberCountText) == 0x0002C0, "Member 'UWBP_DeployMenu_SquadList_C::SquadMemberCountText' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, SquadMembersList) == 0x0002C8, "Member 'UWBP_DeployMenu_SquadList_C::SquadMembersList' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, SquadNameText) == 0x0002D0, "Member 'UWBP_DeployMenu_SquadList_C::SquadNameText' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, ToggleListVisibilityBtn) == 0x0002D8, "Member 'UWBP_DeployMenu_SquadList_C::ToggleListVisibilityBtn' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, ToggleListVisibilityImg) == 0x0002E0, "Member 'UWBP_DeployMenu_SquadList_C::ToggleListVisibilityImg' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, bExpanded) == 0x0002E8, "Member 'UWBP_DeployMenu_SquadList_C::bExpanded' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, SquadTextFormat) == 0x0002F0, "Member 'UWBP_DeployMenu_SquadList_C::SquadTextFormat' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, bExpandListInDesigner) == 0x000308, "Member 'UWBP_DeployMenu_SquadList_C::bExpandListInDesigner' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, NumFakeSquadMemberItems) == 0x00030C, "Member 'UWBP_DeployMenu_SquadList_C::NumFakeSquadMemberItems' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, SquadMemberItemPadding) == 0x000310, "Member 'UWBP_DeployMenu_SquadList_C::SquadMemberItemPadding' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, bCollapsedByUser) == 0x000320, "Member 'UWBP_DeployMenu_SquadList_C::bCollapsedByUser' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, ParentContainerWidget) == 0x000328, "Member 'UWBP_DeployMenu_SquadList_C::ParentContainerWidget' has a wrong offset!");
static_assert(offsetof(UWBP_DeployMenu_SquadList_C, OptionPadding) == 0x000330, "Member 'UWBP_DeployMenu_SquadList_C::OptionPadding' has a wrong offset!");

}
