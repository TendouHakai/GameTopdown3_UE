// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleAnimInstance.h"

bool UBattleAnimInstance::IsAnimMovable()
{
    return (AnimState==EChrAnimState::IDLE || AnimState == EChrAnimState::WalkRun);
}

bool UBattleAnimInstance::IsAnimAttackState()
{
    return (AnimState >= EChrAnimState::Attack1 && AnimState <= EChrAnimState::Attack6);
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
    return (IsAnimMovable() || IsAnimAttackState());
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
