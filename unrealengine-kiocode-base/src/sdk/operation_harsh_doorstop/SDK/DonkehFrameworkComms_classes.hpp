#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DonkehFrameworkComms

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "DonkehFrameworkComms_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class DonkehFrameworkComms.CreateCommChannelCallbackProxy
// 0x0058 (0x0088 - 0x0030)
class UCreateCommChannelCallbackProxy final : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             OnPerformSetup;                                    // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0050(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class APlayerController*                      CreateChannelOwnerPC;                              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDFCommChannelDefinition*               CreateChannelDef;                                  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1107[0x18];                                    // 0x0070(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UCreateCommChannelCallbackProxy* CreateCommChannelFor(class APlayerController* Player, const class UDFCommChannelDefinition* ChannelDef, const class FName ChannelNameOverride);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreateCommChannelCallbackProxy">();
	}
	static class UCreateCommChannelCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreateCommChannelCallbackProxy>();
	}
};
static_assert(alignof(UCreateCommChannelCallbackProxy) == 0x000008, "Wrong alignment on UCreateCommChannelCallbackProxy");
static_assert(sizeof(UCreateCommChannelCallbackProxy) == 0x000088, "Wrong size on UCreateCommChannelCallbackProxy");
static_assert(offsetof(UCreateCommChannelCallbackProxy, OnPerformSetup) == 0x000030, "Member 'UCreateCommChannelCallbackProxy::OnPerformSetup' has a wrong offset!");
static_assert(offsetof(UCreateCommChannelCallbackProxy, OnSuccess) == 0x000040, "Member 'UCreateCommChannelCallbackProxy::OnSuccess' has a wrong offset!");
static_assert(offsetof(UCreateCommChannelCallbackProxy, OnFailure) == 0x000050, "Member 'UCreateCommChannelCallbackProxy::OnFailure' has a wrong offset!");
static_assert(offsetof(UCreateCommChannelCallbackProxy, CreateChannelOwnerPC) == 0x000060, "Member 'UCreateCommChannelCallbackProxy::CreateChannelOwnerPC' has a wrong offset!");
static_assert(offsetof(UCreateCommChannelCallbackProxy, CreateChannelDef) == 0x000068, "Member 'UCreateCommChannelCallbackProxy::CreateChannelDef' has a wrong offset!");

// Class DonkehFrameworkComms.DFCommChannel
// 0x0068 (0x0090 - 0x0028)
class UDFCommChannel final : public UObject
{
public:
	uint8                                         Pad_1108[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bChannelPreInitialized : 1;                        // 0x0030(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bChannelClosed : 1;                                // 0x0030(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bCompletedSetup : 1;                               // 0x0030(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bChannelOpenOnClient : 1;                          // 0x0030(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_1109[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ChannelName;                                       // 0x0034(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_110A[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDFCommChannelDefinition*               ChannelDefinition;                                 // 0x0040(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                                ChannelState;                                      // 0x0048(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UDFCommsFormatBase*>             AssociatedCommsFormats;                            // 0x0050(0x0010)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_110B[0x30];                                    // 0x0060(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetChannelState(class UObject* NewChannelState);

	class FText GetChannelDisplayName() const;
	class FName GetChannelGroupNameIfValid() const;
	class FName GetChannelName() const;
	class FString GetChannelNameStr() const;
	bool HasFormat(const class UDFCommsFormatBase* Format) const;
	bool IsReady() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFCommChannel">();
	}
	static class UDFCommChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFCommChannel>();
	}
};
static_assert(alignof(UDFCommChannel) == 0x000008, "Wrong alignment on UDFCommChannel");
static_assert(sizeof(UDFCommChannel) == 0x000090, "Wrong size on UDFCommChannel");
static_assert(offsetof(UDFCommChannel, ChannelName) == 0x000034, "Member 'UDFCommChannel::ChannelName' has a wrong offset!");
static_assert(offsetof(UDFCommChannel, ChannelDefinition) == 0x000040, "Member 'UDFCommChannel::ChannelDefinition' has a wrong offset!");
static_assert(offsetof(UDFCommChannel, ChannelState) == 0x000048, "Member 'UDFCommChannel::ChannelState' has a wrong offset!");
static_assert(offsetof(UDFCommChannel, AssociatedCommsFormats) == 0x000050, "Member 'UDFCommChannel::AssociatedCommsFormats' has a wrong offset!");

