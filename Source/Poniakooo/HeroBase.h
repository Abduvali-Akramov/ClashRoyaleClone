#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HeroBase.generated.h"

class UStaticMeshComponent;

UCLASS()
class PONIAKOOO_API AHeroBase : public ACharacter
{
	GENERATED_BODY()

public:
	AHeroBase();

protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};