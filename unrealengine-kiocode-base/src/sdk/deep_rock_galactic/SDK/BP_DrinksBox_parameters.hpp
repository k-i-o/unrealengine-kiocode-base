#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DrinksBox

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_DrinksBox.BP_DrinksBox_C.OnAvailableForNewDrink__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_DrinksBox_C_OnAvailableForNewDrink__DelegateSignature final
{
public:
	class ABP_DrinksBox_C*                        DrinkBox;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DrinksBox_C_OnAvailableForNewDrink__DelegateSignature) == 0x000008, "Wrong alignment on BP_DrinksBox_C_OnAvailableForNewDrink__DelegateSignature");
static_assert(sizeof(BP_DrinksBox_C_OnAvailableForNewDrink__DelegateSignature) == 0x000008, "Wrong size on BP_DrinksBox_C_OnAvailableForNewDrink__DelegateSignature");
static_assert(offsetof(BP_DrinksBox_C_OnAvailableForNewDrink__DelegateSignature, DrinkBox) == 0x000000, "Member 'BP_DrinksBox_C_OnAvailableForNewDrink__DelegateSignature::DrinkBox' has a wrong offset!");

// Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkReady__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_DrinksBox_C_OnDrinkReady__DelegateSignature final
{
public:
	class ABP_DrinksBox_C*                        DrinkBox;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DrinksBox_C_OnDrinkReady__DelegateSignature) == 0x000008, "Wrong alignment on BP_DrinksBox_C_OnDrinkReady__DelegateSignature");
static_assert(sizeof(BP_DrinksBox_C_OnDrinkReady__DelegateSignature) == 0x000008, "Wrong size on BP_DrinksBox_C_OnDrinkReady__DelegateSignature");
static_assert(offsetof(BP_DrinksBox_C_OnDrinkReady__DelegateSignature, DrinkBox) == 0x000000, "Member 'BP_DrinksBox_C_OnDrinkReady__DelegateSignature::DrinkBox' has a wrong offset!");

// Function BP_DrinksBox.BP_DrinksBox_C.OnStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_DrinksBox_C_OnStateChanged__DelegateSignature final
{
public:
	uint8                                         Param_State;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DrinksBox_C_OnStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on BP_DrinksBox_C_OnStateChanged__DelegateSignature");
static_assert(sizeof(BP_DrinksBox_C_OnStateChanged__DelegateSignature) == 0x000001, "Wrong size on BP_DrinksBox_C_OnStateChanged__DelegateSignature");
static_assert(offsetof(BP_DrinksBox_C_OnStateChanged__DelegateSignature, Param_State) == 0x000000, "Member 'BP_DrinksBox_C_OnStateChanged__DelegateSignature::Param_State' has a wrong offset!");

// Function BP_DrinksBox.BP_DrinksBox_C.ExecuteUbergraph_BP_DrinksBox
// 0x00B0 (0x00B0 - 0x0000)
struct BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_3AC3[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable;                               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsDrinkable_Actor;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AC4[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDrinkableDataAsset*                    K2Node_CustomEvent_Drinkable;                      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0040(0x0030)(IsPlainOldData, NoDestructor)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADrinkableActor*                        CallFunc_FinishSpawningActor_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;                 // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BarGlass_C*                         K2Node_DynamicCast_AsBP_Bar_Glass;                 // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox) == 0x000010, "Wrong alignment on BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox");
static_assert(sizeof(BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox) == 0x0000B0, "Wrong size on BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox");
static_assert(offsetof(BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox, EntryPoint) == 0x000000, "Member 'BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox, K2Node_CustomEvent_Loaded) == 0x000018, "Member 'BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox, Temp_class_Variable) == 0x000020, "Member 'BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox, K2Node_ClassDynamicCast_AsDrinkable_Actor) == 0x000028, "Member 'BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox::K2Node_ClassDynamicCast_AsDrinkable_Actor' has a wrong offset!");
static_assert(offsetof(BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox, K2Node_ClassDynamicCast_bSuccess) == 0x000030, "Member 'BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox, K2Node_CustomEvent_Drinkable) == 0x000038, "Member 'BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox::K2Node_CustomEvent_Drinkable' has a wrong offset!");
static_assert(offsetof(BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox, CallFunc_MakeTransform_ReturnValue) == 0x000040, "Member 'BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox, K2Node_CreateDelegate_OutputDelegate_1) == 0x000070, "Member 'BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000080, "Member 'BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox, CallFunc_FinishSpawningActor_ReturnValue) == 0x000088, "Member 'BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox, K2Node_CustomEvent_DestroyedActor) == 0x000090, "Member 'BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox, K2Node_DynamicCast_AsBP_Bar_Glass) == 0x000098, "Member 'BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox::K2Node_DynamicCast_AsBP_Bar_Glass' has a wrong offset!");
static_assert(offsetof(BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'BP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkableDestroyed
// 0x0008 (0x0008 - 0x0000)
struct BP_DrinksBox_C_OnDrinkableDestroyed final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DrinksBox_C_OnDrinkableDestroyed) == 0x000008, "Wrong alignment on BP_DrinksBox_C_OnDrinkableDestroyed");
static_assert(sizeof(BP_DrinksBox_C_OnDrinkableDestroyed) == 0x000008, "Wrong size on BP_DrinksBox_C_OnDrinkableDestroyed");
static_assert(offsetof(BP_DrinksBox_C_OnDrinkableDestroyed, DestroyedActor) == 0x000000, "Member 'BP_DrinksBox_C_OnDrinkableDestroyed::DestroyedActor' has a wrong offset!");

// Function BP_DrinksBox.BP_DrinksBox_C.Spawn Drink
// 0x0008 (0x0008 - 0x0000)
struct BP_DrinksBox_C_Spawn_Drink final
{
public:
	class UDrinkableDataAsset*                    Drinkable;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DrinksBox_C_Spawn_Drink) == 0x000008, "Wrong alignment on BP_DrinksBox_C_Spawn_Drink");
static_assert(sizeof(BP_DrinksBox_C_Spawn_Drink) == 0x000008, "Wrong size on BP_DrinksBox_C_Spawn_Drink");
static_assert(offsetof(BP_DrinksBox_C_Spawn_Drink, Drinkable) == 0x000000, "Member 'BP_DrinksBox_C_Spawn_Drink::Drinkable' has a wrong offset!");

// Function BP_DrinksBox.BP_DrinksBox_C.OnLoaded_C20044584A6E4C14650B318543524FEE
// 0x0008 (0x0008 - 0x0000)
struct BP_DrinksBox_C_OnLoaded_C20044584A6E4C14650B318543524FEE final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_DrinksBox_C_OnLoaded_C20044584A6E4C14650B318543524FEE) == 0x000008, "Wrong alignment on BP_DrinksBox_C_OnLoaded_C20044584A6E4C14650B318543524FEE");
static_assert(sizeof(BP_DrinksBox_C_OnLoaded_C20044584A6E4C14650B318543524FEE) == 0x000008, "Wrong size on BP_DrinksBox_C_OnLoaded_C20044584A6E4C14650B318543524FEE");
static_assert(offsetof(BP_DrinksBox_C_OnLoaded_C20044584A6E4C14650B318543524FEE, Loaded) == 0x000000, "Member 'BP_DrinksBox_C_OnLoaded_C20044584A6E4C14650B318543524FEE::Loaded' has a wrong offset!");

