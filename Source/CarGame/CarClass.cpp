// Fill out your copyright notice in the Description page of Project Settings.


#include "CarClass.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ACarClass::ACarClass()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CarCapsule = CreateDefaultSubobject<UCapsuleComponent>( TEXT( "Car Capsule" ) );
	RootComponent = CarCapsule;
	CarMesh = CreateDefaultSubobject<UStaticMeshComponent>( TEXT( "Car Mesh" ) );
	CarMesh->SetupAttachment( CarCapsule );
	SpringArm = CreateAbstractDefaultSubobject<USpringArmComponent>( TEXT( "Spring Arm" ) );
	SpringArm->SetupAttachment( CarCapsule );
	CarCamera = CreateDefaultSubobject<UCameraComponent>( TEXT( "car Camera" ) );
	CarCamera->SetupAttachment( SpringArm );
}

// Called when the game starts or when spawned
void ACarClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACarClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACarClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

