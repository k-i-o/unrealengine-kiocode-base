#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Basic file containing structs required by the SDK

#include <string>
#include <iostream>
#include <Windows.h>
#include <functional>
#include <type_traits>

#include "../PropertyFixup.hpp"
#include "../UnrealContainers.hpp"

namespace SDK
{

using namespace UC;

#include "../NameCollisions.inl"

/*
* Disclaimer:
*	- The 'GNames' is only a fallback and null by default, FName::AppendString is used
*	- THe 'GWorld' offset is not used by the SDK, it's just there for "decoration", use the provided 'UWorld::GetWorld()' function instead
*/
namespace Offsets
{
	constexpr int32 GObjects          = 0x03C74A58;
	constexpr int32 AppendString      = 0x00F1D5B0;
	constexpr int32 GNames            = 0x03C706E0;
	constexpr int32 GWorld            = 0x03D75550;
	constexpr int32 ProcessEvent      = 0x010A17A0;
	constexpr int32 ProcessEventIdx   = 0x00000040;
}

namespace InSDKUtils
{
	inline uintptr_t GetImageBase()
	{
		return reinterpret_cast<uintptr_t>(GetModuleHandle(0));
	}

	template<typename FuncType>
	inline FuncType GetVirtualFunction(const void* ObjectInstance, int32 Index)
	{
		void** VTable = *reinterpret_cast<void***>(const_cast<void*>(ObjectInstance));

		return reinterpret_cast<FuncType>(VTable[Index]);
	}

	template<typename FuncType, typename... ParamTypes>
	requires std::invocable<FuncType, ParamTypes...>
	inline auto CallGameFunction(FuncType Function, ParamTypes&&... Args)
	{
		return Function(std::forward<ParamTypes>(Args)...);
	}
}


template<int32 Len>
struct StringLiteral
{
	char Chars[Len];

	consteval StringLiteral(const char(&String)[Len])
	{
		std::copy_n(String, Len, Chars);
	}

	operator std::string() const
	{
		return static_cast<const char*>(Chars);
	}
};

// Forward declarations because in-line forward declarations make the compiler think 'StaticClassImpl()' is a class template
class UClass;
class UObject;
class UFunction;

struct FName;

namespace BasicFilesImpleUtils
{
	// Helper functions for StaticClassImpl and StaticBPGeneratedClassImpl
	UClass* FindClassByName(const std::string& Name);
	UClass* FindClassByFullName(const std::string& Name);

	std::string GetObjectName(class UClass* Class);
	int32 GetObjectIndex(class UClass* Class);

	UObject* GetObjectByIndex(int32 Index);

	UFunction* FindFunctionByFName(const FName* Name);
}

template<StringLiteral Name, bool bIsFullName = false>
class UClass* StaticClassImpl()
{
	static class UClass* Clss = nullptr;

	if (Clss == nullptr)
	{
		if constexpr (bIsFullName) {
			Clss = BasicFilesImpleUtils::FindClassByFullName(Name);
		}
		else /* default */ {
			Clss = BasicFilesImpleUtils::FindClassByName(Name);
		}
	}

	return Clss;
}

template<StringLiteral Name, bool bIsFullName = false, StringLiteral NonFullName = "">
class UClass* StaticBPGeneratedClassImpl()
{
	/* Could be external function, not really unique to this StaticClass functon */
	static auto SetClassIndex = [](UClass* Class, int32& Index) -> UClass*
	{
		if (Class)
			Index = BasicFilesImpleUtils::GetObjectIndex(Class);

		return Class;
	};

	static int32 ClassIdx = 0x0;

