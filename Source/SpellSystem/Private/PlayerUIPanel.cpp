// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerUIPanel.h"

void UPlayerUIPanel::SetModifierArray(TArray<FSpellDataStruct> Array)
{
    ModifierArray = Array;
}

TArray<FSpellDataStruct> UPlayerUIPanel::GetModifierArray() const
{
    return ModifierArray;
}

void UPlayerUIPanel::SetLeftModifierUIRef(ULeftModifierUI* UIRef)
{
    LeftModifierUIRef = UIRef;
}

ULeftModifierUI* UPlayerUIPanel::GetLeftModifierUIRef() const
{
    return LeftModifierUIRef;
}
