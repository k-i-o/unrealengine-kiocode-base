#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MAG_Flamethrower_BottleTP

#include "Basic.hpp"

#include "MAG_Flamethrower_BottleTP_classes.hpp"
#include "MAG_Flamethrower_BottleTP_parameters.hpp"


namespace SDK
{

// Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.ExecuteUbergraph_MAG_Flamethrower_BottleTP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMAG_Flamethrower_BottleTP_C::ExecuteUbergraph_MAG_Flamethrower_BottleTP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MAG_Flamethrower_BottleTP_C", "ExecuteUbergraph_MAG_Flamethrower_BottleTP");

	Params::MAG_Flamethrower_BottleTP_C_ExecuteUbergraph_MAG_Flamethrower_BottleTP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.OnItemSkinned
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USkinEffect*                      Skin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMAG_Flamethrower_BottleTP_C::OnItemSkinned(class USkinEffect* Skin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MAG_Flamethrower_BottleTP_C", "OnItemSkinned");

	Params::MAG_Flamethrower_BottleTP_C_OnItemSkinned Parms{};

	Parms.Skin = Skin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.DoRelease
// (BlueprintCallable, BlueprintEvent)

void AMAG_Flamethrower_BottleTP_C::DoRelease()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MAG_Flamethrower_BottleTP_C", "DoRelease");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.OnSpawnRelease_Released
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AMAG_Flamethrower_BottleTP_C::OnSpawnRelease_Released()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MAG_Flamethrower_BottleTP_C", "OnSpawnRelease_Released");

	Params::MAG_Flamethrower_BottleTP_C_OnSpawnRelease_Released Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C.OnSpawnRelease_Attached
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AMAG_Flamethrower_BottleTP_C::OnSpawnRelease_Attached(class AActor* Parent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MAG_Flamethrower_BottleTP_C", "OnSpawnRelease_Attached");

	Params::MAG_Flamethrower_BottleTP_C_OnSpawnRelease_Attached Parms{};

	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