	/* Use the full name to find an object */
	if constexpr (bIsFullName)
	{
		if (ClassIdx == 0x0)
			return SetClassIndex(BasicFilesImpleUtils::FindClassByFullName(Name), ClassIdx);

		UClass* ClassObj = static_cast<UClass*>(BasicFilesImpleUtils::GetObjectByIndex(ClassIdx));

		/* Could use cast flags too to save some string comparisons */
		if (!ClassObj || BasicFilesImpleUtils::GetObjectName(ClassObj) != static_cast<std::string>(Name))
			return SetClassIndex(BasicFilesImpleUtils::FindClassByFullName(Name), ClassIdx);

		return ClassObj;
	}
	else /* Default, use just the name to find an object*/
	{
		if (ClassIdx == 0x0)
			return SetClassIndex(BasicFilesImpleUtils::FindClassByName(Name), ClassIdx);

		UClass* ClassObj = static_cast<UClass*>(BasicFilesImpleUtils::GetObjectByIndex(ClassIdx));

		/* Could use cast flags too to save some string comparisons */
		if (!ClassObj || BasicFilesImpleUtils::GetObjectName(ClassObj) != static_cast<std::string>(Name))
			return SetClassIndex(BasicFilesImpleUtils::FindClassByName(Name), ClassIdx);

		return ClassObj;
	}
}

template<class ClassType>
ClassType* GetDefaultObjImpl()
{
	return static_cast<ClassType*>(ClassType::StaticClass()->DefaultObject);
}


// Predefined struct FUObjectItem
// 0x0018 (0x0018 - 0x0000)
struct FUObjectItem final
{
public:
	class UObject*                                Object;                                            // 0x0000(0x0008)(NOT AUTO-GENERATED PROPERTY)
	uint8                                         Pad_0[0x10];                                       // 0x0008(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FUObjectItem) == 0x000008, "Wrong alignment on FUObjectItem");
static_assert(sizeof(FUObjectItem) == 0x000018, "Wrong size on FUObjectItem");
static_assert(offsetof(FUObjectItem, Object) == 0x000000, "Member 'FUObjectItem::Object' has a wrong offset!");

class TUObjectArray
{
public:
	enum
	{
		ElementsPerChunk = 0x10000,
	};

private:
	static inline auto DecryptPtr = [](void* ObjPtr) -> uint8*
	{
		return reinterpret_cast<uint8*>(ObjPtr);
	};

public:
	FUObjectItem** Objects;
	uint8 Pad_0[0x08];
	int32 MaxElements;
	int32 NumElements;
	int32 MaxChunks;
	int32 NumChunks;

public:
	inline int32 Num() const
	{
		return NumElements;
	}

	inline FUObjectItem** GetDecrytedObjPtr() const
	{
		return reinterpret_cast<FUObjectItem**>(DecryptPtr(Objects));
	}

	inline class UObject* GetByIndex(const int32 Index) const
	{
		const int32 ChunkIndex = Index / ElementsPerChunk;
		const int32 InChunkIdx = Index % ElementsPerChunk;

		if (ChunkIndex >= NumChunks || Index >= NumElements)
			return nullptr;
	
		FUObjectItem* ChunkPtr = GetDecrytedObjPtr()[ChunkIndex];
		if (!ChunkPtr) return nullptr;

		return ChunkPtr[InChunkIdx].Object;
	}
};

class TUObjectArrayWrapper
{
private:
	friend class UObject;

private:
	void* GObjectsAddress = nullptr;

private:
	TUObjectArrayWrapper() = default;

public:
	TUObjectArrayWrapper(TUObjectArrayWrapper&&) = delete;
	TUObjectArrayWrapper(const TUObjectArrayWrapper&) = delete;

	TUObjectArrayWrapper& operator=(TUObjectArrayWrapper&&) = delete;
	TUObjectArrayWrapper& operator=(const TUObjectArrayWrapper&) = delete;

private:
	inline void InitGObjects()
	{
		GObjectsAddress = reinterpret_cast<void*>(InSDKUtils::GetImageBase() + Offsets::GObjects);
	}

public:
	inline void InitManually(void* GObjectsAddressParameter)
	{
		GObjectsAddress = GObjectsAddressParameter;
	}

	inline class TUObjectArray* operator->()
	{
		if (!GObjectsAddress) [[unlikely]]
			InitGObjects();

		return reinterpret_cast<class TUObjectArray*>(GObjectsAddress);
	}

	inline operator const void* ()
	{
		if (!GObjectsAddress) [[unlikely]]
			InitGObjects();

		return GObjectsAddress;
	}

	inline class TUObjectArray* GetTypedPtr()
	{
		if (!GObjectsAddress) [[unlikely]]
			InitGObjects();

		return reinterpret_cast<class TUObjectArray*>(GObjectsAddress);
	}
};

// Predefined struct FName
// 0x0008 (0x0008 - 0x0000)
class FName final
{
public:
	static inline void*                           AppendString = nullptr;                            // 0x0000(0x0004)(NOT AUTO-GENERATED PROPERTY)

