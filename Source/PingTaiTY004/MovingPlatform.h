// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"// 你的类名.generated.h
//#include "Components/StaticMeshComponent.h"  // 加这个：StaticMeshComponent

UCLASS()
class PINGTAITY004_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

	// 声明成 static！这才是关键 静态平台移动函数
	static void MovePlatformAlongSpline(AMovingPlatform* Platform, float DeltaTime);// 沿样条线移动平台

	// 或者更常见的：工具函数 计算新位置
	static FVector CalculateNewLocation(const FVector& Start, const FVector& End, float Alpha);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void MovePlatform(float DeltaTime);// 平台移动函数

	void RotatePlatform(float DeltaTime);// 平台旋转函数
	
	UPROPERTY(EditAnywhere)
	FVector PlatformVelocity = FVector{ 0.0f, 0.0f, 0.0f };// 平台速度向量

	UPROPERTY(VisibleAnywhere)
	float DistanceMoved = 0.0f;// 平台移动距离,因为一开始一点都没动，所以初始值为0
	
	FVector StartLocation;// 平台初始位置

	FVector EndLocation;// 平台结束位置

	float PlatformRotationSpeed = 20.0f;// 平台旋转速度
};