// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/AI/BTTask_Attack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Attack() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	ARENABATTLE_API UClass* Z_Construct_UClass_UBTTask_Attack();
	ARENABATTLE_API UClass* Z_Construct_UClass_UBTTask_Attack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void UBTTask_Attack::StaticRegisterNativesUBTTask_Attack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_Attack);
	UClass* Z_Construct_UClass_UBTTask_Attack_NoRegister()
	{
		return UBTTask_Attack::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_Attack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_Attack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Attack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTTask_Attack.h" },
		{ "ModuleRelativePath", "AI/BTTask_Attack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_Attack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Attack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Attack_Statics::ClassParams = {
		&UBTTask_Attack::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_Attack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Attack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_Attack()
	{
		if (!Z_Registration_Info_UClass_UBTTask_Attack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_Attack.OuterSingleton, Z_Construct_UClass_UBTTask_Attack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_Attack.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<UBTTask_Attack>()
	{
		return UBTTask_Attack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Attack);
	UBTTask_Attack::~UBTTask_Attack() {}
	struct Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_AI_BTTask_Attack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_AI_BTTask_Attack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_Attack, UBTTask_Attack::StaticClass, TEXT("UBTTask_Attack"), &Z_Registration_Info_UClass_UBTTask_Attack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_Attack), 1449138822U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_AI_BTTask_Attack_h_694738367(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_AI_BTTask_Attack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_AI_BTTask_Attack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