// Class DonkehFrameworkComms.DFCommChannelDefinition
// 0x0088 (0x00B8 - 0x0030)
class UDFCommChannelDefinition final : public UDataAsset
{
public:
	class FName                                   ChannelName;                                       // 0x0030(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                   ChannelDisplayName;                                // 0x0038(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)
	uint8                                         bInstanceChannelWithGroup : 1;                     // 0x0050(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_110D[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ChannelGroupName;                                  // 0x0054(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_110E[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 ChannelStateClass;                                 // 0x0060(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class UDFCommsFormatBase>, EDFCommsFormatAccessRule> FormatAccessRules;                                 // 0x0068(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)

public:
	bool InstancesChannelWithGroup() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFCommChannelDefinition">();
	}
	static class UDFCommChannelDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFCommChannelDefinition>();
	}
};
static_assert(alignof(UDFCommChannelDefinition) == 0x000008, "Wrong alignment on UDFCommChannelDefinition");
static_assert(sizeof(UDFCommChannelDefinition) == 0x0000B8, "Wrong size on UDFCommChannelDefinition");
static_assert(offsetof(UDFCommChannelDefinition, ChannelName) == 0x000030, "Member 'UDFCommChannelDefinition::ChannelName' has a wrong offset!");
static_assert(offsetof(UDFCommChannelDefinition, ChannelDisplayName) == 0x000038, "Member 'UDFCommChannelDefinition::ChannelDisplayName' has a wrong offset!");
static_assert(offsetof(UDFCommChannelDefinition, ChannelGroupName) == 0x000054, "Member 'UDFCommChannelDefinition::ChannelGroupName' has a wrong offset!");
static_assert(offsetof(UDFCommChannelDefinition, ChannelStateClass) == 0x000060, "Member 'UDFCommChannelDefinition::ChannelStateClass' has a wrong offset!");
static_assert(offsetof(UDFCommChannelDefinition, FormatAccessRules) == 0x000068, "Member 'UDFCommChannelDefinition::FormatAccessRules' has a wrong offset!");

// Class DonkehFrameworkComms.DFCommChannelStateInterface
// 0x0000 (0x0028 - 0x0028)
class IDFCommChannelStateInterface final : public IInterface
{
public:
	void BP_OnSetupState(const struct FDFCommStateSetupParams& SetupParams);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFCommChannelStateInterface">();
	}
	static class IDFCommChannelStateInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IDFCommChannelStateInterface>();
	}
};
static_assert(alignof(IDFCommChannelStateInterface) == 0x000008, "Wrong alignment on IDFCommChannelStateInterface");
static_assert(sizeof(IDFCommChannelStateInterface) == 0x000028, "Wrong size on IDFCommChannelStateInterface");

// Class DonkehFrameworkComms.DFCommChannelStateLibrary
// 0x0000 (0x0028 - 0x0028)
class UDFCommChannelStateLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UDFCommChannel* GetOwningCommChannel(TScriptInterface<class IDFCommChannelStateInterface> ChannelState);
	static bool IsChannelStatePrepared(TScriptInterface<class IDFCommChannelStateInterface> ChannelState);
	static void NotifyChannelOfPreparedState(TScriptInterface<class IDFCommChannelStateInterface> ChannelState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFCommChannelStateLibrary">();
	}
	static class UDFCommChannelStateLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFCommChannelStateLibrary>();
	}
};
static_assert(alignof(UDFCommChannelStateLibrary) == 0x000008, "Wrong alignment on UDFCommChannelStateLibrary");
static_assert(sizeof(UDFCommChannelStateLibrary) == 0x000028, "Wrong size on UDFCommChannelStateLibrary");

