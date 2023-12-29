// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class L20231229_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeUpdateAnimation(float DeltaSeconds);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Stat")
	float Speed;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Stat")
	bool IsJumping;
};
