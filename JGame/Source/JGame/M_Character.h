// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Character.h"
#include "M_Character.generated.h"

UCLASS()
class JGAME_API AM_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AM_Character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:

	UPROPERTY(VisibleAnywhere, Category = Camera)//카메라암
		USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, Category = Camera)//카메라
		UCameraComponent* Camera;



};
