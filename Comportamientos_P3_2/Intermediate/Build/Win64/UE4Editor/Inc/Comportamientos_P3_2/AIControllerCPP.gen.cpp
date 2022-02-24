// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Comportamientos_P3_2/AIControllerCPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIControllerCPP() {}
// Cross Module References
	COMPORTAMIENTOS_P3_2_API UClass* Z_Construct_UClass_AAIControllerCPP_NoRegister();
	COMPORTAMIENTOS_P3_2_API UClass* Z_Construct_UClass_AAIControllerCPP();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Comportamientos_P3_2();
// End Cross Module References
	DEFINE_FUNCTION(AAIControllerCPP::execCheckNearbyEnemy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckNearbyEnemy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIControllerCPP::execUpdateNextTargetPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateNextTargetPoint();
		P_NATIVE_END;
	}
	void AAIControllerCPP::StaticRegisterNativesAAIControllerCPP()
	{
		UClass* Class = AAIControllerCPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckNearbyEnemy", &AAIControllerCPP::execCheckNearbyEnemy },
			{ "UpdateNextTargetPoint", &AAIControllerCPP::execUpdateNextTargetPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIControllerCPP_CheckNearbyEnemy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIControllerCPP_CheckNearbyEnemy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ejercicio" },
		{ "ModuleRelativePath", "AIControllerCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIControllerCPP_CheckNearbyEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIControllerCPP, nullptr, "CheckNearbyEnemy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIControllerCPP_CheckNearbyEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIControllerCPP_CheckNearbyEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIControllerCPP_CheckNearbyEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIControllerCPP_CheckNearbyEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIControllerCPP_UpdateNextTargetPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIControllerCPP_UpdateNextTargetPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ejercicio" },
		{ "ModuleRelativePath", "AIControllerCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIControllerCPP_UpdateNextTargetPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIControllerCPP, nullptr, "UpdateNextTargetPoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIControllerCPP_UpdateNextTargetPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIControllerCPP_UpdateNextTargetPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIControllerCPP_UpdateNextTargetPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIControllerCPP_UpdateNextTargetPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAIControllerCPP_NoRegister()
	{
		return AAIControllerCPP::StaticClass();
	}
	struct Z_Construct_UClass_AAIControllerCPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIControllerCPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Comportamientos_P3_2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIControllerCPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIControllerCPP_CheckNearbyEnemy, "CheckNearbyEnemy" }, // 3858975716
		{ &Z_Construct_UFunction_AAIControllerCPP_UpdateNextTargetPoint, "UpdateNextTargetPoint" }, // 3237161760
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIControllerCPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AIControllerCPP.h" },
		{ "ModuleRelativePath", "AIControllerCPP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIControllerCPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIControllerCPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIControllerCPP_Statics::ClassParams = {
		&AAIControllerCPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIControllerCPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerCPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIControllerCPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIControllerCPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIControllerCPP, 3380807511);
	template<> COMPORTAMIENTOS_P3_2_API UClass* StaticClass<AAIControllerCPP>()
	{
		return AAIControllerCPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIControllerCPP(Z_Construct_UClass_AAIControllerCPP, &AAIControllerCPP::StaticClass, TEXT("/Script/Comportamientos_P3_2"), TEXT("AAIControllerCPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIControllerCPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
