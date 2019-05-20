// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerStructs.h"
#include "SpellNode.h"
#include "LeftModifierUI.generated.h"

/**
 * 
 */
UCLASS()
class ULeftModifierUI : public UUserWidget
{
	GENERATED_BODY()
	
	public:
		UFUNCTION(BlueprintCallable, Category="Update UI")
		void UpdateUI(UPARAM(ref) TArray<FSpellDataStruct>& ModifierList);

		UFUNCTION(BlueprintCallable, Category="Update UI")
		TArray<USpellNode*> GetModifierSpellNodes() const;
		
	private:
		UPROPERTY(EditAnywhere, Category = "Modifier Nodes")
		TArray<USpellNode*> ModifierSpellNodes;

		UPROPERTY(EditDefaultsOnly, Category = "Node Image")
		TSubclassOf<UUserWidget> SpellNodeClass;
	
};
