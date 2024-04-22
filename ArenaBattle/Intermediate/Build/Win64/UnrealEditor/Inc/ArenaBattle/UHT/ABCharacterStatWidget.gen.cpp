// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/UI/ABCharacterStatWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterStatWidget() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterStatWidget();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterStatWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void UABCharacterStatWidget::StaticRegisterNativesUABCharacterStatWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCharacterStatWidget);
	UClass* Z_Construct_UClass_UABCharacterStatWidget_NoRegister()
	{
		return UABCharacterStatWidget::StaticClass();
	}
	struct Z_Construct_UClass_UABCharacterStatWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseLookup_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BaseLookup_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookup_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BaseLookup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABCharacterStatWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterStatWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/ABCharacterStatWidget.h" },
		{ "ModuleRelativePath", "UI/ABCharacterStatWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABCharacterStatWidget_Statics::NewProp_BaseLookup_ValueProp = { "BaseLookup", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UABCharacterStatWidget_Statics::NewProp_BaseLookup_Key_KeyProp = { "BaseLookup_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterStatWidget_Statics::NewProp_BaseLookup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ABCharacterStatWidget.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UABCharacterStatWidget_Statics::NewProp_BaseLookup = { "BaseLookup", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UABCharacterStatWidget, BaseLookup), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UABCharacterStatWidget_Statics::NewProp_BaseLookup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatWidget_Statics::NewProp_BaseLookup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABCharacterStatWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterStatWidget_Statics::NewProp_BaseLookup_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterStatWidget_Statics::NewProp_BaseLookup_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterStatWidget_Statics::NewProp_BaseLookup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABCharacterStatWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCharacterStatWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterStatWidget_Statics::ClassParams = {
		&UABCharacterStatWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UABCharacterStatWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABCharacterStatWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABCharacterStatWidget()
	{
		if (!Z_Registration_Info_UClass_UABCharacterStatWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCharacterStatWidget.OuterSingleton, Z_Construct_UClass_UABCharacterStatWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UABCharacterStatWidget.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<UABCharacterStatWidget>()
	{
		return UABCharacterStatWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterStatWidget);
	UABCharacterStatWidget::~UABCharacterStatWidget() {}
	struct Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_UI_ABCharacterStatWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_UI_ABCharacterStatWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UABCharacterStatWidget, UABCharacterStatWidget::StaticClass, TEXT("UABCharacterStatWidget"), &Z_Registration_Info_UClass_UABCharacterStatWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterStatWidget), 1803299241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_UI_ABCharacterStatWidget_h_2972883451(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_UI_ABCharacterStatWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_UI_ABCharacterStatWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
