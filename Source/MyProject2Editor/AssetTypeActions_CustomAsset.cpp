// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetTypeActions_CustomAsset.h"

FAssetTypeActions_CustomAsset::FAssetTypeActions_CustomAsset(EAssetTypeCategories::Type InAssetCategory)
{
	MyAssetCategory = InAssetCategory;
}

void FAssetTypeActions_CustomAsset::OpenAssetEditor(const TArray<UObject*>& InObjects,
	TSharedPtr<IToolkitHost> EditWithinLevelEditor)
{
	FSimpleAssetEditor::CreateEditor(EToolkitMode::Standalone, EditWithinLevelEditor, InObjects);
}
