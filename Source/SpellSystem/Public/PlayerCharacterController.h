// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PlayerUI.h"
#include "PlayerStructs.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerCharacterController.generated.h"

/**
 * 
 */
UCLASS()
class APlayerCharacterController : public APlayerController
{
	GENERATED_BODY()
	
	public:
		UFUNCTION(BlueprintPure, Category="Character Data")
		TArray<FSpellDataStruct> GetCharacterModifierArray() const;

		UFUNCTION(BlueprintPure, Category="Player UI")
		UPlayerUI* GetPlayerUIReference() const;

		UFUNCTION(BlueprintCallable, Category="Character Data")
		void SetCharacterModifierArray(TArray<FSpellDataStruct> Array);

		UFUNCTION(BlueprintCallable, Category="Character Data")
		void SetPlayerUIReference(UPlayerUI* UIRef);
	
	private:
		TArray<FSpellDataStruct> CharacterModifierArray;

		UPlayerUI* PlayerUIReference;
	
};
