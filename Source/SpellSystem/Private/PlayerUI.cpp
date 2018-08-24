// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerUI.h"

void UPlayerUI::SetModifierArray(TArray<FSpellDataStruct> Array)
{
    ModifierArray = Array;
}

TArray<FSpellDataStruct> UPlayerUI::GetModifierArray() const
{
    return ModifierArray;
}


