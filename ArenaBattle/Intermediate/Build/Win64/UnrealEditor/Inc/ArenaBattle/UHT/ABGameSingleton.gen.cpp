// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/GameData/ABGameSingleton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameSingleton() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameSingleton();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABGameSingleton_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void UABGameSingleton::StaticRegisterNativesUABGameSingleton()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABGameSingleton);
	UClass* Z_Construct_UClass_UABGameSingleton_NoRegister()
	{
		return UABGameSingleton::StaticClass();
	}
	struct Z_Construct_UClass_UABGameSingleton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMaxLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterMaxLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABGameSingleton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGameSingleton_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameData/ABGameSingleton.h" },
		{ "ModuleRelativePath", "GameData/ABGameSingleton.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGameSingleton_Statics::NewProp_CharacterMaxLevel_MetaData[] = {
		{ "ModuleRelativePath", "GameData/ABGameSingleton.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UABGameSingleton_Statics::NewProp_CharacterMaxLevel = { "CharacterMaxLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UABGameSingleton, CharacterMaxLevel), METADATA_PARAMS(Z_Construct_UClass_UABGameSingleton_Statics::NewProp_CharacterMaxLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABGameSingleton_Statics::NewProp_CharacterMaxLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABGameSingleton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABGameSingleton_Statics::NewProp_CharacterMaxLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABGameSingleton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABGameSingleton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UABGameSingleton_Statics::ClassParams = {
		&UABGameSingleton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UABGameSingleton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UABGameSingleton_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABGameSingleton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABGameSingleton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABGameSingleton()
	{
		if (!Z_Registration_Info_UClass_UABGameSingleton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABGameSingleton.OuterSingleton, Z_Construct_UClass_UABGameSingleton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UABGameSingleton.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<UABGameSingleton>()
	{
		return UABGameSingleton::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABGameSingleton);
	UABGameSingleton::~UABGameSingleton() {}
	struct Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_GameData_ABGameSingleton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_GameData_ABGameSingleton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UABGameSingleton, UABGameSingleton::StaticClass, TEXT("UABGameSingleton"), &Z_Registration_Info_UClass_UABGameSingleton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABGameSingleton), 3253974571U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_GameData_ABGameSingleton_h_931637321(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_GameData_ABGameSingleton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_GameData_ABGameSingleton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
