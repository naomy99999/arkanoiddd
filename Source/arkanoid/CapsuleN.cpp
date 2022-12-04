// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsuleN.h"

// Sets default values
ACapsuleN::ACapsuleN()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACapsuleN::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACapsuleN::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ACapsuleN* OrderCapsule(FString Category)
{
	ACapsuleObj* Capsule = ConcoctCapsule(Category);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Concocting %s"), *Capsule->GetCapsuleName())); 
	//Start the concoct process 
	Capsule->Boil(); 
	Capsule->Bubble();
	Capsule->Brew();
	Capsule->Bottle(); 
	//Returns the created potion 
	return	;
