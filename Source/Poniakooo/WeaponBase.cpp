
#include "WeaponBase.h"

AWeaponBase::AWeaponBase()
{
	PrimaryActorTick.bCanEverTick = true;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon Mesh"));
}

void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}