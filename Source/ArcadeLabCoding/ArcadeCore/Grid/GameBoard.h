// Copyright (c) 2026 Pablo Velasco Crespo
// SPDX-License-Identifier: MIT

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameBoard.generated.h"

class UGridComponent;

UCLASS()
class ARCADELABCODING_API AGameBoard : public AActor
{
	GENERATED_BODY()
	
public:	
	AGameBoard();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UGridComponent> GridComponent;

};