// Class DonkehFrameworkComms.DFCommDeveloperSettings
// 0x00B8 (0x00F0 - 0x0038)
class UDFCommDeveloperSettings final : public UDeveloperSettings
{
public:
	struct FSoftClassPath                         PlayerCommsCompClass;                              // 0x0038(0x0018)(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<struct FDFCommsFormatEntry>              CommsFormatDefinitions;                            // 0x0050(0x0050)(Edit, Config, NativeAccessSpecifierPublic)
	TSet<struct FDFCommChannelEntry>              CommChannelDefinitions;                            // 0x00A0(0x0050)(Edit, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFCommDeveloperSettings">();
	}
	static class UDFCommDeveloperSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFCommDeveloperSettings>();
	}
};
static_assert(alignof(UDFCommDeveloperSettings) == 0x000008, "Wrong alignment on UDFCommDeveloperSettings");
static_assert(sizeof(UDFCommDeveloperSettings) == 0x0000F0, "Wrong size on UDFCommDeveloperSettings");
static_assert(offsetof(UDFCommDeveloperSettings, PlayerCommsCompClass) == 0x000038, "Member 'UDFCommDeveloperSettings::PlayerCommsCompClass' has a wrong offset!");
static_assert(offsetof(UDFCommDeveloperSettings, CommsFormatDefinitions) == 0x000050, "Member 'UDFCommDeveloperSettings::CommsFormatDefinitions' has a wrong offset!");
static_assert(offsetof(UDFCommDeveloperSettings, CommChannelDefinitions) == 0x0000A0, "Member 'UDFCommDeveloperSettings::CommChannelDefinitions' has a wrong offset!");

// Class DonkehFrameworkComms.DFCommsFormatBase
// 0x00A8 (0x00D0 - 0x0028)
class UDFCommsFormatBase : public UObject
{
public:
	uint8                                         bSingleChannelUsageOnly : 1;                       // 0x0028(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bRequiresValidSingleChannelAssignment : 1;         // 0x0028(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_1110[0x17];                                    // 0x0029(0x0017)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDFGenericChannelMsg                   LastReceivedCommMsg;                               // 0x0040(0x0038)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1111[0x50];                                    // 0x0078(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   FormatName;                                        // 0x00C8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	bool CanReadFromChannel(const class FName ChannelName) const;
	bool CanWriteToChannel(const class FName ChannelName) const;
	bool HasAccessToChannel(const class FName ChannelName, const EDFCommsFormatAccessRule AccessRulesToCheck) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFCommsFormatBase">();
	}
	static class UDFCommsFormatBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFCommsFormatBase>();
	}
};
static_assert(alignof(UDFCommsFormatBase) == 0x000008, "Wrong alignment on UDFCommsFormatBase");
static_assert(sizeof(UDFCommsFormatBase) == 0x0000D0, "Wrong size on UDFCommsFormatBase");
static_assert(offsetof(UDFCommsFormatBase, LastReceivedCommMsg) == 0x000040, "Member 'UDFCommsFormatBase::LastReceivedCommMsg' has a wrong offset!");
static_assert(offsetof(UDFCommsFormatBase, FormatName) == 0x0000C8, "Member 'UDFCommsFormatBase::FormatName' has a wrong offset!");

