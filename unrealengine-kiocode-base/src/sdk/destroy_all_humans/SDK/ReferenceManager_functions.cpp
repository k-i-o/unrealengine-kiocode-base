#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReferenceManager

#include "Basic.hpp"

#include "ReferenceManager_classes.hpp"
#include "ReferenceManager_parameters.hpp"


namespace SDK
{

// Function ReferenceManager.ReferenceManager_C.CreateHUD
// (Public, BlueprintCallable, BlueprintEvent)

void AReferenceManager_C::CreateHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferenceManager_C", "CreateHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ReferenceManager.ReferenceManager_C.ExecuteUbergraph_ReferenceManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AReferenceManager_C::ExecuteUbergraph_ReferenceManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferenceManager_C", "ExecuteUbergraph_ReferenceManager");

	Params::ReferenceManager_C_ExecuteUbergraph_ReferenceManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReferenceManager.ReferenceManager_C.GetDeltaTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Param_DT                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AReferenceManager_C::GetDeltaTime(double* Param_DT)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferenceManager_C", "GetDeltaTime");

	Params::ReferenceManager_C_GetDeltaTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_DT != nullptr)
		*Param_DT = Parms.Param_DT;
}


// Function ReferenceManager.ReferenceManager_C.GetDisplayManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADisplayManager_C*                NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AReferenceManager_C::GetDisplayManager(class ADisplayManager_C** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferenceManager_C", "GetDisplayManager");

	Params::ReferenceManager_C_GetDisplayManager Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function ReferenceManager.ReferenceManager_C.GetEnemyManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyManager_C*                  Param_EnemyManager                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AReferenceManager_C::GetEnemyManager(class AEnemyManager_C** Param_EnemyManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferenceManager_C", "GetEnemyManager");

	Params::ReferenceManager_C_GetEnemyManager Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_EnemyManager != nullptr)
		*Param_EnemyManager = Parms.Param_EnemyManager;
}


// Function ReferenceManager.ReferenceManager_C.GetGridManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGridManagerBP_C*                 Param_Grid                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AReferenceManager_C::GetGridManager(class AGridManagerBP_C** Param_Grid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferenceManager_C", "GetGridManager");

	Params::ReferenceManager_C_GetGridManager Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Grid != nullptr)
		*Param_Grid = Parms.Param_Grid;
}


// Function ReferenceManager.ReferenceManager_C.GetHUD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHUDWIdget_C*                     Param_HUD                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AReferenceManager_C::GetHUD(class UHUDWIdget_C** Param_HUD)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferenceManager_C", "GetHUD");

	Params::ReferenceManager_C_GetHUD Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_HUD != nullptr)
		*Param_HUD = Parms.Param_HUD;
}


// Function ReferenceManager.ReferenceManager_C.GetImporter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AImporterBP_C*                    Param_Importer                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AReferenceManager_C::GetImporter(class AImporterBP_C** Param_Importer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferenceManager_C", "GetImporter");

	Params::ReferenceManager_C_GetImporter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Importer != nullptr)
		*Param_Importer = Parms.Param_Importer;
}


// Function ReferenceManager.ReferenceManager_C.GetPlayerController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerControllerBP_C*            PC                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AReferenceManager_C::GetPlayerController(class APlayerControllerBP_C** PC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferenceManager_C", "GetPlayerController");

	Params::ReferenceManager_C_GetPlayerController Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PC != nullptr)
		*PC = Parms.PC;
}


// Function ReferenceManager.ReferenceManager_C.GetTurnMgr
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATurnManager_C*                   Turn_Mg                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AReferenceManager_C::GetTurnMgr(class ATurnManager_C** Turn_Mg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferenceManager_C", "GetTurnMgr");

	Params::ReferenceManager_C_GetTurnMgr Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Turn_Mg != nullptr)
		*Turn_Mg = Parms.Turn_Mg;
}


// Function ReferenceManager.ReferenceManager_C.ImPlayerController
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerControllerBP_C*            PC                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AReferenceManager_C::ImPlayerController(class APlayerControllerBP_C* PC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferenceManager_C", "ImPlayerController");

	Params::ReferenceManager_C_ImPlayerController Parms{};

	Parms.PC = PC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReferenceManager.ReferenceManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AReferenceManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferenceManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ReferenceManager.ReferenceManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AReferenceManager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferenceManager_C", "ReceiveTick");

	Params::ReferenceManager_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
