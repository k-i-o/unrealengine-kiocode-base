#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Modio

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "UMG_classes.hpp"
#include "Modio_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class Modio.ModioCommonTypesLibrary
// 0x0000 (0x0028 - 0x0028)
class UModioCommonTypesLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class FString Conv_ApiKeyToString(const struct FModioApiKey& ApiKey);
	static class FString Conv_EmailAddressToString(const struct FModioEmailAddress& EmailAddress);
	static class FString Conv_EmailAuthCodeToString(const struct FModioEmailAuthCode& EmailAuthCode);
	static class FString Conv_FileMetadataIDToString(const struct FModioFileMetadataID& FileMetadataID);
	static class FString Conv_GameIDToString(const struct FModioGameID& GameId);
	static class FString Conv_ModIDToString(const struct FModioModID& ModId);
	static struct FModioEmailAddress Conv_StringToEmailAddress(const class FString& Email);
	static struct FModioEmailAuthCode Conv_StringToEmailAuthCode(const class FString& AuthCode);
	static class FString Conv_UserIDToString(const struct FModioUserID& UserId);
	static bool EqualTo(const struct FModioModID& A, const struct FModioModID& B);
	static int64 GetRawValueFromModID(const struct FModioModID& In);
	static struct FModioApiKey MakeApiKey(const class FString& ApiKey);
	static struct FModioAuthenticationParams MakeAuthParams(const class FString& AuthToken, const class FString& EmailAddress, const bool bHasAcceptedTOS);
	static struct FModioGameID MakeGameId(int64 GameId);
	static struct FModioInitializeOptions MakeInitializeOptions(int64 GameId, const class FString& ApiKey, EModioEnvironment GameEnvironment, EModioPortal PortalInUse);
	static bool NotEqualTo(const struct FModioModID& A, const struct FModioModID& B);
	static struct FModioInitializeOptions SetPortal(const struct FModioInitializeOptions& Options, EModioPortal PortalToUse);
	static struct FModioInitializeOptions SetSessionIdentifier(const struct FModioInitializeOptions& Options, const class FString& SessionIdentifier);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioCommonTypesLibrary">();
	}
	static class UModioCommonTypesLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioCommonTypesLibrary>();
	}
};
static_assert(alignof(UModioCommonTypesLibrary) == 0x000008, "Wrong alignment on UModioCommonTypesLibrary");
static_assert(sizeof(UModioCommonTypesLibrary) == 0x000028, "Wrong size on UModioCommonTypesLibrary");

// Class Modio.ModioCreateModLibrary
// 0x0000 (0x0028 - 0x0028)
class UModioCreateModLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void SetChangelogString(struct FModioCreateModFileParams& In, const class FString& Changelog);
	static void SetDescription(struct FModioCreateModParams& In, const class FString& Description);
	static void SetHomepageURL(struct FModioCreateModParams& In, const class FString& HomepageURL);
	static void SetInitialVisibility(struct FModioCreateModParams& In, bool InitialVisibility);
	static void SetMarkAsActiveRelease(struct FModioCreateModFileParams& In, bool bMarkAsActiveRelease);
	static void SetMetadataBlob(struct FModioCreateModParams& In, const class FString& MetadataBlob);
	static void SetModFileMetadataBlob(struct FModioCreateModFileParams& In, const class FString& MetadataBlob);
	static void SetModfilePlatforms(struct FModioCreateModFileParams& In, TArray<EModioModfilePlatform>& Platforms);
	static void SetTags(struct FModioCreateModParams& In, TArray<class FString>& Tags);
	static void SetVersionString(struct FModioCreateModFileParams& In, const class FString& Version);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioCreateModLibrary">();
	}
	static class UModioCreateModLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioCreateModLibrary>();
	}
};
static_assert(alignof(UModioCreateModLibrary) == 0x000008, "Wrong alignment on UModioCreateModLibrary");
static_assert(sizeof(UModioCreateModLibrary) == 0x000028, "Wrong size on UModioCreateModLibrary");

