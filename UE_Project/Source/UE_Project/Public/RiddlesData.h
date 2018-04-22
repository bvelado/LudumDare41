// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RiddlesData.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UE_PROJECT_API URiddlesData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText riddleContent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FText> riddleAnswers;
};