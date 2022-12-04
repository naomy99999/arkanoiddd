// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "arkanoid/CapsuleN.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsuleN() {}
// Cross Module References
	ARKANOID_API UClass* Z_Construct_UClass_ACapsuleN_NoRegister();
	ARKANOID_API UClass* Z_Construct_UClass_ACapsuleN();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_arkanoid();
// End Cross Module References
	void ACapsuleN::StaticRegisterNativesACapsuleN()
	{
	}
	UClass* Z_Construct_UClass_ACapsuleN_NoRegister()
	{
		return ACapsuleN::StaticClass();
	}
	struct Z_Construct_UClass_ACapsuleN_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsuleN_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_arkanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsuleN_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CapsuleN.h" },
		{ "ModuleRelativePath", "CapsuleN.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsuleN_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsuleN>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsuleN_Statics::ClassParams = {
		&ACapsuleN::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsuleN_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsuleN_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsuleN()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsuleN_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsuleN, 2217027515);
	template<> ARKANOID_API UClass* StaticClass<ACapsuleN>()
	{
		return ACapsuleN::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsuleN(Z_Construct_UClass_ACapsuleN, &ACapsuleN::StaticClass, TEXT("/Script/arkanoid"), TEXT("ACapsuleN"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsuleN);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