// Class Modio.ModioEditModLibrary
// 0x0000 (0x0028 - 0x0028)
class UModioEditModLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void SetDescription(struct FModioEditModParams& In, const class FString& Description);
	static void SetHomepageURL(struct FModioEditModParams& In, const class FString& HomepageURL);
	static void SetMaturityFlags(struct FModioEditModParams& In, EModioMaturityFlags MaturityFlags);
	static void SetMetadataBlob(struct FModioEditModParams& In, const class FString& MetadataBlob);
	static void SetName(struct FModioEditModParams& In, const class FString& Param_Name);
	static void SetNamePath(struct FModioEditModParams& In, const class FString& NamePath);
	static void SetSummary(struct FModioEditModParams& In, const class FString& Summary);
	static void SetVisibility(struct FModioEditModParams& In, bool Visibility);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioEditModLibrary">();
	}
	static class UModioEditModLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioEditModLibrary>();
	}
};
static_assert(alignof(UModioEditModLibrary) == 0x000008, "Wrong alignment on UModioEditModLibrary");
static_assert(sizeof(UModioEditModLibrary) == 0x000028, "Wrong size on UModioEditModLibrary");

// Class Modio.ModioErrorCodeLibrary
// 0x0000 (0x0028 - 0x0028)
class UModioErrorCodeLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class FString GetMessage(const struct FModioErrorCode& Error);
	static int32 GetValue(const struct FModioErrorCode& Error);
	static bool IsError(const struct FModioErrorCode& Error);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioErrorCodeLibrary">();
	}
	static class UModioErrorCodeLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioErrorCodeLibrary>();
	}
};
static_assert(alignof(UModioErrorCodeLibrary) == 0x000008, "Wrong alignment on UModioErrorCodeLibrary");
static_assert(sizeof(UModioErrorCodeLibrary) == 0x000028, "Wrong size on UModioErrorCodeLibrary");

// Class Modio.ModioErrorConditionLibrary
// 0x0000 (0x0028 - 0x0028)
class UModioErrorConditionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool ErrorCodeMatches(const struct FModioErrorCode& ErrorCode, EModioErrorCondition Condition);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioErrorConditionLibrary">();
	}
	static class UModioErrorConditionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioErrorConditionLibrary>();
	}
};
static_assert(alignof(UModioErrorConditionLibrary) == 0x000008, "Wrong alignment on UModioErrorConditionLibrary");
static_assert(sizeof(UModioErrorConditionLibrary) == 0x000028, "Wrong size on UModioErrorConditionLibrary");

// Class Modio.ModioExampleLibrary
// 0x0000 (0x0028 - 0x0028)
class UModioExampleLibrary final : public UBlueprintFunctionLibrary
{
public:
	static EModioAvatarSize GetAvatarThumbnailSize();
	static EModioLogoSize GetLogoFullSize();
	static EModioLogoSize GetLogoThumbnailSize();
	static void ListUserSubscriptionAsync(const struct FModioFilterParams& FilterParams, TDelegate<void(const struct FModioErrorCode& ErrorCode, const struct FModioOptionalModInfoList& Result)> Callback);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioExampleLibrary">();
	}
	static class UModioExampleLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioExampleLibrary>();
	}
};
static_assert(alignof(UModioExampleLibrary) == 0x000008, "Wrong alignment on UModioExampleLibrary");
static_assert(sizeof(UModioExampleLibrary) == 0x000028, "Wrong size on UModioExampleLibrary");

// Class Modio.ModioFilterParamsLibrary
// 0x0000 (0x0028 - 0x0028)
class UModioFilterParamsLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FModioFilterParams ExcludingIDs(struct FModioFilterParams& Filter, const TArray<struct FModioModID>& IDs);
	static struct FModioFilterParams IndexedResults(struct FModioFilterParams& Filter, int64 StartIndex, int64 ResultCount);
	static struct FModioFilterParams MarkedLiveAfter(struct FModioFilterParams& Filter, const struct FDateTime& LiveAfter);
	static struct FModioFilterParams MarkedLiveBefore(struct FModioFilterParams& Filter, const struct FDateTime& LiveBefore);
	static struct FModioFilterParams MatchingIDs(struct FModioFilterParams& Filter, const TArray<struct FModioModID>& IDs);
	static struct FModioFilterParams MetadataLike(struct FModioFilterParams& Filter, const class FString& SearchString);
	static struct FModioFilterParams NameContains(struct FModioFilterParams& Filter, const class FString& SearchString);
	static struct FModioFilterParams NameContainsStrings(struct FModioFilterParams& Filter, const TArray<class FString>& SearchStrings);
	static struct FModioFilterParams PagedResults(struct FModioFilterParams& Filter, int64 PageNumber, int64 PageSize);
	static struct FModioFilterParams SortBy(struct FModioFilterParams& Filter, EModioSortFieldType ByField, EModioSortDirection ByDirection);
	static struct FModioFilterParams WithoutTag(struct FModioFilterParams& Filter, const class FString& Tag);
	static struct FModioFilterParams WithoutTags(struct FModioFilterParams& Filter, const TArray<class FString>& NewTags);
	static struct FModioFilterParams WithTag(struct FModioFilterParams& Filter, const class FString& Tag);
	static struct FModioFilterParams WithTags(struct FModioFilterParams& Filter, const TArray<class FString>& NewTags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioFilterParamsLibrary">();
	}
	static class UModioFilterParamsLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioFilterParamsLibrary>();
	}
};
static_assert(alignof(UModioFilterParamsLibrary) == 0x000008, "Wrong alignment on UModioFilterParamsLibrary");
static_assert(sizeof(UModioFilterParamsLibrary) == 0x000028, "Wrong size on UModioFilterParamsLibrary");

