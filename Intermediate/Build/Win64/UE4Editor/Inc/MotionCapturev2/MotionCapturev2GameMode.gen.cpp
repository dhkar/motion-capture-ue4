// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MotionCapturev2GameMode.h"
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
	UClass* Z_Construct_UClass_AMotionCapturev2GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_MotionCapturev2,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "MotionCapturev2GameMode.h" },
				{ "ModuleRelativePath", "MotionCapturev2GameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMotionCapturev2GameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMotionCapturev2GameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMotionCapturev2GameMode, 1471820761);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMotionCapturev2GameMode(Z_Construct_UClass_AMotionCapturev2GameMode, &AMotionCapturev2GameMode::StaticClass, TEXT("/Script/MotionCapturev2"), TEXT("AMotionCapturev2GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMotionCapturev2GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
