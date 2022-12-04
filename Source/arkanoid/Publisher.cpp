
#include "Publisher.h"

// Sets default values
APublisher::APublisher()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APublisher::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APublisher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void APublisher::Subscribe(AActor* Subscriber)
{
	Subscribers.Add(Subscriber);
}
void APublisher::UnSubscribe(AActor* SubscriberToRemove)
{
	Subscribers.Remove(SubscriberToRemove);
}
void APublisher::NotifySubscribers()
{
	

}



