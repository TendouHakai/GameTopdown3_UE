// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BattleAnimInstance.generated.h"

/**
 *
 */

UENUM(BlueprintType)
enum class EChrAnimState : uint8
{
	IDLE					UMETA(DisplayName = "IDLE"),
	WalkRun					UMETA(DisplayName = "WalkRun"),
	Die						UMETA(DisplayName = "Die"),
	Hit1					UMETA(DisplayName = "Hit1"),
	Hit2					UMETA(DisplayName = "Hit2"),
	Hit3					UMETA(DisplayName = "Hit3"),
	DefendHit				UMETA(DisplayName = "DefendHit"),
	Dizzy					UMETA(DisplayName = "Dizzy"),
	Attack1					UMETA(DisplayName = "Attack1"),
	Attack2					UMETA(DisplayName = "Attack2"),
	Attack3					UMETA(DisplayName = "Attack3"),
	Attack4					UMETA(DisplayName = "Attack4"),
	Attack5					UMETA(DisplayName = "Attack5"),
	Attack6					UMETA(DisplayName = "Attack6"),
	Skill1					UMETA(DisplayName = "Skill1"),
	Skill2					UMETA(DisplayName = "Skill2"),
	Skill3					UMETA(DisplayName = "Skill3"),
	Roll					UMETA(DisplayName = "Roll"),
	Victory					UMETA(DisplayName = "Victory"),
};

UCLASS()
class GAMETOPDOWN3_UE_API UBattleAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "BattleAnimInstance")
	bool IsAnimMovable();

	UFUNCTION(BlueprintPure, Category = "BattleAnimInstance", meta = (BlueprintThreadSafe))
	bool IsAnimAttackState();

	UFUNCTION(BlueprintPure, Category = "BattleAnimInstance")
	bool IsAnimSkillState();

	UFUNCTION(BlueprintPure, Category = "BattleAnimInstance")
	bool IsAnimHitState();

	UFUNCTION(BlueprintPure, Category = "BattleAnimInstance")
	bool IsStateAvailableToCombo();

	UFUNCTION(BlueprintPure, Category = "BattleAnimInstance")
	bool IsAnimRangeAtkState();

	UFUNCTION(BlueprintPure, Category = "BattleAnimInstance")
	bool IsDizzy();


	UFUNCTION(BlueprintImplementableEvent, Category = "BattleAnimInstance")
	float GetRunningSpeed();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "BattleAnimInstance")
	void ChangeAnimState(EChrAnimState ChangeState);

	UFUNCTION(BlueprintCallable, Category = "BattleAnimInstance")
	void PrintAnimStateLog(FString LogStr, EChrAnimState LogAnimState);

	UFUNCTION(BlueprintPure, Category = "BattleAnimInstance")
	int32 StateMachineCurrentState();

	const FAnimNode_StateMachine* GetStateMachine(FName MachineName);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EChrAnimState AnimState;

	UPROPERTY(EditDefaultsOnly)
	bool bPrintAnimStateLog = false;
};
