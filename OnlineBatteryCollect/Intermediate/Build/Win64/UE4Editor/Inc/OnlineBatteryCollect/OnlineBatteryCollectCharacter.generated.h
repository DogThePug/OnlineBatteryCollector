// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINEBATTERYCOLLECT_OnlineBatteryCollectCharacter_generated_h
#error "OnlineBatteryCollectCharacter.generated.h already included, missing '#pragma once' in OnlineBatteryCollectCharacter.h"
#endif
#define ONLINEBATTERYCOLLECT_OnlineBatteryCollectCharacter_generated_h

#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_RPC_WRAPPERS \
	virtual bool ServerCollectPickups_Validate(); \
	virtual void ServerCollectPickups_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_CurrentPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CurrentPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerCollectPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerCollectPickups_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerCollectPickups_Validate")); \
			return; \
		} \
		P_THIS->ServerCollectPickups_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollectPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CollectPickups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaPower); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePower(Z_Param_DeltaPower); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInitialPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInitialPower(); \
		P_NATIVE_END; \
	}


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerCollectPickups_Validate(); \
	virtual void ServerCollectPickups_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_CurrentPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CurrentPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerCollectPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerCollectPickups_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerCollectPickups_Validate")); \
			return; \
		} \
		P_THIS->ServerCollectPickups_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollectPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CollectPickups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaPower); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePower(Z_Param_DeltaPower); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInitialPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInitialPower(); \
		P_NATIVE_END; \
	}


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_EVENT_PARMS
#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_CALLBACK_WRAPPERS
#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOnlineBatteryCollectCharacter(); \
	friend struct Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics; \
public: \
	DECLARE_CLASS(AOnlineBatteryCollectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineBatteryCollect"), NO_API) \
	DECLARE_SERIALIZER(AOnlineBatteryCollectCharacter)


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOnlineBatteryCollectCharacter(); \
	friend struct Z_Construct_UClass_AOnlineBatteryCollectCharacter_Statics; \
public: \
	DECLARE_CLASS(AOnlineBatteryCollectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineBatteryCollect"), NO_API) \
	DECLARE_SERIALIZER(AOnlineBatteryCollectCharacter)


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOnlineBatteryCollectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOnlineBatteryCollectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOnlineBatteryCollectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineBatteryCollectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOnlineBatteryCollectCharacter(AOnlineBatteryCollectCharacter&&); \
	NO_API AOnlineBatteryCollectCharacter(const AOnlineBatteryCollectCharacter&); \
public:


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOnlineBatteryCollectCharacter(AOnlineBatteryCollectCharacter&&); \
	NO_API AOnlineBatteryCollectCharacter(const AOnlineBatteryCollectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOnlineBatteryCollectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineBatteryCollectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOnlineBatteryCollectCharacter)


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AOnlineBatteryCollectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AOnlineBatteryCollectCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__CollectionSphere() { return STRUCT_OFFSET(AOnlineBatteryCollectCharacter, CollectionSphere); } \
	FORCEINLINE static uint32 __PPO__InitialPower() { return STRUCT_OFFSET(AOnlineBatteryCollectCharacter, InitialPower); } \
	FORCEINLINE static uint32 __PPO__BaseSpeed() { return STRUCT_OFFSET(AOnlineBatteryCollectCharacter, BaseSpeed); } \
	FORCEINLINE static uint32 __PPO__SpeedFactor() { return STRUCT_OFFSET(AOnlineBatteryCollectCharacter, SpeedFactor); } \
	FORCEINLINE static uint32 __PPO__CollectionSphereRadius() { return STRUCT_OFFSET(AOnlineBatteryCollectCharacter, CollectionSphereRadius); } \
	FORCEINLINE static uint32 __PPO__CurrentPower() { return STRUCT_OFFSET(AOnlineBatteryCollectCharacter, CurrentPower); }


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_9_PROLOG \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_EVENT_PARMS


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_RPC_WRAPPERS \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_CALLBACK_WRAPPERS \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_INCLASS \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_CALLBACK_WRAPPERS \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_INCLASS_NO_PURE_DECLS \
	OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OnlineBatteryCollect_Source_OnlineBatteryCollect_OnlineBatteryCollectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
