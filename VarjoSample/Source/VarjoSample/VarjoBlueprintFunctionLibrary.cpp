// Fill out your copyright notice in the Description page of Project Settings.

#include "VarjoBlueprintFunctionLibrary.h"

DEFINE_LOG_CATEGORY_STATIC(LogVarjoBlueprint, Warning, All);

AActor* UVarjoBlueprintFunctionLibrary::CloneActor(AActor * pActor)
{
	if (pActor == nullptr)
	{
		UE_LOG(LogVarjoBlueprint, Warning, TEXT("Actor is null in UVarjoBlueprintFunctionLibrary::CloneActor"));
		return nullptr;
	}

	FActorSpawnParameters spawnParam;
	spawnParam.Template = pActor;
	spawnParam.Owner = pActor->GetOwner();
	return pActor->GetWorld()->SpawnActor(pActor->GetClass(), nullptr, spawnParam);
}



