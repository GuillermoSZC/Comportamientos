// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Comportamientos_P3/Comportamientos_P3PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComportamientos_P3PlayerController() {}
// Cross Module References
	COMPORTAMIENTOS_P3_API UClass* Z_Construct_UClass_AComportamientos_P3PlayerController_NoRegister();
	COMPORTAMIENTOS_P3_API UClass* Z_Construct_UClass_AComportamientos_P3PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Comportamientos_P3();
// End Cross Module References
	void AComportamientos_P3PlayerController::StaticRegisterNativesAComportamientos_P3PlayerController()
	{
	}
	UClass* Z_Construct_UClass_AComportamientos_P3PlayerController_NoRegister()
	{
		return AComportamientos_P3PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AComportamientos_P3PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComportamientos_P3PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Comportamientos_P3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComportamientos_P3PlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Comportamientos_P3PlayerController.h" },
		{ "ModuleRelativePath", "Comportamientos_P3PlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComportamientos_P3PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComportamientos_P3PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComportamientos_P3PlayerController_Statics::ClassParams = {
		&AComportamientos_P3PlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AComportamientos_P3PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComportamientos_P3PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComportamientos_P3PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComportamientos_P3PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComportamientos_P3PlayerController, 325993959);
	template<> COMPORTAMIENTOS_P3_API UClass* StaticClass<AComportamientos_P3PlayerController>()
	{
		return AComportamientos_P3PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComportamientos_P3PlayerController(Z_Construct_UClass_AComportamientos_P3PlayerController, &AComportamientos_P3PlayerController::StaticClass, TEXT("/Script/Comportamientos_P3"), TEXT("AComportamientos_P3PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComportamientos_P3PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
