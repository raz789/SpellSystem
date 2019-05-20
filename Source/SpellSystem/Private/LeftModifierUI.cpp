// Fill out your copyright notice in the Description page of Project Settings.

#include "LeftModifierUI.h"

void ULeftModifierUI::UpdateUI(TArray<FSpellDataStruct>& ModifierList)
{
    //ModifierSpellNodes.Empty();
    for(const auto& n : ModifierList)
    {
        if(SpellNodeClass)
        {
            USpellNode* tempNode = CreateWidget<USpellNode>(this, SpellNodeClass);
            tempNode->Setup(n.SpellName, n.IconRef, n.Level);
            ModifierSpellNodes.Add(tempNode);
        }
    }
}

TArray<USpellNode*> ULeftModifierUI::GetModifierSpellNodes() const
{
    return ModifierSpellNodes;
}