	int32                                         ComparisonIndex;                                   // 0x0000(0x0004)(NOT AUTO-GENERATED PROPERTY)
	int32                                         Number;                                            // 0x0004(0x0004)(NOT AUTO-GENERATED PROPERTY)

public:
	static void InitInternal()
	{
		AppendString = reinterpret_cast<void*>(InSDKUtils::GetImageBase() + Offsets::AppendString);
	}
	static void InitManually(void* Location)
	{
		AppendString = reinterpret_cast<void*>(Location);
	}

	int32 GetDisplayIndex() const
	{
		return ComparisonIndex;
	}
	
	std::string GetRawString() const
	{
		thread_local FAllocatedString TempString(1024);
	
		if (!AppendString)
			InitInternal();
	
		InSDKUtils::CallGameFunction(reinterpret_cast<void(*)(const FName*, FString&)>(AppendString), this, TempString);
	
		std::string OutputString = TempString.ToString();
		TempString.Clear();
	
		return OutputString;
	}
	
	std::string ToString() const
	{
		std::string OutputString = GetRawString();
	
		size_t pos = OutputString.rfind('/');
	
		if (pos == std::string::npos)
			return OutputString;
	
		return OutputString.substr(pos + 1);
	}
	
	bool operator==(const FName& Other) const
	{
		return ComparisonIndex == Other.ComparisonIndex && Number == Other.Number;
	}
	bool operator!=(const FName& Other) const
	{
		return ComparisonIndex != Other.ComparisonIndex || Number != Other.Number;
	}
};
static_assert(alignof(FName) == 0x000004, "Wrong alignment on FName");
static_assert(sizeof(FName) == 0x000008, "Wrong size on FName");
static_assert(offsetof(FName, ComparisonIndex) == 0x000000, "Member 'FName::ComparisonIndex' has a wrong offset!");
static_assert(offsetof(FName, Number) == 0x000004, "Member 'FName::Number' has a wrong offset!");

template<typename ClassType>
class TSubclassOf
{
	class UClass* ClassPtr;

public:
	TSubclassOf() = default;

	inline TSubclassOf(UClass* Class)
		: ClassPtr(Class)
	{
	}

	inline UClass* Get()
	{
		return ClassPtr;
	}

	inline operator UClass*() const
	{
		return ClassPtr;
	}

	template<typename Target, typename = std::enable_if<std::is_base_of_v<Target, ClassType>, bool>::type>
	inline operator TSubclassOf<Target>() const
	{
		return ClassPtr;
	}

	inline UClass* operator->()
	{
		return ClassPtr;
	}

	inline TSubclassOf& operator=(UClass* Class)
	{
		ClassPtr = Class;

		return *this;
	}

	inline bool operator==(const TSubclassOf& Other) const
	{
		return ClassPtr == Other.ClassPtr;
	}

	inline bool operator!=(const TSubclassOf& Other) const
	{
		return ClassPtr != Other.ClassPtr;
	}

	inline bool operator==(UClass* Other) const
	{
		return ClassPtr == Other;
	}

