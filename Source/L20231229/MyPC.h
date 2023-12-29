// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPC.generated.h"

class UInputMappingContext;

/**
 * 
 */
UCLASS()
class L20231229_API AMyPC : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MappingContext")
	TObjectPtr<UInputMappingContext> DefaultIMC;
};
