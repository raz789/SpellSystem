// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerCharacterController.h"

TArray<FSpellDataStruct> APlayerCharacterController::GetCharacterModifierArray() const
{
    return CharacterModifierArray;
}

void APlayerCharacterController::SetCharacterModifierArray(TArray<FSpellDataStruct> Array)
{
    CharacterModifierArray = Array;
}

UPlayerUI* APlayerCharacterController::GetPlayerUIReference() const
{
    return PlayerUIReference;
}

void APlayerCharacterController::SetPlayerUIReference(UPlayerUI* UIRef)
{
    PlayerUIReference = UIRef;
}