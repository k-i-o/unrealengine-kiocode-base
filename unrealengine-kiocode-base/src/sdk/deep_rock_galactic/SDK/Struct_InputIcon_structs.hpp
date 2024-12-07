#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_InputIcon

#include "Basic.hpp"

#include "ENUM_MenuColors_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FSD_structs.hpp"


namespace SDK
{

// UserDefinedStruct Struct_InputIcon.Struct_InputIcon
// 0x002C (0x002C - 0x0000)
struct FStruct_InputIcon final
{
public:
	class FName                                   Action_2_18DE6B2C4B7152A00812FFB408DD90FF;         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   GamepadActionOverride_19_9663246D469BAB01173E3094A6F4F630; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENUM_MenuColors                               IconTint_7_63D2D68D4B4BA68CE1D6A18E819C9CFA;       // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D85[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         IconHeight_22_69995C3348E89CA4F960C4AEBF7A724B;    // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                IconPadding_20_921157974B7BEE7DAB93AB9BF719A7C8;   // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EFSDInputSource                               PreviewInputSource_21_EE6A438F456325BDCB3C1EBDD85DEB6A; // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FStruct_InputIcon) == 0x000004, "Wrong alignment on FStruct_InputIcon");
static_assert(sizeof(FStruct_InputIcon) == 0x00002C, "Wrong size on FStruct_InputIcon");
static_assert(offsetof(FStruct_InputIcon, Action_2_18DE6B2C4B7152A00812FFB408DD90FF) == 0x000000, "Member 'FStruct_InputIcon::Action_2_18DE6B2C4B7152A00812FFB408DD90FF' has a wrong offset!");
static_assert(offsetof(FStruct_InputIcon, GamepadActionOverride_19_9663246D469BAB01173E3094A6F4F630) == 0x000008, "Member 'FStruct_InputIcon::GamepadActionOverride_19_9663246D469BAB01173E3094A6F4F630' has a wrong offset!");
static_assert(offsetof(FStruct_InputIcon, IconTint_7_63D2D68D4B4BA68CE1D6A18E819C9CFA) == 0x000010, "Member 'FStruct_InputIcon::IconTint_7_63D2D68D4B4BA68CE1D6A18E819C9CFA' has a wrong offset!");
static_assert(offsetof(FStruct_InputIcon, IconHeight_22_69995C3348E89CA4F960C4AEBF7A724B) == 0x000014, "Member 'FStruct_InputIcon::IconHeight_22_69995C3348E89CA4F960C4AEBF7A724B' has a wrong offset!");
static_assert(offsetof(FStruct_InputIcon, IconPadding_20_921157974B7BEE7DAB93AB9BF719A7C8) == 0x000018, "Member 'FStruct_InputIcon::IconPadding_20_921157974B7BEE7DAB93AB9BF719A7C8' has a wrong offset!");
static_assert(offsetof(FStruct_InputIcon, PreviewInputSource_21_EE6A438F456325BDCB3C1EBDD85DEB6A) == 0x000028, "Member 'FStruct_InputIcon::PreviewInputSource_21_EE6A438F456325BDCB3C1EBDD85DEB6A' has a wrong offset!");

}

