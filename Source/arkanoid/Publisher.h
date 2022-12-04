#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Publisher.generated.h"

UCLASS()
class ARKANOID_API APublisher : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APublisher();

private:
	UPROPERTY()
		TArray<AActor*>Subscribers = TArray<AActor*>();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Subscribe(AActor* Subscriber);

	virtual void UnSubscribe(AActor* SubscriberToRemove);

	virtual void NotifySubscribers();
};