// Function BP_DrinksBox.BP_DrinksBox_C.OnRep_State
// 0x0001 (0x0001 - 0x0000)
struct BP_DrinksBox_C_OnRep_State final
{
public:
	bool                                          CallFunc_IsAvailable_IsAvailable;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DrinksBox_C_OnRep_State) == 0x000001, "Wrong alignment on BP_DrinksBox_C_OnRep_State");
static_assert(sizeof(BP_DrinksBox_C_OnRep_State) == 0x000001, "Wrong size on BP_DrinksBox_C_OnRep_State");
static_assert(offsetof(BP_DrinksBox_C_OnRep_State, CallFunc_IsAvailable_IsAvailable) == 0x000000, "Member 'BP_DrinksBox_C_OnRep_State::CallFunc_IsAvailable_IsAvailable' has a wrong offset!");

// Function BP_DrinksBox.BP_DrinksBox_C.IsAvailable
// 0x0002 (0x0002 - 0x0000)
struct BP_DrinksBox_C_IsAvailable final
{
public:
	bool                                          Param_IsAvailable;                                 // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DrinksBox_C_IsAvailable) == 0x000001, "Wrong alignment on BP_DrinksBox_C_IsAvailable");
static_assert(sizeof(BP_DrinksBox_C_IsAvailable) == 0x000002, "Wrong size on BP_DrinksBox_C_IsAvailable");
static_assert(offsetof(BP_DrinksBox_C_IsAvailable, Param_IsAvailable) == 0x000000, "Member 'BP_DrinksBox_C_IsAvailable::Param_IsAvailable' has a wrong offset!");
static_assert(offsetof(BP_DrinksBox_C_IsAvailable, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'BP_DrinksBox_C_IsAvailable::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_DrinksBox.BP_DrinksBox_C.OnRep_DrinkableActor
// 0x0001 (0x0001 - 0x0000)
struct BP_DrinksBox_C_OnRep_DrinkableActor final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DrinksBox_C_OnRep_DrinkableActor) == 0x000001, "Wrong alignment on BP_DrinksBox_C_OnRep_DrinkableActor");
static_assert(sizeof(BP_DrinksBox_C_OnRep_DrinkableActor) == 0x000001, "Wrong size on BP_DrinksBox_C_OnRep_DrinkableActor");
static_assert(offsetof(BP_DrinksBox_C_OnRep_DrinkableActor, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_DrinksBox_C_OnRep_DrinkableActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