// Class DonkehFrameworkComms.DFCommStatics
// 0x0000 (0x0028 - 0x0028)
class UDFCommStatics final : public UBlueprintFunctionLibrary
{
public:
	static void ClearCurrentExclusiveChannelForFormat(class APlayerController* Player, class UDFCommsFormatBase* FormatToUpdate);
	static void ClearCurrentExclusiveChannelForFormatByName(class APlayerController* Player, const class FName FormatNameToUpdate);
	static class UDFCommChannel* CommsFormatGetExclusiveChannel(const class UDFCommsFormatBase* Format);
	static class UDFCommChannel* CommsFormatGetExclusiveChannelByName(const class APlayerController* PlayerFormatOwner, const class FName FormatName);
	static bool CommsFormatHasExclusiveChannel(const class UDFCommsFormatBase* Format);
	static bool CommsFormatHasExclusiveChannelByName(const class APlayerController* PlayerFormatOwner, const class FName FormatName);
	static bool CommsFormatUsesChannel(const class APlayerController* Player, const class UDFCommsFormatBase* Format, const class UDFCommChannel* ChannelToCheck);
	static bool CommsFormatUsesChannelByName(const class APlayerController* Player, const class FName FormatName, const class FName ChannelNameToCheck);
	static bool FindCommsComponentByPlayer(const class APlayerController* Player, class UDFPlayerCommsComponent** OutPlayerCommsComp);
	static bool PlayerHasCommChannel(const class APlayerController* Player, const class UDFCommChannel* Channel);
	static bool PlayerHasCommChannelByName(const class APlayerController* Player, const class FName ChannelName);
	static void SendCommsViaChannel(class APlayerController* PlayerSender, class UDFCommsFormatBase* FormatToUse, class UDFCommChannel* ReceivingChannel, struct FDFGenericChannelMsg* MsgToSend, bool bUseChannelAsNewExclusive);
	static void SendCommsViaChannelByName(class APlayerController* PlayerSender, const class FName FormatName, const class FName ReceivingChannelName, struct FDFGenericChannelMsg* MsgToSend, bool bUseChannelAsNewExclusive);
	static void UpdateExclusiveChannelForFormat(class APlayerController* Player, class UDFCommsFormatBase* FormatToUpdate, class UDFCommChannel* SingleChannelToUse);
	static void UpdateExclusiveChannelForFormatByName(class APlayerController* Player, const class FName FormatNameToUpdate, const class FName SingleChannelNameToUse);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFCommStatics">();
	}
	static class UDFCommStatics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFCommStatics>();
	}
};
static_assert(alignof(UDFCommStatics) == 0x000008, "Wrong alignment on UDFCommStatics");
static_assert(sizeof(UDFCommStatics) == 0x000028, "Wrong size on UDFCommStatics");

// Class DonkehFrameworkComms.DFCommWorldSubsystem
// 0x0000 (0x0030 - 0x0030)
class UDFCommWorldSubsystem final : public UWorldSubsystem
{
public:
	static class UDFPlayerCommsComponent* InitPlayerComms(class APlayerController* Player);

	void GameModePostLogin(class AGameModeBase* GameMode, class APlayerController* NewPlayer);
	void PostSeamlessTravelPCDestroyed(class AActor* DestroyedPlayerActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFCommWorldSubsystem">();
	}
	static class UDFCommWorldSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFCommWorldSubsystem>();
	}
};
static_assert(alignof(UDFCommWorldSubsystem) == 0x000008, "Wrong alignment on UDFCommWorldSubsystem");
static_assert(sizeof(UDFCommWorldSubsystem) == 0x000030, "Wrong size on UDFCommWorldSubsystem");

