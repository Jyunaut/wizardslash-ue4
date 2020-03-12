// Fill out your copyright notice in the Description page of Project Settings.


#include "Wiz.h"

// Sets default values
AWiz::AWiz()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Use only z-axis rotation
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = true;

	// Set collision size
	GetCapsuleComponent()->SetCapsuleHalfHeight(96.0f);
	GetCapsuleComponent()->SetCapsuleRadius(40.0f);

	// Set up a Camera Boom
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->SocketOffset = FVector(0.0f, 0.0f, 75.0f);
	CameraBoom->SetUsingAbsoluteRotation(true);
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->SetRelativeRotation(FRotator(0.0f, -90.f, 0.0f));

	// Set up an Orthographic Camera and attach it to the camera boom
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	Camera->ProjectionMode = ECameraProjectionMode::Orthographic;
	Camera->OrthoWidth = 2048.0f;
	Camera->bAutoActivate = false;
	Camera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	// Prevent CameraBoom, Camera and Character rotation
	CameraBoom->SetUsingAbsoluteRotation(true);
	Camera->bUsePawnControlRotation = false;
	GetCharacterMovement()->bOrientRotationToMovement = false;
}

// Called when the game starts or when spawned
void AWiz::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AWiz::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void UpdateAnimation()
{

}

// Called to bind functionality to input
void AWiz::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//PlayerInputComponent->BindAxis("Horizontal Movement", this, &AWiz::Run);
	//PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	//PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	//PlayerInputComponent->BindAction("Melee", IE_Pressed, this, &AWiz::MeleeAttack);
}

// Add movement towards the character's facing direction
void AWiz::Run(float scale)
{
	//FVector direction = FVector(1.0f, 0.0f, 0.0f);
	//AddMovementInput(direction, scale);
}

// 
void AWiz::MeleeAttack()
{
	
}