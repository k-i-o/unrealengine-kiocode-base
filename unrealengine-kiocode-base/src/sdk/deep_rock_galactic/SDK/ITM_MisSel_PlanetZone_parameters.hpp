#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ITM_MisSel_PlanetZone

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ITM_MisSel_PlanetZone.ITM_MisSel_PlanetZone_C.GetAvailableMissions
// 0x0048 (0x0048 - 0x0000)
struct ITM_MisSel_PlanetZone_C_GetAvailableMissions final
{
public:
	TArray<class UGeneratedMission*>              ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
	class AFSDGameState*                          CallFunc_GetFSDGameState_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionGenerationManager*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UGeneratedMission*>              CallFunc_GetAvailableMissions_ReturnValue;         // 0x0020(0x0010)(ReferenceParm)
	TArray<class UGeneratedMission*>              CallFunc_GetMissions_ReturnValue;                  // 0x0030(0x0010)(ReferenceParm)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_MisSel_PlanetZone_C_GetAvailableMissions) == 0x000008, "Wrong alignment on ITM_MisSel_PlanetZone_C_GetAvailableMissions");
static_assert(sizeof(ITM_MisSel_PlanetZone_C_GetAvailableMissions) == 0x000048, "Wrong size on ITM_MisSel_PlanetZone_C_GetAvailableMissions");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_GetAvailableMissions, ReturnValue) == 0x000000, "Member 'ITM_MisSel_PlanetZone_C_GetAvailableMissions::ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_GetAvailableMissions, CallFunc_GetFSDGameState_ReturnValue) == 0x000010, "Member 'ITM_MisSel_PlanetZone_C_GetAvailableMissions::CallFunc_GetFSDGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_GetAvailableMissions, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000018, "Member 'ITM_MisSel_PlanetZone_C_GetAvailableMissions::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_GetAvailableMissions, CallFunc_GetAvailableMissions_ReturnValue) == 0x000020, "Member 'ITM_MisSel_PlanetZone_C_GetAvailableMissions::CallFunc_GetAvailableMissions_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_GetAvailableMissions, CallFunc_GetMissions_ReturnValue) == 0x000030, "Member 'ITM_MisSel_PlanetZone_C_GetAvailableMissions::CallFunc_GetMissions_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_GetAvailableMissions, CallFunc_HasAuthority_ReturnValue) == 0x000040, "Member 'ITM_MisSel_PlanetZone_C_GetAvailableMissions::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

