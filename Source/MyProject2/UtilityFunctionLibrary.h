﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UtilityFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API UUtilityFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable)
	static void ClearTexture2D(UTexture2D* Texture2D, const FLinearColor& ClearColor);

	UFUNCTION(BlueprintCallable)
	static void SetVectorsDataToTexture2D(UTexture2D* Texture2D, const TArray<FLinearColor>& WriteData);
};
