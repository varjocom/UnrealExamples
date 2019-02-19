// Copyright Varjo Technologies Oy. All Rights Reserved.

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