// Class Modio.ModioImageLibrary
// 0x0000 (0x0028 - 0x0028)
class UModioImageLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FVector2D GetAvatarSize(class UTexture* Avatar, EModioAvatarSize AvatarSize);
	static struct FVector2D GetGallerySize(class UTexture* GalleryImage, EModioGallerySize GallerySize);
	static struct FVector2D GetLogoSize(class UTexture* Logo, EModioLogoSize LogoSize);
	static EModioImageState GetState(const struct FModioImageWrapper& Image);
	static class UTexture2DDynamic* GetTexture(const struct FModioImageWrapper& Image);
	static void LoadAsync(const struct FModioImageWrapper& Image, TDelegate<void(class UTexture2DDynamic* Texture)> OnImageLoaded);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioImageLibrary">();
	}
	static class UModioImageLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioImageLibrary>();
	}
};
static_assert(alignof(UModioImageLibrary) == 0x000008, "Wrong alignment on UModioImageLibrary");
static_assert(sizeof(UModioImageLibrary) == 0x000028, "Wrong size on UModioImageLibrary");

// Class Modio.ModioModCollectionLibrary
// 0x0000 (0x0028 - 0x0028)
class UModioModCollectionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FModioModID GetID(const struct FModioModCollectionEntry& Entry);
	static const struct FModioModInfo GetModProfile(const struct FModioModCollectionEntry& Entry);
	static EModioModState GetModState(const struct FModioModCollectionEntry& Entry);
	static const class FString GetPath(const struct FModioModCollectionEntry& Entry);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioModCollectionLibrary">();
	}
	static class UModioModCollectionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioModCollectionLibrary>();
	}
};
static_assert(alignof(UModioModCollectionLibrary) == 0x000008, "Wrong alignment on UModioModCollectionLibrary");
static_assert(sizeof(UModioModCollectionLibrary) == 0x000028, "Wrong size on UModioModCollectionLibrary");

// Class Modio.ModioModDependenciesLibrary
// 0x0000 (0x0028 - 0x0028)
class UModioModDependenciesLibrary final : public UBlueprintFunctionLibrary
{
public:
	static const TArray<struct FModioModDependency> GetDependencies(const struct FModioModDependencyList& ModTags);
	static const struct FModioPagedResult GetPagedResult(const struct FModioModDependencyList& ModTags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioModDependenciesLibrary">();
	}
	static class UModioModDependenciesLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioModDependenciesLibrary>();
	}
};
static_assert(alignof(UModioModDependenciesLibrary) == 0x000008, "Wrong alignment on UModioModDependenciesLibrary");
static_assert(sizeof(UModioModDependenciesLibrary) == 0x000028, "Wrong size on UModioModDependenciesLibrary");

// Class Modio.ModioModInfoListLibrary
// 0x0000 (0x0028 - 0x0028)
class UModioModInfoListLibrary final : public UBlueprintFunctionLibrary
{
public:
	static const TArray<struct FModioModInfo> GetMods(const struct FModioModInfoList& ModInfoList);
	static const struct FModioPagedResult GetPagedResult(const struct FModioModInfoList& ModInfoList);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioModInfoListLibrary">();
	}
	static class UModioModInfoListLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioModInfoListLibrary>();
	}
};
static_assert(alignof(UModioModInfoListLibrary) == 0x000008, "Wrong alignment on UModioModInfoListLibrary");
static_assert(sizeof(UModioModInfoListLibrary) == 0x000028, "Wrong size on UModioModInfoListLibrary");

