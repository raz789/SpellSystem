// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PlayerStructs.h"
#include "LeftModifierUI.h"
#include "CoreMinimal.h"
#include "Components/CanvasPanel.h"
#include "PlayerUIPanel.generated.h"

/**
 * 
 */
UCLASS()
class UPlayerUIPanel : public UCanvasPanel
{
	GENERATED_BODY()

	public:
		UFUNCTION(BlueprintCallable, Category="Character Data")
		void SetModifierArray(TArray<FSpellDataStruct> Array);

		UFUNCTION(BlueprintPure, Category="Character Data")
		TArray<FSpellDataStruct> GetModifierArray() const;

		UFUNCTION(BlueprintCallable, Category="UI References")
		void SetLeftModifierUIRef(ULeftModifierUI* UIRef);

		UFUNCTION(BlueprintPure, Category="Character Data")
		ULeftModifierUI* GetLeftModifierUIRef() const;
	
	private:
		TArray<FSpellDataStruct> ModifierArray;
		ULeftModifierUI* LeftModifierUIRef;

		UPROPERTY(EditAnywhere, Category = "Modifier Nodes")
		TArray<USpellNode*> ModifierSpellNodes;
};