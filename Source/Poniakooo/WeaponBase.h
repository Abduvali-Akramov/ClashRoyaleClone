
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponBase.generated.h"

class UStaticMeshComponent;

UCLASS()
class PONIAKOOO_API AWeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	
	AWeaponBase();

protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Weapon")
	UStaticMeshComponent* BaseMesh;
public:	
	virtual void Tick(float DeltaTime) override;

};