// Class Modio.ModioModTagOptionsLibrary
// 0x0000 (0x0028 - 0x0028)
class UModioModTagOptionsLibrary final : public UBlueprintFunctionLibrary
{
public:
	static const struct FModioPagedResult GetPagedResult(const struct FModioModTagOptions& ModTags);
	static const TArray<struct FModioModTagInfo> GetTags(const struct FModioModTagOptions& ModTags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioModTagOptionsLibrary">();
	}
	static class UModioModTagOptionsLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioModTagOptionsLibrary>();
	}
};
static_assert(alignof(UModioModTagOptionsLibrary) == 0x000008, "Wrong alignment on UModioModTagOptionsLibrary");
static_assert(sizeof(UModioModTagOptionsLibrary) == 0x000028, "Wrong size on UModioModTagOptionsLibrary");

// Class Modio.ModioOptionalLibrary
// 0x0000 (0x0028 - 0x0028)
class UModioOptionalLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool GetValue_ModioOptionalImage(const struct FModioOptionalImage& OptionalImage, struct FModioImageWrapper* Image);
	static bool GetValue_ModioOptionalModDependencyList(const struct FModioOptionalModDependencyList& OptionalDependencyList, struct FModioModDependencyList* DependencyList);
	static bool GetValue_ModioOptionalModID(const struct FModioOptionalModID& OptionalID, struct FModioModID* ID);
	static bool GetValue_ModioOptionalModInfo(const struct FModioOptionalModInfo& OptionalModInfo, struct FModioModInfo* ModInfo);
	static bool GetValue_ModioOptionalModInfoList(const struct FModioOptionalModInfoList& OptionalModInfoList, struct FModioModInfoList* ModInfoList);
	static bool GetValue_ModioOptionalModProgressInfo(const struct FModioOptionalModProgressInfo& OptionalModProgressInfo, struct FModioModProgressInfo* ModProgressInfo);
	static bool GetValue_ModioOptionalModTagOptions(const struct FModioOptionalModTagOptions& OptionalModTagOptions, struct FModioModTagOptions* ModTagOptions);
	static bool GetValue_ModioOptionalTerms(const struct FModioOptionalTerms& OptionalTerms, struct FModioTerms* Terms);
	static bool GetValue_ModioOptionalUser(const struct FModioOptionalUser& OptionalUser, struct FModioUser* User);
	static bool IsSet_ModioOptionalImage(const struct FModioOptionalImage& OptionalImage);
	static bool IsSet_ModioOptionalModDependencyList(const struct FModioOptionalModDependencyList& OptionalDependencyList);
	static bool IsSet_ModioOptionalModID(const struct FModioOptionalModID& OptionalID);
	static bool IsSet_ModioOptionalModInfo(const struct FModioOptionalModInfo& OptionalModInfo);
	static bool IsSet_ModioOptionalModInfoList(const struct FModioOptionalModInfoList& OptionalModInfoList);
	static bool IsSet_ModioOptionalModProgressInfo(const struct FModioOptionalModProgressInfo& OptionalModProgressInfo);
	static bool IsSet_ModioOptionalModTagOptions(const struct FModioOptionalModTagOptions& OptionalModTagOptions);
	static bool IsSet_ModioOptionalTerms(const struct FModioOptionalTerms& OptionalTerms);
	static bool IsSet_ModioOptionalUser(const struct FModioOptionalUser& OptionalUser);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioOptionalLibrary">();
	}
	static class UModioOptionalLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioOptionalLibrary>();
	}
};
static_assert(alignof(UModioOptionalLibrary) == 0x000008, "Wrong alignment on UModioOptionalLibrary");
static_assert(sizeof(UModioOptionalLibrary) == 0x000028, "Wrong size on UModioOptionalLibrary");

// Class Modio.ModioPopupBase
// 0x0000 (0x0260 - 0x0260)
class UModioPopupBase final : public UUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioPopupBase">();
	}
	static class UModioPopupBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioPopupBase>();
	}
};
static_assert(alignof(UModioPopupBase) == 0x000008, "Wrong alignment on UModioPopupBase");
static_assert(sizeof(UModioPopupBase) == 0x000260, "Wrong size on UModioPopupBase");

