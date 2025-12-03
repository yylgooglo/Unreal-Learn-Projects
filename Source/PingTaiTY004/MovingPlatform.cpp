// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"
#include "Kismet/KismetMathLibrary.h"  // 加这个：FMath::Lerp

// Sets default values 构造函数：创建组件 + 设置默认值
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;// 开启 Tick

	

}
//这是一个测试函数，包含两个参数
void MyTestFunction(float a,int b,FString MyString,FName JueseName)
{
	// Just a test function

	int c = b * 2;
	float d = a / 2.0f;
	UE_LOG(LogTemp, Warning, TEXT("MyTestFunction de ce shi jie guo si %.2f and %d"),d,c);

	UE_LOG(LogTemp, Warning, TEXT("MyTestFunction de ce shi jie guo si %s and %s"), *MyString, *JueseName.ToString());
}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	FString MyString = GetName();//获取当前对象的名字
	FName JueseName = FName("Star");
	
	MyTestFunction(3.15,28, MyString, JueseName);

	StartLocation = GetActorLocation();//获取初始位置
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovePlatform(DeltaTime);
	RotatePlatform(DeltaTime);	

	

}
//平台移动函数的实现
void  AMovingPlatform::MovePlatform(float DeltaTime)
{
	FVector CurrentLoction = GetActorLocation();//获取当前坐标

	CurrentLoction = CurrentLoction + (PlatformVelocity * DeltaTime);//使用速度向量移动

	SetActorLocation(CurrentLoction);//平台位置更新

	//都是静态函数，只是UE将他们写在FVector结构体里，用FVector::调用而已
	DistanceMoved = FVector::Dist(StartLocation, CurrentLoction);//计算移动距离,传入起始位置和当前坐标

}

//平台旋转函数的实现
void AMovingPlatform::RotatePlatform(float DeltaTime)
{
	FRotator NewRotation = GetActorRotation();
	NewRotation.Yaw += PlatformVelocity.Z * DeltaTime; // 示例：使用Z分量作为旋转速度
	SetActorRotation(NewRotation);
}



