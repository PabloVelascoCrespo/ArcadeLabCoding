// Copyright (c) 2026 Pablo Velasco Crespo
// SPDX-License-Identifier: MIT

#include "ArcadePawn.h"

// Sets default values
AArcadePawn::AArcadePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// @TODO
}

// Called when the game starts or when spawned
void AArcadePawn::BeginPlay()
{
	Super::BeginPlay();

	// @TODO
}

// Called every frame
void AArcadePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// @TODO
}

// Called to bind functionality to input
void AArcadePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// @TODO
}

