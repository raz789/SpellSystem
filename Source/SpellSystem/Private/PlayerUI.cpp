// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerUI.h"

 void UPlayerUI::NativeConstruct()
 {
     Super::NativeConstruct();
 
     // Bind delegates here.
 }

void UPlayerUI::AddCanvasPanelToWidgetTree(UCanvasPanel* panel)
{
    WidgetTree->RootWidget = panel;
    UE_LOG(LogTemp, Warning, TEXT("////////////////////////////"));
}