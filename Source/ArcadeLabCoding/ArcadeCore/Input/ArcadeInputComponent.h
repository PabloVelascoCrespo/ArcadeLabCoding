// Copyright (c) 2026 Pablo Velasco Crespo
// SPDX-License-Identifier: MIT

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ArcadeInputComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ARCADELABCODING_API UArcadeInputComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UArcadeInputComponent();

protected:
	virtual void BeginPlay() override;
		
};
