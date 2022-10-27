#include "HeroBase.h"

AHeroBase::AHeroBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AHeroBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AHeroBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHeroBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}