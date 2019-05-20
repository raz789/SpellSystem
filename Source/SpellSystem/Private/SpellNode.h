// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Image.h"
#include "SpellNode.generated.h"

/**
 * 
 */
UCLASS()
class USpellNode : public UUserWidget
{
	GENERATED_BODY()
	
	public:
		UFUNCTION(BlueprintCallable, Category="Node Image")
		void Setup(FName SpellName, UTexture2D* SpellSymbol, int32 Level);

		UFUNCTION(BlueprintCallable, Category="Node Image")
		UTexture2D* GetSpellSymbol() const;

		UFUNCTION(BlueprintCallable, Category="Node Image")
		FName GetSpellName();

	private:
		UPROPERTY(EditDefaultsOnly, Category = "Node Image")
		FName SpellName = "";

		UPROPERTY(EditDefaultsOnly, Category = "Node Image")
		UTexture2D* SpellSymbol;

		UPROPERTY(EditDefaultsOnly, Category = "Node Image")
		int32 Level = 0;

};
