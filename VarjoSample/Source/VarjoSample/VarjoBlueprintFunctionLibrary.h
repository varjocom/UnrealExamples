// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VarjoBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class VARJOSAMPLE_API UVarjoBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "Varjo")
	static AActor* CloneActor(AActor* pActor);
};
