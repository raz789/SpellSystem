// Fill out your copyright notice in the Description page of Project Settings.

#include "SpellNode.h"

void USpellNode::Setup(FName SpellName, UTexture2D* SpellSymbol, int32 Level)
{
    this->SpellName = SpellName;
    this->SpellSymbol = SpellSymbol;
    this->Level = Level;
}

UTexture2D* USpellNode::GetSpellSymbol() const
{
    return SpellSymbol;
}

FName USpellNode::GetSpellName()
{
    return SpellName;
}