// Class Modio.ModioPopupContainer
// 0x0020 (0x0280 - 0x0260)
class UModioPopupContainer final : public UUserWidget
{
public:
	TArray<class UModioPopupBase*>                PopupStack;                                        // 0x0260(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UModioPopupBase*>                PopupCache;                                        // 0x0270(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

public:
	class UModioPopupBase* PopPopup(TSubclassOf<class UModioPopupBase> PopupClass);
	class UModioPopupBase* PushPopup(TSubclassOf<class UModioPopupBase> PopupClass);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioPopupContainer">();
	}
	static class UModioPopupContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioPopupContainer>();
	}
};
static_assert(alignof(UModioPopupContainer) == 0x000008, "Wrong alignment on UModioPopupContainer");
static_assert(sizeof(UModioPopupContainer) == 0x000280, "Wrong size on UModioPopupContainer");
static_assert(offsetof(UModioPopupContainer, PopupStack) == 0x000260, "Member 'UModioPopupContainer::PopupStack' has a wrong offset!");
static_assert(offsetof(UModioPopupContainer, PopupCache) == 0x000270, "Member 'UModioPopupContainer::PopupCache' has a wrong offset!");

// Class Modio.ModioReportLibrary
// 0x0000 (0x0028 - 0x0028)
class UModioReportLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FModioReportParams MakeReportForGame(const struct FModioGameID& Game, EModioReportType Type, const class FString& ReportDescription, const class FString& ReporterName, const class FString& ReporterContact);
	static struct FModioReportParams MakeReportForMod(const struct FModioModID& Mod, EModioReportType Type, const class FString& ReportDescription, const class FString& ReporterName, const class FString& ReporterContact);
	static struct FModioReportParams MakeReportForUser(const struct FModioUserID& User, EModioReportType Type, const class FString& ReportDescription, const class FString& ReporterName, const class FString& ReporterContact);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioReportLibrary">();
	}
	static class UModioReportLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioReportLibrary>();
	}
};
static_assert(alignof(UModioReportLibrary) == 0x000008, "Wrong alignment on UModioReportLibrary");
static_assert(sizeof(UModioReportLibrary) == 0x000028, "Wrong size on UModioReportLibrary");

// Class Modio.ModioSDKLibrary
// 0x0000 (0x0028 - 0x0028)
class UModioSDKLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class FString Conv_Int64ToString(int64 InInt);
	static class FText Conv_Int64ToText(int64 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits);
	static class FText Filesize_ToString(int64 Filesize, int32 MaxDecimals, EFileSizeUnit Unit);
	static struct FModioApiKey GetProjectApiKey();
	static EModioEnvironment GetProjectEnvironment();
	static struct FModioGameID GetProjectGameId();
	static struct FModioInitializeOptions GetProjectInitializeOptions();
	static struct FModioInitializeOptions GetProjectInitializeOptionsForSessionId(const class FString& SessionId);
	static bool IsValidEmailAddressFormat(const class FString& String);
	static bool IsValidSecurityCodeFormat(const class FString& String);
	static float Pct_Int64Int64(int64 Dividend, int64 Divisor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioSDKLibrary">();
	}
	static class UModioSDKLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioSDKLibrary>();
	}
};
static_assert(alignof(UModioSDKLibrary) == 0x000008, "Wrong alignment on UModioSDKLibrary");
static_assert(sizeof(UModioSDKLibrary) == 0x000028, "Wrong size on UModioSDKLibrary");

// Class Modio.ModioSettings
// 0x0020 (0x0048 - 0x0028)
class UModioSettings final : public UObject
{
public:
	int64                                         GameId;                                            // 0x0028(0x0008)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ApiKey;                                            // 0x0030(0x0010)(Edit, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EModioEnvironment                             Environment;                                       // 0x0040(0x0001)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EModioLogLevel                                LogLevel;                                          // 0x0041(0x0001)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EModioPortal                                  DefaultPortal;                                     // 0x0042(0x0001)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10CD[0x5];                                     // 0x0043(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioSettings">();
	}
	static class UModioSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioSettings>();
	}
};
static_assert(alignof(UModioSettings) == 0x000008, "Wrong alignment on UModioSettings");
static_assert(sizeof(UModioSettings) == 0x000048, "Wrong size on UModioSettings");
static_assert(offsetof(UModioSettings, GameId) == 0x000028, "Member 'UModioSettings::GameId' has a wrong offset!");
static_assert(offsetof(UModioSettings, ApiKey) == 0x000030, "Member 'UModioSettings::ApiKey' has a wrong offset!");
static_assert(offsetof(UModioSettings, Environment) == 0x000040, "Member 'UModioSettings::Environment' has a wrong offset!");
static_assert(offsetof(UModioSettings, LogLevel) == 0x000041, "Member 'UModioSettings::LogLevel' has a wrong offset!");
static_assert(offsetof(UModioSettings, DefaultPortal) == 0x000042, "Member 'UModioSettings::DefaultPortal' has a wrong offset!");

