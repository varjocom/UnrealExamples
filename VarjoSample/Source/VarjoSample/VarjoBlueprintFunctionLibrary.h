// Copyright Varjo Technologies Oy. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VarjoBlueprintFunctionLibrary.generated.h"

UCLASS()
class VARJOSAMPLE_API UVarjoBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Varjo")
	static AActor* CloneActor(AActor* pActor);
};
