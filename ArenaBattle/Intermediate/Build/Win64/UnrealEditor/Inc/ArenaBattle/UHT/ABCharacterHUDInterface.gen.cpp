// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Interface/ABCharacterHUDInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterHUDInterface() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterHUDInterface();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterHUDInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void UABCharacterHUDInterface::StaticRegisterNativesUABCharacterHUDInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCharacterHUDInterface);
	UClass* Z_Construct_UClass_UABCharacterHUDInterface_NoRegister()
	{
		return UABCharacterHUDInterface::StaticClass();
	}
	struct Z_Construct_UClass_UABCharacterHUDInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABCharacterHUDInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterHUDInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/ABCharacterHUDInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABCharacterHUDInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IABCharacterHUDInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterHUDInterface_Statics::ClassParams = {
		&UABCharacterHUDInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UABCharacterHUDInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterHUDInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABCharacterHUDInterface()
	{
		if (!Z_Registration_Info_UClass_UABCharacterHUDInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCharacterHUDInterface.OuterSingleton, Z_Construct_UClass_UABCharacterHUDInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UABCharacterHUDInterface.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<UABCharacterHUDInterface>()
	{
		return UABCharacterHUDInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterHUDInterface);
	UABCharacterHUDInterface::~UABCharacterHUDInterface() {}
	struct Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterHUDInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterHUDInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UABCharacterHUDInterface, UABCharacterHUDInterface::StaticClass, TEXT("UABCharacterHUDInterface"), &Z_Registration_Info_UClass_UABCharacterHUDInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterHUDInterface), 446623754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterHUDInterface_h_1360848317(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterHUDInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Interface_ABCharacterHUDInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
