// Fill out your copyright notice in the Description page of Project Settings.

#include "LeftModifierUI.h"

void ULeftModifierUI::UpdateUI(TArray<FSpellDataStruct>& ModifierList)
{
    //ModifierSpellNodes.Empty();
    for(const auto& n : ModifierList)
    {
        if(SpellNodeClass)
        {
            USpellNode* tempNode = NewObject<USpellNode>(this, SpellNodeClass);
            tempNode->Setup(n.SpellName, n.IconRef, n.Level);
            ModifierSpellNodes.Add(tempNode);
        }
    }
}

TArray<USpellNode*> ULeftModifierUI::GetModifierSpellNodes() const
{
    return ModifierSpellNodes;
}

FVector2D ULeftModifierUI::GetUIDefaultPosition() const
{
    return UIDefaultPosition;
}

void ULeftModifierUI::SetUIDefaultPosition(float x, float y)
{
    UIDefaultPosition.X = x;
    UIDefaultPosition.Y = y;
}

FVector2D ULeftModifierUI::CalculateDirectionalVector(FVector2D initialPosition, float distance, float direction)
{
    //Parametric Equation of the Circle

    float radius = distance;
    float radians = direction;

    float x = (radius) * FMath::Cos(radians);
    float y = (radius) * FMath::Sin(radians);

    return initialPosition + FVector2D(x, y);
}

float ULeftModifierUI::CalculateDistance(float floatTrackPosition, float distance)
{
    return floatTrackPosition * distance;
}

float ULeftModifierUI::CalculateDirection(int numSpellNodes, float selectionDirection)
{
    return 0;
}