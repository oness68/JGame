// Fill out your copyright notice in the Description page of Project Settings.


#include "M_Character.h"

// Sets default values
AM_Character::AM_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	/*PrimaryActorTick.bCanEverTick = true;*/
	//오브젝트 생성

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));




	SpringArm->SetupAttachment(GetCapsuleComponent());
	Camera->SetupAttachment(SpringArm);

	SpringArm->TargetArmLength = 400.0f;
	SpringArm->SetRelativeRotation(FRotator(-15.0f, 0, 0));
	GetMesh()->SetRelativeLocationAndRotation(FVector(0, 0, -90.0f), FRotator(0, -90.0f, 0));
	GetCapsuleComponent()->SetCapsuleHalfHeight(105.0f);
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MESH_PC(
		TEXT("/Game/SCK_Casual01/Models/Premade_Characters/MESH_PC_02.MESH_PC_02"));
	if (MESH_PC.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MESH_PC.Object);
	}

}

// Called when the game starts or when spawned
void AM_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AM_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AM_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

