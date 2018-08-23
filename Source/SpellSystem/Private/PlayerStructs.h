#pragma once

#include "Engine/StaticMesh.h"
#include "Engine/DataTable.h"
#include "PlayerStructs.generated.h"

USTRUCT(BlueprintType)
struct FSpellDataStruct : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Name")
    FName SpellName;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Level")
    int32 Level;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Icon")
    UTexture2D* IconRef;

    FSpellDataStruct::FSpellDataStruct()
    {
        SpellName = "";
        Level = 0;
        IconRef = NULL;
    }

};