// Function ITM_MisSel_PlanetZone.ITM_MisSel_PlanetZone_C.Refresh
// 0x0018 (0x0018 - 0x0000)
struct ITM_MisSel_PlanetZone_C_Refresh final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ITM_MisSel_PlanetZone_C_Refresh) == 0x000008, "Wrong alignment on ITM_MisSel_PlanetZone_C_Refresh");
static_assert(sizeof(ITM_MisSel_PlanetZone_C_Refresh) == 0x000018, "Wrong size on ITM_MisSel_PlanetZone_C_Refresh");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_Refresh, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'ITM_MisSel_PlanetZone_C_Refresh::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_Refresh, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'ITM_MisSel_PlanetZone_C_Refresh::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ITM_MisSel_PlanetZone.ITM_MisSel_PlanetZone_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ITM_MisSel_PlanetZone_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_MisSel_PlanetZone_C_PreConstruct) == 0x000001, "Wrong alignment on ITM_MisSel_PlanetZone_C_PreConstruct");
static_assert(sizeof(ITM_MisSel_PlanetZone_C_PreConstruct) == 0x000001, "Wrong size on ITM_MisSel_PlanetZone_C_PreConstruct");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ITM_MisSel_PlanetZone_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ITM_MisSel_PlanetZone.ITM_MisSel_PlanetZone_C.ExecuteUbergraph_ITM_MisSel_PlanetZone
// 0x0108 (0x0108 - 0x0000)
struct ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4707[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UGeneratedMission*>              CallFunc_GetAvailableMissions_ReturnValue;         // 0x0008(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGeneratedMission*                      CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4708[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor;                   // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFSDSaveGame*                           CallFunc_GetFSDSaveGame_ReturnValue;               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnlocked_ReturnValue;                   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4709[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameData*                              CallFunc_GetFSDGameData_ReturnValue;               // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlanetZoneForBiome_zoneIndex;          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_470A[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlanetZone*                            CallFunc_GetPlanetZoneForBiome_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_470B[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFSDSaveGame*                           CallFunc_GetFSDSaveGame_ReturnValue_1;             // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnlocked_ReturnValue_1;                 // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_470C[0x5];                                     // 0x0093(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetBrushResourceAsTexture2D_ReturnValue;  // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_470D[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_1;                 // 0x00A4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColorsAndOpacity_OutputColor;         // 0x00B4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_470E[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_470F[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x00D4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MenuColors_OutputColor_2;                 // 0x00E4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4710[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone) == 0x000008, "Wrong alignment on ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone");
static_assert(sizeof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone) == 0x000108, "Wrong size on ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, EntryPoint) == 0x000000, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::EntryPoint' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_GetAvailableMissions_ReturnValue) == 0x000008, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_GetAvailableMissions_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, Temp_int_Array_Index_Variable) == 0x000018, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_Array_Get_Item) == 0x000020, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, Temp_bool_True_if_break_was_hit_Variable) == 0x000028, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, Temp_bool_IsClosed_Variable) == 0x000029, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_Not_PreBool_ReturnValue) == 0x00002A, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, Temp_bool_Has_Been_Initd_Variable) == 0x00002B, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, K2Node_Event_IsDesignTime) == 0x00002C, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_MenuColors_OutputColor) == 0x000030, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_MenuColors_OutputColor' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_PlayAnimation_ReturnValue_1) == 0x000048, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_GetFSDSaveGame_ReturnValue) == 0x000050, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_GetFSDSaveGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_IsUnlocked_ReturnValue) == 0x000058, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_IsUnlocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_GetFSDGameData_ReturnValue) == 0x000060, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_GetFSDGameData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_GetPlanetZoneForBiome_zoneIndex) == 0x000068, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_GetPlanetZoneForBiome_zoneIndex' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_GetPlanetZoneForBiome_ReturnValue) == 0x000070, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_GetPlanetZoneForBiome_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000078, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_GetFSDSaveGame_ReturnValue_1) == 0x000080, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_GetFSDSaveGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000088, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_IsUnlocked_ReturnValue_1) == 0x000090, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_IsUnlocked_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_BooleanAND_ReturnValue) == 0x000091, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, Temp_byte_Variable) == 0x000092, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_GetBrushResourceAsTexture2D_ReturnValue) == 0x000098, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_GetBrushResourceAsTexture2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, Temp_byte_Variable_1) == 0x0000A0, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_MenuColors_OutputColor_1) == 0x0000A4, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_MenuColors_OutputColor_1' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_MenuColorsAndOpacity_OutputColor) == 0x0000B4, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_MenuColorsAndOpacity_OutputColor' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, Temp_bool_Variable) == 0x0000C4, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_BreakVector2D_X) == 0x0000C8, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_BreakVector2D_Y) == 0x0000CC, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, K2Node_Select_Default) == 0x0000D0, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, K2Node_MakeStruct_LinearColor) == 0x0000D4, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_MenuColors_OutputColor_2) == 0x0000E4, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_MenuColors_OutputColor_2' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, Temp_int_Loop_Counter_Variable) == 0x0000F4, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_Less_IntInt_ReturnValue) == 0x0000F8, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_Add_IntInt_ReturnValue) == 0x0000FC, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone, CallFunc_BooleanAND_ReturnValue_1) == 0x000100, "Member 'ITM_MisSel_PlanetZone_C_ExecuteUbergraph_ITM_MisSel_PlanetZone::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

}

