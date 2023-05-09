// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionCapturev2/MotionCapturev2GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionCapturev2GameMode() {}
// Cross Module References
	MOTIONCAPTUREV2_API UClass* Z_Construct_UClass_AMotionCapturev2GameMode_NoRegister();
	MOTIONCAPTUREV2_API UClass* Z_Construct_UClass_AMotionCapturev2GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MotionCapturev2();
// End Cross Module References
	void AMotionCapturev2GameMode::StaticRegisterNativesAMotionCapturev2GameMode()
	{
	}
	UClass* Z_Construct_UClass_AMotionCapturev2GameMode_NoRegister()
	{
		return AMotionCapturev2GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMotionCapturev2GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMotionCapturev2GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionCapturev2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionCapturev2GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MotionCapturev2GameMode.h" },
		{ "ModuleRelativePath", "MotionCapturev2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMotionCapturev2GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMotionCapturev2GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMotionCapturev2GameMode_Statics::ClassParams = {
		&AMotionCapturev2GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMotionCapturev2GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionCapturev2GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMotionCapturev2GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMotionCapturev2GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMotionCapturev2GameMode, 2269056702);
	template<> MOTIONCAPTUREV2_API UClass* StaticClass<AMotionCapturev2GameMode>()
	{
		return AMotionCapturev2GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMotionCapturev2GameMode(Z_Construct_UClass_AMotionCapturev2GameMode, &AMotionCapturev2GameMode::StaticClass, TEXT("/Script/MotionCapturev2"), TEXT("AMotionCapturev2GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMotionCapturev2GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
