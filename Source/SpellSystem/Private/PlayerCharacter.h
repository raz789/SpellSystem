// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/DataTable.h"
#include "PlayerStructs.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class APlayerCharacter : public APawn
{
	GENERATED_BODY()

	public:
		// Sets default values for this pawn's properties
		APlayerCharacter();

	protected:
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;

	public:	
		// Called every frame
		virtual void Tick(float DeltaTime) override;

		// Called to bind functionality to input
		virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	private:
		UPROPERTY(EditDefaultsOnly, Category = "Player Data")
		TArray<FSpellDataStruct> ModifierArray;

		UPROPERTY(EditDefaultsOnly, Category = "Player Data")
		UDataTable* InputModifierTable;





	
	
};
