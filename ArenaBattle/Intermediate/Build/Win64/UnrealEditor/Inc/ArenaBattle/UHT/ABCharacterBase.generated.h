// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/ABCharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARENABATTLE_ABCharacterBase_generated_h
#error "ABCharacterBase.generated.h already included, missing '#pragma once' in ABCharacterBase.h"
#endif
#define ARENABATTLE_ABCharacterBase_generated_h

#define FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTakeItemDelegateWrapper_Statics; \
	ARENABATTLE_API static class UScriptStruct* StaticStruct();


template<> ARENABATTLE_API UScriptStruct* StaticStruct<struct FTakeItemDelegateWrapper>();

#define FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_SPARSE_DATA
#define FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_RPC_WRAPPERS
#define FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_ACCESSORS
#define FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABCharacterBase(); \
	friend struct Z_Construct_UClass_AABCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AABCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AABCharacterBase*>(this); }


#define FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_INCLASS \
private: \
	static void StaticRegisterNativesAABCharacterBase(); \
	friend struct Z_Construct_UClass_AABCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AABCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArenaBattle"), NO_API) \
	DECLARE_SERIALIZER(AABCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AABCharacterBase*>(this); }


#define FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABCharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABCharacterBase(AABCharacterBase&&); \
	NO_API AABCharacterBase(const AABCharacterBase&); \
public: \
	NO_API virtual ~AABCharacterBase();


#define FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABCharacterBase(AABCharacterBase&&); \
	NO_API AABCharacterBase(const AABCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABCharacterBase) \
	NO_API virtual ~AABCharacterBase();


#define FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_34_PROLOG
#define FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_SPARSE_DATA \
	FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_RPC_WRAPPERS \
	FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_ACCESSORS \
	FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_INCLASS \
	FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_SPARSE_DATA \
	FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_ACCESSORS \
	FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_INCLASS_NO_PURE_DECLS \
	FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARENABATTLE_API UClass* StaticClass<class AABCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ArenaBattle_Source_ArenaBattle_Character_ABCharacterBase_h


#define FOREACH_ENUM_ECHARACTERCONTROLTYPE(op) \
	op(ECharacterControlType::Shoulder) \
	op(ECharacterControlType::Quater) 

enum class ECharacterControlType : uint8;
template<> struct TIsUEnumClass<ECharacterControlType> { enum { Value = true }; };
template<> ARENABATTLE_API UEnum* StaticEnum<ECharacterControlType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
