// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "NumberBaseBallGameMode.generated.h"

UCLASS()
class NUMBERBASEBALL_API ANumberBaseBallGameMode : public AGameMode
{
	GENERATED_BODY()
protected:
	void BeginPlay() override;
public:
	int GetRandomValue();
	UFUNCTION(Server, Reliable)
	void SetRandomValue();
private:
	UPROPERTY(Replicated)
	int RandomValue;
};
