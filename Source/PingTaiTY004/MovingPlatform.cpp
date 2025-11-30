// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"
#include "Kismet/KismetMathLibrary.h"  // 加这个：FMath::Lerp

// Sets default values 构造函数：创建组件 + 设置默认值
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;// 开启 Tick

	

}

void MyTestFunction()
{
	// Just a test function
	UE_LOG(LogTemp, Warning, TEXT("This is a test function."));
}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
	MyTestFunction();
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLoction = GetActorLocation();//获取当前坐标

	//不能使用这种方法移动，因为他会随着电脑的帧率不同而不同
	//CurrentLoction.X += 1.f; //每帧向X轴正方向移动1个单位

	/*CurrentLoction.X += DeltaTime * 100.f;每秒向X轴正方向移动20个单位*/

	CurrentLoction = CurrentLoction + (PlatformVelocity * DeltaTime);//使用速度向量移动

	//CurrentLoction.X = UKismetMathLibrary::Lerp(CurrentLoction.X, CurrentLoction.X + 100.f, DeltaTime * 0.1f);//插值移动

	SetActorLocation(CurrentLoction);


}


