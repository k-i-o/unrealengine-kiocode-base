#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_HDCore

#include "Basic.hpp"

#include "BPFL_HDCore_classes.hpp"
#include "BPFL_HDCore_parameters.hpp"


namespace SDK
{

// Function BPFL_HDCore.BPFL_HDCore_C.GetPredefinedSquadNameByIndex
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SquadCreationIdx                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             SquadName                                              (Parm, OutParm)

void UBPFL_HDCore_C::GetPredefinedSquadNameByIndex(int32 SquadCreationIdx, class UObject* __WorldContext, class FText* SquadName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetPredefinedSquadNameByIndex");

	Params::BPFL_HDCore_C_GetPredefinedSquadNameByIndex Parms{};

	Parms.SquadCreationIdx = SquadCreationIdx;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SquadName != nullptr)
		*SquadName = std::move(Parms.SquadName);
}


// Function BPFL_HDCore.BPFL_HDCore_C.AbbreviateString
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           SourceString                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   MaxStartLength                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxEndLength                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Separator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           AbbrevString                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::AbbreviateString(const class FString& SourceString, int32 MaxStartLength, int32 MaxEndLength, const class FString& Separator, class UObject* __WorldContext, class FString* AbbrevString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "AbbreviateString");

	Params::BPFL_HDCore_C_AbbreviateString Parms{};

	Parms.SourceString = std::move(SourceString);
	Parms.MaxStartLength = MaxStartLength;
	Parms.MaxEndLength = MaxEndLength;
	Parms.Separator = std::move(Separator);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (AbbrevString != nullptr)
		*AbbrevString = std::move(Parms.AbbrevString);
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetPhoneticCodeWordByCharacter
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           LetterChar                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CodeWord                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetPhoneticCodeWordByCharacter(const class FString& LetterChar, class UObject* __WorldContext, class FString* CodeWord)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetPhoneticCodeWordByCharacter");

	Params::BPFL_HDCore_C_GetPhoneticCodeWordByCharacter Parms{};

	Parms.LetterChar = std::move(LetterChar);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (CodeWord != nullptr)
		*CodeWord = std::move(Parms.CodeWord);
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetPhoneticCodeWordByIndex
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   LetterIdx                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CodeWord                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetPhoneticCodeWordByIndex(int32 LetterIdx, class UObject* __WorldContext, class FString* CodeWord)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetPhoneticCodeWordByIndex");

	Params::BPFL_HDCore_C_GetPhoneticCodeWordByIndex Parms{};

	Parms.LetterIdx = LetterIdx;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (CodeWord != nullptr)
		*CodeWord = std::move(Parms.CodeWord);
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetIndexForPredefinedSquadName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             SquadName                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SquadNameIdx                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetIndexForPredefinedSquadName(const class FText& SquadName, class UObject* __WorldContext, int32* SquadNameIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetIndexForPredefinedSquadName");

	Params::BPFL_HDCore_C_GetIndexForPredefinedSquadName Parms{};

	Parms.SquadName = std::move(SquadName);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SquadNameIdx != nullptr)
		*SquadNameIdx = Parms.SquadNameIdx;
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetIndexForPhoneticCodeWord
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           CodeWord                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LetterIdx                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetIndexForPhoneticCodeWord(const class FString& CodeWord, class UObject* __WorldContext, int32* LetterIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetIndexForPhoneticCodeWord");

	Params::BPFL_HDCore_C_GetIndexForPhoneticCodeWord Parms{};

	Parms.CodeWord = std::move(CodeWord);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (LetterIdx != nullptr)
		*LetterIdx = Parms.LetterIdx;
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetControllerFromPlayerState
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerState*                     PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      OwnerC                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetControllerFromPlayerState(class APlayerState* PlayerState, class UObject* __WorldContext, class AController** OwnerC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetControllerFromPlayerState");

	Params::BPFL_HDCore_C_GetControllerFromPlayerState Parms{};

	Parms.PlayerState = PlayerState;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OwnerC != nullptr)
		*OwnerC = Parms.OwnerC;
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetPlayerControllerFromPlayerState
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerState*                     PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                OwnerPC                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetPlayerControllerFromPlayerState(class APlayerState* PlayerState, class UObject* __WorldContext, class APlayerController** OwnerPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetPlayerControllerFromPlayerState");

	Params::BPFL_HDCore_C_GetPlayerControllerFromPlayerState Parms{};

	Parms.PlayerState = PlayerState;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OwnerPC != nullptr)
		*OwnerPC = Parms.OwnerPC;
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetAllMapAssets
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAssetData>               LevelAssets                                            (Parm, OutParm, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetAllMapAssets(class UObject* __WorldContext, bool* bSuccess, TArray<struct FAssetData>* LevelAssets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetAllMapAssets");

	Params::BPFL_HDCore_C_GetAllMapAssets Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (LevelAssets != nullptr)
		*LevelAssets = std::move(Parms.LevelAssets);
}


// Function BPFL_HDCore.BPFL_HDCore_C.SplitLoadedPrimaryAssetIds
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FPrimaryAssetId>          AssetIds                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId>          UnloadedAssetIds                                       (Parm, OutParm, HasGetValueTypeHash)
// TArray<class UObject*>                  LoadedAssets                                           (Parm, OutParm, HasGetValueTypeHash)

void UBPFL_HDCore_C::SplitLoadedPrimaryAssetIds(TArray<struct FPrimaryAssetId>& AssetIds, class UObject* __WorldContext, TArray<struct FPrimaryAssetId>* UnloadedAssetIds, TArray<class UObject*>* LoadedAssets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "SplitLoadedPrimaryAssetIds");

	Params::BPFL_HDCore_C_SplitLoadedPrimaryAssetIds Parms{};

	Parms.AssetIds = std::move(AssetIds);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	AssetIds = std::move(Parms.AssetIds);

	if (UnloadedAssetIds != nullptr)
		*UnloadedAssetIds = std::move(Parms.UnloadedAssetIds);

	if (LoadedAssets != nullptr)
		*LoadedAssets = std::move(Parms.LoadedAssets);
}


// Function BPFL_HDCore.BPFL_HDCore_C.SplitLoadedPrimaryAssetClassIds
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FPrimaryAssetId>          AssetIds                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId>          UnloadedAssetIds                                       (Parm, OutParm, HasGetValueTypeHash)
// TArray<class UClass*>                   LoadedAssetClasses                                     (Parm, OutParm, HasGetValueTypeHash)

void UBPFL_HDCore_C::SplitLoadedPrimaryAssetClassIds(TArray<struct FPrimaryAssetId>& AssetIds, class UObject* __WorldContext, TArray<struct FPrimaryAssetId>* UnloadedAssetIds, TArray<class UClass*>* LoadedAssetClasses)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "SplitLoadedPrimaryAssetClassIds");

	Params::BPFL_HDCore_C_SplitLoadedPrimaryAssetClassIds Parms{};

	Parms.AssetIds = std::move(AssetIds);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	AssetIds = std::move(Parms.AssetIds);

	if (UnloadedAssetIds != nullptr)
		*UnloadedAssetIds = std::move(Parms.UnloadedAssetIds);

	if (LoadedAssetClasses != nullptr)
		*LoadedAssetClasses = std::move(Parms.LoadedAssetClasses);
}


