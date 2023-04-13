// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JGAME_M_Character_generated_h
#error "M_Character.generated.h already included, missing '#pragma once' in M_Character.h"
#endif
#define JGAME_M_Character_generated_h

#define JGame_Source_JGame_M_Character_h_12_SPARSE_DATA
#define JGame_Source_JGame_M_Character_h_12_RPC_WRAPPERS
#define JGame_Source_JGame_M_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define JGame_Source_JGame_M_Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAM_Character(); \
	friend struct Z_Construct_UClass_AM_Character_Statics; \
public: \
	DECLARE_CLASS(AM_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JGame"), NO_API) \
	DECLARE_SERIALIZER(AM_Character)


#define JGame_Source_JGame_M_Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAM_Character(); \
	friend struct Z_Construct_UClass_AM_Character_Statics; \
public: \
	DECLARE_CLASS(AM_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JGame"), NO_API) \
	DECLARE_SERIALIZER(AM_Character)


#define JGame_Source_JGame_M_Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AM_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AM_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AM_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AM_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AM_Character(AM_Character&&); \
	NO_API AM_Character(const AM_Character&); \
public:


#define JGame_Source_JGame_M_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AM_Character(AM_Character&&); \
	NO_API AM_Character(const AM_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AM_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AM_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AM_Character)


#define JGame_Source_JGame_M_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AM_Character, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AM_Character, Camera); }


#define JGame_Source_JGame_M_Character_h_9_PROLOG
#define JGame_Source_JGame_M_Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JGame_Source_JGame_M_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	JGame_Source_JGame_M_Character_h_12_SPARSE_DATA \
	JGame_Source_JGame_M_Character_h_12_RPC_WRAPPERS \
	JGame_Source_JGame_M_Character_h_12_INCLASS \
	JGame_Source_JGame_M_Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JGame_Source_JGame_M_Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JGame_Source_JGame_M_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	JGame_Source_JGame_M_Character_h_12_SPARSE_DATA \
	JGame_Source_JGame_M_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	JGame_Source_JGame_M_Character_h_12_INCLASS_NO_PURE_DECLS \
	JGame_Source_JGame_M_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JGAME_API UClass* StaticClass<class AM_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JGame_Source_JGame_M_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
