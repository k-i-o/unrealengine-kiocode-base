#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PLS_Base

#include "Basic.hpp"

#include "PLS_Base_classes.hpp"
#include "PLS_Base_parameters.hpp"


namespace SDK
{

// Function PLS_Base.PLS_Base_C.CompletedGenerationPass__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Pass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPLS_Passes                             PLS_Pass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APLS_Base_C::CompletedGenerationPass__DelegateSignature(int32 Pass, EPLS_Passes PLS_Pass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "CompletedGenerationPass__DelegateSignature");

	Params::PLS_Base_C_CompletedGenerationPass__DelegateSignature Parms{};

	Parms.Pass = Pass;
	Parms.PLS_Pass = PLS_Pass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PLS_Base.PLS_Base_C.ExecuteUbergraph_PLS_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APLS_Base_C::ExecuteUbergraph_PLS_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "ExecuteUbergraph_PLS_Base");

	Params::PLS_Base_C_ExecuteUbergraph_PLS_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PLS_Base.PLS_Base_C.StartMusicAndAmbient
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Music                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APLS_Base_C::StartMusicAndAmbient(int32 Music)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "StartMusicAndAmbient");

	Params::PLS_Base_C_StartMusicAndAmbient Parms{};

	Parms.Music = Music;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PLS_Base.PLS_Base_C.Generate_CriticalLargePass_Client
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_CriticalLargePass_Client()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "Generate_CriticalLargePass_Client");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.Generate_CriticalLargePass
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_CriticalLargePass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "Generate_CriticalLargePass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_6
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_Pass_6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "Generate_Pass_6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_2
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_Pass_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "Generate_Pass_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.OnCarverDataRecieved
// (Event, Public, BlueprintEvent)
// Parameters:
// EDebrisItemPass                         Pass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APLS_Base_C::OnCarverDataRecieved(EDebrisItemPass Pass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "OnCarverDataRecieved");

	Params::PLS_Base_C_OnCarverDataRecieved Parms{};

	Parms.Pass = Pass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_0_Client
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_Pass_0_Client()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "Generate_Pass_0_Client");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_0
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_Pass_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "Generate_Pass_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.CarveTunnels
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APLS_Base_C::CarveTunnels()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "CarveTunnels");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.GenerateLandscapeFromData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Seed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FRoomNode>                Param_Rooms                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FPathObstacle>            Obstacles                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APLS_Base_C::GenerateLandscapeFromData(int32 Param_Seed, const TArray<struct FRoomNode>& Param_Rooms, const TArray<struct FPathObstacle>& Obstacles)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "GenerateLandscapeFromData");

	Params::PLS_Base_C_GenerateLandscapeFromData Parms{};

	Parms.Param_Seed = Param_Seed;
	Parms.Param_Rooms = std::move(Param_Rooms);
	Parms.Obstacles = std::move(Obstacles);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PLS_Base.PLS_Base_C.StartGenerationOnClient
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerController*             Client                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APLS_Base_C::StartGenerationOnClient(class AFSDPlayerController* Client)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "StartGenerationOnClient");

	Params::PLS_Base_C_StartGenerationOnClient Parms{};

	Parms.Client = Client;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PLS_Base.PLS_Base_C.Generate_Tunnels
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_Tunnels()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "Generate_Tunnels");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.CreateGraphSecondPass
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::CreateGraphSecondPass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "CreateGraphSecondPass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.AddRoomToInitialState
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FRoomNode                        RoomNode                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APLS_Base_C::AddRoomToInitialState(const struct FRoomNode& RoomNode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "AddRoomToInitialState");

	Params::PLS_Base_C_AddRoomToInitialState Parms{};

	Parms.RoomNode = std::move(RoomNode);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PLS_Base.PLS_Base_C.OnPLSDataRecieved
// (Event, Public, BlueprintEvent)

void APLS_Base_C::OnPLSDataRecieved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "OnPLSDataRecieved");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.BeginLiveGeneration
// (Event, Public, BlueprintEvent)

