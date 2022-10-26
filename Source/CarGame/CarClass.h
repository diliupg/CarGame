// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "CarClass.generated.h"

UCLASS()
class CARGAME_API ACarClass : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACarClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY( EditAnywhere )
	class UCapsuleComponent* CarCapsule;

	UPROPERTY( EditAnywhere )
	UStaticMeshComponent* CarMesh;

	UPROPERTY( EditAnywhere )
	class USpringArmComponent* SpringArm;

	UPROPERTY( EditAnywhere )
	class UCameraComponent* CarCamera;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
