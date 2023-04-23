// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomAssetFactory.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2EDITOR_API UCustomAssetFactory : public UFactory
{
	GENERATED_BODY()

public:
	UCustomAssetFactory();

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};
