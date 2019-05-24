// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PlayerStructs.h"
#include "LeftModifierUI.h"
#include "CoreMinimal.h"
#include "Components/CanvasPanel.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetTree.h"
#include "PlayerUI.generated.h"

/**
 * 
 */
UCLASS()
class UPlayerUI : public UUserWidget
{
	GENERATED_BODY()

	public:
		UFUNCTION(BlueprintCallable, Category="Widget Tree")
		void AddCanvasPanelToWidgetTree(UCanvasPanel* panel);

	private:
		virtual void NativeConstruct() override;
};