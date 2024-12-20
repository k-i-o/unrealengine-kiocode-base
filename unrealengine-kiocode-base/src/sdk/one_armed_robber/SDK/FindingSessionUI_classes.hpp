#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FindingSessionUI

#include "Basic.hpp"

#include "SteamCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FindingSessionUI.FindingSessionUI_C
// 0x0060 (0x02C0 - 0x0260)
class UFindingSessionUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                CloseButton;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                              Throbber_48;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSteamID>                       SearchingLobbiesFound;                             // 0x0278(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class URobberGI_C*                            As_Robber_GI;                                      // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSteamID>                       RegularLobbiesFound;                               // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          LookForSeaching_;                                  // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A1[0x7];                                      // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSteamID                               SteamIDLobbyFound;                                 // 0x02A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 MapInfo;                                           // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Random_;                                           // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_FindingSessionUI(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CheckLobbyMembers();
	void RestartSearch();
	void JoinSteamLobby(bool SearchingLobbies_);
	void OnlySearching();
	void FindLobbies();
	void BndEvt__FindingSessionUI_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void OnCallback_6CBB3ED848E3919BD8A0BA8FE448B377(const struct FJoinLobbyData& Data, bool bWasSuccessful);
	void OnSuccess_D131249B42A08D0B6896BB986D311A35();
	void OnFailure_D131249B42A08D0B6896BB986D311A35();
	void OnCallback_0841270945399718EF8851AB7EA24E54(const struct FLobbyMatchList& Data, bool bWasSuccessful);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FindingSessionUI_C">();
	}
	static class UFindingSessionUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFindingSessionUI_C>();
	}
};
static_assert(alignof(UFindingSessionUI_C) == 0x000008, "Wrong alignment on UFindingSessionUI_C");
static_assert(sizeof(UFindingSessionUI_C) == 0x0002C0, "Wrong size on UFindingSessionUI_C");
static_assert(offsetof(UFindingSessionUI_C, UberGraphFrame) == 0x000260, "Member 'UFindingSessionUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFindingSessionUI_C, CloseButton) == 0x000268, "Member 'UFindingSessionUI_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UFindingSessionUI_C, Throbber_48) == 0x000270, "Member 'UFindingSessionUI_C::Throbber_48' has a wrong offset!");
static_assert(offsetof(UFindingSessionUI_C, SearchingLobbiesFound) == 0x000278, "Member 'UFindingSessionUI_C::SearchingLobbiesFound' has a wrong offset!");
static_assert(offsetof(UFindingSessionUI_C, As_Robber_GI) == 0x000288, "Member 'UFindingSessionUI_C::As_Robber_GI' has a wrong offset!");
static_assert(offsetof(UFindingSessionUI_C, RegularLobbiesFound) == 0x000290, "Member 'UFindingSessionUI_C::RegularLobbiesFound' has a wrong offset!");
static_assert(offsetof(UFindingSessionUI_C, LookForSeaching_) == 0x0002A0, "Member 'UFindingSessionUI_C::LookForSeaching_' has a wrong offset!");
static_assert(offsetof(UFindingSessionUI_C, SteamIDLobbyFound) == 0x0002A8, "Member 'UFindingSessionUI_C::SteamIDLobbyFound' has a wrong offset!");
static_assert(offsetof(UFindingSessionUI_C, MapInfo) == 0x0002B0, "Member 'UFindingSessionUI_C::MapInfo' has a wrong offset!");
static_assert(offsetof(UFindingSessionUI_C, Random_) == 0x0002B8, "Member 'UFindingSessionUI_C::Random_' has a wrong offset!");

}

