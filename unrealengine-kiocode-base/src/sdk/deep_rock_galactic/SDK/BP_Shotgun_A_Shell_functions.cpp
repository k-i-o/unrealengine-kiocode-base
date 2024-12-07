#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Shotgun_A_Shell

#include "Basic.hpp"

#include "BP_Shotgun_A_Shell_classes.hpp"
#include "BP_Shotgun_A_Shell_parameters.hpp"


namespace SDK
{

// Function BP_Shotgun_A_Shell.BP_Shotgun_A_Shell_C.OnItemSkinned
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USkinEffect*                      Skin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Shotgun_A_Shell_C::OnItemSkinned(class USkinEffect* Skin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shotgun_A_Shell_C", "OnItemSkinned");

	Params::BP_Shotgun_A_Shell_C_OnItemSkinned Parms{};

	Parms.Skin = Skin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Shotgun_A_Shell.BP_Shotgun_A_Shell_C.ExecuteUbergraph_BP_Shotgun_A_Shell
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Shotgun_A_Shell_C::ExecuteUbergraph_BP_Shotgun_A_Shell(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shotgun_A_Shell_C", "ExecuteUbergraph_BP_Shotgun_A_Shell");

	Params::BP_Shotgun_A_Shell_C_ExecuteUbergraph_BP_Shotgun_A_Shell Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