	inline bool operator!=(UClass* Other) const
	{
		return ClassPtr != Other;
	}
};

// Predefined struct FTextData
// 0x0038 (0x0038 - 0x0000)
class FTextData final
{
public:
	uint8                                         Pad_1[0x28];                                       // 0x0000(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TextSource;                                        // 0x0028(0x0010)(NOT AUTO-GENERATED PROPERTY)
};
static_assert(alignof(FTextData) == 0x000008, "Wrong alignment on FTextData");
static_assert(sizeof(FTextData) == 0x000038, "Wrong size on FTextData");
static_assert(offsetof(FTextData, TextSource) == 0x000028, "Member 'FTextData::TextSource' has a wrong offset!");

// Predefined struct FText
// 0x0018 (0x0018 - 0x0000)
class FText final
{
public:
	class FTextData*                              TextData;                                          // 0x0000(0x0008)(NOT AUTO-GENERATED PROPERTY)
	uint8                                         Pad_2[0x10];                                       // 0x0008(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	const class FString& GetStringRef() const
	{
		return TextData->TextSource;
	}
	std::string ToString() const
	{
		return TextData->TextSource.ToString();
	}
};
static_assert(alignof(FText) == 0x000008, "Wrong alignment on FText");
static_assert(sizeof(FText) == 0x000018, "Wrong size on FText");
static_assert(offsetof(FText, TextData) == 0x000000, "Member 'FText::TextData' has a wrong offset!");

// Predefined struct FWeakObjectPtr
// 0x0008 (0x0008 - 0x0000)
class FWeakObjectPtr
{
public:
	int32                                         ObjectIndex;                                       // 0x0000(0x0004)(NOT AUTO-GENERATED PROPERTY)
	int32                                         ObjectSerialNumber;                                // 0x0004(0x0004)(NOT AUTO-GENERATED PROPERTY)

public:
	class UObject* Get() const;
	class UObject* operator->() const;
	bool operator==(const FWeakObjectPtr& Other) const;
	bool operator!=(const FWeakObjectPtr& Other) const;
	bool operator==(const class UObject* Other) const;
	bool operator!=(const class UObject* Other) const;
};
static_assert(alignof(FWeakObjectPtr) == 0x000004, "Wrong alignment on FWeakObjectPtr");
static_assert(sizeof(FWeakObjectPtr) == 0x000008, "Wrong size on FWeakObjectPtr");
static_assert(offsetof(FWeakObjectPtr, ObjectIndex) == 0x000000, "Member 'FWeakObjectPtr::ObjectIndex' has a wrong offset!");
static_assert(offsetof(FWeakObjectPtr, ObjectSerialNumber) == 0x000004, "Member 'FWeakObjectPtr::ObjectSerialNumber' has a wrong offset!");

template<typename UEType>
class TWeakObjectPtr : public FWeakObjectPtr
{
public:
	UEType* Get() const
	{
		return static_cast<UEType*>(FWeakObjectPtr::Get());
	}

	UEType* operator->() const
	{
		return static_cast<UEType*>(FWeakObjectPtr::Get());
	}
};

// Predefined struct FUniqueObjectGuid
// 0x0010 (0x0010 - 0x0000)
class FUniqueObjectGuid final
{
public:
	uint32                                        A;                                                 // 0x0000(0x0004)(NOT AUTO-GENERATED PROPERTY)
	uint32                                        B;                                                 // 0x0004(0x0004)(NOT AUTO-GENERATED PROPERTY)
	uint32                                        C;                                                 // 0x0008(0x0004)(NOT AUTO-GENERATED PROPERTY)
	uint32                                        D;                                                 // 0x000C(0x0004)(NOT AUTO-GENERATED PROPERTY)
};
static_assert(alignof(FUniqueObjectGuid) == 0x000004, "Wrong alignment on FUniqueObjectGuid");
static_assert(sizeof(FUniqueObjectGuid) == 0x000010, "Wrong size on FUniqueObjectGuid");
static_assert(offsetof(FUniqueObjectGuid, A) == 0x000000, "Member 'FUniqueObjectGuid::A' has a wrong offset!");
static_assert(offsetof(FUniqueObjectGuid, B) == 0x000004, "Member 'FUniqueObjectGuid::B' has a wrong offset!");
static_assert(offsetof(FUniqueObjectGuid, C) == 0x000008, "Member 'FUniqueObjectGuid::C' has a wrong offset!");
static_assert(offsetof(FUniqueObjectGuid, D) == 0x00000C, "Member 'FUniqueObjectGuid::D' has a wrong offset!");

// Predefined struct TPersistentObjectPtr
// 0x0008 (0x0008 - 0x0000)
template<typename TObjectID>
class TPersistentObjectPtr
{
public:
	FWeakObjectPtr                                WeakPtr;                                           // 0x0000(0x0008)(NOT AUTO-GENERATED PROPERTY)
	int32                                         TagAtLastTest;                                     // 0x0008(0x0004)(NOT AUTO-GENERATED PROPERTY)
	TObjectID                                     ObjectID;                                          // 0x000C(0x0000)(NOT AUTO-GENERATED PROPERTY)

public:
	class UObject* Get() const
	{
		return WeakPtr.Get();
	}
	class UObject* operator->() const
	{
		return WeakPtr.Get();
	}
};

template<typename UEType>
class TLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid>
{
public:
	UEType* Get() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}
	UEType* operator->() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}
};