void APLS_Base_C::BeginLiveGeneration()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "BeginLiveGeneration");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_7
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_Pass_7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "Generate_Pass_7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_4
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_Pass_4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "Generate_Pass_4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.GenerateLandscape
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APLS_Base_C::GenerateLandscape()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "GenerateLandscape");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_5_Clients
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_Pass_5_Clients()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "Generate_Pass_5_Clients");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_5_Server
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_Pass_5_Server()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "Generate_Pass_5_Server");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.Final Pass
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Final_Pass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "Final Pass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_3
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_Pass_3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "Generate_Pass_3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_1
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_Pass_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "Generate_Pass_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.Generate_Graph
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_Graph()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "Generate_Graph");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.CreateSpawn
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::CreateSpawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "CreateSpawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.FinalCommitDone
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::FinalCommitDone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "FinalCommitDone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.BaseLayerCommitDone
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::BaseLayerCommitDone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "BaseLayerCommitDone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APLS_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void APLS_Base_C::OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8");

	Params::PLS_Base_C_OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PLS_Base.PLS_Base_C.OnLoaded_11827D59481E498DEC10999DAE2915BF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void APLS_Base_C::OnLoaded_11827D59481E498DEC10999DAE2915BF(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "OnLoaded_11827D59481E498DEC10999DAE2915BF");

	Params::PLS_Base_C_OnLoaded_11827D59481E498DEC10999DAE2915BF Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PLS_Base.PLS_Base_C.GetRandomRoom
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class URoomGenerator*>           Param_Rooms                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    RemoveRoom                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class URoomGenerator*                   Room                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APLS_Base_C::GetRandomRoom(TArray<class URoomGenerator*>& Param_Rooms, bool RemoveRoom, class URoomGenerator** Room)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "GetRandomRoom");

	Params::PLS_Base_C_GetRandomRoom Parms{};

	Parms.Param_Rooms = std::move(Param_Rooms);
	Parms.RemoveRoom = RemoveRoom;

	UObject::ProcessEvent(Func, &Parms);

	Param_Rooms = std::move(Parms.Param_Rooms);

	if (Room != nullptr)
		*Room = Parms.Room;
}


// Function PLS_Base.PLS_Base_C.CreateCaveGraph
// (Public, BlueprintCallable, BlueprintEvent)

void APLS_Base_C::CreateCaveGraph()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "CreateCaveGraph");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.SaveInitialState
// (Public, BlueprintCallable, BlueprintEvent)

void APLS_Base_C::SaveInitialState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "SaveInitialState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.PlayMusicAndAmbient
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MusicIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APLS_Base_C::PlayMusicAndAmbient(int32 MusicIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "PlayMusicAndAmbient");

	Params::PLS_Base_C_PlayMusicAndAmbient Parms{};

	Parms.MusicIndex = MusicIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PLS_Base.PLS_Base_C.CallGenerationComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Pass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPLS_Passes                             PLS_Pass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APLS_Base_C::CallGenerationComplete(int32 Pass, EPLS_Passes PLS_Pass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "CallGenerationComplete");

	Params::PLS_Base_C_CallGenerationComplete Parms{};

	Parms.Pass = Pass;
	Parms.PLS_Pass = PLS_Pass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PLS_Base.PLS_Base_C.HasSelectedCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool APLS_Base_C::HasSelectedCharacter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "HasSelectedCharacter");

	Params::PLS_Base_C_HasSelectedCharacter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PLS_Base.PLS_Base_C.SpawnCriticalItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECriticalItemPass                       Pass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APLS_Base_C::SpawnCriticalItems(ECriticalItemPass Pass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "SpawnCriticalItems");

	Params::PLS_Base_C_SpawnCriticalItems Parms{};

	Parms.Pass = Pass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PLS_Base.PLS_Base_C.GetProceduralController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UProceduralController*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UProceduralController* APLS_Base_C::GetProceduralController()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "GetProceduralController");

	Params::PLS_Base_C_GetProceduralController Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PLS_Base.PLS_Base_C.EnsureSafelandingsite
// (Public, BlueprintCallable, BlueprintEvent)

void APLS_Base_C::EnsureSafelandingsite()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "EnsureSafelandingsite");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PLS_Base.PLS_Base_C.PlayDefaultAmbient
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APLS_Base_C::PlayDefaultAmbient()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PLS_Base_C", "PlayDefaultAmbient");

	UObject::ProcessEvent(Func, nullptr);
}

}
