// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerKnight.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
 
// Sets default values
APlayerKnight::APlayerKnight()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	bUseControllerRotationYaw = false;

	skeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	skeletalMesh->SetupAttachment(GetCapsuleComponent());
}

// Called when the game starts or when spawned
void APlayerKnight::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerKnight::MoveForward(float value)
{
	if (value != 0) {
		FVector forwardV = FVector(0, -1, 0);
		//if (value > 0) {
		//	SetActorRotation(FRotator(0, -90, 0));
		//}
		//else SetActorRotation(FRotator(0, 90, 0));
		
		AddMovementInput(value* forwardV);
	}
}

void APlayerKnight::MoveRight(float value)
{
	if (value != 0) {
		FVector rightV = FVector(1, 0, 0);
		//if (value > 0) {
		//	SetActorRotation(FRotator(0, 0, 0));
		//}
		//else SetActorRotation(FRotator(0, 180, 0));
		AddMovementInput(value * rightV);
	}
}

// Called every frame
void APlayerKnight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerKnight::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &APlayerKnight::MoveForward);
	//PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &APlayerKnight::MoveRight);
}