// Class DonkehFrameworkComms.DFPlayerCommsComponent
// 0x3A10 (0x3AC0 - 0x00B0)
class UDFPlayerCommsComponent final : public UActorComponent
{
public:
	TMap<class FName, class UDFCommsFormatBase*>  CommsFormats;                                      // 0x00B0(0x0050)(Transient, NativeAccessSpecifierPrivate)
	struct FDFCommChannelMap                      OpenCommChannels;                                  // 0x0100(0x0170)(Net, Transient, NativeAccessSpecifierPrivate)
	struct FDFChannelMsgRecord                    MsgSendBuffer[0x64];                               // 0x0270(0x0048)(Transient, NativeAccessSpecifierPrivate)
	TArray<struct FDFChannelMsgRecord>            QueuedMsgsToSend;                                  // 0x1E90(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDFChannelMsgRecord                    MsgRecvBuffer[0x64];                               // 0x1EA0(0x0048)(Transient, NativeAccessSpecifierPrivate)

public:
	void ClearCurrentExclusiveChannelForCommsFormat(class UDFCommsFormatBase* Format);
	void ClearCurrentExclusiveChannelForCommsFormatByName(const class FName& FormatName);
	void ClientClearCurrentExclusiveChannelForCommsFormat(const class FName& FormatName);
	void ClientRecvCommMsgFromChannel(const class FName& SourceFormatName, class UDFCommChannel* SourceChannel, const struct FDFGenericChannelMsg& ReceivedCommMsg);
	void ClientUpdateExclusiveChannelToUseForCommsFormat(const class FName& FormatName, class UDFCommChannel* SingleChannelToUse);
	void ReceiveCommChannelAdded(class UDFCommChannel* AddedChannel);
	void ReceiveCommChannelPreRemoved(class UDFCommChannel* RemovedChannel);
	void RemoveAllCommChannels();
	void RemoveCommChannel(class UDFCommChannel* ChannelToRemove);
	void RemoveCommChannelByName(const class FName ChannelNameToRemove);
	void SendCommMsgViaChannel(class UDFCommsFormatBase* FormatToUse, class UDFCommChannel* ReceivingChannel, struct FDFGenericChannelMsg* CommMsgToSend, bool bUseChannelAsNewExclusive);
	void SendCommMsgViaChannelByName(const class FName& FormatName, const class FName& ReceivingChannelName, struct FDFGenericChannelMsg* CommMsgToSend, bool bUseChannelAsNewExclusive);
	void ServerChannelOpened(class UDFCommChannel* AckedChannel);
	void ServerClearCurrentExclusiveChannelForCommsFormat(const class FName& FormatName);
	void ServerRequestExclusiveChannelUsedForCommsFormat(const class FName& RequestedFormatName);
	void ServerSendCommMsgViaChannel(const class FName& FormatName, class UDFCommChannel* ReceivingChannel, const struct FDFGenericChannelMsg& CommMsg);
	void ServerSendCommMsgViaExclChannel(const class FName& FormatName, class UDFCommChannel* ReceivingChannel, const struct FDFGenericChannelMsg& CommMsg);
	void ServerUpdateExclusiveChannelToUseForCommsFormat(const class FName& FormatName, class UDFCommChannel* SingleChannelToUse);
	void UpdateExclusiveChannelToUseForCommsFormat(class UDFCommsFormatBase* Format, class UDFCommChannel* SingleChannelToUse);
	void UpdateExclusiveChannelToUseForCommsFormatByName(const class FName& FormatName, const class FName& SingleChannelNameToUse);

	bool CanRecvCommMsgViaChannel(const class FName& SourceFormatName, const class FName& SourceChannelName, const struct FDFGenericChannelMsg& CommMsgToReceive) const;
	bool CanSendAndRecvCommMsgViaChannel(const class FName& FormatName, const class FName& ChannelName, const struct FDFGenericChannelMsg& CommMsg) const;
	bool CanSendCommMsgViaChannel(class UDFCommsFormatBase* ReceivingFormat, class UDFCommChannel* ReceivingChannel, const struct FDFGenericChannelMsg& CommMsgToSend, bool bUseChannelAsNewExclusive) const;
	bool ContainsAssociatedCommsFormat(const class FName FormatName) const;
	bool ContainsCommChannel(const class UDFCommChannel* ChannelToCheck) const;
	bool ContainsCommChannelByName(const class FName ChannelNameToCheck) const;
	bool FindAssociatedCommsFormat(const class FName FormatName, class UDFCommsFormatBase** OutFormatFound) const;
	bool FindCommChannel(const class FName ChannelName, class UDFCommChannel** OutChannelFound) const;
	bool FormatHasExclusiveChannel(const class UDFCommsFormatBase* Format) const;
	bool FormatHasExclusiveChannelByName(const class FName& FormatName) const;
	bool FormatUsesChannel(const class UDFCommsFormatBase* Format, const class UDFCommChannel* ChannelToCheck) const;
	bool FormatUsesChannelByName(const class FName& FormatName, const class FName& ChannelNameToCheck) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFPlayerCommsComponent">();
	}
	static class UDFPlayerCommsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFPlayerCommsComponent>();
	}
};
static_assert(alignof(UDFPlayerCommsComponent) == 0x000008, "Wrong alignment on UDFPlayerCommsComponent");
static_assert(sizeof(UDFPlayerCommsComponent) == 0x003AC0, "Wrong size on UDFPlayerCommsComponent");
static_assert(offsetof(UDFPlayerCommsComponent, CommsFormats) == 0x0000B0, "Member 'UDFPlayerCommsComponent::CommsFormats' has a wrong offset!");
static_assert(offsetof(UDFPlayerCommsComponent, OpenCommChannels) == 0x000100, "Member 'UDFPlayerCommsComponent::OpenCommChannels' has a wrong offset!");
static_assert(offsetof(UDFPlayerCommsComponent, MsgSendBuffer) == 0x000270, "Member 'UDFPlayerCommsComponent::MsgSendBuffer' has a wrong offset!");
static_assert(offsetof(UDFPlayerCommsComponent, QueuedMsgsToSend) == 0x001E90, "Member 'UDFPlayerCommsComponent::QueuedMsgsToSend' has a wrong offset!");
static_assert(offsetof(UDFPlayerCommsComponent, MsgRecvBuffer) == 0x001EA0, "Member 'UDFPlayerCommsComponent::MsgRecvBuffer' has a wrong offset!");