// Class Modio.ModioSubsystem
// 0x0140 (0x0170 - 0x0030)
class UModioSubsystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_10CE[0x140];                                   // 0x0030(0x0140)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void DisableModManagement();
	TArray<struct FModioValidationError> GetLastValidationError();
	bool IsModManagementBusy();
	void K2_ArchiveModAsync(const struct FModioModID& Mod, TDelegate<void(const struct FModioErrorCode& ErrorCode)> Callback);
	void K2_AuthenticateUserEmailAsync(const struct FModioEmailAuthCode& AuthenticationCode, TDelegate<void(const struct FModioErrorCode& ErrorCode)> Callback);
	void K2_AuthenticateUserExternalAsync(const struct FModioAuthenticationParams& User, EModioAuthenticationProvider Provider, TDelegate<void(const struct FModioErrorCode& ErrorCode)> Callback);
	void K2_ClearUserDataAsync(TDelegate<void(const struct FModioErrorCode& ErrorCode)> Callback);
	struct FModioErrorCode K2_EnableModManagement(TDelegate<void(const struct FModioModManagementEvent& Event)> Callback);
	void K2_FetchExternalUpdatesAsync(TDelegate<void(const struct FModioErrorCode& ErrorCode)> OnFetchDone);
	void K2_ForceUninstallModAsync(const struct FModioModID& ModToRemove, TDelegate<void(const struct FModioErrorCode& ErrorCode)> Callback);
	struct FModioModCreationHandle K2_GetModCreationHandle();
	void K2_GetModDependenciesAsync(const struct FModioModID& ModId, TDelegate<void(const struct FModioErrorCode& ErrorCode, const struct FModioOptionalModDependencyList& Dependencies)> Callback);
	void K2_GetModInfoAsync(const struct FModioModID& ModId, TDelegate<void(const struct FModioErrorCode& ErrorCode, const struct FModioOptionalModInfo& ModInfo)> Callback);
	void K2_GetModMediaAvatarAsync(const struct FModioModID& ModId, EModioAvatarSize AvatarSize, TDelegate<void(const struct FModioErrorCode& ErrorCode, const struct FModioOptionalImage& Path)> Callback);
	void K2_GetModMediaGalleryImageAsync(const struct FModioModID& ModId, EModioGallerySize GallerySize, int32 Param_Index, TDelegate<void(const struct FModioErrorCode& ErrorCode, const struct FModioOptionalImage& Path)> Callback);
	void K2_GetModMediaLogoAsync(const struct FModioModID& ModId, EModioLogoSize LogoSize, TDelegate<void(const struct FModioErrorCode& ErrorCode, const struct FModioOptionalImage& Path)> Callback);
	void K2_GetModTagOptionsAsync(TDelegate<void(const struct FModioErrorCode& ErrorCode, const struct FModioOptionalModTagOptions& ModTagOptions)> Callback);
	void K2_GetTermsOfUseAsync(EModioAuthenticationProvider Provider, EModioLanguage Locale, TDelegate<void(const struct FModioErrorCode& ErrorCode, const struct FModioOptionalTerms& Terms)> Callback);
	void K2_GetUserMediaAvatarAsync(EModioAvatarSize AvatarSize, TDelegate<void(const struct FModioErrorCode& ErrorCode, const struct FModioOptionalImage& Path)> Callback);
	void K2_InitializeAsync(const struct FModioInitializeOptions& InitializeOptions, TDelegate<void(const struct FModioErrorCode& ErrorCode)> OnInitComplete);
	void K2_ListAllModsAsync(const struct FModioFilterParams& Filter, TDelegate<void(const struct FModioErrorCode& ErrorCode, const struct FModioOptionalModInfoList& Result)> Callback);
	struct FModioOptionalModProgressInfo K2_QueryCurrentModUpdate();
	struct FModioOptionalUser K2_QueryUserProfile();
	void K2_ReportContentAsync(const struct FModioReportParams& Report, TDelegate<void(const struct FModioErrorCode& ErrorCode)> Callback);
	void K2_RequestEmailAuthCodeAsync(const struct FModioEmailAddress& EmailAddress, TDelegate<void(const struct FModioErrorCode& ErrorCode)> Callback);
	void K2_ShutdownAsync(TDelegate<void(const struct FModioErrorCode& ErrorCode)> OnShutdownComplete);
	void K2_SubmitModChangesAsync(const struct FModioModID& Mod, const struct FModioEditModParams& Params_0, TDelegate<void(const struct FModioErrorCode& ErrorCode, const struct FModioOptionalModInfo& ModInfo)> Callback);
	void K2_SubmitModRatingAsync(const struct FModioModID& Mod, EModioRating Rating, TDelegate<void(const struct FModioErrorCode& ErrorCode)> Callback);
	void K2_SubmitNewModAsync(const struct FModioModCreationHandle& Handle, const struct FModioCreateModParams& Params_0, TDelegate<void(const struct FModioErrorCode& ErrorCode, const struct FModioOptionalModID& NewModID)> Callback);
	void K2_SubmitNewModFileForMod(const struct FModioModID& Mod, const struct FModioCreateModFileParams& Params_0);
	void K2_SubscribeToModAsync(const struct FModioModID& ModToSubscribeTo, TDelegate<void(const struct FModioErrorCode& ErrorCode)> OnSubscribeComplete);
	void K2_UnsubscribeFromModAsync(const struct FModioModID& ModToUnsubscribeFrom, TDelegate<void(const struct FModioErrorCode& ErrorCode)> OnUnsubscribeComplete);
	void K2_VerifyUserAuthenticationAsync(TDelegate<void(const struct FModioErrorCode& ErrorCode)> Callback);
	struct FModioErrorCode PrioritizeTransferForMod(const struct FModioModID& ModToPrioritize);
	TMap<struct FModioModID, struct FModioModCollectionEntry> QuerySystemInstallations();
	const TMap<struct FModioModID, struct FModioModCollectionEntry> QueryUserInstallations(bool bIncludeOutdatedMods);
	const TMap<struct FModioModID, struct FModioModCollectionEntry> QueryUserSubscriptions();
	void RunPendingHandlers();
	void SetLogLevel(EModioLogLevel UnrealLogLevel);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioSubsystem">();
	}
	static class UModioSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioSubsystem>();
	}
};
static_assert(alignof(UModioSubsystem) == 0x000008, "Wrong alignment on UModioSubsystem");
static_assert(sizeof(UModioSubsystem) == 0x000170, "Wrong size on UModioSubsystem");

