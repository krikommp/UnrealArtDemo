// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "UObject/Object.h"

struct MYPROJECT2EDITOR_API FAssetTypeActions_CustomAsset : public FAssetTypeActions_Base
{
public:
	FAssetTypeActions_CustomAsset(EAssetTypeCategories::Type InAssetCategory);

	virtual FColor GetTypeColor() const override { return FColor(97, 85, 212); }
	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor) override;

	virtual FText GetName() const override { return FText::FromName(TEXT("Texture")); }
	virtual UClass* GetSupportedClass() const override { return UTexture2D::StaticClass(); }
	virtual uint32 GetCategories() override { return MyAssetCategory; }

private:
	EAssetTypeCategories::Type MyAssetCategory;
};
