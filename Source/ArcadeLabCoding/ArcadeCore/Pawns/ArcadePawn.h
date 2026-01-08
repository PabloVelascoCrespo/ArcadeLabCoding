// Copyright (c) 2026 Pablo Velasco Crespo
// SPDX-License-Identifier: MIT

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "ArcadePawn.generated.h"

UCLASS()
class ARCADELABCODING_API AArcadePawn : public APawn
{
  GENERATED_BODY()

public:
  // Sets default values for this pawn's properties
  AArcadePawn();

  // Called every frame
  virtual void Tick(float DeltaTime) override;

  // Called to bind functionality to input
  virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
  // Called when the game starts or when spawned
  virtual void BeginPlay() override;

  UPROPERTY(VisibleAnywhere)
  TObjectPtr<USceneComponent> Root;

  UPROPERTY(VisibleAnywhere)
  TObjectPtr<UCameraComponent> Camera;
};