// Class DonkehFrameworkComms.DFTextCommsFormat
// 0x0010 (0x00E0 - 0x00D0)
class UDFTextCommsFormat final : public UDFCommsFormatBase
{
public:
	FMulticastInlineDelegateProperty_             OnChatMsgReceived;                                 // 0x00D0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFTextCommsFormat">();
	}
	static class UDFTextCommsFormat* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFTextCommsFormat>();
	}
};
static_assert(alignof(UDFTextCommsFormat) == 0x000008, "Wrong alignment on UDFTextCommsFormat");
static_assert(sizeof(UDFTextCommsFormat) == 0x0000E0, "Wrong size on UDFTextCommsFormat");
static_assert(offsetof(UDFTextCommsFormat, OnChatMsgReceived) == 0x0000D0, "Member 'UDFTextCommsFormat::OnChatMsgReceived' has a wrong offset!");

// Class DonkehFrameworkComms.DFVOIPCommsFormat
// 0x0030 (0x0100 - 0x00D0)
class UDFVOIPCommsFormat final : public UDFCommsFormatBase
{
public:
	FMulticastInlineDelegateProperty_             OnPlayerTalkingStateChangedOnChannel;              // 0x00D0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_112C[0x20];                                    // 0x00E0(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnTalkerPSDestroyed(class AActor* DestroyedPS);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFVOIPCommsFormat">();
	}
	static class UDFVOIPCommsFormat* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFVOIPCommsFormat>();
	}
};
static_assert(alignof(UDFVOIPCommsFormat) == 0x000008, "Wrong alignment on UDFVOIPCommsFormat");
static_assert(sizeof(UDFVOIPCommsFormat) == 0x000100, "Wrong size on UDFVOIPCommsFormat");
static_assert(offsetof(UDFVOIPCommsFormat, OnPlayerTalkingStateChangedOnChannel) == 0x0000D0, "Member 'UDFVOIPCommsFormat::OnPlayerTalkingStateChangedOnChannel' has a wrong offset!");

// Class DonkehFrameworkComms.DFVOIPCommStatics
// 0x0000 (0x0028 - 0x0028)
class UDFVOIPCommStatics final : public UBlueprintFunctionLibrary
{
public:
	static void ApplyVOIPTalkerSettingsForPlayer(const class APlayerState* TalkerPlayerState, uint8 ListenerLocalUserNum);
	static const struct FDFPlayerVOIPTalkingState GetValidVoiceEntryForPlayer(const class APlayerState* PlayerState);
	static class UVoipListenerSynthComponent* GetVoiceSynthComponentForVOIPTalker(class UVOIPTalker* Talker);
	static class UVoipListenerSynthComponent* GetVoiceSynthOwnerOfAudioComponent(class UAudioComponent* TalkerAudioComp);
	static bool IsPlayerTalkerPendingReset(const class APlayerState* PlayerState);
	static bool IsPlayerTalking(const class APlayerState* PlayerState);
	static bool IsPlayerTalkingOverChannel(const class APlayerState* PlayerState, const class UDFCommChannel* TalkChannel);
	static bool WasPlayerTalking(const class APlayerState* PlayerState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DFVOIPCommStatics">();
	}
	static class UDFVOIPCommStatics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDFVOIPCommStatics>();
	}
};
static_assert(alignof(UDFVOIPCommStatics) == 0x000008, "Wrong alignment on UDFVOIPCommStatics");
static_assert(sizeof(UDFVOIPCommStatics) == 0x000028, "Wrong size on UDFVOIPCommStatics");

}
