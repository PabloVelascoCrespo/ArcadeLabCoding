// Copyright (c) 2026 Pablo Velasco Crespo
// SPDX-License-Identifier: MIT

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ArcadeGameModeBase.generated.h"

UENUM(BlueprintType)
enum class EGameState : uint8
{
	Waiting,
	Playing,
	Paused,
	GameOver
};

UCLASS()
class ARCADELABCODING_API AArcadeGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AArcadeGameModeBase();

	virtual void StartGame();
	virtual void EndGame();
	virtual void ResetGame();

	EGameState GetGameState() const;

protected:
	UPROPERTY()
	EGameState ArcadeGameState;

	UPROPERTY()
	int32 Score;
};