namespace FakeSoftObjectPtr
{

// ScriptStruct CoreUObject.SoftObjectPath
// 0x0018 (0x0018 - 0x0000)
struct FSoftObjectPath
{
public:
	class FName                                   AssetPathName;                                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SubPathString;                                     // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSoftObjectPath) == 0x000008, "Wrong alignment on FSoftObjectPath");
static_assert(sizeof(FSoftObjectPath) == 0x000018, "Wrong size on FSoftObjectPath");
static_assert(offsetof(FSoftObjectPath, AssetPathName) == 0x000000, "Member 'FSoftObjectPath::AssetPathName' has a wrong offset!");
static_assert(offsetof(FSoftObjectPath, SubPathString) == 0x000008, "Member 'FSoftObjectPath::SubPathString' has a wrong offset!");

}

class FSoftObjectPtr : public TPersistentObjectPtr<FakeSoftObjectPtr::FSoftObjectPath>
{
};

template<typename UEType>
class TSoftObjectPtr : public FSoftObjectPtr
{
public:
	UEType* Get() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}
	UEType* operator->() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}
};

template<typename UEType>
class TSoftClassPtr : public FSoftObjectPtr
{
public:
	UEType* Get() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}
	UEType* operator->() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}
};

// Predefined struct FScriptInterface
// 0x0010 (0x0010 - 0x0000)
class FScriptInterface
{
public:
	UObject*                                      ObjectPointer;                                     // 0x0000(0x0008)(NOT AUTO-GENERATED PROPERTY)
	void*                                         InterfacePointer;                                  // 0x0008(0x0008)(NOT AUTO-GENERATED PROPERTY)

public:
	class UObject* GetObjectRef() const
	{
		return ObjectPointer;
	}
	
	void* GetInterfaceRef() const
	{
		return InterfacePointer;
	}
	
};
static_assert(alignof(FScriptInterface) == 0x000008, "Wrong alignment on FScriptInterface");
static_assert(sizeof(FScriptInterface) == 0x000010, "Wrong size on FScriptInterface");
static_assert(offsetof(FScriptInterface, ObjectPointer) == 0x000000, "Member 'FScriptInterface::ObjectPointer' has a wrong offset!");
static_assert(offsetof(FScriptInterface, InterfacePointer) == 0x000008, "Member 'FScriptInterface::InterfacePointer' has a wrong offset!");

// Predefined struct TScriptInterface
// 0x0000 (0x0010 - 0x0010)
template<class InterfaceType>
class TScriptInterface final : public FScriptInterface
{
};

// Predefined struct TDelegate
// 0x0000 (0x0000 - 0x0000)
template<typename FunctionSignature>
class TDelegate
{
public:
	struct InvalidUseOfTDelegate                  TemplateParamIsNotAFunctionSignature;              // 0x0000(0x0000)(NOT AUTO-GENERATED PROPERTY)
};

// Predefined struct TDelegate<Ret(Args...)>
// 0x0000 (0x0000 - 0x0000)
template<typename Ret, typename... Args>
class TDelegate<Ret(Args...)>
{
public:
	FWeakObjectPtr                                Object;                                            // 0x0000(0x0008)(NOT AUTO-GENERATED PROPERTY)
	FName                                         FunctionName;                                      // 0x0008(0x0008)(NOT AUTO-GENERATED PROPERTY)
};

#define UE_ENUM_OPERATORS(EEnumClass)																																	\
																																										\
inline constexpr EEnumClass operator|(EEnumClass Left, EEnumClass Right)																								\
{																																										\
	return (EEnumClass)((std::underlying_type<EEnumClass>::type)(Left) | (std::underlying_type<EEnumClass>::type)(Right));												\
}																																										\
																																										\
inline constexpr EEnumClass& operator|=(EEnumClass& Left, EEnumClass Right)																								\
{																																										\
	return (EEnumClass&)((std::underlying_type<EEnumClass>::type&)(Left) |= (std::underlying_type<EEnumClass>::type)(Right));											\
}																																										\
																																										\
