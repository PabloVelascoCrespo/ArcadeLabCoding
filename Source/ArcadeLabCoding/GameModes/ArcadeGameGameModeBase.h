// Copyright (c) 2026 Pablo Velasco Crespo
// SPDX-License-Identifier: MIT

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ArcadeGameGameModeBase.generated.h"

UENUM(BlueprintType)
enum class EGameState : uint8
{
	Waiting,
	Playing,
	Paused,
	GameOver
};

UCLASS()
class ARCADELABCODING_API AArcadeGameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AArcadeGameGameModeBase();

	virtual void StartGame();
	virtual void EndGame();
	virtual void ResetGame();

	EGameState GetGameState() const;

protected:
	UPROPERTY()
	EGameState GameState;

	UPROPERTY()
	int32 Score;
};
