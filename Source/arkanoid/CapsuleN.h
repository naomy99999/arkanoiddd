// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CapsuleObj.h"
#include "CapsuleN.generated.h"


UCLASS()
class ARKANOID_API ACapsuleN : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapsuleN();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual ACapsuleObj* ConcoctCapsule(FString CapsuleSKU)
		PURE_VIRTUAL(ACapsuleN::ConcoctCapsule, return nullptr;);
	//Order, concoct and returns a Potion of a specific Category 
	ACapsuleObj* OrderCapsule(FString Category);
};
