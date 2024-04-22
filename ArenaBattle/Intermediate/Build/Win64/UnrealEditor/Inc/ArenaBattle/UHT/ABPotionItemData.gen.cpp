// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Item/ABPotionItemData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABPotionItemData() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABItemData();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABPotionItemData();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABPotionItemData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void UABPotionItemData::StaticRegisterNativesUABPotionItemData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABPotionItemData);
	UClass* Z_Construct_UClass_UABPotionItemData_NoRegister()
	{
		return UABPotionItemData::StaticClass();
	}
	struct Z_Construct_UClass_UABPotionItemData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABPotionItemData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UABItemData,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABPotionItemData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Item/ABPotionItemData.h" },
		{ "ModuleRelativePath", "Item/ABPotionItemData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABPotionItemData_Statics::NewProp_HealAmount_MetaData[] = {
		{ "Category", "Hp" },
		{ "ModuleRelativePath", "Item/ABPotionItemData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABPotionItemData_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UABPotionItemData, HealAmount), METADATA_PARAMS(Z_Construct_UClass_UABPotionItemData_Statics::NewProp_HealAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABPotionItemData_Statics::NewProp_HealAmount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABPotionItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABPotionItemData_Statics::NewProp_HealAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABPotionItemData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABPotionItemData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UABPotionItemData_Statics::ClassParams = {
		&UABPotionItemData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UABPotionItemData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UABPotionItemData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABPotionItemData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABPotionItemData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABPotionItemData()
	{
		if (!Z_Registration_Info_UClass_UABPotionItemData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABPotionItemData.OuterSingleton, Z_Construct_UClass_UABPotionItemData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UABPotionItemData.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<UABPotionItemData>()
	{
		return UABPotionItemData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABPotionItemData);
	UABPotionItemData::~UABPotionItemData() {}
	struct Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Item_ABPotionItemData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Item_ABPotionItemData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UABPotionItemData, UABPotionItemData::StaticClass, TEXT("UABPotionItemData"), &Z_Registration_Info_UClass_UABPotionItemData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABPotionItemData), 3526749779U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Item_ABPotionItemData_h_3413834619(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Item_ABPotionItemData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Item_ABPotionItemData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
