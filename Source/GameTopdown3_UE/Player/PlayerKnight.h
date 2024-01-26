// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"

#include "PlayerKnight.generated.h"

UCLASS()
class GAMETOPDOWN3_UE_API APlayerKnight : public ACharacter
{
	GENERATED_BODY()

private:
	// COMPONENTS

public:
	// Sets default values for this character's properties
	APlayerKnight();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Input")
	void MoveForward(float value);

	UFUNCTION(BlueprintCallable, Category = "Input")
	void MoveRight(float value);

	UFUNCTION(BlueprintCallable, Category = "Input")
	void MeleeAttack() {}

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player")
	bool IsMovable();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