inline bool operator&(EEnumClass Left, EEnumClass Right)																												\
{																																										\
	return (((std::underlying_type<EEnumClass>::type)(Left) & (std::underlying_type<EEnumClass>::type)(Right)) == (std::underlying_type<EEnumClass>::type)(Right));		\
}																																										

enum class EObjectFlags : int32
{
	NoFlags							= 0x00000000,

	Public							= 0x00000001,
	Standalone						= 0x00000002,
	MarkAsNative					= 0x00000004,
	Transactional					= 0x00000008,
	ClassDefaultObject				= 0x00000010,
	ArchetypeObject					= 0x00000020,
	Transient						= 0x00000040,

	MarkAsRootSet					= 0x00000080,
	TagGarbageTemp					= 0x00000100,

	NeedInitialization				= 0x00000200,
	NeedLoad						= 0x00000400,
	KeepForCooker					= 0x00000800,
	NeedPostLoad					= 0x00001000,
	NeedPostLoadSubobjects			= 0x00002000,
	NewerVersionExists				= 0x00004000,
	BeginDestroyed					= 0x00008000,
	FinishDestroyed					= 0x00010000,

	BeingRegenerated				= 0x00020000,
	DefaultSubObject				= 0x00040000,
	WasLoaded						= 0x00080000,
	TextExportTransient				= 0x00100000,
	LoadCompleted					= 0x00200000,
	InheritableComponentTemplate	= 0x00400000,
	DuplicateTransient				= 0x00800000,
	StrongRefOnFrame				= 0x01000000,
	NonPIEDuplicateTransient		= 0x02000000,
	Dynamic							= 0x04000000,
	WillBeLoaded					= 0x08000000, 
};

enum class EFunctionFlags : uint32
{
	None							= 0x00000000,

	Final							= 0x00000001,
	RequiredAPI						= 0x00000002,
	BlueprintAuthorityOnly			= 0x00000004, 
	BlueprintCosmetic				= 0x00000008, 
	Net								= 0x00000040,  
	NetReliable						= 0x00000080, 
	NetRequest						= 0x00000100,	
	Exec							= 0x00000200,	
	Native							= 0x00000400,	
	Event							= 0x00000800,   
	NetResponse						= 0x00001000,  
	Static							= 0x00002000,   
	NetMulticast					= 0x00004000,	
	UbergraphFunction				= 0x00008000,  
	MulticastDelegate				= 0x00010000,
	Public							= 0x00020000,	
	Private							= 0x00040000,	
	Protected						= 0x00080000,
	Delegate						= 0x00100000,	
	NetServer						= 0x00200000,	
	HasOutParms						= 0x00400000,	
	HasDefaults						= 0x00800000,
	NetClient						= 0x01000000,
	DLLImport						= 0x02000000,
	BlueprintCallable				= 0x04000000,
	BlueprintEvent					= 0x08000000,
	BlueprintPure					= 0x10000000,	
	EditorOnly						= 0x20000000,	
	Const							= 0x40000000,
	NetValidate						= 0x80000000,

	AllFlags						= 0xFFFFFFFF,
};

enum class EClassFlags : int32
{
	CLASS_None						= 0x00000000u,
	Abstract						= 0x00000001u,
	DefaultConfig					= 0x00000002u,
	Config							= 0x00000004u,
	Transient						= 0x00000008u,
	Parsed							= 0x00000010u,
	MatchedSerializers				= 0x00000020u,
	ProjectUserConfig				= 0x00000040u,
	Native							= 0x00000080u,
	NoExport						= 0x00000100u,
	NotPlaceable					= 0x00000200u,
	PerObjectConfig					= 0x00000400u,
	ReplicationDataIsSetUp			= 0x00000800u,
	EditInlineNew					= 0x00001000u,
	CollapseCategories				= 0x00002000u,
	Interface						= 0x00004000u,
	CustomConstructor				= 0x00008000u,
	Const							= 0x00010000u,
	LayoutChanging					= 0x00020000u,
	CompiledFromBlueprint			= 0x00040000u,
	MinimalAPI						= 0x00080000u,
	RequiredAPI						= 0x00100000u,
	DefaultToInstanced				= 0x00200000u,
	TokenStreamAssembled			= 0x00400000u,
	HasInstancedReference			= 0x00800000u,
	Hidden							= 0x01000000u,
	Deprecated						= 0x02000000u,
	HideDropDown					= 0x04000000u,
	GlobalUserConfig				= 0x08000000u,
	Intrinsic						= 0x10000000u,
	Constructed						= 0x20000000u,
	ConfigDoNotCheckDefaults		= 0x40000000u,
	NewerVersionExists				= 0x80000000u,
};

