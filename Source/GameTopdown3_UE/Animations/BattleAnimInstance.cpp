// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleAnimInstance.h"

bool UBattleAnimInstance::IsAnimMovable()
{
    return false;
}

bool UBattleAnimInstance::IsAnimAttackState()
{
    return (static_cast<uint8>(AnimState) >= static_cast<uint8>(EChrAnimState::Attack1)) && (static_cast<uint8>(AnimState) <= static_cast<uint8>(EChrAnimState::Attack6));
}

bool UBattleAnimInstance::IsAnimSkillState()
{
    return false;
}

bool UBattleAnimInstance::IsAnimHitState()
{
    return false;
}

bool UBattleAnimInstance::IsStateAvailableToCombo()
{
    return false;
}

bool UBattleAnimInstance::IsAnimRangeAtkState()
{
    return false;
}

bool UBattleAnimInstance::IsDizzy()
{
    return false;
}

void UBattleAnimInstance::PrintAnimStateLog(FString LogStr, EChrAnimState LogAnimState)
{
}

int32 UBattleAnimInstance::StateMachineCurrentState()
{
    return int32();
}

const FAnimNode_StateMachine* UBattleAnimInstance::GetStateMachine(FName MachineName)
{
    return nullptr;
}
