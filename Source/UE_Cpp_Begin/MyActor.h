// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class UE_CPP_BEGIN_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
		int32 TotalDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
		float DamageTimeInSeconds;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Transient, Category = "Damage")
		float DamagePerSecond;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString CharaterName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bAttackable;

	/*int8 i8; //-128 ~ 127
	int16 i16; 
	int32 i32;
	int64 i64;

	uint8 u8; //0 ~ 256
	uint16 u16;
	uint32 u32;
	uint64 u64;

	float f; //32bit, 0.00001
	double d; //64bit, 0.0000000001

	FString fStr; //기본 타입, 기본 C++ std:string과 유사*/
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