// Class Modio.ModioTestSettings
// 0x0000 (0x0028 - 0x0028)
class UModioTestSettings final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioTestSettings">();
	}
	static class UModioTestSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioTestSettings>();
	}
};
static_assert(alignof(UModioTestSettings) == 0x000008, "Wrong alignment on UModioTestSettings");
static_assert(sizeof(UModioTestSettings) == 0x000028, "Wrong size on UModioTestSettings");

// Class Modio.ModioUnsigned64Library
// 0x0000 (0x0028 - 0x0028)
class UModioUnsigned64Library final : public UBlueprintFunctionLibrary
{
public:
	static struct FModioUnsigned64 Add(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS);
	static void BreakToComponents(const struct FModioUnsigned64& In, int32* High, int32* Low);
	static float Conv_FModioUnsigned64ToFloat(const struct FModioUnsigned64& In);
	static struct FModioUnsigned64 Divide(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS);
	static float DivideFloat(const struct FModioUnsigned64& LHS, const float RHS);
	static float DivideToFloat(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS);
	static bool EqualTo(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS);
	static bool GreaterThan(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS);
	static bool LessThan(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS);
	static struct FModioUnsigned64 MakeFromComponents(const int32& High, const int32& Low);
	static bool NotEqualTo(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS);
	static float Percentage_Unsigned64(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS);
	static struct FModioUnsigned64 Subtract(const struct FModioUnsigned64& LHS, const struct FModioUnsigned64& RHS);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModioUnsigned64Library">();
	}
	static class UModioUnsigned64Library* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModioUnsigned64Library>();
	}
};
static_assert(alignof(UModioUnsigned64Library) == 0x000008, "Wrong alignment on UModioUnsigned64Library");
static_assert(sizeof(UModioUnsigned64Library) == 0x000028, "Wrong size on UModioUnsigned64Library");

}
