#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FGameModeInfo

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct FGameModeInfo.FGameModeInfo
// 0x0028 (0x0028 - 0x0000)
struct FFGameModeInfo final
{
public:
	class FName                                   PackageName_10_DE62EF824DB907D3A65B2EB997DB647E;   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   DisplayName_7_446411A24792CE413F09BCA2B0B6D2D6;    // 0x0008(0x0018)(Edit, BlueprintVisible)
	class UTexture2D*                             BannerImage_18_9311664649510AFCF003C4B106EF5C56;   // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFGameModeInfo) == 0x000008, "Wrong alignment on FFGameModeInfo");
static_assert(sizeof(FFGameModeInfo) == 0x000028, "Wrong size on FFGameModeInfo");
static_assert(offsetof(FFGameModeInfo, PackageName_10_DE62EF824DB907D3A65B2EB997DB647E) == 0x000000, "Member 'FFGameModeInfo::PackageName_10_DE62EF824DB907D3A65B2EB997DB647E' has a wrong offset!");
static_assert(offsetof(FFGameModeInfo, DisplayName_7_446411A24792CE413F09BCA2B0B6D2D6) == 0x000008, "Member 'FFGameModeInfo::DisplayName_7_446411A24792CE413F09BCA2B0B6D2D6' has a wrong offset!");
static_assert(offsetof(FFGameModeInfo, BannerImage_18_9311664649510AFCF003C4B106EF5C56) == 0x000020, "Member 'FFGameModeInfo::BannerImage_18_9311664649510AFCF003C4B106EF5C56' has a wrong offset!");

}
