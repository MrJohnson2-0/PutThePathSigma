#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x248 (0xC78 - 0xA30)
// BlueprintGeneratedClass GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C
class UGAB_InterrogatePlayer_Reveal_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*           PlayerController;                                  // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       InterrogatedPlayer;                                // 0xA48(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Anim_Reveal;                                       // 0xA50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Anim_End;                                          // 0xA58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RevealHolster;                                     // 0xA60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_Reveal;                                         // 0xA68(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        MarkDurationPlayer;                                // 0xA70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        MarkDurationNPC;                                   // 0xA90(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        MarkRadius;                                        // 0xAB0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                        SquadmatesToMark;                                  // 0xAD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                          Timer_Reveal;                                      // 0xAE0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_NPC_Mang;                                        // 0xAE8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        RevealDuration;                                    // 0xAF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EndAbilityDelay;                                   // 0xAF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SweepDelay;                                        // 0xAF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Cancelled;                                         // 0xAFC(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Ending;                                            // 0xAFD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D1E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                IndicatorGroup;                                    // 0xB00(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                CameraMode;                                        // 0xB10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        ActorsToMark;                                      // 0xB18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTagContainer                 T_ReticleHUD;                                      // 0xB28(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 NPCTagsToMark;                                     // 0xB48(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 ChestTagsToMark;                                   // 0xB68(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 GameplayItemTagsToMark;                            // 0xB88(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  ParticleSystemParamName;                           // 0xBA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       IndicatedPS;                                       // 0xBB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            IndicatedSound;                                    // 0xBB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PSOffset;                                          // 0xBC0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  PSVectorParamName;                                 // 0xBCC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PSDBNOOffset;                                      // 0xBD4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  EnemyStencilName;                                  // 0xBE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TreasureChestStencilName;                          // 0xBE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StepTime;                                          // 0xBF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Testbool;                                          // 0xBF4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D20[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        EnemyStencilID;                                    // 0xBF8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        StencilStepTime;                                   // 0xC18(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        bUseDefaultStencil;                                // 0xC38(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        IndicatorStepTime;                                 // 0xC58(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGAB_InterrogatePlayer_Reveal_C* GetDefaultObj();

	void ToggleReticleVisibility(bool Hide, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void Reveal(class FName Temp_name_Variable, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, bool CallFunc_RowToBool_ReturnValue, class FName K2Node_Select_Default, bool CallFunc_RowToBool_ReturnValue_1, bool CallFunc_RowToBool_ReturnValue_2, bool CallFunc_RowToBool_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_4, float CallFunc_GetValueAtLevel_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable_1, float CallFunc_GetValueAtLevel_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName Temp_name_Variable_1, const struct FIndicatedActorParticleSystemData& CallFunc_MakeIndicatedActorParticleSystemData_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_7, const struct FIndicatedActorData& CallFunc_MakeIndicatedActorData_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_8, const struct FStenciledActorData& CallFunc_MakeStenciledActorData_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_9, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FIndicatedActorData& CallFunc_MakeIndicatedActorData_ReturnValue_1, const struct FIndicatedActorDataWithFilter& CallFunc_MakeIndicatedActorDataWithFilter_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_10, float CallFunc_GetValueAtLevel_ReturnValue_11, const struct FIndicatedActorParticleSystemData& CallFunc_MakeIndicatedActorParticleSystemData_ReturnValue_1, const struct FIndicatedActorData& CallFunc_MakeIndicatedActorData_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_12, const struct FIndicatedActorData& CallFunc_MakeIndicatedActorData_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_13, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_2, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena, bool K2Node_DynamicCast_bSuccess, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable_1, TArray<class AFortPlayerStateAthena*>& CallFunc_GetSquadMemberPlayerStates_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName K2Node_Select_Default_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FStenciledActorData& CallFunc_MakeStenciledActorData_ReturnValue_1, const struct FIndicatedActorDataWithFilter& CallFunc_MakeIndicatedActorDataWithFilter_ReturnValue_1, class FName Temp_name_Variable_2, bool Temp_bool_Variable_2, class FName Temp_name_Variable_3, class FName K2Node_Select_Default_2, const struct FStenciledActorData& CallFunc_MakeStenciledActorData_ReturnValue_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, const struct FIndicatedActorDataWithFilter& CallFunc_MakeIndicatedActorDataWithFilter_ReturnValue_2, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena_1, bool K2Node_DynamicCast_bSuccess_2, TArray<struct FIndicatedActorDataWithFilter>& K2Node_MakeArray_Array_3, bool Temp_bool_Variable_3, class FName K2Node_Select_Default_3, int32 Temp_int_Array_Index_Variable_1, const struct FStenciledActorData& CallFunc_MakeStenciledActorData_ReturnValue_3, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, class AFortPlayerPawn* CallFunc_GetCurrentPawn_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1, const struct FGameplayEffectContextHandle& CallFunc_MakeFortEffectContext_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue_1, bool CallFunc_SendComplexCustomStatEvent_QuestActive_1, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted_1, bool CallFunc_IsValid_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class AFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_1, TArray<class AFortPlayerStateAthena*>& CallFunc_GetSquadMemberPlayerStates_ReturnValue_1, class AFortPlayerStateAthena* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class AFortPlayerPawn* CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void EndAbilityCleanup(bool CallFunc_IsValid_ReturnValue);
	void InitAbility(bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_1);
	void Completed_23F3C2DB411862D627ACFCA8233F7B33(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_23F3C2DB411862D627ACFCA8233F7B33(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_23F3C2DB411862D627ACFCA8233F7B33(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_3C2C8C224B62B00BDEEAF5AF38A401C1(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_68B3C6D14B44CCD3170ABDA038C1203E();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnDied_Event_1(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void EndInterrogation();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_InterrogatePlayer_Reveal(int32 EntryPoint, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_5, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_5, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_4, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool K2Node_Event_bWasCancelled, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue_2, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FGameplayEventData& K2Node_Event_EventData, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4);
};

}

