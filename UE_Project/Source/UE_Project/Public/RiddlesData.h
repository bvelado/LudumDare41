// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RiddlesData.generated.h"

USTRUCT()
struct FItemInfo {

	GENERATED_USTRUCT_BODY()
		
		UPROPERTY(EditAnywhere)
		FString riddleContent;

		UPROPERTY(EditAnywhere)
		FString riddleAnswers;
};

/**
 * 
 */
UCLASS()
class UE_PROJECT_API URiddlesData : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TArray<FItemInfo> items;
};