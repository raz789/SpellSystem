// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerStructs.h"
#include "SpellNode.h"
#include "UnrealMathUtility.h"
#include "Kismet/KismetMathLibrary.h"
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

		UFUNCTION(BlueprintPure, Category="UI Location")
		FVector2D GetUIDefaultPosition() const;
	
		UFUNCTION(BlueprintCallable, Category="UI Location")
		void SetUIDefaultPosition(float x, float y);

		UFUNCTION(BlueprintCallable, Category="UI Location")
		FVector2D CalculateDirectionalVector(FVector2D initialPosition, float distance, float direction);

		UFUNCTION(BlueprintPure, Category="UI Extension")
		float CalculateDistance(float floatTrackPosition, float distance);

		UFUNCTION(BlueprintPure, Category="UI Extension")
		float CalculateDirection(int modifierIndex, float selectionDirection);

		UFUNCTION(BlueprintPure, Category="UI Extension")
		float GetSelectionDirection() const;
		
	private:
		UPROPERTY(EditAnywhere, Category = "Modifier Nodes")
		TArray<USpellNode*> ModifierSpellNodes;

		UPROPERTY(EditAnywhere, Category = "Modifier Nodes")
		int SelectedNodeIndex;

		UPROPERTY(EditDefaultsOnly, Category = "Node Image")
		TSubclassOf<UUserWidget> SpellNodeClass;

		UPROPERTY(EditAnywhere, Category = "UI Location")
		FVector2D UIDefaultPosition;

		UPROPERTY(EditDefaultsOnly, Category = "UI Extension")
		float SelectionDirection;


	
};