// Function BPFL_HDCore.BPFL_HDCore_C.AddOption
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Options                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// class FString                           StrToAdd                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::AddOption(class FString& Options, class FString& StrToAdd, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "AddOption");

	Params::BPFL_HDCore_C_AddOption Parms{};

	Parms.Options = std::move(Options);
	Parms.StrToAdd = std::move(StrToAdd);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Options = std::move(Parms.Options);
	StrToAdd = std::move(Parms.StrToAdd);
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetContentRootPathFromPackageName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           PackageName                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           ContentRootPath                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetContentRootPathFromPackageName(class FString& PackageName, class UObject* __WorldContext, bool* bSuccess, class FString* ContentRootPath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetContentRootPathFromPackageName");

	Params::BPFL_HDCore_C_GetContentRootPathFromPackageName Parms{};

	Parms.PackageName = std::move(PackageName);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	PackageName = std::move(Parms.PackageName);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (ContentRootPath != nullptr)
		*ContentRootPath = std::move(Parms.ContentRootPath);
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetContentRootFromPackageName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           PackageName                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           ContentRootName                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetContentRootFromPackageName(class FString& PackageName, class UObject* __WorldContext, bool* bSuccess, class FString* ContentRootName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetContentRootFromPackageName");

	Params::BPFL_HDCore_C_GetContentRootFromPackageName Parms{};

	Parms.PackageName = std::move(PackageName);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	PackageName = std::move(Parms.PackageName);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (ContentRootName != nullptr)
		*ContentRootName = std::move(Parms.ContentRootName);
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetPluginDisplayNameFromPath
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           AssetPath                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ModName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetPluginDisplayNameFromPath(class FString& AssetPath, class UObject* __WorldContext, class FString* ModName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetPluginDisplayNameFromPath");

	Params::BPFL_HDCore_C_GetPluginDisplayNameFromPath Parms{};

	Parms.AssetPath = std::move(AssetPath);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	AssetPath = std::move(Parms.AssetPath);

	if (ModName != nullptr)
		*ModName = std::move(Parms.ModName);
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetPackageShortName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           LongName                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           ShortName                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetPackageShortName(class FString& LongName, class UObject* __WorldContext, bool* bSuccess, class FString* ShortName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetPackageShortName");

	Params::BPFL_HDCore_C_GetPackageShortName Parms{};

	Parms.LongName = std::move(LongName);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	LongName = std::move(Parms.LongName);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (ShortName != nullptr)
		*ShortName = std::move(Parms.ShortName);
}


// Function BPFL_HDCore.BPFL_HDCore_C.FindMapIdByDisplayName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             MapDisplayName                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FPrimaryAssetId>          MapIds                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId                  FoundMapId                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::FindMapIdByDisplayName(class FText& MapDisplayName, TArray<struct FPrimaryAssetId>& MapIds, class UObject* __WorldContext, struct FPrimaryAssetId* FoundMapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "FindMapIdByDisplayName");

	Params::BPFL_HDCore_C_FindMapIdByDisplayName Parms{};

	Parms.MapDisplayName = std::move(MapDisplayName);
	Parms.MapIds = std::move(MapIds);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	MapDisplayName = std::move(Parms.MapDisplayName);
	MapIds = std::move(Parms.MapIds);

	if (FoundMapId != nullptr)
		*FoundMapId = std::move(Parms.FoundMapId);
}


// Function BPFL_HDCore.BPFL_HDCore_C.CheckEntitlement
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FFEntitlementDefinition>  Entitlements                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEntitled                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPFL_HDCore_C::CheckEntitlement(TArray<struct FFEntitlementDefinition>& Entitlements, class UObject* __WorldContext, bool* bEntitled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "CheckEntitlement");

	Params::BPFL_HDCore_C_CheckEntitlement Parms{};

	Parms.Entitlements = std::move(Entitlements);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Entitlements = std::move(Parms.Entitlements);

	if (bEntitled != nullptr)
		*bEntitled = Parms.bEntitled;
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetHDPlayerControllerBP
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_HDPlayerControllerBase_C*     HDPC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetHDPlayerControllerBP(int32 PlayerIndex, class UObject* __WorldContext, class ABP_HDPlayerControllerBase_C** HDPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetHDPlayerControllerBP");

	Params::BPFL_HDCore_C_GetHDPlayerControllerBP Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HDPC != nullptr)
		*HDPC = Parms.HDPC;
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetHDPlayerCharacterBP
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_HDPlayerCharacterBase_C*      HDPlayerChar                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetHDPlayerCharacterBP(int32 PlayerIndex, class UObject* __WorldContext, class ABP_HDPlayerCharacterBase_C** HDPlayerChar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetHDPlayerCharacterBP");

	Params::BPFL_HDCore_C_GetHDPlayerCharacterBP Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HDPlayerChar != nullptr)
		*HDPlayerChar = Parms.HDPlayerChar;
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetHDGameInstance
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHDGameInstance*                  HDGI                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetHDGameInstance(class UObject* __WorldContext, class UHDGameInstance** HDGI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetHDGameInstance");

	Params::BPFL_HDCore_C_GetHDGameInstance Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HDGI != nullptr)
		*HDGI = Parms.HDGI;
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetHDGameMode
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHDBaseGameMode*                  HDGame                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetHDGameMode(class UObject* __WorldContext, class AHDBaseGameMode** HDGame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetHDGameMode");

	Params::BPFL_HDCore_C_GetHDGameMode Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HDGame != nullptr)
		*HDGame = Parms.HDGame;
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetHDGameState
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHDGameState*                     HDGameState                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetHDGameState(class UObject* __WorldContext, class AHDGameState** HDGameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetHDGameState");

	Params::BPFL_HDCore_C_GetHDGameState Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HDGameState != nullptr)
		*HDGameState = Parms.HDGameState;
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetHDGameUserSettings
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTBGameUserSettings*              HDGameUserSettings                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetHDGameUserSettings(class UObject* __WorldContext, class UTBGameUserSettings** HDGameUserSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetHDGameUserSettings");

	Params::BPFL_HDCore_C_GetHDGameUserSettings Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HDGameUserSettings != nullptr)
		*HDGameUserSettings = Parms.HDGameUserSettings;
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetHDHUDBP
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_HDHUDBase_C*                  HDHUD                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetHDHUDBP(int32 PlayerIndex, class UObject* __WorldContext, class ABP_HDHUDBase_C** HDHUD)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetHDHUDBP");

	Params::BPFL_HDCore_C_GetHDHUDBP Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HDHUD != nullptr)
		*HDHUD = Parms.HDHUD;
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetHDTeamStateForTeam
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EHDTeam                                 Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHDTeamState*                     HDTeamState                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetHDTeamStateForTeam(EHDTeam Team, class UObject* __WorldContext, class AHDTeamState** HDTeamState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetHDTeamStateForTeam");

	Params::BPFL_HDCore_C_GetHDTeamStateForTeam Parms{};

	Parms.Team = Team;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HDTeamState != nullptr)
		*HDTeamState = Parms.HDTeamState;
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetHDFactionInfoForTeam
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EHDTeam                                 Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           HDFactionInfoClass                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetHDFactionInfoForTeam(EHDTeam Team, class UObject* __WorldContext, class UClass** HDFactionInfoClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetHDFactionInfoForTeam");

	Params::BPFL_HDCore_C_GetHDFactionInfoForTeam Parms{};

	Parms.Team = Team;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HDFactionInfoClass != nullptr)
		*HDFactionInfoClass = Parms.HDFactionInfoClass;
}


// Function BPFL_HDCore.BPFL_HDCore_C.GetBluforOpforTeamStateForTeam
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EHDTeam                                 Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHDTeamState*                     HDTeamState                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_HDCore_C::GetBluforOpforTeamStateForTeam(EHDTeam Team, class UObject* __WorldContext, class AHDTeamState** HDTeamState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDCore_C", "GetBluforOpforTeamStateForTeam");

	Params::BPFL_HDCore_C_GetBluforOpforTeamStateForTeam Parms{};

	Parms.Team = Team;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HDTeamState != nullptr)
		*HDTeamState = Parms.HDTeamState;
}

}
