// Copyright (c) 2026 Pablo Velasco Crespo
// SPDX-License-Identifier: MIT

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GridComponent.generated.h"

USTRUCT(BlueprintType)
struct FGridCell
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	int32 X;

	UPROPERTY(EditAnywhere)
	int32 Y;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ARCADELABCODING_API UGridComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UGridComponent();

	FVector GridToWorld(const FGridCell& Cell) const;
	FGridCell WorldToGrid(const FVector& World) const;

	void DrawGridDebug() const;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	int32 Width = 20;

	UPROPERTY(EditAnywhere)
	int32 Height = 20;

	UPROPERTY(EditAnywhere)
	float CellSize = 100.f;

	UPROPERTY(EditAnywhere)
	bool bDrawDebug = true;
};
