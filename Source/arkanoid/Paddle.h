#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Paddle.generated.h"

class UFloatingPawnMovement;
UCLASS()
class ARKANOID_API APaddle : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APaddle();

private:
	UPROPERTY()
		APaddle* Instance;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* SM_Padle;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UFloatingPawnMovement* FloatingMovement;
public:
	// Called every frame
	virtual void Tick(float DeltaTime);

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);

	virtual void MoveHorizontal(float AxisValue);

	virtual void MoveVertically(float AxisValue);
};
