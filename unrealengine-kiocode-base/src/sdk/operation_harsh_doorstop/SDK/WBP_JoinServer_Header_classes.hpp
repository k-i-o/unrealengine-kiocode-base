#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_JoinServer_Header

#include "Basic.hpp"

#include "FServerListingLayoutInfo_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_JoinServer_Header.WBP_JoinServer_Header_C
// 0x0060 (0x0290 - 0x0230)
class UWBP_JoinServer_Header_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             HeaderText;                                        // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    LayoutInfoHandle;                                  // 0x0240(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn)
	struct FFServerListingLayoutInfo              HeaderLayoutInfo;                                  // 0x0250(0x0038)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bSortListBtnEnabled;                               // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_WBP_JoinServer_Header(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetSortBtnIsEnabled(bool bEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_JoinServer_Header_C">();
	}
	static class UWBP_JoinServer_Header_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_JoinServer_Header_C>();
	}
};
static_assert(alignof(UWBP_JoinServer_Header_C) == 0x000008, "Wrong alignment on UWBP_JoinServer_Header_C");
static_assert(sizeof(UWBP_JoinServer_Header_C) == 0x000290, "Wrong size on UWBP_JoinServer_Header_C");
static_assert(offsetof(UWBP_JoinServer_Header_C, UberGraphFrame) == 0x000230, "Member 'UWBP_JoinServer_Header_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_JoinServer_Header_C, HeaderText) == 0x000238, "Member 'UWBP_JoinServer_Header_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UWBP_JoinServer_Header_C, LayoutInfoHandle) == 0x000240, "Member 'UWBP_JoinServer_Header_C::LayoutInfoHandle' has a wrong offset!");
static_assert(offsetof(UWBP_JoinServer_Header_C, HeaderLayoutInfo) == 0x000250, "Member 'UWBP_JoinServer_Header_C::HeaderLayoutInfo' has a wrong offset!");
static_assert(offsetof(UWBP_JoinServer_Header_C, bSortListBtnEnabled) == 0x000288, "Member 'UWBP_JoinServer_Header_C::bSortListBtnEnabled' has a wrong offset!");

}
