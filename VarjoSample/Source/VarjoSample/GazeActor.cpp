// Fill out your copyright notice in the Description page of Project Settings.

#include "GazeActor.h"
#include "IVarjoHMDPlugin.h"

// Sets default values
AGazeActor::AGazeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    m_varjoPlugin = &(IVarjoHMDPlugin::Get());
}

// Called when the game starts or when spawned
void AGazeActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGazeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    FVector gazeRayStart;
    FVector gazeRayDirection;
    m_varjoPlugin->GetGazeRay(gazeRayStart, gazeRayDirection);
    SetActorLocation(gazeRayStart + gazeRayDirection * 200.0f);
}