enum class EClassCastFlags : uint64
{
	None = 0x0000000000000000,

	Field								= 0x0000000000000001,
	Int8Property						= 0x0000000000000002,
	Enum								= 0x0000000000000004,
	Struct								= 0x0000000000000008,
	ScriptStruct						= 0x0000000000000010,
	Class								= 0x0000000000000020,
	ByteProperty						= 0x0000000000000040,
	IntProperty							= 0x0000000000000080,
	FloatProperty						= 0x0000000000000100,
	UInt64Property						= 0x0000000000000200,
	ClassProperty						= 0x0000000000000400,
	UInt32Property						= 0x0000000000000800,
	InterfaceProperty					= 0x0000000000001000,
	NameProperty						= 0x0000000000002000,
	StrProperty							= 0x0000000000004000,
	Property							= 0x0000000000008000,
	ObjectProperty						= 0x0000000000010000,
	BoolProperty						= 0x0000000000020000,
	UInt16Property						= 0x0000000000040000,
	Function							= 0x0000000000080000,
	StructProperty						= 0x0000000000100000,
	ArrayProperty						= 0x0000000000200000,
	Int64Property						= 0x0000000000400000,
	DelegateProperty					= 0x0000000000800000,
	NumericProperty						= 0x0000000001000000,
	MulticastDelegateProperty			= 0x0000000002000000,
	ObjectPropertyBase					= 0x0000000004000000,
	WeakObjectProperty					= 0x0000000008000000,
	LazyObjectProperty					= 0x0000000010000000,
	SoftObjectProperty					= 0x0000000020000000,
	TextProperty						= 0x0000000040000000,
	Int16Property						= 0x0000000080000000,
	DoubleProperty						= 0x0000000100000000,
	SoftClassProperty					= 0x0000000200000000,
	Package								= 0x0000000400000000,
	Level								= 0x0000000800000000,
	Actor								= 0x0000001000000000,
	PlayerController					= 0x0000002000000000,
	Pawn								= 0x0000004000000000,
	SceneComponent						= 0x0000008000000000,
	PrimitiveComponent					= 0x0000010000000000,
	SkinnedMeshComponent				= 0x0000020000000000,
	SkeletalMeshComponent				= 0x0000040000000000,
	Blueprint							= 0x0000080000000000,
	DelegateFunction					= 0x0000100000000000,
	StaticMeshComponent					= 0x0000200000000000,
	MapProperty							= 0x0000400000000000,
	SetProperty							= 0x0000800000000000,
	EnumProperty						= 0x0001000000000000,
	USparseDelegateFunction				= 0x0002000000000000,
	FMulticastInlineDelegateProperty	= 0x0004000000000000,
	FMulticastSparseDelegateProperty	= 0x0008000000000000,
	FFieldPathProperty					= 0x0010000000000000,
	FLargeWorldCoordinatesRealProperty	= 0x0080000000000000,
	FOptionalProperty					= 0x0100000000000000,
	FVValueProperty						= 0x0200000000000000,
	UVerseVMClass						= 0x0400000000000000,
	FVRestValueProperty					= 0x0800000000000000,
};

enum class EPropertyFlags : uint64
{
	None								= 0x0000000000000000,

	Edit								= 0x0000000000000001,
	ConstParm							= 0x0000000000000002,
	BlueprintVisible					= 0x0000000000000004,
	ExportObject						= 0x0000000000000008,
	BlueprintReadOnly					= 0x0000000000000010,
	Net									= 0x0000000000000020,
	EditFixedSize						= 0x0000000000000040,
	Parm								= 0x0000000000000080,
	OutParm								= 0x0000000000000100,
	ZeroConstructor						= 0x0000000000000200,
	ReturnParm							= 0x0000000000000400,
	DisableEditOnTemplate 				= 0x0000000000000800,

	Transient							= 0x0000000000002000,
	Config								= 0x0000000000004000,

