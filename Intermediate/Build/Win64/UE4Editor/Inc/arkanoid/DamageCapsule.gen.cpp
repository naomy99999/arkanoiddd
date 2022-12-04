// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "arkanoid/DamageCapsule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageCapsule() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_ADamageCapsule_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_ADamageCapsule();
	ARKANOID_API UClass* Z_Construct_UClass_ACapsuleN();
	UPackage* Z_Construct_UPackage__Script_arkanoid();
// End Cross Module References
	void ADamageCapsule::StaticRegisterNativesADamageCapsule()
	{
	}
	UClass* Z_Construct_UClass_ADamageCapsule_NoRegister()
	{
		return ADamageCapsule::StaticClass();
	}
	struct Z_Construct_UClass_ADamageCapsule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADamageCapsule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapsuleN,
		(UObject* (*)())Z_Construct_UPackage__Script_arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageCapsule_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DamageCapsule.h" },
		{ "ModuleRelativePath", "DamageCapsule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADamageCapsule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADamageCapsule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADamageCapsule_Statics::ClassParams = {
		&ADamageCapsule::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADamageCapsule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageCapsule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADamageCapsule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADamageCapsule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADamageCapsule, 3656788019);
	template<> ARKANOID_API UClass* StaticClass<ADamageCapsule>()
	{
		return ADamageCapsule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADamageCapsule(Z_Construct_UClass_ADamageCapsule, &ADamageCapsule::StaticClass, TEXT("/Script/arkanoid"), TEXT("ADamageCapsule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADamageCapsule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
