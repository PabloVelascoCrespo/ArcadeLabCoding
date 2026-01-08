// Copyright (c) 2026 Pablo Velasco Crespo
// SPDX-License-Identifier: MIT

#include "GridComponent.h"

UGridComponent::UGridComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	// @TODO
}

FVector UGridComponent::GridToWorld(const FGridCell& Cell) const
{
	// @TODO
	return FVector();
}

FGridCell UGridComponent::WorldToGrid(const FVector& World) const
{
	// @TODO
	return FGridCell();
}

void UGridComponent::DrawGridDebug() const
{
	// @TODO
}

void UGridComponent::BeginPlay()
{
	Super::BeginPlay();

	// @TODO
	
}

