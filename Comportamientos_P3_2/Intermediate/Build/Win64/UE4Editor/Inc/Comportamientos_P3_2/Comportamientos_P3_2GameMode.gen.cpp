// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Comportamientos_P3_2/Comportamientos_P3_2GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComportamientos_P3_2GameMode() {}
// Cross Module References
	COMPORTAMIENTOS_P3_2_API UClass* Z_Construct_UClass_AComportamientos_P3_2GameMode_NoRegister();
	COMPORTAMIENTOS_P3_2_API UClass* Z_Construct_UClass_AComportamientos_P3_2GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Comportamientos_P3_2();
// End Cross Module References
	void AComportamientos_P3_2GameMode::StaticRegisterNativesAComportamientos_P3_2GameMode()
	{
	}
	UClass* Z_Construct_UClass_AComportamientos_P3_2GameMode_NoRegister()
	{
		return AComportamientos_P3_2GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AComportamientos_P3_2GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComportamientos_P3_2GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Comportamientos_P3_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComportamientos_P3_2GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Comportamientos_P3_2GameMode.h" },
		{ "ModuleRelativePath", "Comportamientos_P3_2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComportamientos_P3_2GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComportamientos_P3_2GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComportamientos_P3_2GameMode_Statics::ClassParams = {
		&AComportamientos_P3_2GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AComportamientos_P3_2GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComportamientos_P3_2GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComportamientos_P3_2GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComportamientos_P3_2GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComportamientos_P3_2GameMode, 2491237953);
	template<> COMPORTAMIENTOS_P3_2_API UClass* StaticClass<AComportamientos_P3_2GameMode>()
	{
		return AComportamientos_P3_2GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComportamientos_P3_2GameMode(Z_Construct_UClass_AComportamientos_P3_2GameMode, &AComportamientos_P3_2GameMode::StaticClass, TEXT("/Script/Comportamientos_P3_2"), TEXT("AComportamientos_P3_2GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComportamientos_P3_2GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
