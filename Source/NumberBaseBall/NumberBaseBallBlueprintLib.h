// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NumberBaseBallBlueprintLib.generated.h"

/**
 * 
 */
UCLASS()
class NUMBERBASEBALL_API UNumberBaseBallBlueprintLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "NumberBaseBall")
	static TArray<int> SetRandomValue();
};
