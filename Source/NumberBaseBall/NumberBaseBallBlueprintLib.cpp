// Fill out your copyright notice in the Description page of Project Settings.


#include "NumberBaseBallBlueprintLib.h"

TArray<int> UNumberBaseBallBlueprintLib::SetRandomValue()
{
	TSet<int> RandomSet;
	TArray<int> RandomArray;
	while (RandomSet.Num() < 3)
	{
		int RandomIndex = FMath::RandRange(1, 9);
		if (!RandomSet.Find(RandomIndex))
		{
			RandomSet.Add(RandomIndex);
			RandomArray.Add(RandomIndex);
		}
	}
	return RandomArray;
}
