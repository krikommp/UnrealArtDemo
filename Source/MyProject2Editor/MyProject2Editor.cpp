#include "MyProject2Editor.h"

#include "AssetToolsModule.h"
#include "AssetTypeActions_CustomAsset.h"
#include "IAssetTools.h"
#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "Project2Editor"

DEFINE_LOG_CATEGORY(LogProject2Editor);

class FMyProject2EditorModule : public IModuleInterface {
	virtual void StartupModule() override
	{
		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
		//定义资产的分类名
		EAssetTypeCategories::Type AssetCategory = EAssetTypeCategories::Textures;
		actionType = MakeShareable(new FAssetTypeActions_CustomAsset(AssetCategory));
		AssetTools.RegisterAssetTypeActions(actionType.ToSharedRef());
	}

	virtual void ShutdownModule() override
	{
		IAssetTools& AssetTools = FModuleManager::Get().GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
		AssetTools.UnregisterAssetTypeActions(actionType.ToSharedRef());
	}

private:
	TSharedPtr<FAssetTypeActions_CustomAsset> actionType;
};

IMPLEMENT_MODULE(FMyProject2EditorModule, MyProject2Editor);

#undef LOCTEXT_NAMESPACE
