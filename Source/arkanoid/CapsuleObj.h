// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <vector>
#include "CapsuleObj.generated.h"

UCLASS()
class ARKANOID_API ACapsuleObj : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapsuleObj();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FString CapsuleName; 
	//The Gooeyness of this Potion 
	FString Gooeyness; 
	//The Blood of this Potion 
	FString Blood; 
	//The herbs contained in this Potion 
	TArray<FString> dimentions;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Boil(); 
	//Bubble this potion 
	void Bubble(); 
	//Brew this potion 
	virtual void Brew(); 
	//Bottle this potion 
	void Bottle(); 
	//Return the Potion Name 
	FString GetCapsuleName();
};
