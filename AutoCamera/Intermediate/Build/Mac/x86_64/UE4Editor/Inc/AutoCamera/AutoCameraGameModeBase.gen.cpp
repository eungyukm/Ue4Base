// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoCamera/AutoCameraGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoCameraGameModeBase() {}
// Cross Module References
	AUTOCAMERA_API UClass* Z_Construct_UClass_AAutoCameraGameModeBase_NoRegister();
	AUTOCAMERA_API UClass* Z_Construct_UClass_AAutoCameraGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AutoCamera();
// End Cross Module References
	void AAutoCameraGameModeBase::StaticRegisterNativesAAutoCameraGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AAutoCameraGameModeBase_NoRegister()
	{
		return AAutoCameraGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAutoCameraGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAutoCameraGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoCamera,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoCameraGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AutoCameraGameModeBase.h" },
		{ "ModuleRelativePath", "AutoCameraGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAutoCameraGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoCameraGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAutoCameraGameModeBase_Statics::ClassParams = {
		&AAutoCameraGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAutoCameraGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoCameraGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAutoCameraGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAutoCameraGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAutoCameraGameModeBase, 3839088210);
	template<> AUTOCAMERA_API UClass* StaticClass<AAutoCameraGameModeBase>()
	{
		return AAutoCameraGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAutoCameraGameModeBase(Z_Construct_UClass_AAutoCameraGameModeBase, &AAutoCameraGameModeBase::StaticClass, TEXT("/Script/AutoCamera"), TEXT("AAutoCameraGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoCameraGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
