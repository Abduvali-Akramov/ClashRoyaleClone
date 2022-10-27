#include "PlayerPawnBase.h"

APlayerPawnBase::APlayerPawnBase()
{
	PrimaryActorTick.bCanEverTick = true;

}

void APlayerPawnBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerPawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerPawnBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}