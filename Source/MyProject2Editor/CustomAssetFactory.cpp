// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomAssetFactory.h"

#include "MyProject2/UtilityFunctionLibrary.h"

UCustomAssetFactory::UCustomAssetFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	bEditorImport = false;
	SupportedClass = UTexture2D::StaticClass();
}

UObject* UCustomAssetFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	UTexture2D* PseudoComputerTexture = NewObject<UTexture2D>(InParent, InClass, InName, Flags);

	PseudoComputerTexture->SRGB = 0;
	PseudoComputerTexture->AddressX = TA_Clamp;
	PseudoComputerTexture->AddressY = TA_Clamp;
	PseudoComputerTexture->CompressionSettings = TC_HDR;
	PseudoComputerTexture->Filter = TextureFilter::TF_Nearest;
	PseudoComputerTexture->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;

	PseudoComputerTexture->Source.Init(32, 32, 1, 1, TSF_RGBA16F);
	UUtilityFunctionLibrary::ClearTexture2D(PseudoComputerTexture, FLinearColor(1, 1, 1, 1));
	
	return PseudoComputerTexture;
}