	DisableEditOnInstance				= 0x0000000000010000,
	EditConst							= 0x0000000000020000,
	GlobalConfig						= 0x0000000000040000,
	InstancedReference					= 0x0000000000080000,	

	DuplicateTransient					= 0x0000000000200000,	
	SubobjectReference					= 0x0000000000400000,	

	SaveGame							= 0x0000000001000000,
	NoClear								= 0x0000000002000000,

	ReferenceParm						= 0x0000000008000000,
	BlueprintAssignable					= 0x0000000010000000,
	Deprecated							= 0x0000000020000000,
	IsPlainOldData						= 0x0000000040000000,
	RepSkip								= 0x0000000080000000,
	RepNotify							= 0x0000000100000000, 
	Interp								= 0x0000000200000000,
	NonTransactional					= 0x0000000400000000,
	EditorOnly							= 0x0000000800000000,
	NoDestructor						= 0x0000001000000000,

	AutoWeak							= 0x0000004000000000,
	ContainsInstancedReference			= 0x0000008000000000,	
	AssetRegistrySearchable				= 0x0000010000000000,
	SimpleDisplay						= 0x0000020000000000,
	AdvancedDisplay						= 0x0000040000000000,
	Protected							= 0x0000080000000000,
	BlueprintCallable					= 0x0000100000000000,
	BlueprintAuthorityOnly				= 0x0000200000000000,
	TextExportTransient					= 0x0000400000000000,
	NonPIEDuplicateTransient			= 0x0000800000000000,
	ExposeOnSpawn						= 0x0001000000000000,
	PersistentInstance					= 0x0002000000000000,
	UObjectWrapper						= 0x0004000000000000, 
	HasGetValueTypeHash					= 0x0008000000000000, 
	NativeAccessSpecifierPublic			= 0x0010000000000000,	
	NativeAccessSpecifierProtected		= 0x0020000000000000,
	NativeAccessSpecifierPrivate		= 0x0040000000000000,	
	SkipSerialization					= 0x0080000000000000, 
};

UE_ENUM_OPERATORS(EObjectFlags);
UE_ENUM_OPERATORS(EFunctionFlags);
UE_ENUM_OPERATORS(EClassFlags);
UE_ENUM_OPERATORS(EClassCastFlags);
UE_ENUM_OPERATORS(EPropertyFlags);

namespace CyclicDependencyFixupImpl
{

/*
* A wrapper for a Byte-Array of padding, that allows for casting to the actual underlaiyng type. Used for undefined structs in cylic headers.
*/
template<typename UnderlayingStructType, int32 Size, int32 Align>
struct alignas(Align) TCylicStructFixup
{
private:
	uint8 Pad[Size];

public:
	      UnderlayingStructType& GetTyped()       { return reinterpret_cast<      UnderlayingStructType&>(*this); }
	const UnderlayingStructType& GetTyped() const { return reinterpret_cast<const UnderlayingStructType&>(*this); }
};

/*
* A wrapper for a Byte-Array of padding, that inherited from UObject allows for casting to the actual underlaiyng type and access to basic UObject functionality. For cyclic classes.
*/
template<typename UnderlayingClassType, int32 Size, int32 Align = 0x8, class BaseClassType = class UObject>
struct alignas(Align) TCyclicClassFixup : public BaseClassType
{
private:
	uint8 Pad[Size];

public:
	UnderlayingClassType*       GetTyped()       { return reinterpret_cast<      UnderlayingClassType*>(this); }
	const UnderlayingClassType* GetTyped() const { return reinterpret_cast<const UnderlayingClassType*>(this); }
};

}


template<typename UnderlayingStructType, int32 Size, int32 Align>
using TStructCycleFixup = CyclicDependencyFixupImpl::TCylicStructFixup<UnderlayingStructType, Size, Align>;


template<typename UnderlayingClassType, int32 Size, int32 Align = 0x8>
using TObjectBasedCycleFixup = CyclicDependencyFixupImpl::TCyclicClassFixup<UnderlayingClassType, Size, Align, class UObject>;

template<typename UnderlayingClassType, int32 Size, int32 Align = 0x8>
using TActorBasedCycleFixup = CyclicDependencyFixupImpl::TCyclicClassFixup<UnderlayingClassType, Size, Align, class AActor>;

}
