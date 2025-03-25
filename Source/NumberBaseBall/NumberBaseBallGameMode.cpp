// Fill out your copyright notice in the Description page of Project Settings.


#include "NumberBaseBallGameMode.h"
#include "Net\UnrealNetwork.h"

void ANumberBaseBallGameMode::BeginPlay()
{
	Super::BeginPlay();
	SetRandomValue();
	UE_LOG(LogTemp, Warning, TEXT("RandomValue: %d"), RandomValue);
}

int ANumberBaseBallGameMode::GetRandomValue()
{
	return RandomValue;
}

void ANumberBaseBallGameMode::SetRandomValue_Implementation()
{
	TSet<int> RandomSet;
	
	while (RandomSet.Num() < 3)
	{
		int RandomIndex = FMath::RandRange(1, 9);
		RandomSet.Add(RandomIndex);
	}
	for (int Index : RandomSet)
	{
		RandomValue *= 10;
		RandomValue += Index;
	}
}

void ANumberBaseBallGameMode::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ANumberBaseBallGameMode, RandomValue);
}