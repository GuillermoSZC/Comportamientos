// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Comportamientos_P3_2/TargetPointCPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetPointCPP() {}
// Cross Module References
	COMPORTAMIENTOS_P3_2_API UClass* Z_Construct_UClass_ATargetPointCPP_NoRegister();
	COMPORTAMIENTOS_P3_2_API UClass* Z_Construct_UClass_ATargetPointCPP();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
	UPackage* Z_Construct_UPackage__Script_Comportamientos_P3_2();
// End Cross Module References
	void ATargetPointCPP::StaticRegisterNativesATargetPointCPP()
	{
	}
	UClass* Z_Construct_UClass_ATargetPointCPP_NoRegister()
	{
		return ATargetPointCPP::StaticClass();
	}
	struct Z_Construct_UClass_ATargetPointCPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_iPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_iPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATargetPointCPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATargetPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_Comportamientos_P3_2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPointCPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TargetPointCPP.h" },
		{ "ModuleRelativePath", "TargetPointCPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPointCPP_Statics::NewProp_m_iPosition_MetaData[] = {
		{ "Category", "Ejercicio" },
		{ "ModuleRelativePath", "TargetPointCPP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATargetPointCPP_Statics::NewProp_m_iPosition = { "m_iPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATargetPointCPP, m_iPosition), METADATA_PARAMS(Z_Construct_UClass_ATargetPointCPP_Statics::NewProp_m_iPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPointCPP_Statics::NewProp_m_iPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATargetPointCPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetPointCPP_Statics::NewProp_m_iPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATargetPointCPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetPointCPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATargetPointCPP_Statics::ClassParams = {
		&ATargetPointCPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATargetPointCPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPointCPP_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATargetPointCPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPointCPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATargetPointCPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATargetPointCPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATargetPointCPP, 628148011);
	template<> COMPORTAMIENTOS_P3_2_API UClass* StaticClass<ATargetPointCPP>()
	{
		return ATargetPointCPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATargetPointCPP(Z_Construct_UClass_ATargetPointCPP, &ATargetPointCPP::StaticClass, TEXT("/Script/Comportamientos_P3_2"), TEXT("ATargetPointCPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetPointCPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
