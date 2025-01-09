// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	start = FVector2D(0, 0);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	move();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32_t AMyActor::step()
{
	return FMath::RandRange(0, 1);
}

void AMyActor::move()
{
	FVector2D CurrentPosition = start;

	for (int i = 0; i < 10; i++)
	{

		int32_t X = step();
		int32_t Y = step();

		FVector2D NewPosition = CurrentPosition + FVector2D(X, Y);
		
		
		UE_LOG(LogTemp, Warning, TEXT("Step %d: Current location: (%d, %d), Moved To: (%d, %d)"),
			i + 1, (int)CurrentPosition.X, (int)CurrentPosition.Y, (int)NewPosition.X, (int)NewPosition.Y);

		CurrentPosition = NewPosition;
	}
}

